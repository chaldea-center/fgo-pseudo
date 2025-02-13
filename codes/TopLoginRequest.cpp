void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__AddAppCheckField(TopLoginRequest_o *this, const MethodInfo *method)
{
  FirebaseScript_c *v3; // x0
  FirebaseScript_c *v4; // x0
  bool IsNullOrEmpty; // w20
  FirebaseScript_c *v6; // x0
  char v7; // w20
  System_String_o *v8; // x1
  System_String_o *AppCheckTokenError_k__BackingField; // x2
  FirebaseScript_c *v10; // x0
  __int64 *v11; // x9
  FirebaseScript_c *v12; // x0
  FirebaseScript_c *v13; // x0
  System_String_o *v14; // x20
  System_String_o *String_70827888; // x0

  if ( (byte_4BDDF8E & 1) == 0 )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    sub_1C21E38(&StringLiteral_14484/*"The token wasn't created in time"*/);
    sub_1C21E38(&StringLiteral_17093/*"appCheckPrevMessage"*/);
    sub_1C21E38(&StringLiteral_17094/*"appCheckToken"*/);
    sub_1C21E38(&StringLiteral_17092/*"appCheckErrorMessage"*/);
    sub_1C21E38(&StringLiteral_6887/*"Firebase wasn't available"*/);
    byte_4BDDF8E = 1;
  }
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BD6FF4 )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    byte_4BD6FF4 = 1;
  }
  v3 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v3 = FirebaseScript_TypeInfo;
  }
  if ( v3->static_fields->_CanUseFirebase_k__BackingField )
    goto LABEL_57;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4BDBE5A )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    byte_4BDBE5A = 1;
  }
  v3 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v3 = FirebaseScript_TypeInfo;
  }
  if ( !v3->static_fields->_IsFirebaseInitialized_k__BackingField )
  {
LABEL_57:
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4BDBE5C )
    {
      sub_1C21E38(&FirebaseScript_TypeInfo);
      byte_4BDBE5C = 1;
    }
    v4 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v4 = FirebaseScript_TypeInfo;
    }
    IsNullOrEmpty = System_String__IsNullOrEmpty(v4->static_fields->_AppCheckToken_k__BackingField, 0LL);
    if ( FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      if ( IsNullOrEmpty )
      {
LABEL_18:
        if ( !byte_4BDBE5D )
        {
          sub_1C21E38(&FirebaseScript_TypeInfo);
          byte_4BDBE5D = 1;
        }
        v6 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v6 = FirebaseScript_TypeInfo;
        }
        if ( System_String__IsNullOrEmpty(v6->static_fields->_AppCheckTokenError_k__BackingField, 0LL) )
        {
          RequestBase__addField_42414744(
            (RequestBase_o *)this,
            (System_String_o *)StringLiteral_17092/*"appCheckErrorMessage"*/,
            (System_String_o *)StringLiteral_14484/*"The token wasn't created in time"*/,
            0LL);
          v7 = 0;
          goto LABEL_47;
        }
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
        if ( !byte_4BDBE5D )
        {
          sub_1C21E38(&FirebaseScript_TypeInfo);
          byte_4BDBE5D = 1;
        }
        v12 = FirebaseScript_TypeInfo;
        if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
          v12 = FirebaseScript_TypeInfo;
        }
        v11 = &StringLiteral_17092/*"appCheckErrorMessage"*/;
        AppCheckTokenError_k__BackingField = v12->static_fields->_AppCheckTokenError_k__BackingField;
        goto LABEL_45;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      if ( IsNullOrEmpty )
        goto LABEL_18;
    }
    if ( !byte_4BDBE5C )
    {
      sub_1C21E38(&FirebaseScript_TypeInfo);
      byte_4BDBE5C = 1;
    }
    v10 = FirebaseScript_TypeInfo;
    if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
      v10 = FirebaseScript_TypeInfo;
    }
    v11 = &StringLiteral_17094/*"appCheckToken"*/;
    AppCheckTokenError_k__BackingField = v10->static_fields->_AppCheckToken_k__BackingField;
