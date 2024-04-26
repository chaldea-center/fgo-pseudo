void __fastcall TopLoginRequest___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall TopLoginRequest___ctor(TopLoginRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall TopLoginRequest__ResetAccesTime(const MethodInfo *method)
{
  TopLoginRequest_c *v1; // x0

  if ( (byte_4353D12 & 1) == 0 )
  {
    sub_B70694(&TopLoginRequest_TypeInfo);
    byte_4353D12 = 1;
  }
  v1 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v1 = TopLoginRequest_TypeInfo;
  }
  v1->static_fields->accessTime = 0LL;
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
  System_String_o *Item; // x0
  int64_t v11; // x0
  __int64 v12; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_4353D10 & 1) == 0 )
  {
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_16737/*"assetbundleFolder"*/);
    sub_B70694(&StringLiteral_23433/*"userState"*/);
    sub_B70694(&StringLiteral_20497/*"lastAccessTime"*/);
    sub_B70694(&StringLiteral_20272/*"isTerminalLogin"*/);
    byte_4353D10 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_434DCCC )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434DCCC = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v3->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_19;
  v7 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                              UTF8,
                              dataServerFolder,
                              *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v8 = Crc32__Compute(v7, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_19:
    sub_B7076C(UTF8, v6);
  v9 = UTF8;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.paramString,
                              (System_Type_o *)StringLiteral_20497/*"lastAccessTime"*/,
                              (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v11 = System_Int64__Parse(Item, 0LL);
  v12 = -v11;
  if ( v11 < 0 )
    v12 = ~v11;
  RequestBase__addField_32336108(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23433/*"userState"*/,
    v9 & v8 ^ (unsigned __int64)(v12 >> 2),
    0LL);
  RequestBase__addField_32336576((RequestBase_o *)this, (System_String_o *)StringLiteral_16737/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20272/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  int64_t Time; // x19
  TopLoginRequest_c *v3; // x8
  struct TopLoginRequest_StaticFields *static_fields; // x9

  if ( (byte_4353D0F & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TopLoginRequest_TypeInfo);
    byte_4353D0F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v3 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v3 = TopLoginRequest_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( Time <= static_fields->resetTime )
    return 1;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    static_fields = TopLoginRequest_TypeInfo->static_fields;
  }
  return Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4353D0E & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_9277/*"MockTopLoginRequest"*/);
    byte_4353D0E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9277/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4353D0D & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_20631/*"login/top"*/);
    byte_4353D0D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_20631/*"login/top"*/, 0LL);
}


