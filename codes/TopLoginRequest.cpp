void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  if ( (byte_4A5CAE5 & 1) == 0 )
  {
    sub_1B885B0(&TopLoginRequest_TypeInfo);
    byte_4A5CAE5 = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  System_String_o *dataServerFolder; // x20
  int64_t UTF8; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x21
  uint32_t v8; // w21
  int v9; // w22
  Il2CppObject *Item; // x0
  int64_t v11; // x0
  __int64 v12; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_4A5CAE3 & 1) == 0 )
  {
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16937/*"assetbundleFolder"*/);
    sub_1B885B0(&StringLiteral_24441/*"userState"*/);
    sub_1B885B0(&StringLiteral_21041/*"lastAccessTime"*/);
    sub_1B885B0(&StringLiteral_20821/*"isTerminalLogin"*/);
    byte_4A5CAE3 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A58A01 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A58A01 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v3->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_17;
  v7 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                              UTF8,
                              dataServerFolder,
                              *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v8 = Crc32__Compute(v7, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_17:
    sub_1B8880C(UTF8, v6);
  v9 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21041/*"lastAccessTime"*/,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v11 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v11 < 0 )
    v12 = ~v11;
  else
    v12 = -v11;
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24441/*"userState"*/,
    v9 & v8 ^ (unsigned __int64)(v12 >> 2),
    0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_16937/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20821/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4A5CAE2 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TopLoginRequest_TypeInfo);
    byte_4A5CAE2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CAE1 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9111/*"MockTopLoginRequest"*/);
    byte_4A5CAE1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9111/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CAE0 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_21203/*"login/top"*/);
    byte_4A5CAE0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_21203/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v8; // x21
  ManagerConfig_c *v9; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v11; // x1
  int64_t birthDay; // x22
  Il2CppObject *v13; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v16; // x24
  int32_t Month; // w25
  BalanceConfig_c *v18; // x0
  int64_t NextDayTime_38479868; // x22
  int64_t v20; // x0
  int64_t v21; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v23; // x3
  Il2CppObject *success; // x20
  System_String_o *v25; // x1
  ResponseFailData_o *v26; // x21
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8

  if ( (byte_4A5CAE4 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OtherUserNewManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&ResponseFailData_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&ServantProfileEventJoinManager_TypeInfo);
    sub_1B885B0(&ServantProfileLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1B885B0(&TopLoginRequest_TypeInfo);
    sub_1B885B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    sub_1B885B0(&UserServantCollectionManager_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_18656/*"do_signup"*/);
    byte_4A5CAE4 = 1;
  }
  dateData = 0LL;
  if ( (byte_4A5CAD6 & 1) == 0 )
  {
    sub_1B885B0(&TopHomeRequest_TypeInfo);
    byte_4A5CAD6 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v5 )
    goto LABEL_68;
  v6 = v5;
  if ( !ResponseData__checkError_41126424(v5, 0LL) )
  {
    v26 = (ResponseFailData_o *)sub_1B887FC(ResponseFailData_TypeInfo);
    ResponseFailData___ctor(v26, v6, 0LL);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    if ( !v26 )
      goto LABEL_70;
    if ( System_String__op_Equality(v26->fields.action, (System_String_o *)StringLiteral_18656/*"do_signup"*/, 0LL) )
    {
      v25 = (System_String_o *)StringLiteral_18656/*"do_signup"*/;
      goto LABEL_69;
    }
LABEL_68:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v25 = (System_String_o *)StringLiteral_22055/*"ng"*/;
    goto LABEL_69;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v8 = SelfUserGame;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseDebugCommand )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
    {
      birthDay = v8->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_38478840(birthDay, 0LL).fields._dateData;
      v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v8->fields.name;
      genderType = v8->fields.genderType;
      v16 = (NetworkManager_o *)v13;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v28.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v28, 0LL);
      v29.fields._dateData = (uint64_t)&dateData;
      Instance = (Il2CppObject *)System_DateTime__get_Day(v29, 0LL);
      if ( !v16 )
        goto LABEL_70;
      NetworkManager__SetSignup_38468812(v16, name, genderType, Month, (int32_t)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v8->fields.friendCode, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetUserId((AdManager_o *)Instance, v8->fields.userId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetFriendCode((AdManager_o *)Instance, v8->fields.friendCode, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  CrashReporter__SetUserId((CrashReporter_o *)Instance, v8->fields.friendCode, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  NextDayTime_38479868 = NetworkManager__getNextDayTime_38479868(v18->static_fields->RequestTopLoginResetTime1, 0LL);
  v20 = NetworkManager__getNextDayTime_38479868(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0LL);
  if ( NextDayTime_38479868 <= v20 )
    v21 = NextDayTime_38479868;
  else
    v21 = v20;
  TopLoginRequest_TypeInfo->static_fields->accessTime = v21;
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
  if ( UserGameEntity__HasFlag(v8, 0x2000000, 0LL) )
    goto LABEL_62;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
  Instance = (Il2CppObject *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_70;
  v11 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1B88814(Instance, Instance);
  LODWORD(Instance[2].klass) = 25;
  if ( !Request_object )
LABEL_70:
    sub_1B8880C(Instance, v11);
  UserStatusFlagSetRequest__beginRequest(
    (UserStatusFlagSetRequest_o *)Request_object,
    (System_Int32_array *)Instance,
    0LL,
    v23);
LABEL_62:
  success = (Il2CppObject *)v6->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v25 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_69:
  RequestBase__completed((RequestBase_o *)this, v25, 0LL);
}