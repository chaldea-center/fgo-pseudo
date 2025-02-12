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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  if ( (byte_4BC93F5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19445/*"eventId"*/, *(_QWORD *)&eventId);
    sub_1C1ABD4(&StringLiteral_21639/*"mapId"*/, v11);
    sub_1C1ABD4(&StringLiteral_22843/*"panelMapDetailId"*/, v12);
    sub_1C1ABD4(&StringLiteral_22844/*"panelScanId"*/, v13);
    byte_4BC93F5 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19445/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&panelMapDetailId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21639/*"mapId"*/, mapId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22843/*"panelMapDetailId"*/, panelMapDetailId, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22844/*"panelScanId"*/, panelScanId, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *__fastcall EventScanPanelMapRequest__getURL(
        EventScanPanelMapRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC93F4 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_19436/*"event/scanPanelMap"*/, v2);
    byte_4BC93F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_19436/*"event/scanPanelMap"*/, 0LL);
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
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BC93F6 & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC93F6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(104, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42452820(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22437/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall EventScanPanelMapRequest_ResultData___ctor(
        EventScanPanelMapRequest_ResultData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}