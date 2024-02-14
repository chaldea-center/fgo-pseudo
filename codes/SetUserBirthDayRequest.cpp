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
  int64_t Time_25503776; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8

  if ( (byte_4218A7E & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, normalName);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_16769/*"birthDay"*/, v12);
    byte_4218A7E = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  NetworkManager__SetSignup_25491296(Instance, normalName, genderType, month, day, 0LL);
  v16.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15034332(v16, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v17.fields.dateData = dateTime.fields.dateData;
  Time_25503776 = NetworkManager__getTime_25503776(v17, 0LL);
  RequestBase__addField_30435180((RequestBase_o *)this, (System_String_o *)StringLiteral_16769/*"birthDay"*/, Time_25503776, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4218A7D & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21614/*"profile/editBirth"*/, v2);
    byte_4218A7D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_21614/*"profile/editBirth"*/, 0LL);
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
  NetworkManager_o *SelfUserGame; // x0
  NetworkManager_o *v12; // x21
  int64_t mAndroidProjectId; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *mAndroidApiKey; // x22
  int32_t commandList_high; // w21
  NetworkManager_o *v17; // x23
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v20; // x1
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_4218A7F & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, responseList);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    byte_4218A7F = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(42, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_30403444(v9, 0LL)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_20;
    v12 = SelfUserGame;
    mAndroidProjectId = (int64_t)SelfUserGame->fields.mAndroidProjectId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_25504560(mAndroidProjectId, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    mAndroidApiKey = v12->fields.mAndroidApiKey;
    commandList_high = HIDWORD(v12->fields.commandList);
    v17 = (NetworkManager_o *)Instance;
    v22.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v22, 0LL);
    v23.fields.dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v23, 0LL);
    if ( !v17
      || (NetworkManager__SetSignup_25491296(v17, mAndroidApiKey, commandList_high, Month, (int32_t)SelfUserGame, 0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_20:
      sub_B0D97C(SelfUserGame);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v10->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v20 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v20, 0LL);
}