void __fastcall EventLocationRequest___ctor(EventLocationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall EventLocationRequest__beginRequest(
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

  if ( (byte_4352EFA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_20509/*"latitude"*/);
    sub_B70694(&StringLiteral_18751/*"eventId"*/);
    sub_B70694(&StringLiteral_19460/*"horizontalAccuracy"*/);
    sub_B70694(&StringLiteral_23517/*"verticalAccuracy"*/);
    sub_B70694(&StringLiteral_23077/*"timestamp"*/);
    sub_B70694(&StringLiteral_20636/*"longitude"*/);
    sub_B70694(&StringLiteral_16556/*"altitude"*/);
    byte_4352EFA = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18751/*"eventId"*/, eventId, 0LL);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_32336264((RequestBase_o *)this, (System_String_o *)StringLiteral_20509/*"latitude"*/, latitude, 0LL);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_32336264((RequestBase_o *)this, (System_String_o *)StringLiteral_20636/*"longitude"*/, longitude, 0LL);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_32336264((RequestBase_o *)this, (System_String_o *)StringLiteral_16556/*"altitude"*/, altitude, 0LL);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_32336264((RequestBase_o *)this, (System_String_o *)StringLiteral_19460/*"horizontalAccuracy"*/, horizontalAccuracy, 0LL);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_32336264((RequestBase_o *)this, (System_String_o *)StringLiteral_23517/*"verticalAccuracy"*/, verticalAccuracy, 0LL);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_32336420((RequestBase_o *)this, (System_String_o *)StringLiteral_23077/*"timestamp"*/, timestamp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4352EF9 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_18739/*"event/location"*/);
    byte_4352EF9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_18739/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *success; // x0
  Il2CppObject *v8; // x20
  System_String_o *v9; // x1
  __int64 *v10; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4352EFB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&StringLiteral_20616/*"locationCampaign"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_21409/*"ngParse"*/);
    byte_4352EFB = 1;
  }
  value = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v5 || (v6 = v5, !ResponseData__checkError_29653500(v5, 0LL)) )
  {
    v10 = &StringLiteral_21408/*"ng"*/;
LABEL_16:
    v9 = (System_String_o *)*v10;
    goto LABEL_17;
  }
  success = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20616/*"locationCampaign"*/,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = &StringLiteral_21409/*"ngParse"*/;
    goto LABEL_16;
  }
  v8 = (Il2CppObject *)value;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(v8, 0, 0, 0LL);
LABEL_17:
  RequestBase__completed((RequestBase_o *)this, v9, 0LL);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}