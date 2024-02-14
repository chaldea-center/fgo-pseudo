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
  __int64 v1; // x1
  TopLoginRequest_c *v2; // x0

  if ( (byte_421679E & 1) == 0 )
  {
    sub_B0D8A4(&TopLoginRequest_TypeInfo, v1);
    byte_421679E = 1;
  }
  v2 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v2 = TopLoginRequest_TypeInfo;
  }
  v2->static_fields->accessTime = 0LL;
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
  System_Byte_array *v13; // x21
  uint32_t v14; // w21
  int v15; // w22
  System_String_o *Item; // x0
  int64_t v17; // x0
  __int64 v18; // x9
  int32_t TerminalDispState; // w0

  if ( (byte_421679C & 1) == 0 )
  {
    sub_B0D8A4(&Crc32_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_16544/*"assetbundleFolder"*/, v5);
    sub_B0D8A4(&StringLiteral_23131/*"userState"*/, v6);
    sub_B0D8A4(&StringLiteral_20244/*"lastAccessTime"*/, v7);
    sub_B0D8A4(&StringLiteral_20022/*"isTerminalLogin"*/, v8);
    byte_421679C = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__AddSignatureField((RequestBase_o *)this, 0LL);
  RequestBase__addDeviceInfoField((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4210FB0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4210FB0 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v10->static_fields->dataServerFolder;
  UTF8 = (int64_t)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_19;
  v13 = (System_Byte_array *)(*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                               UTF8,
                               dataServerFolder,
                               *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v14 = Crc32__Compute(v13, 0LL);
  UTF8 = NetworkManager__get_UserId(0LL);
  if ( !this->fields.paramString )
LABEL_19:
    sub_B0D97C(UTF8);
  v15 = UTF8;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.paramString,
                              (System_Type_o *)StringLiteral_20244/*"lastAccessTime"*/,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  v17 = System_Int64__Parse(Item, 0LL);
  v18 = -v17;
  if ( v17 < 0 )
    v18 = ~v17;
  RequestBase__addField_30435180(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23131/*"userState"*/,
    v15 & v14 ^ (unsigned __int64)(v18 >> 2),
    0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_16544/*"assetbundleFolder"*/, dataServerFolder, 0LL);
  TerminalDispState = NetworkManager__GetTerminalDispState(0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20022/*"isTerminalLogin"*/, TerminalDispState, 0LL);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


bool __fastcall TopLoginRequest__checkExpirationDate(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  int64_t Time; // x19
  TopLoginRequest_c *v4; // x8
  struct TopLoginRequest_StaticFields *static_fields; // x9

  if ( (byte_421679B & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&TopLoginRequest_TypeInfo, v2);
    byte_421679B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v4 = TopLoginRequest_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( Time <= static_fields->resetTime )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = TopLoginRequest_TypeInfo->static_fields;
  }
  return Time <= static_fields->accessTime;
}


System_String_o *__fastcall TopLoginRequest__getMockData(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_421679A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9191/*"MockTopLoginRequest"*/, v2);
    byte_421679A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9191/*"MockTopLoginRequest"*/, 0LL);
}


System_String_o *__fastcall TopLoginRequest__getURL(TopLoginRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4216799 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_20375/*"login/top"*/, v2);
    byte_4216799 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_20375/*"login/top"*/, 0LL);
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
  TopHomeRequest_c *v27; // x0
  ResponseData_o *v28; // x0
  ResponseData_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v33; // x21
  ManagerConfig_c *v34; // x0
  NetworkManager_o *Instance; // x0
  int64_t birthDay; // x22
  WebViewManager_o *v37; // x0
  System_String_o *name; // x22
  int32_t genderType; // w23
  NetworkManager_o *v40; // x24
  int32_t Month; // w25
  BalanceConfig_c *v42; // x0
  int64_t NextDayTime_25505540; // x21
  int64_t v44; // x0
  TopLoginRequest_c *v45; // x8
  Il2CppObject *success; // x20
  System_String_o *v47; // x1
  ResponseFailData_o *v48; // x21
  TopLoginRequest_c *v49; // x0
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8

  if ( (byte_421679D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, responseList);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&OtherUserNewManager_TypeInfo, v8);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v9);
    sub_B0D8A4(&ResponseFailData_TypeInfo, v10);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v11);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v12);
    sub_B0D8A4(&ServantProfileLimitCountManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v16);
    sub_B0D8A4(&SoundPlayerComponent_TypeInfo, v17);
    sub_B0D8A4(&TopHomeRequest_TypeInfo, v18);
    sub_B0D8A4(&TopLoginRequest_TypeInfo, v19);
    sub_B0D8A4(&UserCommandCodeCollectionManager_TypeInfo, v20);
    sub_B0D8A4(&UserCommandCodeNewManager_TypeInfo, v21);
    sub_B0D8A4(&UserEquipNewManager_TypeInfo, v22);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v23);
    sub_B0D8A4(&UserServantNewManager_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v25);
    sub_B0D8A4(&StringLiteral_18095/*"do_signup"*/, v26);
    byte_421679D = 1;
  }
  dateData = 0LL;
  v27 = TopHomeRequest_TypeInfo;
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate((const MethodInfo *)v27);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v28 = ResponseCommandKind__SearchData(4, responseList, 0LL);
  if ( v28 )
  {
    v29 = v28;
    if ( ResponseData__checkError_30403444(v28, 0LL) )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        v33 = SelfUserGame;
        v34 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v34 = ManagerConfig_TypeInfo;
        }
        if ( v34->static_fields->UseDebugCommand )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          if ( !NetworkManager__ReadSignup(Instance, 0LL) )
          {
            birthDay = v33->fields.birthDay;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            dateData = NetworkManager__getDateTime_25504560(birthDay, 0LL).fields.dateData;
            v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            name = v33->fields.name;
            genderType = v33->fields.genderType;
            v40 = (NetworkManager_o *)v37;
            v51.fields.dateData = (uint64_t)&dateData;
            Month = System_DateTime__get_Month(v51, 0LL);
            v52.fields.dateData = (uint64_t)&dateData;
            Instance = (NetworkManager_o *)System_DateTime__get_Day(v52, 0LL);
            if ( !v40 )
              goto LABEL_88;
            NetworkManager__SetSignup_25491296(v40, name, genderType, Month, (int32_t)Instance, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
            if ( !Instance )
              goto LABEL_88;
            NetworkManager__WriteSignup(Instance, 0LL);
          }
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
        if ( !Instance )
          goto LABEL_88;
        if ( !NetworkManager__ReadFriendCode(Instance, 0LL) )
        {
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__SetFriendCode(Instance, v33->fields.friendCode, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
          if ( !Instance )
            goto LABEL_88;
          NetworkManager__WriteFriendCode(Instance, 0LL);
        }
        Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetUserId((AdManager_o *)Instance, v33->fields.userId, 0LL);
          Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
          if ( Instance )
          {
            AdManager__SetFriendCode((AdManager_o *)Instance, v33->fields.friendCode, 0LL);
            Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
            if ( Instance )
            {
              CrashReporter__SetUserId((CrashReporter_o *)Instance, v33->fields.friendCode, 0LL);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              NetworkManager__getTime(0LL);
              v42 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v42 = BalanceConfig_TypeInfo;
              }
              NextDayTime_25505540 = NetworkManager__getNextDayTime_25505540(
                                       v42->static_fields->RequestTopLoginResetTime1,
                                       0LL);
              v44 = NetworkManager__getNextDayTime_25505540(
                      BalanceConfig_TypeInfo->static_fields->RequestTopLoginResetTime2,
                      0LL);
              if ( NextDayTime_25505540 > v44 )
                NextDayTime_25505540 = v44;
              v45 = TopLoginRequest_TypeInfo;
              if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TopLoginRequest_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
                v45 = TopLoginRequest_TypeInfo;
              }
              v45->static_fields->accessTime = NextDayTime_25505540;
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
              success = (Il2CppObject *)v29->fields.success;
              if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !JsonManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
              }
              v47 = JsonManager__toJson(success, 0, 0, 0LL);
              goto LABEL_87;
            }
          }
        }
LABEL_88:
        sub_B0D97C(Instance);
      }
    }
    else
    {
      v48 = (ResponseFailData_o *)sub_B0D974(ResponseFailData_TypeInfo, v30, v31);
      ResponseFailData___ctor(v48, v29, 0LL);
      Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TopLoginRequest_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
        Instance = (NetworkManager_o *)TopLoginRequest_TypeInfo;
      }
      *((_QWORD *)Instance[1].monitor + 1) = 0LL;
      if ( !v48 )
        goto LABEL_88;
      if ( System_String__op_Equality(v48->fields.action, (System_String_o *)StringLiteral_18095/*"do_signup"*/, 0LL) )
      {
        v47 = (System_String_o *)StringLiteral_18095/*"do_signup"*/;
        goto LABEL_87;
      }
    }
  }
  v49 = TopLoginRequest_TypeInfo;
  if ( (BYTE3(TopLoginRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopLoginRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopLoginRequest_TypeInfo);
    v49 = TopLoginRequest_TypeInfo;
  }
  v49->static_fields->accessTime = 0LL;
  v47 = (System_String_o *)StringLiteral_21137/*"ng"*/;
LABEL_87:
  RequestBase__completed((RequestBase_o *)this, v47, 0LL);
}