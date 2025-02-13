void __fastcall EventLocationRequest__beginRequest(
        EventLocationRequest_o *this,
        int32_t eventId,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  float latitude; // s0
  const MethodInfo *v8; // x2
  float longitude; // s0
  const MethodInfo *v10; // x2
  float altitude; // s0
  const MethodInfo *v12; // x2
  float horizontalAccuracy; // s0
  const MethodInfo *v14; // x2
  float verticalAccuracy; // s0
  const MethodInfo *v16; // x2
  double timestamp; // d0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1

  if ( (byte_4BDDE88 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21429/*"latitude"*/);
    sub_1C21E38(&StringLiteral_19460/*"eventId"*/);
    sub_1C21E38(&StringLiteral_20297/*"horizontalAccuracy"*/);
    sub_1C21E38(&StringLiteral_24977/*"verticalAccuracy"*/);
    sub_1C21E38(&StringLiteral_24384/*"timestamp"*/);
    sub_1C21E38(&StringLiteral_21586/*"longitude"*/);
    sub_1C21E38(&StringLiteral_17022/*"altitude"*/);
    byte_4BDDE88 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19460/*"eventId"*/, eventId, method);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_42466488((RequestBase_o *)this, (System_String_o *)StringLiteral_21429/*"latitude"*/, latitude, v8);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_42466488((RequestBase_o *)this, (System_String_o *)StringLiteral_21586/*"longitude"*/, longitude, v10);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_42466488((RequestBase_o *)this, (System_String_o *)StringLiteral_17022/*"altitude"*/, altitude, v12);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_42466488((RequestBase_o *)this, (System_String_o *)StringLiteral_20297/*"horizontalAccuracy"*/, horizontalAccuracy, v14);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_42466488((RequestBase_o *)this, (System_String_o *)StringLiteral_24977/*"verticalAccuracy"*/, verticalAccuracy, v16);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_42466640((RequestBase_o *)this, (System_String_o *)StringLiteral_24384/*"timestamp"*/, timestamp, v18);
  RequestBase__beginRequest((RequestBase_o *)this, v19);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE87 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19446/*"event/location"*/);
    byte_4BDDE87 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_19446/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *v8; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v12; // x9
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDDE89 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_21565/*"locationCampaign"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_22457/*"ngParse"*/);
    byte_4BDDE89 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v5 || (v6 = v5, !ResponseData__checkError_42505456(v5, 0LL)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = &StringLiteral_22456/*"ng"*/;
LABEL_17:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v12,
      *(_QWORD *)&CallBack->fields.extra_arg);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21565/*"locationCampaign"*/,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = &StringLiteral_22457/*"ngParse"*/;
    goto LABEL_17;
  }
  v8 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(v8, 0, 0, 0LL);
  v10 = this->fields.CallBack;
  if ( v10 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      v9,
      *(_QWORD *)&v10->fields.extra_arg);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}