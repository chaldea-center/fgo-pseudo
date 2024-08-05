void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFE58 & 1) == 0 )
  {
    sub_1B64870(&TopLoginRequest_TypeInfo, v1);
    byte_49FFE58 = 1;
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

  if ( (byte_49FFE56 & 1) == 0 )
  {
    sub_1B64870(&Crc32_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&StringLiteral_16870/*"assetbundleFolder"*/, v5);
    sub_1B64870(&StringLiteral_24346/*"userState"*/, v6);
    sub_1B64870(&StringLiteral_20962/*"lastAccessTime"*/, v7);
    sub_1B64870(&StringLiteral_20742/*"isTerminalLogin"*/, v8);
    byte_49FFE56 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__AddSignatureField((RequestBase_o *)this, v9);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49FBCFC )
  {
    sub_1B64870(&NetworkManager_TypeInfo, v11);
    byte_49FBCFC = 1;
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
    sub_1B64ACC(UTF8, v15);
  v18 = UTF8;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString,
           (Il2CppObject *)StringLiteral_20962/*"lastAccessTime"*/,
           (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v20 = System_Int64__Parse((System_String_o *)Item, 0LL);
  if ( v20 < 0 )
    v22 = ~v20;
  else
    v22 = -v20;
  RequestBase__addField_40854504(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24346/*"userState"*/,
    v18 & v17 ^ (unsigned __int64)(v22 >> 2),
    v21);
  RequestBase__addField_40856068((RequestBase_o *)this, (System_String_o *)StringLiteral_16870/*"assetbundleFolder"*/, dataServerFolder, v23);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20742/*"isTerminalLogin"*/, TerminalDispState, v25);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x0
  struct TopLoginRequest_StaticFields *static_fields; // x8

  if ( (byte_49FFE55 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&TopLoginRequest_TypeInfo, v2);
    byte_49FFE55 = 1;
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

  if ( (byte_49FFE54 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_9071/*"MockTopLoginRequest"*/, v2);
    byte_49FFE54 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9071/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFE53 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_21124/*"login/top"*/, v2);
    byte_49FFE53 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_21124/*"login/top"*/, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v32; // x21
  ManagerConfig_c *v33; // x0
  Il2CppObject *Instance; // x0
  Il2CppObject *v35; // x1
  int64_t birthDay; // x22
  Il2CppObject *v37; // x0
  System_String_o *name; // x23
  int32_t genderType; // w22
  NetworkManager_o *v40; // x24
  int32_t Month; // w25
  BalanceConfig_c *v42; // x0
  int64_t NextDayTime_38167464; // x22
  int64_t v44; // x0
  int64_t v45; // x9
  Il2CppObject *Request_object; // x21
  const MethodInfo *v47; // x3
  Il2CppObject *success; // x20
  System_String_o *v49; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v51; // x1
  ResponseFailData_o *v52; // x21
  const MethodInfo *v53; // x2
  struct NetworkManager_ResultCallbackFunc_o *v54; // x8
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8

  if ( (byte_49FFE57 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, responseList);
    sub_1B64870(&System_DateTime_TypeInfo, v5);
    sub_1B64870(&int___TypeInfo, v6);
    sub_1B64870(&JsonManager_TypeInfo, v7);
    sub_1B64870(&ManagerConfig_TypeInfo, v8);
    sub_1B64870(&Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&OtherUserNewManager_TypeInfo, v11);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v12);
    sub_1B64870(&ResponseFailData_TypeInfo, v13);
    sub_1B64870(&ServantCommentManager_TypeInfo, v14);
    sub_1B64870(&ServantProfileEventJoinManager_TypeInfo, v15);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v17);
    sub_1B64870(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v18);
    sub_1B64870(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v19);
    sub_1B64870(&TopLoginRequest_TypeInfo, v20);
    sub_1B64870(&UserCommandCodeCollectionManager_TypeInfo, v21);
    sub_1B64870(&UserCommandCodeNewManager_TypeInfo, v22);
    sub_1B64870(&UserEquipNewManager_TypeInfo, v23);
    sub_1B64870(&UserServantCollectionManager_TypeInfo, v24);
    sub_1B64870(&UserServantNewManager_TypeInfo, v25);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v26);
    sub_1B64870(&StringLiteral_18585/*"do_signup"*/, v27);
    byte_49FFE57 = 1;
  }
  dateData = 0LL;
  if ( (byte_49FFE49 & 1) == 0 )
  {
    sub_1B64870(&TopHomeRequest_TypeInfo, responseList);
    byte_49FFE49 = 1;
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
      v32 = SelfUserGame;
      v33 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v33 = ManagerConfig_TypeInfo;
      }
      if ( v33->static_fields->UseDebugCommand )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        if ( !NetworkManager__ReadSignup((NetworkManager_o *)Instance, 0LL) )
        {
          birthDay = v32->fields.birthDay;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          dateData = NetworkManager__getDateTime_38077776(birthDay, 0LL).fields._dateData;
          v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          name = v32->fields.name;
          genderType = v32->fields.genderType;
          v40 = (NetworkManager_o *)v37;
          if ( !System_DateTime_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
          v56.fields._dateData = (uint64_t)&dateData;
          Month = System_DateTime__get_Month(v56, 0LL);
          v57.fields._dateData = (uint64_t)&dateData;
          Instance = (Il2CppObject *)System_DateTime__get_Day(v57, 0LL);
          if ( !v40 )
            goto LABEL_74;
          NetworkManager__SetSignup_38156936(v40, name, genderType, Month, (int32_t)Instance, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_74;
          NetworkManager__WriteSignup((NetworkManager_o *)Instance, 0LL);
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      if ( !NetworkManager__ReadFriendCode((NetworkManager_o *)Instance, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__SetFriendCode((NetworkManager_o *)Instance, v32->fields.friendCode, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_74;
        NetworkManager__WriteFriendCode((NetworkManager_o *)Instance, 0LL);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__SetUserId((AdManager_o *)Instance, v32->fields.userId, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetFriendCode((AdManager_o *)Instance, v32->fields.friendCode, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
          if ( Instance )
          {
            CrashReporter__SetUserId((CrashReporter_o *)Instance, v32->fields.friendCode, 0LL);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NetworkManager__getTime(0LL);
            v42 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v42 = BalanceConfig_TypeInfo;
            }
            NextDayTime_38167464 = NetworkManager__getNextDayTime_38167464(
                                     v42->static_fields->RequestTopLoginResetTime1,
                                     0LL);
            v44 = NetworkManager__getNextDayTime_38167464(
                    BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                    0LL);
            if ( NextDayTime_38167464 <= v44 )
              v45 = NextDayTime_38167464;
            else
              v45 = v44;
            TopLoginRequest_TypeInfo->static_fields->accessTime = v45;
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
            if ( UserGameEntity__HasFlag(v32, 0x2000000, 0LL) )
            {
LABEL_62:
              success = (Il2CppObject *)v30->fields.success;
              if ( !JsonManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              v49 = JsonManager__toJson(success, 0, 0, 0LL);
              CallBack = this->fields.CallBack;
              if ( CallBack )
              {
                v51 = (__int64)v49;
LABEL_70:
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                  CallBack->fields.original_method_info,
                  v51,
                  *(_QWORD *)&CallBack->fields.extra_arg);
                return;
              }
              return;
            }
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Request_object = NetworkManager__getRequest_object_(
                               0LL,
                               (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_UserStatusFlagSetBackgroundRequest___);
            Instance = (Il2CppObject *)sub_1B64918(int___TypeInfo, 1LL);
            if ( Instance )
            {
              v35 = Instance;
              if ( !LODWORD(Instance[1].monitor) )
                sub_1B64AD4(Instance, Instance);
              LODWORD(Instance[2].klass) = 25;
              if ( Request_object )
              {
                UserStatusFlagSetRequest__beginRequest(
                  (UserStatusFlagSetRequest_o *)Request_object,
                  (System_Int32_array *)Instance,
                  0LL,
                  v47);
                goto LABEL_62;
              }
            }
          }
        }
      }
LABEL_74:
      sub_1B64ACC(Instance, v35);
    }
LABEL_71:
    TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
    v54 = this->fields.CallBack;
    if ( v54 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v54->fields.m_target)(
        v54->fields.original_method_info,
        StringLiteral_21971/*"ng"*/,
        *(_QWORD *)&v54->fields.extra_arg);
    return;
  }
  v52 = (ResponseFailData_o *)sub_1B64ABC(ResponseFailData_TypeInfo);
  ResponseFailData___ctor(v52, v30, v53);
  TopLoginRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !v52 )
    goto LABEL_74;
  if ( !System_String__op_Equality(v52->fields.action, (System_String_o *)StringLiteral_18585/*"do_signup"*/, 0LL) )
    goto LABEL_71;
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v51 = StringLiteral_18585/*"do_signup"*/;
    goto LABEL_70;
  }
}