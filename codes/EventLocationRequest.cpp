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

  if ( (byte_4CB7E07 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21261/*"latitude"*/);
    sub_1C6BA08(&StringLiteral_19195/*"eventId"*/);
    sub_1C6BA08(&StringLiteral_20062/*"horizontalAccuracy"*/);
    sub_1C6BA08(&StringLiteral_24773/*"verticalAccuracy"*/);
    sub_1C6BA08(&StringLiteral_24190/*"timestamp"*/);
    sub_1C6BA08(&StringLiteral_21432/*"longitude"*/);
    sub_1C6BA08(&StringLiteral_16756/*"altitude"*/);
    byte_4CB7E07 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19195/*"eventId"*/, eventId, 0);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0);
  RequestBase__addField_44498800((RequestBase_o *)this, (System_String_o *)StringLiteral_21261/*"latitude"*/, latitude, 0);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0);
  RequestBase__addField_44498800((RequestBase_o *)this, (System_String_o *)StringLiteral_21432/*"longitude"*/, longitude, 0);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0);
  RequestBase__addField_44498800((RequestBase_o *)this, (System_String_o *)StringLiteral_16756/*"altitude"*/, altitude, 0);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0);
  RequestBase__addField_44498800((RequestBase_o *)this, (System_String_o *)StringLiteral_20062/*"horizontalAccuracy"*/, horizontalAccuracy, 0);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0);
  RequestBase__addField_44498800((RequestBase_o *)this, (System_String_o *)StringLiteral_24773/*"verticalAccuracy"*/, verticalAccuracy, 0);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0);
  RequestBase__addField_44498952((RequestBase_o *)this, (System_String_o *)StringLiteral_24190/*"timestamp"*/, timestamp, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7E06 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19181/*"event/location"*/);
    byte_4CB7E06 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19181/*"event/location"*/, 0);
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

  if ( (byte_4CB7E08 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_21409/*"locationCampaign"*/);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_22302/*"ngParse"*/);
    byte_4CB7E08 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(69, responseList, 0);
  if ( !v5 || (v6 = v5, !ResponseData__checkError_44468912(v5, 0)) )
  {
    v10 = &StringLiteral_22301/*"ng"*/;
LABEL_14:
    v9 = (System_String_o *)*v10;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
  value = 0;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21409/*"locationCampaign"*/,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = &StringLiteral_22302/*"ngParse"*/;
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