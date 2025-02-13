System_String_o *__fastcall AccountLinkageParams__AddColorCodeBracket(
        System_String_o *userName,
        const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v3; // x20
  System_Text_RegularExpressions_MatchCollection_o *v4; // x0
  __int64 v5; // x1
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v7; // x0
  System_String_o *v8; // x1

  if ( (byte_4BDE7B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Repeat_string___);
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&StringLiteral_16105/*"[-]"*/);
    sub_1C21E38(&StringLiteral_781/*"(\\[[0-9A-F]{6}\\])"*/);
    byte_4BDE7B4 = 1;
  }
  v3 = (System_Text_RegularExpressions_Regex_o *)sub_1C22084(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_69676796(v3, (System_String_o *)StringLiteral_781/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v3 || (v4 = System_Text_RegularExpressions_Regex__Matches_69672880(v3, userName, 0LL)) == 0LL )
    sub_1C22094(v4, v5);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v4, 0LL);
  v7 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                             (Il2CppObject *)StringLiteral_16105/*"[-]"*/,
                                                             Count,
                                                             (const MethodInfo_2FD9AC4 *)Method_System_Linq_Enumerable_Repeat_string___);
  v8 = System_String__Concat_63127508(v7, 0LL);
  return System_String__Concat_63115476(userName, v8, 0LL);
}


