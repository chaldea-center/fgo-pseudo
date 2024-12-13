System_String_o *__fastcall AccountLinkageParams__AddColorCodeBracket(
        System_String_o *userName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_RegularExpressions_Regex_o *v6; // x20
  System_Text_RegularExpressions_MatchCollection_o *v7; // x0
  __int64 v8; // x1
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_4B3937B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Repeat_string___, method);
    sub_1BD3458(&System_Text_RegularExpressions_Regex_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_16016/*"[-]"*/, v4);
    sub_1BD3458(&StringLiteral_778/*"(\\[[0-9A-F]{6}\\])"*/, v5);
    byte_4B3937B = 1;
  }
  v6 = (System_Text_RegularExpressions_Regex_o *)sub_1BD36A4(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_69086052(v6, (System_String_o *)StringLiteral_778/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v6 || (v7 = System_Text_RegularExpressions_Regex__Matches(v6, userName, 0LL)) == 0LL )
    sub_1BD36B4(v7, v8);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v7, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                              (Il2CppObject *)StringLiteral_16016/*"[-]"*/,
                                                              Count,
                                                              (const MethodInfo_2F5B328 *)Method_System_Linq_Enumerable_Repeat_string___);
  v11 = System_String__Concat_62537280(v10, 0LL);
  return System_String__Concat_62525248(userName, v11, 0LL);
}


