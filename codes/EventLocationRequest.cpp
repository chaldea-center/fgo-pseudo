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

  if ( (byte_4A5C9E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21051/*"latitude"*/);
    sub_1B885B0(&StringLiteral_19132/*"eventId"*/);
    sub_1B885B0(&StringLiteral_19948/*"horizontalAccuracy"*/);
    sub_1B885B0(&StringLiteral_24536/*"verticalAccuracy"*/);
    sub_1B885B0(&StringLiteral_23953/*"timestamp"*/);
    sub_1B885B0(&StringLiteral_21208/*"longitude"*/);
    sub_1B885B0(&StringLiteral_16740/*"altitude"*/);
    byte_4A5C9E7 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19132/*"eventId"*/, eventId, method);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_41178648((RequestBase_o *)this, (System_String_o *)StringLiteral_21051/*"latitude"*/, latitude, v8);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_41178648((RequestBase_o *)this, (System_String_o *)StringLiteral_21208/*"longitude"*/, longitude, v10);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_41178648((RequestBase_o *)this, (System_String_o *)StringLiteral_16740/*"altitude"*/, altitude, v12);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_41178648((RequestBase_o *)this, (System_String_o *)StringLiteral_19948/*"horizontalAccuracy"*/, horizontalAccuracy, v14);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_41178648((RequestBase_o *)this, (System_String_o *)StringLiteral_24536/*"verticalAccuracy"*/, verticalAccuracy, v16);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_41178800((RequestBase_o *)this, (System_String_o *)StringLiteral_23953/*"timestamp"*/, timestamp, v18);
  RequestBase__beginRequest((RequestBase_o *)this, v19);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C9E6 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19118/*"event/location"*/);
    byte_4A5C9E6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_19118/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *v9; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v13; // x9
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C9E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_21187/*"locationCampaign"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_22056/*"ngParse"*/);
    byte_4A5C9E8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v5 || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v13 = &StringLiteral_22055/*"ng"*/;
LABEL_17:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v13,
      *(_QWORD *)&CallBack->fields.extra_arg);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21187/*"locationCampaign"*/,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v13 = &StringLiteral_22056/*"ngParse"*/;
    goto LABEL_17;
  }
  v9 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(v9, 0, 0, 0LL);
  v11 = this->fields.CallBack;
  if ( v11 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      v10,
      *(_QWORD *)&v11->fields.extra_arg);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}