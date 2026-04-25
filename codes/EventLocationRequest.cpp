void EventLocationRequest___ctor(EventLocationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventLocationRequest__beginRequest(
        EventLocationRequest_o *this,
        int32_t eventId,
        UnityEngine_LocationInfo_o *locInfo,
        const MethodInfo *method)
{
  float latitude; // s0
  float longitude; // s0
  float altitude; // s0
  float horizontalAccuracy; // s0
  float verticalAccuracy; // s0
  double timestamp; // d0

  if ( (byte_4E06519 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_21511/*"latitude"*/);
    sub_1CE6700(&StringLiteral_19400/*"eventId"*/);
    sub_1CE6700(&StringLiteral_20281/*"horizontalAccuracy"*/);
    sub_1CE6700(&StringLiteral_25073/*"verticalAccuracy"*/);
    sub_1CE6700(&StringLiteral_24483/*"timestamp"*/);
    sub_1CE6700(&StringLiteral_21682/*"longitude"*/);
    sub_1CE6700(&StringLiteral_16918/*"altitude"*/);
    byte_4E06519 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19400/*"eventId"*/, eventId, 0);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0);
  RequestBase__addField_45376072((RequestBase_o *)this, (System_String_o *)StringLiteral_21511/*"latitude"*/, latitude, 0);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0);
  RequestBase__addField_45376072((RequestBase_o *)this, (System_String_o *)StringLiteral_21682/*"longitude"*/, longitude, 0);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0);
  RequestBase__addField_45376072((RequestBase_o *)this, (System_String_o *)StringLiteral_16918/*"altitude"*/, altitude, 0);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0);
  RequestBase__addField_45376072((RequestBase_o *)this, (System_String_o *)StringLiteral_20281/*"horizontalAccuracy"*/, horizontalAccuracy, 0);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0);
  RequestBase__addField_45376072((RequestBase_o *)this, (System_String_o *)StringLiteral_25073/*"verticalAccuracy"*/, verticalAccuracy, 0);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0);
  RequestBase__addField_45376224((RequestBase_o *)this, (System_String_o *)StringLiteral_24483/*"timestamp"*/, timestamp, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E06518 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19386/*"event/location"*/);
    byte_4E06518 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19386/*"event/location"*/, 0);
}


void EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  Il2CppObject *v8; // x20
  System_String_o *v9; // x1
  __int64 *v10; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E0651A & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_21659/*"locationCampaign"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    sub_1CE6700(&StringLiteral_22556/*"ngParse"*/);
    byte_4E0651A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(69, responseList, 0);
  if ( !v5 || (v6 = v5, !ResponseData__checkError_45365352(v5, 0)) )
  {
    v10 = &StringLiteral_22555/*"ng"*/;
LABEL_14:
    v9 = (System_String_o *)*v10;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  value = 0;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21659/*"locationCampaign"*/,
          &value,
          (const MethodInfo_35B619C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = &StringLiteral_22556/*"ngParse"*/;
    goto LABEL_14;
  }
  v8 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(v8, 0, 0, 0);
LABEL_15:
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}


void EventLocationRequest_LocationGift___ctor(EventLocationRequest_LocationGift_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}