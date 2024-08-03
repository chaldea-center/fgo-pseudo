void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FDD5D & 1) == 0 )
  {
    sub_1B640C8(&TopLoginRequest_TypeInfo, v1);
    byte_49FDD5D = 1;
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
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  System_String_o *dataServerFolder; // x20
  int64_t UTF8; // x0
  System_Byte_array *v15; // x21
  uint32_t v16; // w21
  int v17; // w22
  Il2CppObject *Item; // x0
  int64_t v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x9
  const MethodInfo *v22; // x3
  int32_t TerminalDispState; // w0
  const MethodInfo *v24; // x3

  if ( (byte_49FDD5B & 1) == 0 )
  {
    sub_1B640C8(&Crc32_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16868/*"assetbundleFolder"*/, v5);
    sub_1B640C8(&StringLiteral_24342/*"userState"*/, v6);
    sub_1B640C8(&StringLiteral_20959/*"lastAccessTime"*/, v7);
    sub_1B640C8(&StringLiteral_20739/*"isTerminalLogin"*/, v8);
    byte_49FDD5B = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v9);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F9C07 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    byte_49F9C07 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v12->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_17;
  v15 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v16 = Crc32__Compute(v15, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_17:
    sub_1B64324(UTF8);
  v17 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_20959/*"lastAccessTime"*/,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v19 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v19 < 0 )
    v21 = ~v19;
  else
    v21 = -v19;
  RequestBase__addField_40849372(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24342/*"userState"*/,
    v17 & v16 ^ (unsigned __int64)(v21 >> 2),
    v20);
  RequestBase__addField_40850936((RequestBase_o *)this, (System_String_o *)StringLiteral_16868/*"assetbundleFolder"*/, dataServerFolder, v22);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20739/*"isTerminalLogin"*/, TerminalDispState, v24);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_49FDD5A & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&TopLoginRequest_TypeInfo, v2);
    byte_49FDD5A = 1;
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

  if ( (byte_49FDD59 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9069/*"MockTopLoginRequest"*/, v2);
    byte_49FDD59 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9069/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDD58 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_21121/*"login/top"*/, v2);
    byte_49FDD58 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_21121/*"login/top"*/, 0LL);
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
  const MethodInfo *v29; // x2
  ResponseData_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v34; // x21
  ManagerConfig_c *v35; // x0
  Il2CppObject *Instance; // x0
  int64_t birthDay; // x22
  Il2CppObject *v38; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v41; // x24
  int32_t Month; // w25
  BalanceConfig_c *v43; // x0
  int64_t NextDayTime_38163100; // x22
  int64_t v45; // x0
  int64_t v46; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v48; // x3
  Il2CppObject *success; // x20
  System_String_o *v50; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v52; // x1
  ResponseFailData_o *v53; // x21
  const MethodInfo *v54; // x2
  struct NetworkManager_ResultCallbackFunc_o *v55; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8

  if ( (byte_49FDD5C & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, responseList);
    sub_1B640C8(&System_DateTime_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&OtherUserNewManager_TypeInfo, v11);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v12);
    sub_1B640C8(&ResponseFailData_TypeInfo, v13);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v14);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1B640C8(&TopLoginRequest_TypeInfo, v20);
    sub_1B640C8(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1B640C8(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v23);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v24);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v26);
    sub_1B640C8(&StringLiteral_18583/*"do_signup"*/, v27);
    byte_49FDD5C = 1;
  }
  dateData = 0LL;
  if ( (byte_49FDD4E & 1) == 0 )
  {
    sub_1B640C8(&TopHomeRequest_TypeInfo, responseList);
    byte_49FDD4E = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v28 )
    goto LABEL_71;
  v30 = v28;
  if ( ResponseData__checkError(v28, v28->fields.resCode, v29) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v34 = SelfUserGame;
      v35 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v35 = ManagerConfig_TypeInfo;
      }
      if ( v35->static_fields->UseDebugCommand )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
        {
          birthDay = v34->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_38073412(birthDay, 0LL).fields._dateData;
          v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v34->fields.name;
          genderType = v34->fields.genderType;
          v41 = (NetworkManager_o *)v38;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v57.fields._dateData = (uint64_t)&dateData;
          Month = System_DateTime__get_Month(v57, 0LL);
          v58.fields._dateData = (uint64_t)&dateData;
          Instance = (Il2CppObject *)System_DateTime__get_Day(v58, 0LL);
          if ( !v41 )
            goto LABEL_74;
          NetworkManager__SetSignup_38152572(v41, name, genderType, Month, (int32_t)Instance, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_74;
          NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v34->fields.friendCode, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v34->fields.userId, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v34->fields.friendCode, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            CrashReporter__SetUserId((CrashReporter_o *)Instance, v34->fields.friendCode, 0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NetworkManager__getTime(0LL);
            v43 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v43 = BalanceConfig_TypeInfo;
            }
            NextDayTime_38163100 = NetworkManager__getNextDayTime_38163100(
                                     v43->static_fields->RequestTopLoginResetTime1,
                                     0LL);
            v45 = NetworkManager__getNextDayTime_38163100(
                    BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                    0LL);
            if ( NextDayTime_38163100 <= v45 )
              v46 = NextDayTime_38163100;
            else
              v46 = v45;
            TopLoginRequest_TypeInfo->static_fields->accessTime = v46;
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
            if ( UserGameEntity__HasFlag(v34, 0x2000000, 0LL) )
            {
LABEL_62:
              success = (Il2CppObject *)v30->fields.success;
              if ( !JsonManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              v50 = JsonManager__toJson(success, 0, 0, 0LL);
              CallBack = this->fields.CallBack;
              if ( CallBack )
              {
                v52 = (__int64)v50;
LABEL_70:
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                  CallBack->fields.original_method_info,
                  v52,
                  *(_QWORD *)&CallBack->fields.extra_arg);
                return;
              }
              return;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               0LL,
                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
            Instance = (Il2CppObject *)sub_1B64170(int___TypeInfo, 1LL);
            if ( Instance )
            {
              if ( !LODWORD(Instance[1].monitor) )
                sub_1B6432C(Instance, Instance);
              LODWORD(Instance[2].klass) = 25;
              if ( Request_object )
              {
                UserStatusFlagSetRequest__beginRequest(
                  (UserStatusFlagSetRequest_o *)Request_object,
                  (System_Int32_array *)Instance,
                  0LL,
                  v48);
                goto LABEL_62;
              }
            }
          }
        }
      }
LABEL_74:
      sub_1B64324(Instance);
    }
LABEL_71:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v55 = this->fields.CallBack;
    if ( v55 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v55->fields.m_target)(
        v55->fields.original_method_info,
        StringLiteral_21968/*"ng"*/,
        *(_QWORD *)&v55->fields.extra_arg);
    return;
  }
  v53 = (ResponseFailData_o *)sub_1B64314(ResponseFailData_TypeInfo, v31, v32);
  ResponseFailData___ctor(v53, v30, v54);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !v53 )
    goto LABEL_74;
  if ( !System_String__op_Equality(v53->fields.action, (System_String_o *)StringLiteral_18583/*"do_signup"*/, 0LL) )
    goto LABEL_71;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v52 = StringLiteral_18583/*"do_signup"*/;
    goto LABEL_70;
  }
}