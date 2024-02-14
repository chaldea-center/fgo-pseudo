void __fastcall EventLocationRequest___ctor(EventLocationRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  float longitude; // s0
  float altitude; // s0
  float horizontalAccuracy; // s0
  float verticalAccuracy; // s0
  double timestamp; // d0

  if ( (byte_4215A10 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20256/*"latitude"*/, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_18529/*"eventId"*/, v7);
    sub_B0D8A4(&StringLiteral_19220/*"horizontalAccuracy"*/, v8);
    sub_B0D8A4(&StringLiteral_23215/*"verticalAccuracy"*/, v9);
    sub_B0D8A4(&StringLiteral_22777/*"timestamp"*/, v10);
    sub_B0D8A4(&StringLiteral_20380/*"longitude"*/, v11);
    sub_B0D8A4(&StringLiteral_16363/*"altitude"*/, v12);
    byte_4215A10 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18529/*"eventId"*/, eventId, 0LL);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_30435336((RequestBase_o *)this, (System_String_o *)StringLiteral_20256/*"latitude"*/, latitude, 0LL);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_30435336((RequestBase_o *)this, (System_String_o *)StringLiteral_20380/*"longitude"*/, longitude, 0LL);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_30435336((RequestBase_o *)this, (System_String_o *)StringLiteral_16363/*"altitude"*/, altitude, 0LL);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_30435336((RequestBase_o *)this, (System_String_o *)StringLiteral_19220/*"horizontalAccuracy"*/, horizontalAccuracy, 0LL);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_30435336((RequestBase_o *)this, (System_String_o *)StringLiteral_23215/*"verticalAccuracy"*/, verticalAccuracy, 0LL);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_30435492((RequestBase_o *)this, (System_String_o *)StringLiteral_22777/*"timestamp"*/, timestamp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4215A0F & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18517/*"event/location"*/, v2);
    byte_4215A0F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_18517/*"event/location"*/, 0LL);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *success; // x0
  Il2CppObject *v13; // x20
  System_String_o *v14; // x1
  __int64 *v15; // x8
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215A11 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, responseList);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_20360/*"locationCampaign"*/, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_21138/*"ngParse"*/, v9);
    byte_4215A11 = 1;
  }
  value = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(68, responseList, 0LL);
  if ( !v10 || (v11 = v10, !ResponseData__checkError_30403444(v10, 0LL)) )
  {
    v15 = &StringLiteral_21137/*"ng"*/;
LABEL_16:
    v14 = (System_String_o *)*v15;
    goto LABEL_17;
  }
  success = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20360/*"locationCampaign"*/,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = &StringLiteral_21138/*"ngParse"*/;
    goto LABEL_16;
  }
  v13 = (Il2CppObject *)value;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(v13, 0, 0, 0LL);
LABEL_17:
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}