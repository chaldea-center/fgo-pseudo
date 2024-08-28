System_String_o *__fastcall TopSignupRequest__getMockData(TopSignupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A0A5D1 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0A5D1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall TopSignupRequest__getURL(TopSignupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A5D0 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_23243/*"signup/top"*/, v2);
    byte_4A0A5D0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_23243/*"signup/top"*/, 0LL);
}


void __fastcall TopSignupRequest__requestCompleted(
        TopSignupRequest_o *this,
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v13; // x20
  int64_t birthDay; // x21
  Il2CppObject *Instance; // x0
  System_String_o *name; // x22
  int32_t genderType; // w21
  NetworkManager_o *v18; // x23
  int32_t Month; // w24
  Il2CppObject *Day; // x0
  __int64 v21; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v23; // x9
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8

  if ( (byte_4A0A5D2 & 1) == 0 )
  {
    sub_1B686D4(&System_DateTime_TypeInfo, responseList);
    sub_1B686D4(&NetworkManager_TypeInfo, v5);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_22150/*"ok"*/, v8);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v9);
    byte_4A0A5D2 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(1, responseList, 0LL);
  if ( !v10
    || !ResponseData__checkError(v10, v10->fields.resCode, v11)
    || (SelfUserGame = UserGameMaster__getSelfUserGame(0LL)) == 0LL )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v23 = &StringLiteral_21981/*"ng"*/;
    goto LABEL_20;
  }
  v13 = SelfUserGame;
  birthDay = SelfUserGame->fields.birthDay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getDateTime_38135136(birthDay, 0LL).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  name = v13->fields.name;
  genderType = v13->fields.genderType;
  v18 = (NetworkManager_o *)Instance;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v25.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v25, 0LL);
  v26.fields._dateData = (uint64_t)&dateData;
  Day = (Il2CppObject *)System_DateTime__get_Day(v26, 0LL);
  if ( !v18
    || (NetworkManager__SetSignup_38214296(v18, name, genderType, Month, (int32_t)Day, 0LL),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
    || (NetworkManager__WriteSignup((NetworkManager_o *)Day, 0LL),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL)
    || (NetworkManager__SetFriendCode((NetworkManager_o *)Day, v13->fields.friendCode, 0LL),
        (Day = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__)) == 0LL) )
  {
    sub_1B68930(Day, v21);
  }
  NetworkManager__WriteFriendCode((NetworkManager_o *)Day, 0LL);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v23 = &StringLiteral_22150/*"ok"*/;
LABEL_20:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      *v23,
      *(_QWORD *)&CallBack->fields.extra_arg);
  }
}