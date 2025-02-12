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

  if ( (byte_4BB5FFC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21397/*"langVersion"*/, *(_QWORD *)&eventId);
    sub_1C13D24(&StringLiteral_19431/*"event/location"*/, v7);
    sub_1C13D24(&StringLiteral_20268/*"hintOpenType"*/, v8);
    sub_1C13D24(&StringLiteral_24934/*"variable"*/, v9);
    sub_1C13D24(&StringLiteral_24344/*"timePeriod"*/, v10);
    sub_1C13D24(&StringLiteral_21554/*"lock_light_{0}"*/, v11);
    sub_1C13D24(&StringLiteral_16996/*"algorithmGroup"*/, v12);
    byte_4BB5FFC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19431/*"event/location"*/, eventId, method);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_42355224((RequestBase_o *)this, (System_String_o *)StringLiteral_21397/*"langVersion"*/, latitude, v14);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_42355224((RequestBase_o *)this, (System_String_o *)StringLiteral_21554/*"lock_light_{0}"*/, longitude, v16);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_42355224((RequestBase_o *)this, (System_String_o *)StringLiteral_16996/*"algorithmGroup"*/, altitude, v18);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_42355224((RequestBase_o *)this, (System_String_o *)StringLiteral_20268/*"hintOpenType"*/, horizontalAccuracy, v20);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_42355224((RequestBase_o *)this, (System_String_o *)StringLiteral_24934/*"variable"*/, verticalAccuracy, v22);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_42355376((RequestBase_o *)this, (System_String_o *)StringLiteral_24344/*"timePeriod"*/, timestamp, v24);
  RequestBase__beginRequest((RequestBase_o *)this, v25);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5FFB & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_19417/*"evMap2D_Mark_Create_Finish"*/, v2);
    byte_4BB5FFB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_19417/*"evMap2D_Mark_Create_Finish"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *v13; // x20
  System_String_o *v14; // x0
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v17; // x9
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB5FFD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, responseList);
    sub_1C13D24(&JsonManager_TypeInfo, v5);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_21533/*"localRotation.w"*/, v7);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v8);
    sub_1C13D24(&StringLiteral_22422/*"newBuilder"*/, v9);
    byte_4BB5FFD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v10 || (v11 = v10, !ResponseData__checkError_42394144(v10, 0LL)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v17 = &StringLiteral_22421/*"newAttributes"*/;
LABEL_17:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v17,
      *(_QWORD *)&CallBack->fields.extra_arg);
    return;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21533/*"localRotation.w"*/,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v17 = &StringLiteral_22422/*"newBuilder"*/;
    goto LABEL_17;
  }
  v13 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(v13, 0, 0, 0LL);
  v15 = this->fields.CallBack;
  if ( v15 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      v14,
      *(_QWORD *)&v15->fields.extra_arg);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}