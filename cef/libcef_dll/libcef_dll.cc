// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
#if (defined ENABLE_CEF) && (ENABLE_CEF == 1)
#include "include/cef_version.h"

#include "include/cef_app.h"
#include "include/capi/cef_app_capi.h"
#include "include/cef_geolocation.h"
#include "include/capi/cef_geolocation_capi.h"
#include "include/cef_origin_whitelist.h"
#include "include/capi/cef_origin_whitelist_capi.h"
#include "include/cef_parser.h"
#include "include/capi/cef_parser_capi.h"
#include "include/cef_path_util.h"
#include "include/capi/cef_path_util_capi.h"
#include "include/cef_process_util.h"
#include "include/capi/cef_process_util_capi.h"
#include "include/cef_scheme.h"
#include "include/capi/cef_scheme_capi.h"
#include "include/cef_task.h"
#include "include/capi/cef_task_capi.h"
#include "include/cef_trace.h"
#include "include/capi/cef_trace_capi.h"
#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/cpptoc/before_download_callback_cpptoc.h"
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/browser_host_cpptoc.h"
#include "libcef_dll/cpptoc/callback_cpptoc.h"
#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/cpptoc/context_menu_params_cpptoc.h"
#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_callback_cpptoc.h"
#include "libcef_dll/cpptoc/drag_data_cpptoc.h"
#include "libcef_dll/cpptoc/file_dialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/geolocation_callback_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/menu_model_cpptoc.h"
#include "libcef_dll/cpptoc/navigation_entry_cpptoc.h"
#include "libcef_dll/cpptoc/print_dialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/print_job_callback_cpptoc.h"
#include "libcef_dll/cpptoc/print_settings_cpptoc.h"
#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/cpptoc/request_callback_cpptoc.h"
#include "libcef_dll/cpptoc/run_context_menu_callback_cpptoc.h"
#include "libcef_dll/cpptoc/sslcert_principal_cpptoc.h"
#include "libcef_dll/cpptoc/sslinfo_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_registrar_cpptoc.h"
#include "libcef_dll/cpptoc/stream_reader_cpptoc.h"
#include "libcef_dll/cpptoc/stream_writer_cpptoc.h"
#include "libcef_dll/cpptoc/task_runner_cpptoc.h"
#include "libcef_dll/cpptoc/urlrequest_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/cpptoc/v8exception_cpptoc.h"
#include "libcef_dll/cpptoc/v8stack_frame_cpptoc.h"
#include "libcef_dll/cpptoc/v8stack_trace_cpptoc.h"
#include "libcef_dll/cpptoc/v8value_cpptoc.h"
#include "libcef_dll/cpptoc/value_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_cpptoc.h"
#include "libcef_dll/cpptoc/xml_reader_cpptoc.h"
#include "libcef_dll/cpptoc/zip_reader_cpptoc.h"
#include "libcef_dll/ctocpp/app_ctocpp.h"
#include "libcef_dll/ctocpp/browser_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/completion_callback_ctocpp.h"
#include "libcef_dll/ctocpp/context_menu_handler_ctocpp.h"
#include "libcef_dll/ctocpp/cookie_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/domvisitor_ctocpp.h"
#include "libcef_dll/ctocpp/delete_cookies_callback_ctocpp.h"
#include "libcef_dll/ctocpp/dialog_handler_ctocpp.h"
#include "libcef_dll/ctocpp/display_handler_ctocpp.h"
#include "libcef_dll/ctocpp/download_handler_ctocpp.h"
#include "libcef_dll/ctocpp/drag_handler_ctocpp.h"
#include "libcef_dll/ctocpp/end_tracing_callback_ctocpp.h"
#include "libcef_dll/ctocpp/find_handler_ctocpp.h"
#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"
#include "libcef_dll/ctocpp/geolocation_handler_ctocpp.h"
#include "libcef_dll/ctocpp/get_geolocation_callback_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_handler_ctocpp.h"
#include "libcef_dll/ctocpp/keyboard_handler_ctocpp.h"
#include "libcef_dll/ctocpp/life_span_handler_ctocpp.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"
#include "libcef_dll/ctocpp/navigation_entry_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/pdf_print_callback_ctocpp.h"
#include "libcef_dll/ctocpp/print_handler_ctocpp.h"
#include "libcef_dll/ctocpp/read_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/request_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resolve_callback_ctocpp.h"
#include "libcef_dll/ctocpp/resource_bundle_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"
#include "libcef_dll/ctocpp/response_filter_ctocpp.h"
#include "libcef_dll/ctocpp/run_file_dialog_callback_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_factory_ctocpp.h"
#include "libcef_dll/ctocpp/set_cookie_callback_ctocpp.h"
#include "libcef_dll/ctocpp/string_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/task_ctocpp.h"
#include "libcef_dll/ctocpp/urlrequest_client_ctocpp.h"
#include "libcef_dll/ctocpp/v8accessor_ctocpp.h"
#include "libcef_dll/ctocpp/v8handler_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_unstable_callback_ctocpp.h"
#include "libcef_dll/ctocpp/write_handler_ctocpp.h"
#include "libcef_dll/transfer_util.h"

