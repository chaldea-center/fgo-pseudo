void SetUserBirthDayRequest__beginRequest(
        SetUserBirthDayRequest_o *this,
        System_String_o *normalName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Time_48346468; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59724E1 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&StringLiteral_17901/*"birthDay"*/);
    byte_59724E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v12);
  NetworkManager__SetSignup_48337384((NetworkManager_o *)Instance, normalName, genderType, month, day, 0);
  dateTime.fields._dateData = 0;
  System_DateTime___ctor_77014684((System_DateTime_o)&dateTime, 2000, month, day, 0, 0, 0, 1, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Time_48346468 = NetworkManager__getTime_48346468(dateTime, 0);
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_17901/*"birthDay"*/, Time_48346468, v15);
  RequestBase__beginRequest((RequestBase_o *)this, v16);
}


System_String_o *SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724E0 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_23977/*"profile/editBirth"*/);
    byte_59724E0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_23977/*"profile/editBirth"*/, 0);
}


void SetUserBirthDayRequest__requestCompleted(
        SetUserBirthDayRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  NetworkManager_o *SelfUserGame; // x0
  __int64 v9; // x1
  NetworkManager_o *v10; // x21
  int64_t mAndroidApiKey; // x22
  __int64 v12; // x1
  Il2CppObject *Instance; // x23
  System_String_o *m_CancellationTokenSource; // x22
  int32_t mAuGameServerPublicKey_high; // w21
  int32_t Month; // w24
  __int64 v17; // x1
  Il2CppObject *success; // x20
  System_String_o *v19; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v21; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59724E2 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59724E2 = 1;
  }
  dateData = 0;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(43, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_21;
    v10 = SelfUserGame;
    mAndroidApiKey = (int64_t)SelfUserGame->fields.mAndroidApiKey;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    dateData = NetworkManager__getDateTime_48347260(mAndroidApiKey, 0).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    m_CancellationTokenSource = (System_String_o *)v10->fields.m_CancellationTokenSource;
    mAuGameServerPublicKey_high = HIDWORD(v10->fields.mAuGameServerPublicKey);
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v12);
    Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
    if ( !Instance
      || (NetworkManager__SetSignup_48337384(
            (NetworkManager_o *)Instance,
            m_CancellationTokenSource,
            mAuGameServerPublicKey_high,
            Month,
            (int32_t)SelfUserGame,
            0),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
LABEL_21:
      sub_2213CDC(SelfUserGame, v9);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0);
    success = (Il2CppObject *)v7->fields.success;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v17);
    v19 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v19,
        CallBack->fields.method);
  }
  else
  {
    v21 = this->fields.CallBack;
    if ( v21 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v21->fields.invoke_impl)(
        v21->fields.method_code,
        StringLiteral_23336/*"ng"*/,
        v21->fields.method);
  }
}