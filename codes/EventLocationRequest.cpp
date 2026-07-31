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

  if ( (byte_593A214 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22204/*"latitude"*/);
    sub_21FFC50(&StringLiteral_19995/*"eventId"*/);
    sub_21FFC50(&StringLiteral_20912/*"horizontalAccuracy"*/);
    sub_21FFC50(&StringLiteral_25980/*"verticalAccuracy"*/);
    sub_21FFC50(&StringLiteral_25339/*"timestamp"*/);
    sub_21FFC50(&StringLiteral_22384/*"longitude"*/);
    sub_21FFC50(&StringLiteral_17417/*"altitude"*/);
    byte_593A214 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19995/*"eventId"*/, eventId, 0);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0);
  RequestBase__addField_51201052((RequestBase_o *)this, (System_String_o *)StringLiteral_22204/*"latitude"*/, latitude, 0);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0);
  RequestBase__addField_51201052((RequestBase_o *)this, (System_String_o *)StringLiteral_22384/*"longitude"*/, longitude, 0);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0);
  RequestBase__addField_51201052((RequestBase_o *)this, (System_String_o *)StringLiteral_17417/*"altitude"*/, altitude, 0);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0);
  RequestBase__addField_51201052((RequestBase_o *)this, (System_String_o *)StringLiteral_20912/*"horizontalAccuracy"*/, horizontalAccuracy, 0);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0);
  RequestBase__addField_51201052((RequestBase_o *)this, (System_String_o *)StringLiteral_25980/*"verticalAccuracy"*/, verticalAccuracy, 0);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0);
  RequestBase__addField_51201204((RequestBase_o *)this, (System_String_o *)StringLiteral_25339/*"timestamp"*/, timestamp, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A213 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19981/*"event/location"*/);
    byte_593A213 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_19981/*"event/location"*/, 0);
}


void EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  System_String_o *v10; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593A215 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_22360/*"locationCampaign"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_23291/*"ngParse"*/);
    byte_593A215 = 1;
  }
  value = 0;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(69, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51190916(v5, 0)) )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success;
    value = 0;
    if ( success
      && System_Collections_Generic_Dictionary_object__object___TryGetValue(
           success,
           (Il2CppObject *)StringLiteral_22360/*"locationCampaign"*/,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v9 = value;
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
      v10 = JsonManager__toJson(v9, 0, 0, 0);
    }
    else
    {
      v10 = (System_String_o *)StringLiteral_23291/*"ngParse"*/;
    }
    RequestBase__completed((RequestBase_o *)this, v10, 0);
  }
  else
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
  }
}


void EventLocationRequest_LocationGift___ctor(EventLocationRequest_LocationGift_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}