CEF_EXPORT int cef_version_info(int entry) {
    switch (entry) {
    case 0: return CEF_VERSION_MAJOR;
    case 1: return CEF_COMMIT_NUMBER;
    case 2: return CHROME_VERSION_MAJOR;
    case 3: return CHROME_VERSION_MINOR;
    case 4: return CHROME_VERSION_BUILD;
    case 5: return CHROME_VERSION_PATCH;
    default: return 0;
    }
}

CEF_EXPORT const char* cef_api_hash(int entry) {
    switch (entry) {
    case 0: return CEF_API_HASH_PLATFORM; // CEF_API_HASH_PLATFORM; weolar
    case 1: return CEF_API_HASH_UNIVERSAL;
    case 2: return CEF_COMMIT_HASH;
    default: return NULL;
    }
}


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT int cef_execute_process(const struct _cef_main_args_t* args,
    struct _cef_app_t* application, void* windows_sandbox_info) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  // Unverified params: application, windows_sandbox_info

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);

  // Execute
  int _retval = CefExecuteProcess(
      argsObj,
      CefAppCToCpp::Wrap(application),
      windows_sandbox_info);

  // Return type: simple
  return _retval;
}

CEF_EXPORT int cef_initialize(const struct _cef_main_args_t* args,
    const struct _cef_settings_t* settings, struct _cef_app_t* application,
    void* windows_sandbox_info) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return 0;
  // Unverified params: application, windows_sandbox_info

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);
  // Translate param: settings; type: struct_byref_const
  CefSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  bool _retval = CefInitialize(
      argsObj,
      settingsObj,
      CefAppCToCpp::Wrap(application),
      windows_sandbox_info);

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_shutdown() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefShutdown();

#ifndef NDEBUG
  // Check that all wrapper objects have been destroyed
  DCHECK(base::AtomicRefCountIsZero(&CefAuthCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefBeforeDownloadCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefBinaryValueCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefBrowserCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefBrowserHostCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefBrowserProcessHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefCompletionCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefContextMenuHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefContextMenuParamsCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefCookieVisitorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDOMDocumentCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDOMNodeCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDOMVisitorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefDeleteCookiesCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDialogHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDictionaryValueCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDisplayHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDownloadHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefDownloadItemCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDownloadItemCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDragDataCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefDragHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefEndTracingCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefFileDialogCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefFindHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefFocusHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefFrameCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefGeolocationCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefGeolocationHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefGetGeolocationCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefJSDialogCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefJSDialogHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefKeyboardHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefLifeSpanHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefListValueCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefLoadHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefMenuModelCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefNavigationEntryCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefNavigationEntryVisitorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefPdfPrintCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefPrintDialogCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefPrintHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefPrintJobCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefPrintSettingsCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefProcessMessageCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefReadHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefRenderHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefRenderProcessHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefRequestCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefRequestHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefResolveCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefResourceBundleHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefResourceHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefResponseFilterCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefRunContextMenuCallbackCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefRunFileDialogCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefSSLCertPrincipalCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefSSLInfoCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefSchemeHandlerFactoryCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefSchemeRegistrarCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefSetCookieCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefStreamReaderCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefStreamWriterCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefStringVisitorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefTaskCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefTaskRunnerCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefURLRequestClientCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefURLRequestCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8AccessorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8ContextCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8ExceptionCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8HandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8StackFrameCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8StackTraceCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefV8ValueCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefValueCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefWebPluginInfoCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefWebPluginInfoVisitorCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(
      &CefWebPluginUnstableCallbackCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefWriteHandlerCToCpp::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefXmlReaderCppToC::DebugObjCt));
  DCHECK(base::AtomicRefCountIsZero(&CefZipReaderCppToC::DebugObjCt));
#endif  // !NDEBUG
}