LABEL_45:
    v8 = (System_String_o *)*v11;
    goto LABEL_46;
  }
  v8 = (System_String_o *)StringLiteral_17092/*"appCheckErrorMessage"*/;
  AppCheckTokenError_k__BackingField = (System_String_o *)StringLiteral_6887/*"Firebase wasn't available"*/;
LABEL_46:
  RequestBase__addField_42414744((RequestBase_o *)this, v8, AppCheckTokenError_k__BackingField, 0LL);
  v7 = 1;
LABEL_47:
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
  if ( !byte_4BDBE59 )
  {
    sub_1C21E38(&FirebaseScript_TypeInfo);
    byte_4BDBE59 = 1;
  }
  v13 = FirebaseScript_TypeInfo;
  if ( !FirebaseScript_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FirebaseScript_TypeInfo);
    v13 = FirebaseScript_TypeInfo;
  }
  v13->static_fields->_IsSendAppCheckToken_k__BackingField = v7;
  v14 = (System_String_o *)StringLiteral_17093/*"appCheckPrevMessage"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_17093/*"appCheckPrevMessage"*/, 0LL) )
  {
    String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(v14, 0LL);
    RequestBase__addField_42414744((RequestBase_o *)this, v14, String_70827888, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v14, 0LL);
  }
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  if ( (byte_4BDDF8D & 1) == 0 )
  {
    sub_1C21E38(&TopLoginRequest_TypeInfo);
    byte_4BDDF8D = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  System_String_o *dataServerFolder; // x20
  _QWORD *UTF8; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x21
  uint32_t v8; // w21
  __int64 v9; // x22
  Il2CppObject *Item; // x0
  int64_t v11; // x0
  __int64 v12; // x9
  int32_t TerminalDispState; // w0
  const MethodInfo *v14; // x1

  if ( (byte_4BDDF8B & 1) == 0 )
  {
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17222/*"assetbundleFolder"*/);
    sub_1C21E38(&StringLiteral_24882/*"userState"*/);
    sub_1C21E38(&StringLiteral_21419/*"lastAccessTime"*/);
    sub_1C21E38(&StringLiteral_21201/*"isTerminalLogin"*/);
    byte_4BDDF8B = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD9C33 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD9C33 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v3->static_fields->dataServerFolder;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_21;
  v7 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 616LL))(
                              UTF8,
                              dataServerFolder,
                              *(_QWORD *)(*UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v8 = Crc32__Compute(v7, 0LL);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  UTF8 = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UTF8 = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !this->fields.paramString )
LABEL_21:
    sub_1C22094(UTF8, v6);
  v9 = *(_QWORD *)(UTF8[23] + 64LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21419/*"lastAccessTime"*/,
           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v11 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v11 < 0 )
    v12 = ~v11;
  else
    v12 = -v11;
  RequestBase__addField_42421084(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24882/*"userState"*/,
    (unsigned int)v9 & v8 ^ (unsigned __int64)(v12 >> 2),
    0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_17222/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21201/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  TopLoginRequest__AddAppCheckField(this, v14);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4BDDF8A & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TopLoginRequest_TypeInfo);
    byte_4BDDF8A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDF89 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9302/*"MockTopLoginRequest"*/);
    byte_4BDDF89 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9302/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDF88 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_21581/*"login/top"*/);
    byte_4BDDF88 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_21581/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v9; // x21
  ManagerConfig_c *v10; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v12; // x1
  int64_t birthDay; // x22
  Il2CppObject *v14; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v17; // x24
  int32_t Month; // w25
  BalanceConfig_c *v19; // x0
  int64_t NextDayTime_39808104; // x22
  int64_t v21; // x0
  int64_t v22; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v24; // x3
  Il2CppObject *success; // x20
  System_String_o *v26; // x1
  ResponseFailData_o *v27; // x21
  const MethodInfo *v28; // x2
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8

  if ( (byte_4BDDF8C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&ResponseFailData_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C21E38(&TopLoginRequest_TypeInfo);
    sub_1C21E38(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C21E38(&UserCommandCodeNewManager_TypeInfo);
    sub_1C21E38(&UserEquipNewManager_TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    sub_1C21E38(&UserServantNewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_18978/*"do_signup"*/);
    byte_4BDDF8C = 1;
  }
  dateData = 0LL;
  if ( (byte_4BDDF7E & 1) == 0 )
  {
    sub_1C21E38(&TopHomeRequest_TypeInfo);
    byte_4BDDF7E = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v5 )
    goto LABEL_68;
  v7 = v5;
  if ( !ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    v27 = (ResponseFailData_o *)sub_1C22084(ResponseFailData_TypeInfo);
    ResponseFailData___ctor(v27, v7, v28);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    if ( !v27 )
      goto LABEL_70;
    if ( System_String__op_Equality(v27->fields.action, (System_String_o *)StringLiteral_18978/*"do_signup"*/, 0LL) )
    {
      v26 = (System_String_o *)StringLiteral_18978/*"do_signup"*/;
      goto LABEL_69;
    }
LABEL_68:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v26 = (System_String_o *)StringLiteral_22456/*"ng"*/;
    goto LABEL_69;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v9 = SelfUserGame;
  v10 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v10 = ManagerConfig_TypeInfo;
  }
  if ( v10->static_fields->UseDebugCommand )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
    {
      birthDay = v9->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_39807076(birthDay, 0LL).fields._dateData;
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v9->fields.name;
      genderType = v9->fields.genderType;
      v17 = (NetworkManager_o *)v14;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v30.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v30, 0LL);
      v31.fields._dateData = (uint64_t)&dateData;
      Instance = (Il2CppObject *)System_DateTime__get_Day(v31, 0LL);
      if ( !v17 )
        goto LABEL_70;
      NetworkManager__SetSignup_39797000(v17, name, genderType, Month, (int32_t)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v9->fields.friendCode, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetUserId((AdManager_o *)Instance, v9->fields.userId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetFriendCode((AdManager_o *)Instance, v9->fields.friendCode, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  CrashReporter__SetUserId((CrashReporter_o *)Instance, v9->fields.friendCode, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  NextDayTime_39808104 = NetworkManager__getNextDayTime_39808104(v19->static_fields->RequestTopLoginResetTime1, 0LL);
  v21 = NetworkManager__getNextDayTime_39808104(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0LL);
  if ( NextDayTime_39808104 <= v21 )
    v22 = NextDayTime_39808104;
  else
    v22 = v21;
  TopLoginRequest_TypeInfo->static_fields->accessTime = v22;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__LoginProcess(0LL);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__LoginProcess(0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__LoginProcess(0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__LoginProcess(0LL);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__LoginProcess(0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__LoginProcess(0LL);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__LoginProcess(0LL);
  SoundPlayerComponent__LoginProcess(0LL);
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0LL);
  if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
  ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
  if ( UserGameEntity__HasFlag(v9, 0x2000000, 0LL) )
    goto LABEL_62;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
  Instance = (Il2CppObject *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_70;
  v12 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1C2209C(Instance, Instance);
  LODWORD(Instance[2].klass) = 25;
  if ( !Request_object )
LABEL_70:
    sub_1C22094(Instance, v12);
  UserStatusFlagSetRequest__beginRequest(
    (UserStatusFlagSetRequest_o *)Request_object,
    (System_Int32_array *)Instance,
    0LL,
    v24);
LABEL_62:
  success = (Il2CppObject *)v7->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_69:
  RequestBase__completed((RequestBase_o *)this, v26, 0LL);
}