void __fastcall TopLoginRequest__requestCompleted(
        TopLoginRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  TopHomeRequest_c *v5; // x0
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v9; // x21
  ManagerConfig_c *v10; // x0
  NetworkManager_o *Instance; // x0
  __int64 v12; // x1
  int64_t birthDay; // x22
  WebViewManager_o *v14; // x0
  System_String_o *name; // x22
  int32_t genderType; // w23
  NetworkManager_o *v17; // x24
  int32_t Month; // w25
  BalanceConfig_c *v19; // x0
  int64_t NextDayTime_25948788; // x21
  int64_t v21; // x0
  TopLoginRequest_c *v22; // x8
  Il2CppObject *success; // x20
  System_String_o *v24; // x1
  ResponseFailData_o *v25; // x21
  TopLoginRequest_c *v26; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8

  if ( (byte_4353D11 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OtherUserNewManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&ResponseFailData_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantProfileEventJoinManager_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&SoundPlayerComponent_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    sub_B70694(&TopLoginRequest_TypeInfo);
    sub_B70694(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B70694(&UserCommandCodeNewManager_TypeInfo);
    sub_B70694(&UserEquipNewManager_TypeInfo);
    sub_B70694(&UserServantCollectionManager_TypeInfo);
    sub_B70694(&UserServantNewManager_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_18313/*"do_signup"*/);
    byte_4353D11 = 1;
  }
  dateData = 0LL;
  v5 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v5);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v6 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( v6 )
  {
    v7 = v6;
    if ( ResponseData__checkError_29653500(v6, 0LL) )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        v9 = SelfUserGame;
        v10 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v10 = ManagerConfig_TypeInfo;
        }
        if ( v10->static_fields->UseDebugCommand )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          if ( !NetworkManager__ReadSignup(Instance, 0LL) )
          {
            birthDay = v9->fields.birthDay;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            dateData = NetworkManager__getDateTime_25947808(birthDay, 0LL).fields.dateData;
            v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            name = v9->fields.name;
            genderType = v9->fields.genderType;
            v17 = (NetworkManager_o *)v14;
            v28.fields.dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v28, 0LL);
            v29.fields.dateData = (uint64_t)&dateData;
            Instance = (NetworkManager_o *)System_DateTime__get_Day(v29, 0LL);
            if ( !v17 )
              goto LABEL_88;
            NetworkManager__SetSignup_25934352(v17, name, genderType, Month, (int32_t)Instance, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !Instance )
              goto LABEL_88;
            NetworkManager__WriteSignup(Instance, 0LL);
          }
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        if ( !NetworkManager__ReadFriendCode(Instance, 0LL) )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__SetFriendCode(Instance, v9->fields.friendCode, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__WriteFriendCode(Instance, 0LL);
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetUserId((AdManager_o *)Instance, v9->fields.userId, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
          if ( Instance )
          {
            AdManager__SetFriendCode((AdManager_o *)Instance, v9->fields.friendCode, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            if ( Instance )
            {
              CrashReporter__SetUserId((CrashReporter_o *)Instance, v9->fields.friendCode, 0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              NetworkManager__getTime(0LL);
              v19 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v19 = BalanceConfig_TypeInfo;
              }
              NextDayTime_25948788 = NetworkManager__getNextDayTime_25948788(
                                       v19->static_fields->RequestTopLoginResetTime1,
                                       0LL);
              v21 = NetworkManager__getNextDayTime_25948788(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0LL);
              if ( NextDayTime_25948788 > v21 )
                NextDayTime_25948788 = v21;
              v22 = TopLoginRequest_TypeInfo;
              if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TopLoginRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
                v22 = TopLoginRequest_TypeInfo;
              }
              v22->static_fields->accessTime = NextDayTime_25948788;
              if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
              }
              UserServantNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              }
              UserServantCollectionManager__LoginProcess(0LL);
              if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantCommentManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              }
              ServantCommentManager__LoginProcess(0LL);
              if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              }
              UserEquipNewManager__LoginProcess(0LL);
              if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
              }
              OtherUserNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
              }
              UserCommandCodeNewManager__LoginProcess(0LL);
              if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
              }
              UserCommandCodeCollectionManager__LoginProcess(0LL);
              if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
              }
              SoundPlayerComponent__LoginProcess(0LL);
              if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
              }
              ServantProfileLimitCountManager__UpdateProfileServantLimitCount(0LL);
              if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
              }
              ServantProfileEventJoinManager__UpdateProfileServantEventJoin(0LL);
              success = (Il2CppObject *)v7->fields.success;
              if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !JsonManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              }
              v24 = JsonManager__toJson(success, 0, 0, 0LL);
              goto LABEL_87;
            }
          }
        }
LABEL_88:
        sub_B7076C(Instance, v12);
      }
    }
    else
    {
      v25 = (ResponseFailData_o *)sub_B70764(ResponseFailData_TypeInfo);
      ResponseFailData___ctor(v25, v7, 0LL);
      Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TopLoginRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
        Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      }
      *((_QWORD *)Instance[1].monitor + 1) = 0LL;
      if ( !v25 )
        goto LABEL_88;
      if ( System_String__op_Equality(v25->fields.action, (System_String_o *)StringLiteral_18313/*"do_signup"*/, 0LL) )
      {
        v24 = (System_String_o *)StringLiteral_18313/*"do_signup"*/;
        goto LABEL_87;
      }
    }
  }
  v26 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v26 = TopLoginRequest_TypeInfo;
  }
  v26->static_fields->accessTime = 0LL;
  v24 = (System_String_o *)StringLiteral_21408/*"ng"*/;
LABEL_87:
  RequestBase__completed((RequestBase_o *)this, v24, 0LL);
}