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

  if ( (byte_4A002B3 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20972/*"latitude"*/, *(_QWORD *)&eventId);
    sub_1B64A00(&StringLiteral_19062/*"eventId"*/, v7);
    sub_1B64A00(&StringLiteral_19872/*"horizontalAccuracy"*/, v8);
    sub_1B64A00(&StringLiteral_24441/*"verticalAccuracy"*/, v9);
    sub_1B64A00(&StringLiteral_23858/*"timestamp"*/, v10);
    sub_1B64A00(&StringLiteral_21129/*"longitude"*/, v11);
    sub_1B64A00(&StringLiteral_16674/*"altitude"*/, v12);
    byte_4A002B3 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19062/*"eventId"*/, eventId, 0LL);
  latitude = UnityEngine_LocationInfo__get_latitude(locInfo, 0LL);
  RequestBase__addField_40882920((RequestBase_o *)this, (System_String_o *)StringLiteral_20972/*"latitude"*/, latitude, 0LL);
  longitude = UnityEngine_LocationInfo__get_longitude(locInfo, 0LL);
  RequestBase__addField_40882920((RequestBase_o *)this, (System_String_o *)StringLiteral_21129/*"longitude"*/, longitude, 0LL);
  altitude = UnityEngine_LocationInfo__get_altitude(locInfo, 0LL);
  RequestBase__addField_40882920((RequestBase_o *)this, (System_String_o *)StringLiteral_16674/*"altitude"*/, altitude, 0LL);
  horizontalAccuracy = UnityEngine_LocationInfo__get_horizontalAccuracy(locInfo, 0LL);
  RequestBase__addField_40882920((RequestBase_o *)this, (System_String_o *)StringLiteral_19872/*"horizontalAccuracy"*/, horizontalAccuracy, 0LL);
  verticalAccuracy = UnityEngine_LocationInfo__get_verticalAccuracy(locInfo, 0LL);
  RequestBase__addField_40882920((RequestBase_o *)this, (System_String_o *)StringLiteral_24441/*"verticalAccuracy"*/, verticalAccuracy, 0LL);
  timestamp = UnityEngine_LocationInfo__get_timestamp(locInfo, 0LL);
  RequestBase__addField_40883072((RequestBase_o *)this, (System_String_o *)StringLiteral_23858/*"timestamp"*/, timestamp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall EventLocationRequest__getURL(EventLocationRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A002B2 & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_19048/*"event/location"*/, v2);
    byte_4A002B2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_19048/*"event/location"*/, 0LL);
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
  System_String_o *v14; // x1
  __int64 *v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A002B4 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, responseList);
    sub_1B64A00(&JsonManager_TypeInfo, v5);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_21108/*"locationCampaign"*/, v7);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v8);
    sub_1B64A00(&StringLiteral_21972/*"ngParse"*/, v9);
    byte_4A002B4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(69, responseList, 0LL);
  if ( !v10 || (v11 = v10, !ResponseData__checkError_40851660(v10, 0LL)) )
  {
    v15 = &StringLiteral_21971/*"ng"*/;
LABEL_14:
    v14 = (System_String_o *)*v15;
    goto LABEL_15;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success;
  value = 0LL;
  if ( !success
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          success,
          (Il2CppObject *)StringLiteral_21108/*"locationCampaign"*/,
          &value,
          (const MethodInfo_317D4F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = &StringLiteral_21972/*"ngParse"*/;
    goto LABEL_14;
  }
  v13 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__toJson(v13, 0, 0, 0LL);
LABEL_15:
  RequestBase__completed((RequestBase_o *)this, v14, 0LL);
}


void __fastcall EventLocationRequest_LocationGift___ctor(
        EventLocationRequest_LocationGift_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}