void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2F8B1 & 1) == 0 )
  {
    sub_1B761C0(&TopLoginRequest_TypeInfo, v1);
    byte_4A2F8B1 = 1;
  }
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
}


void __fastcall TopLoginRequest__beginRequest(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  System_String_o *dataServerFolder; // x20
  int64_t UTF8; // x0
  __int64 v13; // x1
  System_Byte_array *v14; // x21
  uint32_t v15; // w21
  int v16; // w22
  Il2CppObject *Item; // x0
  int64_t v18; // x0
  __int64 v19; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_4A2F8AF & 1) == 0 )
  {
    sub_1B761C0(&Crc32_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B761C0(&NetworkManager_TypeInfo, v4);
    sub_1B761C0(&StringLiteral_16931/*"assetbundleFolder"*/, v5);
    sub_1B761C0(&StringLiteral_24428/*"userState"*/, v6);
    sub_1B761C0(&StringLiteral_21034/*"lastAccessTime"*/, v7);
    sub_1B761C0(&StringLiteral_20814/*"isTerminalLogin"*/, v8);
    byte_4A2F8AF = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A2B7FF )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, v9);
    byte_4A2B7FF = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v10->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_17;
  v14 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v15 = Crc32__Compute(v14, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_17:
    sub_1B7641C(UTF8, v13);
  v16 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_21034/*"lastAccessTime"*/,
           (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v18 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v18 < 0 )
    v19 = ~v18;
  else
    v19 = -v18;
  RequestBase__addField_40947456(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24428/*"userState"*/,
    v16 & v15 ^ (unsigned __int64)(v19 >> 2),
    0LL);
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_16931/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20814/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_4A2F8AE & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&TopLoginRequest_TypeInfo, v2);
    byte_4A2F8AE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  static_fields = TopLoginRequest_TypeInfo->static_fields;
  return Time <= static_fields->resetTime || Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F8AD & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_9108/*"MockTopLoginRequest"*/, v2);
    byte_4A2F8AD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9108/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F8AC & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_21196/*"login/top"*/, v2);
    byte_4A2F8AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_21196/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  ResponseData_o *v28; // x0
  ResponseData_o *v29; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v31; // x21
  ManagerConfig_c *v32; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v34; // x1
  int64_t birthDay; // x22
  Il2CppObject *v36; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v39; // x24
  int32_t Month; // w25
  BalanceConfig_c *v41; // x0
  int64_t NextDayTime_38297816; // x22
  int64_t v43; // x0
  int64_t v44; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v46; // x3
  Il2CppObject *success; // x20
  System_String_o *v48; // x1
  ResponseFailData_o *v49; // x21
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8

  if ( (byte_4A2F8B0 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, responseList);
    sub_1B761C0(&System_DateTime_TypeInfo, v5);
    sub_1B761C0(&int___TypeInfo, v6);
    sub_1B761C0(&JsonManager_TypeInfo, v7);
    sub_1B761C0(&ManagerConfig_TypeInfo, v8);
    sub_1B761C0(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1B761C0(&NetworkManager_TypeInfo, v10);
    sub_1B761C0(&OtherUserNewManager_TypeInfo, v11);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v12);
    sub_1B761C0(&ResponseFailData_TypeInfo, v13);
    sub_1B761C0(&ServantCommentManager_TypeInfo, v14);
    sub_1B761C0(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1B761C0(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B761C0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1B761C0(&TopLoginRequest_TypeInfo, v20);
    sub_1B761C0(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1B761C0(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1B761C0(&UserEquipNewManager_TypeInfo, v23);
    sub_1B761C0(&UserServantCollectionManager_TypeInfo, v24);
    sub_1B761C0(&UserServantNewManager_TypeInfo, v25);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v26);
    sub_1B761C0(&StringLiteral_18649/*"do_signup"*/, v27);
    byte_4A2F8B0 = 1;
  }
  dateData = 0LL;
  if ( (byte_4A2F8A2 & 1) == 0 )
  {
    sub_1B761C0(&TopHomeRequest_TypeInfo, responseList);
    byte_4A2F8A2 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v28 )
    goto LABEL_68;
  v29 = v28;
  if ( !ResponseData__checkError_40940600(v28, 0LL) )
  {
    v49 = (ResponseFailData_o *)sub_1B7640C(ResponseFailData_TypeInfo);
    ResponseFailData___ctor(v49, v29, 0LL);
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    if ( !v49 )
      goto LABEL_70;
    if ( System_String__op_Equality(v49->fields.action, (System_String_o *)StringLiteral_18649/*"do_signup"*/, 0LL) )
    {
      v48 = (System_String_o *)StringLiteral_18649/*"do_signup"*/;
      goto LABEL_69;
    }
LABEL_68:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v48 = (System_String_o *)StringLiteral_22046/*"ng"*/;
    goto LABEL_69;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_68;
  v31 = SelfUserGame;
  v32 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v32 = ManagerConfig_TypeInfo;
  }
  if ( v32->static_fields->UseDebugCommand )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
    {
      birthDay = v31->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_38208192(birthDay, 0LL).fields._dateData;
      v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      name = v31->fields.name;
      genderType = v31->fields.genderType;
      v39 = (NetworkManager_o *)v36;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v51.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v51, 0LL);
      v52.fields._dateData = (uint64_t)&dateData;
      Instance = (Il2CppObject *)System_DateTime__get_Day(v52, 0LL);
      if ( !v39 )
        goto LABEL_70;
      NetworkManager__SetSignup_38287288(v39, name, genderType, Month, (int32_t)Instance, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v31->fields.friendCode, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_70;
    NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetUserId((AdManager_o *)Instance, v31->fields.userId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  AdManager__SetFriendCode((AdManager_o *)Instance, v31->fields.friendCode, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  CrashReporter__SetUserId((CrashReporter_o *)Instance, v31->fields.friendCode, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  v41 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  NextDayTime_38297816 = NetworkManager__getNextDayTime_38297816(v41->static_fields->RequestTopLoginResetTime1, 0LL);
  v43 = NetworkManager__getNextDayTime_38297816(BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2, 0LL);
  if ( NextDayTime_38297816 <= v43 )
    v44 = NextDayTime_38297816;
  else
    v44 = v43;
  TopLoginRequest_TypeInfo->static_fields->accessTime = v44;
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
  if ( UserGameEntity__HasFlag(v31, 0x2000000, 0LL) )
    goto LABEL_62;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
  Instance = (Il2CppObject *)sub_1B76268(int___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_70;
  v34 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    sub_1B76424(Instance, Instance);
  LODWORD(Instance[2].klass) = 25;
  if ( !Request_object )
LABEL_70:
    sub_1B7641C(Instance, v34);
  UserStatusFlagSetRequest__beginRequest(
    (UserStatusFlagSetRequest_o *)Request_object,
    (System_Int32_array *)Instance,
    0LL,
    v46);
LABEL_62:
  success = (Il2CppObject *)v29->fields.success;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v48 = JsonManager__toJson(success, 0, 0, 0LL);
LABEL_69:
  RequestBase__completed((RequestBase_o *)this, v48, 0LL);
}