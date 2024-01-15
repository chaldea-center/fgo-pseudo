void __fastcall SetUserBirthDayRequest___ctor(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall SetUserBirthDayRequest__beginRequest(
        SetUserBirthDayRequest_o *this,
        System_String_o *normalName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  NetworkManager_o *Instance; // x0
  int64_t Time_23684488; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8

  if ( (byte_40FF33E & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, normalName);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_16656/*"birthDay"*/, v12);
    byte_40FF33E = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  NetworkManager__SetSignup_23672008(Instance, normalName, genderType, month, day, 0LL);
  v16.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15185440(v16, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v17.fields.dateData = dateTime.fields.dateData;
  Time_23684488 = NetworkManager__getTime_23684488(v17, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_16656/*"birthDay"*/, Time_23684488, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FF33D & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21452/*"profile/editBirth"*/, v2);
    byte_40FF33D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_21452/*"profile/editBirth"*/, 0LL);
}


void __fastcall SetUserBirthDayRequest__requestCompleted(
        SetUserBirthDayRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v12; // x21
  int64_t birthDay; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v17; // x23
  int32_t Month; // w24
  int32_t Day; // w0
  NetworkManager_o *v20; // x0
  Il2CppObject *success; // x20
  System_String_o *v22; // x1
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8

  if ( (byte_40FF33F & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    byte_40FF33F = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(42, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_30924960(v9, 0LL)) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_20;
    v12 = SelfUserGame;
    birthDay = SelfUserGame->fields.birthDay;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_23685272(birthDay, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    name = v12->fields.name;
    genderType = v12->fields.genderType;
    v17 = (NetworkManager_o *)Instance;
    v24.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v24, 0LL);
    v25.fields.dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v25, 0LL);
    if ( !v17
      || (NetworkManager__SetSignup_23672008(v17, name, genderType, Month, Day, 0LL),
          (v20 = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_20:
      sub_B170D4();
    }
    NetworkManager__WriteSignup(v20, 0LL);
    success = (Il2CppObject *)v10->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v22 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}