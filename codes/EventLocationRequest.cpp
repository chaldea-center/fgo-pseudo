// local variable allocation has failed, the output may be wrong!
void __fastcall EventLocationRequest__beginRequest(
        EventLocationRequest_o *this,
        int32_t eventId,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  float latitude; // s0
  const MethodInfo *v14; // x2
  float longitude; // s0
  const MethodInfo *v16; // x2
  float altitude; // s0
  const MethodInfo *v18; // x2
  float horizontalAccuracy; // s0
  const MethodInfo *v20; // x2
  float verticalAccuracy; // s0
  const MethodInfo *v22; // x2
  double timestamp; // d0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1

  if ( (byte_4A21340 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_20999/*"latitude"*/, *(_QWORD *)&eventId);
    sub_1B715CC(&StringLiteral_19081/*"eventId"*/, v7);
    sub_1B715CC(&StringLiteral_19897/*"horizontalAccuracy"*/, v8);
    sub_1B715CC(&StringLiteral_24477/*"verticalAccuracy"*/, v9);
    sub_1B715CC(&StringLiteral_23894/*"timestamp"*/, v10);
    sub_1B715CC(&StringLiteral_21156/*"longitude"*/, v11);
    sub_1B715CC(&StringLiteral_16690/*"altitude"*/, v12);
    byte_4A21340 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19081/*"eventId"*/, eventId, method);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_40968084((RequestBase_o *)this, (System_String_o *)StringLiteral_20999/*"latitude"*/, latitude, v14);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_40968084((RequestBase_o *)this, (System_String_o *)StringLiteral_21156/*"longitude"*/, longitude, v16);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_40968084((RequestBase_o *)this, (System_String_o *)StringLiteral_16690/*"altitude"*/, altitude, v18);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_40968084((RequestBase_o *)this, (System_String_o *)StringLiteral_19897/*"horizontalAccuracy"*/, horizontalAccuracy, v20);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_40968084((RequestBase_o *)this, (System_String_o *)StringLiteral_24477/*"verticalAccuracy"*/, verticalAccuracy, v22);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_40968236((RequestBase_o *)this, (System_String_o *)StringLiteral_23894/*"timestamp"*/, timestamp, v24);
  RequestBase__beginRequest((RequestBase_o *)this, v25);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2133F & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&StringLiteral_19067/*"event/location"*/, v2);
    byte_4A2133F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61505504(BaseUrl, (System_String_o *)StringLiteral_19067/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *v14; // x20
  System_String_o *v15; // x0
  struct NetworkManager_ResultCallbackFunc_o *v16; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v18; // x9
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A21341 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, responseList);
    sub_1B715CC(&JsonManager_TypeInfo, v5);
    sub_1B715CC(&ResponseCommandKind_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_21135/*"locationCampaign"*/, v7);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v8);
    sub_1B715CC(&StringLiteral_22001/*"ngParse"*/, v9);
    byte_4A21341 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v10 || (v12 = v10, !ResponseData__checkError(v10, v10->fields.resCode, v11)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v18 = &StringLiteral_22000/*"ng"*/;
LABEL_17:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v18,
      *(_QWORD *)&CallBack->fields.extra_arg);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21135/*"locationCampaign"*/,
          &value,
          (const MethodInfo_31A051C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v18 = &StringLiteral_22001/*"ngParse"*/;
    goto LABEL_17;
  }
  v14 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__toJson(v14, 0, 0, 0LL);
  v16 = this->fields.CallBack;
  if ( v16 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v16->fields.m_target)(
      v16->fields.original_method_info,
      v15,
      *(_QWORD *)&v16->fields.extra_arg);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}