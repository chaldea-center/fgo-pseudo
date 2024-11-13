// local variable allocation has failed, the output may be wrong!
void __fastcall EventLocationRequest__beginRequest(
        EventLocationRequest_o *this,
        int32_t eventId,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  float latitude; // s0
  const MethodInfo *v20; // x2
  float longitude; // s0
  const MethodInfo *v22; // x2
  float altitude; // s0
  const MethodInfo *v24; // x2
  float horizontalAccuracy; // s0
  const MethodInfo *v26; // x2
  float verticalAccuracy; // s0
  const MethodInfo *v28; // x2
  double timestamp; // d0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4B17AA5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21277/*"latitude"*/, *(_QWORD *)&eventId, locInfo);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20156/*"horizontalAccuracy"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24790/*"verticalAccuracy"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24202/*"timestamp"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_21434/*"longitude"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_16909/*"altitude"*/, v17, v18);
    byte_4B17AA5 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19329/*"eventId"*/, eventId, method);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_41913476((RequestBase_o *)this, (System_String_o *)StringLiteral_21277/*"latitude"*/, latitude, v20);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_41913476((RequestBase_o *)this, (System_String_o *)StringLiteral_21434/*"longitude"*/, longitude, v22);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_41913476((RequestBase_o *)this, (System_String_o *)StringLiteral_16909/*"altitude"*/, altitude, v24);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_41913476((RequestBase_o *)this, (System_String_o *)StringLiteral_20156/*"horizontalAccuracy"*/, horizontalAccuracy, v26);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_41913476((RequestBase_o *)this, (System_String_o *)StringLiteral_24790/*"verticalAccuracy"*/, verticalAccuracy, v28);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_41913628((RequestBase_o *)this, (System_String_o *)StringLiteral_24202/*"timestamp"*/, timestamp, v30);
  RequestBase__beginRequest((RequestBase_o *)this, v31);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17AA4 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19315/*"event/location"*/, v3, v4);
    byte_4B17AA4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_19315/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  ResponseData_o *v16; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  System_String_o *v20; // x0
  struct NetworkManager_ResultCallbackFunc_o *v21; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v23; // x9
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17AA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, responseList, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_21413/*"locationCampaign"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22293/*"ngParse"*/, v13, v14);
    byte_4B17AA6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v15 || (v16 = v15, !ResponseData__checkError_41952396(v15, 0LL)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v23 = &StringLiteral_22292/*"ng"*/;
LABEL_17:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v23,
      *(_QWORD *)&CallBack->fields.extra_arg);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v16->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21413/*"locationCampaign"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v23 = &StringLiteral_22293/*"ngParse"*/;
    goto LABEL_17;
  }
  v19 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18);
  v20 = JsonManager__toJson(v19, 0, 0, 0LL);
  v21 = this->fields.CallBack;
  if ( v21 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v21->fields.m_target)(
      v21->fields.original_method_info,
      v20,
      *(_QWORD *)&v21->fields.extra_arg);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}