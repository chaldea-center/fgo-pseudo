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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  float latitude; // s0
  float longitude; // s0
  float altitude; // s0
  float horizontalAccuracy; // s0
  float verticalAccuracy; // s0
  double timestamp; // d0

  if ( (byte_42E9B1D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20449/*"latitude"*/, eventId, (_DWORD)locInfo, method);
    sub_B5D5C4(&StringLiteral_18701/*"eventId"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19402/*"horizontalAccuracy"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23445/*"verticalAccuracy"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23006/*"timestamp"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_20576/*"longitude"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16512/*"altitude"*/, v22, v23, v24);
    byte_42E9B1D = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18701/*"eventId"*/, eventId, 0LL);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_32361948((RequestBase_o *)this, (System_String_o *)StringLiteral_20449/*"latitude"*/, latitude, 0LL);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_32361948((RequestBase_o *)this, (System_String_o *)StringLiteral_20576/*"longitude"*/, longitude, 0LL);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_32361948((RequestBase_o *)this, (System_String_o *)StringLiteral_16512/*"altitude"*/, altitude, 0LL);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_32361948((RequestBase_o *)this, (System_String_o *)StringLiteral_19402/*"horizontalAccuracy"*/, horizontalAccuracy, 0LL);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_32361948((RequestBase_o *)this, (System_String_o *)StringLiteral_23445/*"verticalAccuracy"*/, verticalAccuracy, 0LL);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_32362104((RequestBase_o *)this, (System_String_o *)StringLiteral_23006/*"timestamp"*/, timestamp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E9B1C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18689/*"event/location"*/, v4, v5, v6);
    byte_42E9B1C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_18689/*"event/location"*/, 0LL);
}


void __fastcall EventLocationRequest__requestCompleted(
        EventLocationRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ResponseData_o *v21; // x0
  ResponseData_o *v22; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *success; // x0
  Il2CppObject *v24; // x20
  System_String_o *v25; // x1
  __int64 *v26; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9B1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_20556/*"locationCampaign"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21346/*"ngParse"*/, v18, v19, v20);
    byte_42E9B1E = 1;
  }
  value = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v21 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v21 || (v22 = v21, !ResponseData__checkError_29500464(v21, 0LL)) )
  {
    v26 = &StringLiteral_21345/*"ng"*/;
LABEL_16:
    v25 = (System_String_o *)*v26;
    goto LABEL_17;
  }
  success = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20556/*"locationCampaign"*/,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v26 = &StringLiteral_21346/*"ngParse"*/;
    goto LABEL_16;
  }
  v24 = (Il2CppObject *)value;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson(v24, 0, 0, 0LL);
LABEL_17:
  RequestBase__completed((RequestBase_o *)this, v25, 0LL);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}