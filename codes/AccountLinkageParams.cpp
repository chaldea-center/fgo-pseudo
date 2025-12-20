System_String_o *AccountLinkageParams__AddColorCodeBracket(System_String_o *userName, const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v3; // x20
  System_Text_RegularExpressions_MatchCollection_o *v4; // x0
  __int64 v5; // x1
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v7; // x0
  System_String_o *v8; // x1

  if ( (byte_4D2EDAE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Repeat_string___);
    sub_1C94098(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C94098(&StringLiteral_15880/*"[-]"*/);
    sub_1C94098(&StringLiteral_730/*"(\\[[0-9A-F]{6}\\])"*/);
    byte_4D2EDAE = 1;
  }
  v3 = (System_Text_RegularExpressions_Regex_o *)sub_1C942E4(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_70938516(v3, (System_String_o *)StringLiteral_730/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0);
  if ( !v3 || (v4 = System_Text_RegularExpressions_Regex__Matches_70934492(v3, userName, 0)) == 0 )
    sub_1C942F0(v4, v5);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v4, 0);
  v7 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                             (Il2CppObject *)StringLiteral_15880/*"[-]"*/,
                                                             Count,
                                                             (const MethodInfo_31CCD3C *)Method_System_Linq_Enumerable_Repeat_string___);
  v8 = System_String__Concat_64456780(v7, 0);
  return System_String__Concat_64417744(userName, v8, 0);
}


System_String_o *AccountLinkageParams__ConvertToBase64Url(System_Byte_array *bytes, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4D2EDAC & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&StringLiteral_1737/*"="*/);
    sub_1C94098(&StringLiteral_800/*"+"*/);
    sub_1C94098(&StringLiteral_858/*"-"*/);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2EDAC = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__ToBase64String(bytes, 0);
  if ( !v3
    || (v3 = System_String__Replace_64464308(
               v3,
               (System_String_o *)StringLiteral_800/*"+"*/,
               (System_String_o *)StringLiteral_858/*"-"*/,
               0)) == 0
    || (v3 = System_String__Replace_64464308(
               v3,
               (System_String_o *)StringLiteral_1041/*"/"*/,
               (System_String_o *)StringLiteral_16163/*"_"*/,
               0)) == 0 )
  {
    sub_1C942F0(v3, v4);
  }
  return System_String__Replace_64464308(
           v3,
           (System_String_o *)StringLiteral_1737/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


System_String_o *AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v4; // x21
  System_String_o *UserInfo; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_c *klass; // x8
  struct System_String_o *monitor; // x1
  struct System_String_o *fields; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v17; // x27
  __int64 v18; // x28
  struct AccountLinkageParams_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  Il2CppObject *v27; // x20
  AccountLinkageParams___c_c *v28; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v30; // x20
  Il2CppObject *v31; // x23
  struct AccountLinkageParams___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_string__o *v39; // x0
  Il2CppObject *v40; // x0

  if ( (byte_4D2EDA9 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
    sub_1C94098(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1C94098(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__);
    sub_1C94098(&AccountLinkageParams___c_TypeInfo);
    sub_1C94098(&System_Uri_TypeInfo);
    sub_1C94098(&StringLiteral_11488/*"S256"*/);
    sub_1C94098(&StringLiteral_18107/*"client_id"*/);
    sub_1C94098(&StringLiteral_22868/*"password_emailcode"*/);
    sub_1C94098(&StringLiteral_22477/*"nonce"*/);
    sub_1C94098(&StringLiteral_19912/*"game_id"*/);
    sub_1C94098(&StringLiteral_18129/*"code_challenge_method"*/);
    sub_1C94098(&StringLiteral_17026/*"auth_method"*/);
    sub_1C94098(&StringLiteral_500/*"&"*/);
    sub_1C94098(&StringLiteral_23220/*"redirect_uri"*/);
    sub_1C94098(&StringLiteral_25443/*"{0}?{1}"*/);
    sub_1C94098(&StringLiteral_22867/*"password"*/);
    sub_1C94098(&StringLiteral_18128/*"code_challenge"*/);
    byte_4D2EDA9 = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v4 = (System_Uri_o *)sub_1C942E4(System_Uri_TypeInfo);
  System_Uri___ctor(v4, authorizationUrl, 0);
  if ( !v4
    || (UserInfo = System_Uri__get_UserInfo(v4, 0)) == 0
    || (UserInfo = (System_String_o *)System_String__Split(UserInfo, 0x3Au, 0, 0)) == 0 )
  {
LABEL_23:
    sub_1C942F0(UserInfo, v6);
  }
  klass = UserInfo[1].klass;
  if ( klass )
  {
    if ( !(_DWORD)klass )
      sub_1C942F8(UserInfo);
    monitor = (struct System_String_o *)UserInfo[1].monitor;
    if ( (int)klass >= 2 )
    {
      fields = (struct System_String_o *)UserInfo[1].fields;
      goto LABEL_12;
    }
  }
  else
  {
    monitor = 0;
  }
  fields = 0;
LABEL_12:
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  v17 = StringLiteral_22868/*"password_emailcode"*/;
  v18 = StringLiteral_22867/*"password"*/;
  static_fields->basicUserName = monitor;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->basicUserName, (int32_t)monitor, v7, v8, v9, v10, v11, v12);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->basicPassword = fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->basicPassword, (int32_t)fields, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v26,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v26 )
    goto LABEL_23;
  if ( isTakeOver )
    v27 = (Il2CppObject *)v17;
  else
    v27 = (Il2CppObject *)v18;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_19912/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18107/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_23220/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_22477/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18128/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_18129/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11488/*"S256"*/,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v26,
    (Il2CppObject *)StringLiteral_17026/*"auth_method"*/,
    v27,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v28 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v28 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v28->static_fields->__9__21_0;
  v30 = (System_String_o *)StringLiteral_500/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = AccountLinkageParams___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v31,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0);
    v32 = AccountLinkageParams___c_TypeInfo->static_fields;
    v32->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->__9__21_0, (int32_t)_9__21_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_31CEBB0 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v40 = (Il2CppObject *)System_String__Join_64460336(v30, v39, 0);
  return System_String__Format_64459052(
           (System_String_o *)StringLiteral_25443/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v40,
           0);
}


void AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  System_String_o *RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  System_Byte_array *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x0
  struct AccountLinkageParams_StaticFields *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2EDAA & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    byte_4D2EDAA = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->codeVerifier,
    (int32_t)RandomStringForUrl,
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->codeChallenge, (int32_t)v13, v15, v16, v17, v18, v19, v20);
}


System_String_o *AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  const MethodInfo *v7; // x1

  if ( (byte_4D2EDAB & 1) == 0 )
  {
    sub_1C94098(&byte___TypeInfo);
    sub_1C94098(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    byte_4D2EDAB = 1;
  }
  v3 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1C942E4(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v3, 0);
  v4 = sub_1C94140(byte___TypeInfo, length);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  v6 = (System_Byte_array *)v4;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, const MethodInfo *))v3->klass->vtable._6_GetBytes.methodPtr)(
    v3,
    v4,
    v3->klass->vtable._6_GetBytes.method);
  return AccountLinkageParams__ConvertToBase64Url(v6, v7);
}


void AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct AccountLinkageParams_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct AccountLinkageParams_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct AccountLinkageParams_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct AccountLinkageParams_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct AccountLinkageParams_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct AccountLinkageParams_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct AccountLinkageParams_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct AccountLinkageParams_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  GrandQuestFolderBoardItem_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct AccountLinkageParams_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  struct AccountLinkageParams_StaticFields *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  struct AccountLinkageParams_StaticFields *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7

  if ( (byte_4D2EDAF & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams_TypeInfo);
    byte_4D2EDAF = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->authorizationCode, 0, v1, v2, v3, v4, v5, v6);
  v8 = AccountLinkageParams_TypeInfo->static_fields;
  v8->accountLinkageToken = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->accountLinkageToken, 0, v9, v10, v11, v12, v13, v14);
  v15 = AccountLinkageParams_TypeInfo->static_fields;
  v15->authorizationUrl = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v15->authorizationUrl, 0, v16, v17, v18, v19, v20, v21);
  v22 = AccountLinkageParams_TypeInfo->static_fields;
  v22->gameId = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v22->gameId, 0, v23, v24, v25, v26, v27, v28);
  v29 = AccountLinkageParams_TypeInfo->static_fields;
  v29->clientId = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v29->clientId, 0, v30, v31, v32, v33, v34, v35);
  v36 = AccountLinkageParams_TypeInfo->static_fields;
  v36->redirectUri = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v36->redirectUri, 0, v37, v38, v39, v40, v41, v42);
  v43 = AccountLinkageParams_TypeInfo->static_fields;
  v43->nonce = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v43->nonce, 0, v44, v45, v46, v47, v48, v49);
  v50 = AccountLinkageParams_TypeInfo->static_fields;
  v50->codeVerifier = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v50->codeVerifier, 0, v51, v52, v53, v54, v55, v56);
  v57 = AccountLinkageParams_TypeInfo->static_fields;
  v57->codeChallenge = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v57->codeChallenge, 0, v58, v59, v60, v61, v62, v63);
  v64 = AccountLinkageParams_TypeInfo->static_fields;
  v64->requestedAccountName = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v64->requestedAccountName, 0, v65, v66, v67, v68, v69, v70);
  v71 = AccountLinkageParams_TypeInfo->static_fields;
  v71->requestedAccountFriendCode = 0;
  v71 = (struct AccountLinkageParams_StaticFields *)((char *)v71 + 96);
  LODWORD(v71[-1].basicPassword) = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v71, 0, v72, v73, v74, v75, v76, v77);
  v78 = (GrandQuestFolderBoardItem_o *)AccountLinkageParams_TypeInfo->static_fields;
  v78->fields._Name_k__BackingField = 0;
  v78 = (GrandQuestFolderBoardItem_o *)((char *)v78 + 128);
  *(_QWORD *)&v78[-1].fields._IconId_k__BackingField = 0;
  LOBYTE(v78[-1].fields._ListCreatedTime_k__BackingField) = 0;
  v78[-1].fields._ClosedMessage_k__BackingField = 0;
  sub_1C9403C(v78, 0, v79, v80, v81, v82, v83, v84);
  v85 = AccountLinkageParams_TypeInfo->static_fields;
  v85->newSecretKey = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v85->newSecretKey, 0, v86, v87, v88, v89, v90, v91);
  v92 = AccountLinkageParams_TypeInfo->static_fields;
  v92->basicUserName = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92->basicUserName, 0, v93, v94, v95, v96, v97, v98);
  v99 = AccountLinkageParams_TypeInfo->static_fields;
  v99->basicPassword = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v99->basicPassword, 0, v100, v101, v102, v103, v104, v105);
}


System_Byte_array *AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_4D2EDAD & 1) == 0 )
  {
    sub_1C94098(&System_Security_Cryptography_SHA256Managed_TypeInfo);
    byte_4D2EDAD = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))ASCII->klass->vtable._18_GetBytes.methodPtr)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._18_GetBytes.method),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_1C942E4(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0),
        !v6) )
  {
    sub_1C942F0(ASCII, v4);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v6,
           v5,
           0);
}


void AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2EDB0 & 1) == 0 )
  {
    sub_1C94098(&AccountLinkageParams___c_TypeInfo);
    byte_4D2EDB0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AccountLinkageParams___c___ctor(AccountLinkageParams___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *AccountLinkageParams___c___GetAuthURL_b__21_0(
        AccountLinkageParams___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o pair,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20

  value = (Il2CppObject *)pair.fields.value;
  key = (Il2CppObject *)pair.fields.key;
  if ( (byte_4D2EDB1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C94098(&StringLiteral_25442/*"{0}={1}"*/);
    byte_4D2EDB1 = 1;
  }
  return System_String__Format_64459052((System_String_o *)StringLiteral_25442/*"{0}={1}"*/, key, value, 0);
}