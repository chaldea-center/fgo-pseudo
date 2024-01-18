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
  __int64 v14; // x1
  int64_t Time_26270684; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_418BC5C & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, normalName);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_16720/*"birthDay"*/, v12);
    byte_418BC5C = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v14);
  NetworkManager__SetSignup_26258204(Instance, normalName, genderType, month, day, 0LL);
  v17.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15271124(v17, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v18.fields.dateData = dateTime.fields.dateData;
  Time_26270684 = NetworkManager__getTime_26270684(v18, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16720/*"birthDay"*/, Time_26270684, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418BC5B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_21544/*"profile/editBirth"*/, v2);
    byte_418BC5B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_21544/*"profile/editBirth"*/, 0LL);
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
  __int64 v12; // x1
  NetworkManager_o *v13; // x21
  int64_t mAndroidProjectId; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *mAndroidApiKey; // x22
  int32_t commandList_high; // w21
  NetworkManager_o *v18; // x23
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v21; // x1
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8

  if ( (byte_418BC5D & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    byte_418BC5D = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(42, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_31019724(v9, 0LL)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_20;
    v13 = SelfUserGame;
    mAndroidProjectId = (int64_t)SelfUserGame->fields.mAndroidProjectId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26271468(mAndroidProjectId, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    mAndroidApiKey = v13->fields.mAndroidApiKey;
    commandList_high = HIDWORD(v13->fields.commandList);
    v18 = (NetworkManager_o *)Instance;
    v23.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v23, 0LL);
    v24.fields.dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v24, 0LL);
    if ( !v18
      || (NetworkManager__SetSignup_26258204(v18, mAndroidApiKey, commandList_high, Month, (int32_t)SelfUserGame, 0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_20:
      sub_B2C434(SelfUserGame, v12);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v10->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v21 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v21, 0LL);
}