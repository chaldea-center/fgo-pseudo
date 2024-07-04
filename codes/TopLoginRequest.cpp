void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E3FD4 & 1) == 0 )
  {
    sub_1B00CCC(&TopLoginRequest_TypeInfo, v1);
    byte_48E3FD4 = 1;
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
  __int64 v15; // x1
  System_Byte_array *v16; // x21
  uint32_t v17; // w21
  int v18; // w22
  Il2CppObject *Item; // x0
  int64_t v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x9
  const MethodInfo *v23; // x3
  int32_t TerminalDispState; // w0
  const MethodInfo *v25; // x3

  if ( (byte_48E3FD2 & 1) == 0 )
  {
    sub_1B00CCC(&Crc32_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_16703/*"assetbundleFolder"*/, v5);
    sub_1B00CCC(&StringLiteral_24080/*"userState"*/, v6);
    sub_1B00CCC(&StringLiteral_20759/*"lastAccessTime"*/, v7);
    sub_1B00CCC(&StringLiteral_20539/*"isTerminalLogin"*/, v8);
    byte_48E3FD2 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v9);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_48E00B1 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, v11);
    byte_48E00B1 = 1;
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
  v16 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v17 = Crc32__Compute(v16, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_17:
    sub_1B00F28(UTF8, v15);
  v18 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_20759/*"lastAccessTime"*/,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v20 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v20 < 0 )
    v22 = ~v20;
  else
    v22 = -v20;
  RequestBase__addField_39759196(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24080/*"userState"*/,
    v18 & v17 ^ (unsigned __int64)(v22 >> 2),
    v21);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_16703/*"assetbundleFolder"*/, dataServerFolder, v23);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20539/*"isTerminalLogin"*/, TerminalDispState, v25);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_48E3FD1 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&TopLoginRequest_TypeInfo, v2);
    byte_48E3FD1 = 1;
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

  if ( (byte_48E3FD0 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_9008/*"MockTopLoginRequest"*/, v2);
    byte_48E3FD0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9008/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3FCF & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_20921/*"login/top"*/, v2);
    byte_48E3FCF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_20921/*"login/top"*/, 0LL);
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
  ResponseData_o *v26; // x0
  const MethodInfo *v27; // x2
  ResponseData_o *v28; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v30; // x21
  ManagerConfig_c *v31; // x0
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  int64_t birthDay; // x22
  Il2CppObject *v35; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v38; // x24
  int32_t Month; // w25
  BalanceConfig_c *v40; // x0
  int64_t NextDayTime_37262740; // x21
  int64_t v42; // x0
  int64_t v43; // x9
  Il2CppObject *success; // x20
  System_String_o *v45; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v47; // x1
  ResponseFailData_o *v48; // x21
  const MethodInfo *v49; // x2
  struct NetworkManager_ResultCallbackFunc_o *v50; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8

  if ( (byte_48E3FD3 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, responseList);
    sub_1B00CCC(&System_DateTime_TypeInfo, v5);
    sub_1B00CCC(&JsonManager_TypeInfo, v6);
    sub_1B00CCC(&ManagerConfig_TypeInfo, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&OtherUserNewManager_TypeInfo, v9);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v10);
    sub_1B00CCC(&ResponseFailData_TypeInfo, v11);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v12);
    sub_1B00CCC(&ServantProfileEventJoinManager_TypeInfo, v13);
    sub_1B00CCC(&ServantProfileLimitCountManager_TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v17);
    sub_1B00CCC(&TopLoginRequest_TypeInfo, v18);
    sub_1B00CCC(&UserCommandCodeCollectionManager_TypeInfo, v19);
    sub_1B00CCC(&UserCommandCodeNewManager_TypeInfo, v20);
    sub_1B00CCC(&UserEquipNewManager_TypeInfo, v21);
    sub_1B00CCC(&UserServantCollectionManager_TypeInfo, v22);
    sub_1B00CCC(&UserServantNewManager_TypeInfo, v23);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v24);
    sub_1B00CCC(&StringLiteral_18405/*"do_signup"*/, v25);
    byte_48E3FD3 = 1;
  }
  dateData = 0LL;
  if ( (byte_48E3FC5 & 1) == 0 )
  {
    sub_1B00CCC(&TopHomeRequest_TypeInfo, responseList);
    byte_48E3FC5 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v26 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( !v26 )
    goto LABEL_64;
  v28 = v26;
  if ( ResponseData__checkError(v26, v26->fields.resCode, v27) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v30 = SelfUserGame;
      v31 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v31 = ManagerConfig_TypeInfo;
      }
      if ( v31->static_fields->UseDebugCommand )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
        {
          birthDay = v30->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_37173004(birthDay, 0LL).fields._dateData;
          v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v30->fields.name;
          genderType = v30->fields.genderType;
          v38 = (NetworkManager_o *)v35;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v52.fields._dateData = (uint64_t)&dateData;
          Month = System_DateTime__get_Month(v52, 0LL);
          v53.fields._dateData = (uint64_t)&dateData;
          Instance = (Il2CppObject *)System_DateTime__get_Day(v53, 0LL);
          if ( !v38 )
            goto LABEL_67;
          NetworkManager__SetSignup_37252204(v38, name, genderType, Month, (int32_t)Instance, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_67;
          NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v30->fields.friendCode, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v30->fields.userId, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v30->fields.friendCode, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            CrashReporter__SetUserId((CrashReporter_o *)Instance, v30->fields.friendCode, 0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NetworkManager__getTime(0LL);
            v40 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v40 = BalanceConfig_TypeInfo;
            }
            NextDayTime_37262740 = NetworkManager__getNextDayTime_37262740(
                                     v40->static_fields->RequestTopLoginResetTime1,
                                     0LL);
            v42 = NetworkManager__getNextDayTime_37262740(
                    BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                    0LL);
            if ( NextDayTime_37262740 <= v42 )
              v43 = NextDayTime_37262740;
            else
              v43 = v42;
            TopLoginRequest_TypeInfo->static_fields->accessTime = v43;
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
            success = (Il2CppObject *)v28->fields.success;
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v45 = JsonManager__toJson(success, 0, 0, 0LL);
            CallBack = this->fields.CallBack;
            if ( CallBack )
            {
              v47 = (__int64)v45;
LABEL_63:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                v47,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
        }
      }
LABEL_67:
      sub_1B00F28(Instance, v33);
    }
LABEL_64:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v50 = this->fields.CallBack;
    if ( v50 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v50->fields.m_target)(
        v50->fields.original_method_info,
        StringLiteral_21754/*"ng"*/,
        *(_QWORD *)&v50->fields.extra_arg);
    return;
  }
  v48 = (ResponseFailData_o *)sub_1B00F18(ResponseFailData_TypeInfo);
  ResponseFailData___ctor(v48, v28, v49);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !v48 )
    goto LABEL_67;
  if ( !System_String__op_Equality(v48->fields.action, (System_String_o *)StringLiteral_18405/*"do_signup"*/, 0LL) )
    goto LABEL_64;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v47 = StringLiteral_18405/*"do_signup"*/;
    goto LABEL_63;
  }
}