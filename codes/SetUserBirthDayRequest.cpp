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
  System_DateTime_o v13; // x0
  System_DateTime_o v14; // x0
  int64_t Time_42128268; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2E4C1 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C94098(&StringLiteral_17245/*"birthDay"*/);
    byte_4D2E4C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v12);
  NetworkManager__SetSignup_42118972((NetworkManager_o *)Instance, normalName, genderType, month, day, 0);
  v13.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0;
  System_DateTime___ctor_65802860(v13, 2000, month, day, 0, 0, 0, 1, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14.fields._dateData = dateTime.fields._dateData;
  Time_42128268 = NetworkManager__getTime_42128268(v14, 0);
  RequestBase__addField_45013228((RequestBase_o *)this, (System_String_o *)StringLiteral_17245/*"birthDay"*/, Time_42128268, v16);
  RequestBase__beginRequest((RequestBase_o *)this, v17);
}


System_String_o *SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E4C0 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_23013/*"profile/editBirth"*/);
    byte_4D2E4C0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_23013/*"profile/editBirth"*/, 0);
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
  Il2CppObject *Instance; // x0
  System_String_o *m_CancellationTokenSource; // x22
  int32_t mAuGameServerPublicKey_high; // w21
  NetworkManager_o *v15; // x23
  System_DateTime_o v16; // x0
  int32_t Month; // w24
  System_DateTime_o v18; // x0
  Il2CppObject *success; // x20
  System_String_o *v20; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v22; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2E4C2 & 1) == 0 )
  {
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E4C2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(43, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_21;
    v10 = SelfUserGame;
    mAndroidApiKey = (int64_t)SelfUserGame->fields.mAndroidApiKey;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_42129048(mAndroidApiKey, 0).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    m_CancellationTokenSource = (System_String_o *)v10->fields.m_CancellationTokenSource;
    mAuGameServerPublicKey_high = HIDWORD(v10->fields.mAuGameServerPublicKey);
    v15 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v16.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v16, 0);
    v18.fields._dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v18, 0);
    if ( !v15
      || (NetworkManager__SetSignup_42118972(
            v15,
            m_CancellationTokenSource,
            mAuGameServerPublicKey_high,
            Month,
            (int32_t)SelfUserGame,
            0),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0) )
    {
LABEL_21:
      sub_1C942F0(SelfUserGame, v9);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0);
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v20,
        CallBack->fields.method);
  }
  else
  {
    v22 = this->fields.CallBack;
    if ( v22 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v22->fields.invoke_impl)(
        v22->fields.method_code,
        StringLiteral_22424/*"ng"*/,
        v22->fields.method);
  }
}