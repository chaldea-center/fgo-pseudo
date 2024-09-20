void __fastcall SetUserBirthDayRequest__beginRequest(
        SetUserBirthDayRequest_o *this,
        System_String_o *normalName,
        int32_t genderType,
        int32_t month,
        int32_t day,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int64_t Time_38478060; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  System_DateTime_o dateTime; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_4A5CACA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_17190/*"birthDay"*/);
    byte_4A5CACA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
  NetworkManager__SetSignup_38468812((NetworkManager_o *)Instance, normalName, genderType, month, day, 0LL);
  v17.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_62385856(v17, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v18.fields._dateData = dateTime.fields._dateData;
  Time_38478060 = NetworkManager__getTime_38478060(v18, 0LL);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_17190/*"birthDay"*/, Time_38478060, v14);
  RequestBase__beginRequest((RequestBase_o *)this, v15);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAC9 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22614/*"profile/editBirth"*/);
    byte_4A5CAC9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_22614/*"profile/editBirth"*/, 0LL);
}


void __fastcall SetUserBirthDayRequest__requestCompleted(
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
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v18; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v20; // x8
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_4A5CACB & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CACB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_21;
    v10 = SelfUserGame;
    mAndroidApiKey = (int64_t)SelfUserGame->fields.mAndroidApiKey;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_38478840(mAndroidApiKey, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    m_CancellationTokenSource = (System_String_o *)v10->fields.m_CancellationTokenSource;
    mAuGameServerPublicKey_high = HIDWORD(v10->fields.mAuGameServerPublicKey);
    v15 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v22.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v22, 0LL);
    v23.fields._dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v23, 0LL);
    if ( !v15
      || (NetworkManager__SetSignup_38468812(
            v15,
            m_CancellationTokenSource,
            mAuGameServerPublicKey_high,
            Month,
            (int32_t)SelfUserGame,
            0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_21:
      sub_1B8880C(SelfUserGame, v9);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v18 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v18,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v20 = this->fields.CallBack;
    if ( v20 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v20->fields.m_target)(
        v20->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v20->fields.extra_arg);
  }
}