System_String_o *__fastcall AccountLinkageParams__ConvertToBase64Url(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4BDE7B2 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&StringLiteral_1862/*"="*/);
    sub_1C21E38(&StringLiteral_858/*"+"*/);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE7B2 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v3
    || (v3 = System_String__Replace_63135104(
               v3,
               (System_String_o *)StringLiteral_858/*"+"*/,
               (System_String_o *)StringLiteral_918/*"-"*/,
               0LL)) == 0LL
    || (v3 = System_String__Replace_63135104(
               v3,
               (System_String_o *)StringLiteral_1123/*"/"*/,
               (System_String_o *)StringLiteral_16399/*"_"*/,
               0LL)) == 0LL )
  {
    sub_1C22094(v3, v4);
  }
  return System_String__Replace_63135104(
           v3,
           (System_String_o *)StringLiteral_1862/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v4; // x21
  void *UserInfo; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x8
  int64_t v14; // x1
  int64_t v15; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v17; // x27
  __int64 v18; // x28
  struct AccountLinkageParams_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  Il2CppObject *v27; // x20
  AccountLinkageParams___c_c *v28; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v30; // x20
  Il2CppObject *v31; // x23
  struct AccountLinkageParams___c_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_string__o *v39; // x0
  Il2CppObject *v40; // x0

  if ( (byte_4BDE7AF & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
    sub_1C21E38(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1C21E38(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__);
    sub_1C21E38(&AccountLinkageParams___c_TypeInfo);
    sub_1C21E38(&System_Uri_TypeInfo);
    sub_1C21E38(&StringLiteral_11633/*"S256"*/);
    sub_1C21E38(&StringLiteral_18320/*"client_id"*/);
    sub_1C21E38(&StringLiteral_22889/*"password_emailcode"*/);
    sub_1C21E38(&StringLiteral_22514/*"nonce"*/);
    sub_1C21E38(&StringLiteral_20046/*"game_id"*/);
    sub_1C21E38(&StringLiteral_18344/*"code_challenge_method"*/);
    sub_1C21E38(&StringLiteral_17258/*"auth_method"*/);
    sub_1C21E38(&StringLiteral_532/*"&"*/);
    sub_1C21E38(&StringLiteral_23234/*"redirect_uri"*/);
    sub_1C21E38(&StringLiteral_25535/*"{0}?{1}"*/);
    sub_1C21E38(&StringLiteral_22888/*"password"*/);
    sub_1C21E38(&StringLiteral_18343/*"code_challenge"*/);
    byte_4BDE7AF = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v4 = (System_Uri_o *)sub_1C22084(System_Uri_TypeInfo);
  System_Uri___ctor(v4, authorizationUrl, 0LL);
  if ( !v4
    || (UserInfo = System_Uri__get_UserInfo(v4, 0LL)) == 0LL
    || (UserInfo = System_String__Split((System_String_o *)UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1C22094(UserInfo, v6);
  }
  v13 = *((_QWORD *)UserInfo + 3);
  if ( v13 )
  {
    if ( !(_DWORD)v13 )
      sub_1C2209C(UserInfo, v6);
    v14 = *((_QWORD *)UserInfo + 4);
    if ( (int)v13 >= 2 )
    {
      v15 = *((_QWORD *)UserInfo + 5);
      goto LABEL_12;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0LL;
LABEL_12:
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  v17 = StringLiteral_22889/*"password_emailcode"*/;
  v18 = StringLiteral_22888/*"password"*/;
  static_fields->basicUserName = (struct System_String_o *)v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->basicUserName, v14, v7, v8, v9, v10, v11, v12);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->basicPassword = (struct System_String_o *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->basicPassword, v15, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v26,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v26 )
    goto LABEL_23;
  if ( isTakeOver )
    v27 = (Il2CppObject *)v17;
  else
    v27 = (Il2CppObject *)v18;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_20046/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18320/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_23234/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_22514/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18343/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18344/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11633/*"S256"*/,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_17258/*"auth_method"*/,
    v27,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v28 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v28 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v28->static_fields->__9__21_0;
  v30 = (System_String_o *)StringLiteral_532/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = AccountLinkageParams___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v31,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v32 = AccountLinkageParams___c_TypeInfo->static_fields;
    v32->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v32->__9__21_0, (int64_t)_9__21_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2FDB644 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v40 = (Il2CppObject *)System_String__Join_63131132(v30, v39, 0LL);
  return System_String__Format_63129848(
           (System_String_o *)StringLiteral_25535/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v40,
           0LL);
}


void __fastcall AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  System_String_o *RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1
  System_Byte_array *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x0
  struct AccountLinkageParams_StaticFields *v14; // x8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDE7B0 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    byte_4BDE7B0 = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->codeVerifier,
    (int64_t)RandomStringForUrl,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v11 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v10);
  v13 = AccountLinkageParams__ConvertToBase64Url(v11, v12);
  v14 = AccountLinkageParams_TypeInfo->static_fields;
  v14->codeChallenge = v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->codeChallenge, (int64_t)v13, v15, v16, v17, v18, v19, v20);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  const MethodInfo *v7; // x1

  if ( (byte_4BDE7B1 & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    byte_4BDE7B1 = 1;
  }
  v3 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1C22084(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v3, 0LL);
  v4 = sub_1C21EE0(byte___TypeInfo, length);
  if ( !v3 )
    sub_1C22094(v4, v5);
  v6 = (System_Byte_array *)v4;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._6_GetBytes.method)(
    v3,
    v4,
    v3->klass->vtable._7_GetBytes.methodPtr);
  return AccountLinkageParams__ConvertToBase64Url(v6, v7);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct AccountLinkageParams_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct AccountLinkageParams_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct AccountLinkageParams_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct AccountLinkageParams_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct AccountLinkageParams_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct AccountLinkageParams_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct AccountLinkageParams_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct AccountLinkageParams_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct AccountLinkageParams_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  PartyOrganizationUtility_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct AccountLinkageParams_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct AccountLinkageParams_StaticFields *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct AccountLinkageParams_StaticFields *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7

  if ( (byte_4BDE7B5 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams_TypeInfo);
    byte_4BDE7B5 = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->authorizationCode, 0LL, v1, v2, v3, v4, v5, v6);
  v8 = AccountLinkageParams_TypeInfo->static_fields;
  v8->accountLinkageToken = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->accountLinkageToken, 0LL, v9, v10, v11, v12, v13, v14);
  v15 = AccountLinkageParams_TypeInfo->static_fields;
  v15->authorizationUrl = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v15->authorizationUrl, 0LL, v16, v17, v18, v19, v20, v21);
  v22 = AccountLinkageParams_TypeInfo->static_fields;
  v22->gameId = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v22->gameId, 0LL, v23, v24, v25, v26, v27, v28);
  v29 = AccountLinkageParams_TypeInfo->static_fields;
  v29->clientId = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->clientId, 0LL, v30, v31, v32, v33, v34, v35);
  v36 = AccountLinkageParams_TypeInfo->static_fields;
  v36->redirectUri = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->redirectUri, 0LL, v37, v38, v39, v40, v41, v42);
  v43 = AccountLinkageParams_TypeInfo->static_fields;
  v43->nonce = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v43->nonce, 0LL, v44, v45, v46, v47, v48, v49);
  v50 = AccountLinkageParams_TypeInfo->static_fields;
  v50->codeVerifier = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v50->codeVerifier, 0LL, v51, v52, v53, v54, v55, v56);
  v57 = AccountLinkageParams_TypeInfo->static_fields;
  v57->codeChallenge = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v57->codeChallenge, 0LL, v58, v59, v60, v61, v62, v63);
  v64 = AccountLinkageParams_TypeInfo->static_fields;
  v64->requestedAccountName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v64->requestedAccountName, 0LL, v65, v66, v67, v68, v69, v70);
  v71 = AccountLinkageParams_TypeInfo->static_fields;
  v71->requestedAccountFriendCode = 0LL;
  v71 = (struct AccountLinkageParams_StaticFields *)((char *)v71 + 96);
  LODWORD(v71[-1].basicPassword) = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)v71, 0LL, v72, v73, v74, v75, v76, v77);
  v78 = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v78->fields.CachedFriendshipUpItemInfo = 0LL;
  v78 = (PartyOrganizationUtility_o *)((char *)v78 + 128);
  v78[-1].fields.temporaryPartyInfo = 0LL;
  LOBYTE(v78[-1].fields._TransitionDestinationFromDetail_k__BackingField) = 0;
  *(_QWORD *)&v78[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
  sub_1C21DDC(v78, 0LL, v79, v80, v81, v82, v83, v84);
  v85 = AccountLinkageParams_TypeInfo->static_fields;
  v85->newSecretKey = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v85->newSecretKey, 0LL, v86, v87, v88, v89, v90, v91);
  v92 = AccountLinkageParams_TypeInfo->static_fields;
  v92->basicUserName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v92->basicUserName, 0LL, v93, v94, v95, v96, v97, v98);
  v99 = AccountLinkageParams_TypeInfo->static_fields;
  v99->basicPassword = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v99->basicPassword, 0LL, v100, v101, v102, v103, v104, v105);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_4BDE7B3 & 1) == 0 )
  {
    sub_1C21E38(&System_Security_Cryptography_SHA256Managed_TypeInfo);
    byte_4BDE7B3 = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._19_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._20_GetBytes.methodPtr),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_1C22084(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0LL),
        !v6) )
  {
    sub_1C22094(ASCII, v4);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v6,
           v5,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE7B6 & 1) == 0 )
  {
    sub_1C21E38(&AccountLinkageParams___c_TypeInfo);
    byte_4BDE7B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AccountLinkageParams___c___ctor(AccountLinkageParams___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageParams___c___GetAuthURL_b__21_0(
        AccountLinkageParams___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o pair,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20

  value = (Il2CppObject *)pair.fields.value;
  key = (Il2CppObject *)pair.fields.key;
  if ( (byte_4BDE7B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C21E38(&StringLiteral_25533/*"{0}={1}"*/);
    byte_4BDE7B7 = 1;
  }
  return System_String__Format_63129848((System_String_o *)StringLiteral_25533/*"{0}={1}"*/, key, value, 0LL);
}