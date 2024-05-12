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
  NetworkManager_o *Instance; // x0
  __int64 v12; // x1
  int64_t Time_26206600; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8

  if ( (byte_438F9AB & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&StringLiteral_17052/*"birthDay"*/);
    byte_438F9AB = 1;
  }
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v12);
  NetworkManager__SetSignup_26193488(Instance, normalName, genderType, month, day, 0LL);
  v15.fields.dateData = (uint64_t)&dateTime;
  dateTime.fields.dateData = 0LL;
  System_DateTime___ctor_15684052(v15, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v16.fields.dateData = dateTime.fields.dateData;
  Time_26206600 = NetworkManager__getTime_26206600(v16, 0LL);
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_17052/*"birthDay"*/, Time_26206600, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438F9AA & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_21999/*"profile/editBirth"*/);
    byte_438F9AA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_21999/*"profile/editBirth"*/, 0LL);
}


void __fastcall SetUserBirthDayRequest__requestCompleted(
        SetUserBirthDayRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  NetworkManager_o *SelfUserGame; // x0
  __int64 v8; // x1
  NetworkManager_o *v9; // x21
  int64_t mAndroidProjectId; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *mAndroidApiKey; // x22
  int32_t commandList_high; // w21
  NetworkManager_o *v14; // x23
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v17; // x1
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_438F9AC & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438F9AC = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_20;
    v9 = SelfUserGame;
    mAndroidProjectId = (int64_t)SelfUserGame->fields.mAndroidProjectId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    dateData = NetworkManager__getDateTime_26207384(mAndroidProjectId, 0LL).fields.dateData;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    mAndroidApiKey = v9->fields.mAndroidApiKey;
    commandList_high = HIDWORD(v9->fields.commandList);
    v14 = (NetworkManager_o *)Instance;
    v19.fields.dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v19, 0LL);
    v20.fields.dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v20, 0LL);
    if ( !v14
      || (NetworkManager__SetSignup_26193488(v14, mAndroidApiKey, commandList_high, Month, (int32_t)SelfUserGame, 0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_20:
      sub_B7769C(SelfUserGame, v8);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v17 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v17, 0LL);
}