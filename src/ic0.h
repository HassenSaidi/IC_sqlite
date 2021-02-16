#ifndef IC0_H
#define IC0_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
  #endif

#define WASM_IMPORT(module, name)		\
  __attribute__((import_module(module)))	\
  __attribute__((import_name(name)));
  
#define WASM_EXPORT(name) asm(name) \
  __attribute__((visibility("default")));

  uint32_t ic0_msg_arg_data_size()
    WASM_IMPORT("ic0", "msg_arg_data_size");

  void ic0_msg_arg_data_copy(uint32_t dst, uint32_t off, uint32_t size)
    WASM_IMPORT("ic0", "msg_arg_data_copy");

  uint32_t ic0_msg_caller_size()
    WASM_IMPORT("ic0", "msg_caller_size");

  void ic0_msg_caller_copy(uint32_t dst, uint32_t off, uint32_t size)
    WASM_IMPORT("ic0", "msg_caller_copy");

  uint32_t ic0_msg_reject_code()
    WASM_IMPORT("ic0", "msg_reject_code");

  uint32_t ic0_msg_reject_msg_size()
    WASM_IMPORT("ic0", "msg_reject_msg_size");

  void ic0_msg_reject_msg_copy(uint32_t dst, uint32_t off, uint32_t size)
    WASM_IMPORT("ic0", "msg_reject_msg_copy");

  void ic0_msg_reply_data_append(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "msg_reply_data_append");

  void ic0_msg_reply()
    WASM_IMPORT("ic0", "msg_reply");

  void ic0_msg_reject(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "msg_reject");

  uint64_t ic0_msg_funds_available(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "msg_funds_available");

  uint64_t ic0_msg_funds_refunded(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "msg_funds_refunded");

  void ic0_msg_funds_accept(uint32_t src, uint32_t size, uint64_t amount)
    WASM_IMPORT("ic0", "msg_funds_accept");

  uint32_t ic0_canister_self_size()
    WASM_IMPORT("ic0", "canister_self_size");

  void ic0_canister_self_copy(uint32_t dst, uint32_t off, uint32_t size)
    WASM_IMPORT("ic0", "canister_self_copy");

  uint64_t ic0_canister_balance(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "canister_balance");

  void ic0_call_new(
		    uint32_t callee_src,
		    uint32_t callee_size,
		    uint32_t name_src,
		    uint32_t name_size,
		    uint32_t reply_fun,
		    uint32_t reply_env,
		    uint32_t reject_fun,
		      uint32_t reject_env
		    ) WASM_IMPORT("ic0", "call_new");

  void ic0_call_on_cleanup(uint32_t fun, uint32_t env)
    WASM_IMPORT("ic0", "call_on_cleanup");

  void ic0_call_data_append(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "call_data_append");

  void ic0_call_funds_add(uint32_t src, uint32_t size, uint64_t amount)
    WASM_IMPORT("ic0", "call_funds_add");

  uint32_t ic0_call_perform()
    WASM_IMPORT("ic0", "call_perform")

    uint32_t ic0_stable_size()
    WASM_IMPORT("ic0", "stable_size");

  uint32_t ic0_stable_grow(uint32_t new_pages)
    WASM_IMPORT("ic0", "stable_grow");

  void ic0_stable_write(uint32_t off, uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "stable_write");

  void ic0_stable_read(uint32_t dst, uint32_t off, uint32_t size)
    WASM_IMPORT("ic0", "stable_read");

  uint64_t ic0_time()
    WASM_IMPORT("ic0", "time");

  void ic0_debug_print(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "debug_print");

  void ic0_trap(uint32_t src, uint32_t size)
    WASM_IMPORT("ic0", "trap");

  #ifdef __cplusplus
}
#endif

#endif /* IC0_H */
