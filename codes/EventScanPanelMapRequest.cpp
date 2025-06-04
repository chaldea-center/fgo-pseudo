void __fastcall EventScanPanelMapRequest___ctor(EventScanPanelMapRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventScanPanelMapRequest__beginRequest(
        EventScanPanelMapRequest_o *this,
        int32_t eventId,
        int32_t mapId,
        int32_t panelMapDetailId,
        int32_t panelScanId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4B03AB9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18963/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1BC3008(&StringLiteral_21209/*"mapId"*/, v11);
    sub_1BC3008(&StringLiteral_22400/*"panelMapDetailId"*/, v12);
    sub_1BC3008(&StringLiteral_22401/*"panelScanId"*/, v13);
    byte_4B03AB9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18963/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21209/*"mapId"*/, mapId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22400/*"panelMapDetailId"*/, panelMapDetailId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22401/*"panelScanId"*/, panelScanId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventScanPanelMapRequest__getURL(
        EventScanPanelMapRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03AB8 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18954/*"event/scanPanelMap"*/, v2);
    byte_4B03AB8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_18954/*"event/scanPanelMap"*/, 0LL);
}


void __fastcall EventScanPanelMapRequest__requestCompleted(
        EventScanPanelMapRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B03ABA & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03ABA = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(104, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_43184840(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21997/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall EventScanPanelMapRequest_ResultData___ctor(
        EventScanPanelMapRequest_ResultData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}