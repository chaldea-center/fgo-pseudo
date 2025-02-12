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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int64_t Time_39706024; // x0
  System_DateTime_o dateTime; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_4BB60E3 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, normalName);
    sub_1C13D24(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v11);
    sub_1C13D24(&StringLiteral_17453/*"bgmStop"*/, v12);
    byte_4BB60E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v14);
  NetworkManager__SetSignup_39696728((NetworkManager_o *)Instance, normalName, genderType, month, day, 0LL);
  v17.fields._dateData = (uint64_t)&dateTime;
  dateTime.fields._dateData = 0LL;
  System_DateTime___ctor_63647096(v17, 2000, month, day, 0, 0, 0, 1, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v18.fields._dateData = dateTime.fields._dateData;
  Time_39706024 = NetworkManager__getTime_39706024(v18, 0LL);
  RequestBase__addField_42309896((RequestBase_o *)this, (System_String_o *)StringLiteral_17453/*"bgmStop"*/, Time_39706024, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall SetUserBirthDayRequest__getURL(SetUserBirthDayRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB60E2 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_22989/*"price_currency_code"*/, v2);
    byte_4BB60E2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_22989/*"price_currency_code"*/, 0LL);
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
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  NetworkManager_o *SelfUserGame; // x0
  __int64 v14; // x1
  NetworkManager_o *v15; // x21
  int64_t mAndroidApiKey; // x22
  Il2CppObject *Instance; // x0
  System_String_o *m_CancellationTokenSource; // x22
  int32_t mAuGameServerPublicKey_high; // w21
  NetworkManager_o *v20; // x23
  int32_t Month; // w24
  Il2CppObject *success; // x20
  System_String_o *v23; // x1
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8

  if ( (byte_4BB60E4 & 1) == 0 )
  {
    sub_1C13D24(&System_DateTime_TypeInfo, responseList);
    sub_1C13D24(&JsonManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&ResponseCommandKind_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v8);
    sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v9);
    byte_4BB60E4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(43, responseList, 0LL);
  if ( v10 && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11)) )
  {
    SelfUserGame = (NetworkManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_19;
    v15 = SelfUserGame;
    mAndroidApiKey = (int64_t)SelfUserGame->fields.mAndroidApiKey;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_39706804(mAndroidApiKey, 0LL).fields._dateData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    m_CancellationTokenSource = (System_String_o *)v15->fields.m_CancellationTokenSource;
    mAuGameServerPublicKey_high = HIDWORD(v15->fields.mAuGameServerPublicKey);
    v20 = (NetworkManager_o *)Instance;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v25.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v25, 0LL);
    v26.fields._dateData = (uint64_t)&dateData;
    SelfUserGame = (NetworkManager_o *)System_DateTime__get_Day(v26, 0LL);
    if ( !v20
      || (NetworkManager__SetSignup_39696728(
            v20,
            m_CancellationTokenSource,
            mAuGameServerPublicKey_high,
            Month,
            (int32_t)SelfUserGame,
            0LL),
          (SelfUserGame = (NetworkManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
    {
LABEL_19:
      sub_1C13F80(SelfUserGame, v14);
    }
    NetworkManager__WriteSignup(SelfUserGame, 0LL);
    success = (Il2CppObject *)v12->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v23 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v23 = (System_String_o *)StringLiteral_22421/*"newAttributes"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v23, 0LL);
}