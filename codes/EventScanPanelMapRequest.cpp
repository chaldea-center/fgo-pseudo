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

  if ( (byte_418A94E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_20373/*"mapId"*/, v11);
    sub_B2C35C(&StringLiteral_21412/*"panelMapDetailId"*/, v12);
    sub_B2C35C(&StringLiteral_21413/*"panelScanId"*/, v13);
    byte_418A94E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18472/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20373/*"mapId"*/, mapId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21412/*"panelMapDetailId"*/, panelMapDetailId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21413/*"panelScanId"*/, panelScanId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventScanPanelMapRequest__getURL(
        EventScanPanelMapRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A94D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18465/*"event/scanPanelMap"*/, v2);
    byte_418A94D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_18465/*"event/scanPanelMap"*/, 0LL);
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

  if ( (byte_418A94F & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_418A94F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(103, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall EventScanPanelMapRequest_ResultData___ctor(
        EventScanPanelMapRequest_ResultData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}