CEF_EXPORT void cef_do_message_loop_work() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefDoMessageLoopWork();
}

CEF_EXPORT void cef_run_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRunMessageLoop();
}

CEF_EXPORT void cef_quit_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefQuitMessageLoop();
}

CEF_EXPORT void cef_set_osmodal_loop(int osModalLoop) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefSetOSModalLoop(
      osModalLoop?true:false);
}

CEF_EXPORT void cef_enable_highdpi_support() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefEnableHighDPISupport();
}

CEF_EXPORT int cef_get_geolocation(
    struct _cef_get_geolocation_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;

  // Execute
  bool _retval = CefGetGeolocation(
      CefGetGeolocationCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_add_cross_origin_whitelist_entry(
    const cef_string_t* source_origin, const cef_string_t* target_protocol,
    const cef_string_t* target_domain, int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefAddCrossOriginWhitelistEntry(
      CefString(source_origin),
      CefString(target_protocol),
      CefString(target_domain),
      allow_target_subdomains?true:false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_remove_cross_origin_whitelist_entry(
    const cef_string_t* source_origin, const cef_string_t* target_protocol,
    const cef_string_t* target_domain, int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefRemoveCrossOriginWhitelistEntry(
      CefString(source_origin),
      CefString(target_protocol),
      CefString(target_domain),
      allow_target_subdomains?true:false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_cross_origin_whitelist() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearCrossOriginWhitelist();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_parse_url(const cef_string_t* url,
    struct _cef_urlparts_t* parts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return 0;
  // Verify param: parts; type: struct_byref
  DCHECK(parts);
  if (!parts)
    return 0;

  // Translate param: parts; type: struct_byref
  CefURLParts partsObj;
  if (parts)
    partsObj.AttachTo(*parts);

  // Execute
  bool _retval = CefParseURL(
      CefString(url),
      partsObj);

  // Restore param: parts; type: struct_byref
  if (parts)
    partsObj.DetachTo(*parts);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_create_url(const struct _cef_urlparts_t* parts,
    cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: parts; type: struct_byref_const
  DCHECK(parts);
  if (!parts)
    return 0;
  // Verify param: url; type: string_byref
  DCHECK(url);
  if (!url)
    return 0;

  // Translate param: parts; type: struct_byref_const
  CefURLParts partsObj;
  if (parts)
    partsObj.Set(*parts, false);
  // Translate param: url; type: string_byref
  CefString urlStr(url);

  // Execute
  bool _retval = CefCreateURL(
      partsObj,
      urlStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT cef_string_userfree_t cef_format_url_for_security_display(
    const cef_string_t* origin_url, const cef_string_t* languages) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: origin_url; type: string_byref_const
  DCHECK(origin_url);
  if (!origin_url)
    return NULL;
  // Unverified params: languages

  // Execute
  CefString _retval = CefFormatUrlForSecurityDisplay(
      CefString(origin_url),
      CefString(languages));

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT cef_string_userfree_t cef_get_mime_type(
    const cef_string_t* extension) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: string_byref_const
  DCHECK(extension);
  if (!extension)
    return NULL;

  // Execute
  CefString _retval = CefGetMimeType(
      CefString(extension));

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT void cef_get_extensions_for_mime_type(const cef_string_t* mime_type,
    cef_string_list_t extensions) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: mime_type; type: string_byref_const
  DCHECK(mime_type);
  if (!mime_type)
    return;
  // Verify param: extensions; type: string_vec_byref
  DCHECK(extensions);
  if (!extensions)
    return;

  // Translate param: extensions; type: string_vec_byref
  std::vector<CefString> extensionsList;
  transfer_string_list_contents(extensions, extensionsList);

  // Execute
  CefGetExtensionsForMimeType(
      CefString(mime_type),
      extensionsList);

  // Restore param: extensions; type: string_vec_byref
  cef_string_list_clear(extensions);
  transfer_string_list_contents(extensionsList, extensions);
}

CEF_EXPORT cef_string_userfree_t cef_base64encode(const void* data,
    size_t data_size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return NULL;

  // Execute
  CefString _retval = CefBase64Encode(
      data,
      data_size);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT struct _cef_binary_value_t* cef_base64decode(
    const cef_string_t* data) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: string_byref_const
  DCHECK(data);
  if (!data)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefBase64Decode(
      CefString(data));

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

CEF_EXPORT cef_string_userfree_t cef_uriencode(const cef_string_t* text,
    int use_plus) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(text);
  if (!text)
    return NULL;

  // Execute
  CefString _retval = CefURIEncode(
      CefString(text),
      use_plus?true:false);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT cef_string_userfree_t cef_uridecode(const cef_string_t* text,
    int convert_to_utf8, cef_uri_unescape_rule_t unescape_rule) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(text);
  if (!text)
    return NULL;

  // Execute
  CefString _retval = CefURIDecode(
      CefString(text),
      convert_to_utf8?true:false,
      unescape_rule);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT int cef_parse_csscolor(const cef_string_t* string, int strict,
    cef_color_t* color) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: string; type: string_byref_const
  DCHECK(string);
  if (!string)
    return 0;
  // Verify param: color; type: simple_byref
  DCHECK(color);
  if (!color)
    return 0;

  // Translate param: color; type: simple_byref
  cef_color_t colorVal = color?*color:0;

  // Execute
  bool _retval = CefParseCSSColor(
      CefString(string),
      strict?true:false,
      colorVal);

  // Restore param: color; type: simple_byref
  if (color)
    *color = colorVal;

  // Return type: bool
  return _retval;
}

CEF_EXPORT struct _cef_value_t* cef_parse_json(const cef_string_t* json_string,
    cef_json_parser_options_t options) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: json_string; type: string_byref_const
  DCHECK(json_string);
  if (!json_string)
    return NULL;

  // Execute
  CefRefPtr<CefValue> _retval = CefParseJSON(
      CefString(json_string),
      options);

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

CEF_EXPORT struct _cef_value_t* cef_parse_jsonand_return_error(
    const cef_string_t* json_string, cef_json_parser_options_t options,
    cef_json_parser_error_t* error_code_out, cef_string_t* error_msg_out) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: json_string; type: string_byref_const
  DCHECK(json_string);
  if (!json_string)
    return NULL;
  // Verify param: error_code_out; type: simple_byref
  DCHECK(error_code_out);
  if (!error_code_out)
    return NULL;
  // Verify param: error_msg_out; type: string_byref
  DCHECK(error_msg_out);
  if (!error_msg_out)
    return NULL;

  // Translate param: error_code_out; type: simple_byref
  cef_json_parser_error_t error_code_outVal =
      error_code_out?*error_code_out:JSON_NO_ERROR;
  // Translate param: error_msg_out; type: string_byref
  CefString error_msg_outStr(error_msg_out);

  // Execute
  CefRefPtr<CefValue> _retval = CefParseJSONAndReturnError(
      CefString(json_string),
      options,
      error_code_outVal,
      error_msg_outStr);

  // Restore param: error_code_out; type: simple_byref
  if (error_code_out)
    *error_code_out = error_code_outVal;

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

CEF_EXPORT cef_string_userfree_t cef_write_json(struct _cef_value_t* node,
    cef_json_writer_options_t options) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: node; type: refptr_same
  DCHECK(node);
  if (!node)
    return NULL;

  // Execute
  CefString _retval = CefWriteJSON(
      CefValueCppToC::Unwrap(node),
      options);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT int cef_get_path(cef_path_key_t key, cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref
  DCHECK(path);
  if (!path)
    return 0;

  // Translate param: path; type: string_byref
  CefString pathStr(path);

  // Execute
  bool _retval = CefGetPath(
      key,
      pathStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_launch_process(struct _cef_command_line_t* command_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_same
  DCHECK(command_line);
  if (!command_line)
    return 0;

  // Execute
  bool _retval = CefLaunchProcess(
      CefCommandLineCppToC::Unwrap(command_line));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_register_scheme_handler_factory(
    const cef_string_t* scheme_name, const cef_string_t* domain_name,
    struct _cef_scheme_handler_factory_t* factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return 0;
  // Unverified params: domain_name, factory

  // Execute
  bool _retval = CefRegisterSchemeHandlerFactory(
      CefString(scheme_name),
      CefString(domain_name),
      CefSchemeHandlerFactoryCToCpp::Wrap(factory));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_scheme_handler_factories() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearSchemeHandlerFactories();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_currently_on(cef_thread_id_t threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefCurrentlyOn(
      threadId);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_task(cef_thread_id_t threadId,
    struct _cef_task_t* task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefPostTask(
      threadId,
      CefTaskCToCpp::Wrap(task));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_delayed_task(cef_thread_id_t threadId,
    struct _cef_task_t* task, int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefPostDelayedTask(
      threadId,
      CefTaskCToCpp::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_begin_tracing(const cef_string_t* categories,
    struct _cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: categories, callback

  // Execute
  bool _retval = CefBeginTracing(
      CefString(categories),
      CefCompletionCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_end_tracing(const cef_string_t* tracing_file,
    struct _cef_end_tracing_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: tracing_file, callback

  // Execute
  bool _retval = CefEndTracing(
      CefString(tracing_file),
      CefEndTracingCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int64 cef_now_from_system_trace_time() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = CefNowFromSystemTraceTime();

  // Return type: simple
  return _retval;
}

CEF_EXPORT int cef_register_extension(const cef_string_t* extension_name,
    const cef_string_t* javascript_code, struct _cef_v8handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension_name; type: string_byref_const
  DCHECK(extension_name);
  if (!extension_name)
    return 0;
  // Verify param: javascript_code; type: string_byref_const
  DCHECK(javascript_code);
  if (!javascript_code)
    return 0;
  // Unverified params: handler

  // Execute
  bool _retval = CefRegisterExtension(
      CefString(extension_name),
      CefString(javascript_code),
      CefV8HandlerCToCpp::Wrap(handler));

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_visit_web_plugin_info(
    struct _cef_web_plugin_info_visitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefVisitWebPluginInfo(
      CefWebPluginInfoVisitorCToCpp::Wrap(visitor));
}

CEF_EXPORT void cef_refresh_web_plugins() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefreshWebPlugins();
}

CEF_EXPORT void cef_add_web_plugin_path(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefAddWebPluginPath(
      CefString(path));
}

CEF_EXPORT void cef_add_web_plugin_directory(const cef_string_t* dir) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: dir; type: string_byref_const
  DCHECK(dir);
  if (!dir)
    return;

  // Execute
  CefAddWebPluginDirectory(
      CefString(dir));
}

CEF_EXPORT void cef_remove_web_plugin_path(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefRemoveWebPluginPath(
      CefString(path));
}

CEF_EXPORT void cef_unregister_internal_web_plugin(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefUnregisterInternalWebPlugin(
      CefString(path));
}

CEF_EXPORT void cef_force_web_plugin_shutdown(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefForceWebPluginShutdown(
      CefString(path));
}

CEF_EXPORT void cef_register_web_plugin_crash(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefRegisterWebPluginCrash(
      CefString(path));
}

CEF_EXPORT void cef_is_web_plugin_unstable(const cef_string_t* path,
    struct _cef_web_plugin_unstable_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefIsWebPluginUnstable(
      CefString(path),
      CefWebPluginUnstableCallbackCToCpp::Wrap(callback));
}

#endif