System_String_o *__fastcall AccountLinkageParams__ConvertToBase64Url(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B39379 & 1) == 0 )
  {
    sub_1BD3458(&System_Convert_TypeInfo, method);
    sub_1BD3458(&StringLiteral_1857/*"="*/, v3);
    sub_1BD3458(&StringLiteral_855/*"+"*/, v4);
    sub_1BD3458(&StringLiteral_915/*"-"*/, v5);
    sub_1BD3458(&StringLiteral_16309/*"_"*/, v6);
    sub_1BD3458(&StringLiteral_1120/*"/"*/, v7);
    sub_1BD3458(&StringLiteral_1/*""*/, v8);
    byte_4B39379 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v9
    || (v9 = System_String__Replace_62544876(
               v9,
               (System_String_o *)StringLiteral_855/*"+"*/,
               (System_String_o *)StringLiteral_915/*"-"*/,
               0LL)) == 0LL
    || (v9 = System_String__Replace_62544876(
               v9,
               (System_String_o *)StringLiteral_1120/*"/"*/,
               (System_String_o *)StringLiteral_16309/*"_"*/,
               0LL)) == 0LL )
  {
    sub_1BD36B4(v9, v10);
  }
  return System_String__Replace_62544876(
           v9,
           (System_String_o *)StringLiteral_1857/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v24; // x21
  void *UserInfo; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  int64_t v34; // x1
  int64_t v35; // x21
  PartyOrganizationUtility_o *static_fields; // x0
  __int64 v37; // x27
  __int64 v38; // x28
  struct AccountLinkageParams_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_Dictionary_object__object__o *v46; // x21
  Il2CppObject *v47; // x20
  AccountLinkageParams___c_c *v48; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v50; // x20
  Il2CppObject *v51; // x23
  struct AccountLinkageParams___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_string__o *v59; // x0
  Il2CppObject *v60; // x0

  if ( (byte_4B39376 & 1) == 0 )
  {
    sub_1BD3458(&AccountLinkageParams_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v4);
    sub_1BD3458(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___, v6);
    sub_1BD3458(&System_Func_KeyValuePair_string__string___string__TypeInfo, v7);
    sub_1BD3458(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__, v8);
    sub_1BD3458(&AccountLinkageParams___c_TypeInfo, v9);
    sub_1BD3458(&System_Uri_TypeInfo, v10);
    sub_1BD3458(&StringLiteral_11572/*"S256"*/, v11);
    sub_1BD3458(&StringLiteral_18225/*"client_id"*/, v12);
    sub_1BD3458(&StringLiteral_22754/*"password_emailcode"*/, v13);
    sub_1BD3458(&StringLiteral_22383/*"nonce"*/, v14);
    sub_1BD3458(&StringLiteral_19935/*"game_id"*/, v15);
    sub_1BD3458(&StringLiteral_18249/*"code_challenge_method"*/, v16);
    sub_1BD3458(&StringLiteral_17165/*"auth_method"*/, v17);
    sub_1BD3458(&StringLiteral_530/*"&"*/, v18);
    sub_1BD3458(&StringLiteral_23097/*"redirect_uri"*/, v19);
    sub_1BD3458(&StringLiteral_25381/*"{0}?{1}"*/, v20);
    sub_1BD3458(&StringLiteral_22753/*"password"*/, v21);
    sub_1BD3458(&StringLiteral_18248/*"code_challenge"*/, v22);
    byte_4B39376 = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v24 = (System_Uri_o *)sub_1BD36A4(System_Uri_TypeInfo);
  System_Uri___ctor(v24, authorizationUrl, 0LL);
  if ( !v24
    || (UserInfo = System_Uri__get_UserInfo(v24, 0LL)) == 0LL
    || (UserInfo = System_String__Split((System_String_o *)UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1BD36B4(UserInfo, v26);
  }
  v33 = *((_QWORD *)UserInfo + 3);
  if ( v33 )
  {
    if ( !(_DWORD)v33 )
      sub_1BD36BC(UserInfo, v26);
    v34 = *((_QWORD *)UserInfo + 4);
    if ( (int)v33 >= 2 )
    {
      v35 = *((_QWORD *)UserInfo + 5);
      goto LABEL_12;
    }
  }
  else
  {
    v34 = 0LL;
  }
  v35 = 0LL;
LABEL_12:
  static_fields = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v37 = StringLiteral_22754/*"password_emailcode"*/;
  v38 = StringLiteral_22753/*"password"*/;
  static_fields[1].klass = (PartyOrganizationUtility_c *)v34;
  sub_1BD33FC(static_fields + 1, v34, v27, v28, v29, v30, v31, v32);
  v39 = AccountLinkageParams_TypeInfo->static_fields;
  v39->basicPassword = (struct System_String_o *)v35;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v39->basicPassword, v35, v40, v41, v42, v43, v44, v45);
  v46 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v46,
    (const MethodInfo_32839E4 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v46 )
    goto LABEL_23;
  if ( isTakeOver )
    v47 = (Il2CppObject *)v37;
  else
    v47 = (Il2CppObject *)v38;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_19935/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_18225/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_23097/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_22383/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_18248/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_18249/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11572/*"S256"*/,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v46,
    (Il2CppObject *)StringLiteral_17165/*"auth_method"*/,
    v47,
    (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v48 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v48 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v48->static_fields->__9__21_0;
  v50 = (System_String_o *)StringLiteral_530/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = AccountLinkageParams___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v51,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v52 = AccountLinkageParams___c_TypeInfo->static_fields;
    v52->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v52->__9__21_0, (int64_t)_9__21_0, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2F5CEA8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v60 = (Il2CppObject *)System_String__Join_62540904(v50, v59, 0LL);
  return System_String__Format_62539620(
           (System_String_o *)StringLiteral_25381/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v60,
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

  if ( (byte_4B39377 & 1) == 0 )
  {
    sub_1BD3458(&AccountLinkageParams_TypeInfo, v1);
    byte_4B39377 = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1BD33FC(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v14->codeChallenge, (int64_t)v13, v15, v16, v17, v18, v19, v20);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_4B39378 & 1) == 0 )
  {
    sub_1BD3458(&byte___TypeInfo, method);
    sub_1BD3458(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo, v3);
    byte_4B39378 = 1;
  }
  v4 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1BD36A4(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v4, 0LL);
  v5 = sub_1BD3500(byte___TypeInfo, length);
  if ( !v4 )
    sub_1BD36B4(v5, v6);
  v7 = (System_Byte_array *)v5;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_GetBytes.method)(
    v4,
    v5,
    v4->klass->vtable._7_GetBytes.methodPtr);
  return AccountLinkageParams__ConvertToBase64Url(v7, v8);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct AccountLinkageParams_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct AccountLinkageParams_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct AccountLinkageParams_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct AccountLinkageParams_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct AccountLinkageParams_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct AccountLinkageParams_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct AccountLinkageParams_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct AccountLinkageParams_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct AccountLinkageParams_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  PartyOrganizationUtility_o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct AccountLinkageParams_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  PartyOrganizationUtility_o *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct AccountLinkageParams_StaticFields *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7

  if ( (byte_4B3937C & 1) == 0 )
  {
    sub_1BD3458(&AccountLinkageParams_TypeInfo, v1);
    byte_4B3937C = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->authorizationCode, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = AccountLinkageParams_TypeInfo->static_fields;
  v9->accountLinkageToken = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v9->accountLinkageToken, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = AccountLinkageParams_TypeInfo->static_fields;
  v16->authorizationUrl = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v16->authorizationUrl, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->gameId = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->gameId, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = AccountLinkageParams_TypeInfo->static_fields;
  v30->clientId = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v30->clientId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = AccountLinkageParams_TypeInfo->static_fields;
  v37->redirectUri = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v37->redirectUri, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = AccountLinkageParams_TypeInfo->static_fields;
  v44->nonce = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v44->nonce, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = AccountLinkageParams_TypeInfo->static_fields;
  v51->codeVerifier = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v51->codeVerifier, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = AccountLinkageParams_TypeInfo->static_fields;
  v58->codeChallenge = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v58->codeChallenge, 0LL, v59, v60, v61, v62, v63, v64);
  v65 = AccountLinkageParams_TypeInfo->static_fields;
  v65->requestedAccountName = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v65->requestedAccountName, 0LL, v66, v67, v68, v69, v70, v71);
  v72 = AccountLinkageParams_TypeInfo->static_fields;
  v72->requestedAccountFriendCode = 0LL;
  v72 = (struct AccountLinkageParams_StaticFields *)((char *)v72 + 96);
  LODWORD(v72[-1].basicPassword) = 0;
  sub_1BD33FC((PartyOrganizationUtility_o *)v72, 0LL, v73, v74, v75, v76, v77, v78);
  v79 = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v79->fields._TransitionDestinationFromDetail_k__BackingField = 0LL;
  v79 = (PartyOrganizationUtility_o *)((char *)v79 + 128);
  v79[-1].fields.temporaryPartyInfo = 0LL;
  LOBYTE(v79[-1].fields._TransitionDestinationFromDetail_k__BackingField) = 0;
  *(_QWORD *)&v79[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
  sub_1BD33FC(v79, 0LL, v80, v81, v82, v83, v84, v85);
  v86 = AccountLinkageParams_TypeInfo->static_fields;
  v86->newSecretKey = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v86->newSecretKey, 0LL, v87, v88, v89, v90, v91, v92);
  v93 = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v93[1].klass = 0LL;
  sub_1BD33FC(v93 + 1, 0LL, v94, v95, v96, v97, v98, v99);
  v100 = AccountLinkageParams_TypeInfo->static_fields;
  v100->basicPassword = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v100->basicPassword, 0LL, v101, v102, v103, v104, v105, v106);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_4B3937A & 1) == 0 )
  {
    sub_1BD3458(&System_Security_Cryptography_SHA256Managed_TypeInfo, method);
    byte_4B3937A = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._19_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._20_GetBytes.methodPtr),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_1BD36A4(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0LL),
        !v6) )
  {
    sub_1BD36B4(ASCII, v4);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v6,
           v5,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3937D & 1) == 0 )
  {
    sub_1BD3458(&AccountLinkageParams___c_TypeInfo, v1);
    byte_4B3937D = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v5; // x1
  __int64 v6; // x1

  value = (Il2CppObject *)pair.fields.value;
  key = (Il2CppObject *)pair.fields.key;
  if ( (byte_4B3937E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, pair.fields.key);
    sub_1BD3458(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v5);
    sub_1BD3458(&StringLiteral_25379/*"{0}={1}"*/, v6);
    byte_4B3937E = 1;
  }
  return System_String__Format_62539620((System_String_o *)StringLiteral_25379/*"{0}={1}"*/, key, value, 0LL);
}