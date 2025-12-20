void EventScanPanelMapRequest___ctor(EventScanPanelMapRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventScanPanelMapRequest__beginRequest(
        EventScanPanelMapRequest_o *this,
        int32_t eventId,
        int32_t mapId,
        int32_t panelMapDetailId,
        int32_t panelScanId,
        const MethodInfo *method)
{
  if ( (byte_4D2E3E8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_19290/*"eventId"*/);
    sub_1C94098(&StringLiteral_21625/*"mapId"*/);
    sub_1C94098(&StringLiteral_22843/*"panelMapDetailId"*/);
    sub_1C94098(&StringLiteral_22844/*"panelScanId"*/);
    byte_4D2E3E8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19290/*"eventId"*/, eventId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21625/*"mapId"*/, mapId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22843/*"panelMapDetailId"*/, panelMapDetailId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22844/*"panelScanId"*/, panelScanId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventScanPanelMapRequest__getURL(EventScanPanelMapRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E3E7 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_19281/*"event/scanPanelMap"*/);
    byte_4D2E3E7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_19281/*"event/scanPanelMap"*/, 0);
}


void EventScanPanelMapRequest__requestCompleted(
        EventScanPanelMapRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D2E3E9 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E3E9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(104, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void EventScanPanelMapRequest_ResultData___ctor(EventScanPanelMapRequest_ResultData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}