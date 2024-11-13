System_String_o *__fastcall AccountLinkageParams__AddColorCodeBracket(
        System_String_o *userName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Text_RegularExpressions_Regex_o *v11; // x20
  System_Text_RegularExpressions_MatchCollection_o *v12; // x0
  __int64 v13; // x1
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4B183AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Repeat_string___, method, v2);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_778/*"(\\[[0-9A-F]{6}\\])"*/, v9, v10);
    byte_4B183AA = 1;
  }
  v11 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(
                                                    System_Text_RegularExpressions_Regex_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Text_RegularExpressions_Regex___ctor_68962024(v11, (System_String_o *)StringLiteral_778/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v11 || (v12 = System_Text_RegularExpressions_Regex__Matches(v11, userName, 0LL)) == 0LL )
    sub_1BCAA3C(v12, v13);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v12, 0LL);
  v15 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                              (Il2CppObject *)StringLiteral_15997/*"[-]"*/,
                                                              Count,
                                                              (const MethodInfo_2F3BF7C *)Method_System_Linq_Enumerable_Repeat_string___);
  v16 = System_String__Concat_62413252(v15, 0LL);
  return System_String__Concat_62401220(userName, v16, 0LL);
}


System_String_o *__fastcall AccountLinkageParams__ConvertToBase64Url(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  __int64 v17; // x1

  if ( (byte_4B183A8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1849/*"="*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B183A8 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, method);
  v16 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v16
    || (v16 = System_String__Replace_62420848(
                v16,
                (System_String_o *)StringLiteral_855/*"+"*/,
                (System_String_o *)StringLiteral_915/*"-"*/,
                0LL)) == 0LL
    || (v16 = System_String__Replace_62420848(
                v16,
                (System_String_o *)StringLiteral_1120/*"/"*/,
                (System_String_o *)StringLiteral_16290/*"_"*/,
                0LL)) == 0LL )
  {
    sub_1BCAA3C(v16, v17);
  }
  return System_String__Replace_62420848(
           v16,
           (System_String_o *)StringLiteral_1849/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v46; // x21
  void *UserInfo; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x8
  int64_t v56; // x1
  int64_t v57; // x21
  PartyOrganizationUtility_o *static_fields; // x0
  __int64 v59; // x27
  __int64 v60; // x28
  struct AccountLinkageParams_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_Dictionary_object__object__o *v71; // x21
  Il2CppObject *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  AccountLinkageParams___c_c *v76; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v78; // x20
  Il2CppObject *v79; // x23
  struct AccountLinkageParams___c_StaticFields *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_IEnumerable_string__o *v87; // x0
  Il2CppObject *v88; // x0

  if ( (byte_4B183A5 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___, v11, v12);
    sub_1BCA7E0(&System_Func_KeyValuePair_string__string___string__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__, v15, v16);
    sub_1BCA7E0(&AccountLinkageParams___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Uri_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_11553/*"S256"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_18198/*"client_id"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22720/*"password_emailcode"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22350/*"nonce"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_19905/*"game_id"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_18222/*"code_challenge_method"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17144/*"auth_method"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_530/*"&"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_23063/*"redirect_uri"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_25346/*"{0}?{1}"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_22719/*"password"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_18221/*"code_challenge"*/, v43, v44);
    byte_4B183A5 = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v46 = (System_Uri_o *)sub_1BCAA2C(System_Uri_TypeInfo, method, v2, v3);
  System_Uri___ctor(v46, authorizationUrl, 0LL);
  if ( !v46
    || (UserInfo = System_Uri__get_UserInfo(v46, 0LL)) == 0LL
    || (UserInfo = System_String__Split((System_String_o *)UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1BCAA3C(UserInfo, v48);
  }
  v55 = *((_QWORD *)UserInfo + 3);
  if ( v55 )
  {
    if ( !(_DWORD)v55 )
      sub_1BCAA44(UserInfo, v48);
    v56 = *((_QWORD *)UserInfo + 4);
    if ( (int)v55 >= 2 )
    {
      v57 = *((_QWORD *)UserInfo + 5);
      goto LABEL_12;
    }
  }
  else
  {
    v56 = 0LL;
  }
  v57 = 0LL;
LABEL_12:
  static_fields = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v59 = StringLiteral_22720/*"password_emailcode"*/;
  v60 = StringLiteral_22719/*"password"*/;
  static_fields[1].klass = (PartyOrganizationUtility_c *)v56;
  sub_1BCA784(static_fields + 1, v56, v49, v50, v51, v52, v53, v54);
  v61 = AccountLinkageParams_TypeInfo->static_fields;
  v61->basicPassword = (struct System_String_o *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v61->basicPassword, v57, v62, v63, v64, v65, v66, v67);
  v71 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v68,
                                                                     v69,
                                                                     v70);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v71,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v71 )
    goto LABEL_23;
  if ( isTakeOver )
    v72 = (Il2CppObject *)v59;
  else
    v72 = (Il2CppObject *)v60;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_19905/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_18198/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_23063/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_22350/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_18221/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_18222/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11553/*"S256"*/,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v71,
    (Il2CppObject *)StringLiteral_17144/*"auth_method"*/,
    v72,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v76 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo, v73);
    v76 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v76->static_fields->__9__21_0;
  v78 = (System_String_o *)StringLiteral_530/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76, v73);
      v76 = AccountLinkageParams___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_KeyValuePair_string__string___string__TypeInfo,
                                              v73,
                                              v74,
                                              v75);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v79,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v80 = AccountLinkageParams___c_TypeInfo->static_fields;
    v80->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v80->__9__21_0, (int64_t)_9__21_0, v81, v82, v83, v84, v85, v86);
  }
  v87 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v71,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2F3DAFC *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v88 = (Il2CppObject *)System_String__Join_62416876(v78, v87, 0LL);
  return System_String__Format_62415592(
           (System_String_o *)StringLiteral_25346/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v88,
           0LL);
}


void __fastcall AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  System_String_o *RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  System_Byte_array *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x0
  struct AccountLinkageParams_StaticFields *v15; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B183A6 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v1, v2);
    byte_4B183A6 = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->codeVerifier,
    (int64_t)RandomStringForUrl,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v11);
  v14 = AccountLinkageParams__ConvertToBase64Url(v12, v13);
  v15 = AccountLinkageParams_TypeInfo->static_fields;
  v15->codeChallenge = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->codeChallenge, (int64_t)v14, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_Byte_array *v10; // x19
  const MethodInfo *v11; // x1

  if ( (byte_4B183A7 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    sub_1BCA7E0(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo, v5, v6);
    byte_4B183A7 = 1;
  }
  v7 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1BCAA2C(
                                                                    System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v7, 0LL);
  v8 = sub_1BCA888(byte___TypeInfo, length);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  v10 = (System_Byte_array *)v8;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._6_GetBytes.method)(
    v7,
    v8,
    v7->klass->vtable._7_GetBytes.methodPtr);
  return AccountLinkageParams__ConvertToBase64Url(v10, v11);
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

  if ( (byte_4B183AB & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v1, v2);
    byte_4B183AB = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->authorizationCode, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = AccountLinkageParams_TypeInfo->static_fields;
  v9->accountLinkageToken = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->accountLinkageToken, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = AccountLinkageParams_TypeInfo->static_fields;
  v16->authorizationUrl = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->authorizationUrl, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->gameId = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->gameId, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = AccountLinkageParams_TypeInfo->static_fields;
  v30->clientId = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->clientId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = AccountLinkageParams_TypeInfo->static_fields;
  v37->redirectUri = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v37->redirectUri, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = AccountLinkageParams_TypeInfo->static_fields;
  v44->nonce = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v44->nonce, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = AccountLinkageParams_TypeInfo->static_fields;
  v51->codeVerifier = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v51->codeVerifier, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = AccountLinkageParams_TypeInfo->static_fields;
  v58->codeChallenge = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v58->codeChallenge, 0LL, v59, v60, v61, v62, v63, v64);
  v65 = AccountLinkageParams_TypeInfo->static_fields;
  v65->requestedAccountName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->requestedAccountName, 0LL, v66, v67, v68, v69, v70, v71);
  v72 = AccountLinkageParams_TypeInfo->static_fields;
  v72->requestedAccountFriendCode = 0LL;
  v72 = (struct AccountLinkageParams_StaticFields *)((char *)v72 + 96);
  LODWORD(v72[-1].basicPassword) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)v72, 0LL, v73, v74, v75, v76, v77, v78);
  v79 = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v79->fields._TransitionDestinationFromDetail_k__BackingField = 0LL;
  v79 = (PartyOrganizationUtility_o *)((char *)v79 + 128);
  v79[-1].fields.temporaryPartyInfo = 0LL;
  LOBYTE(v79[-1].fields._TransitionDestinationFromDetail_k__BackingField) = 0;
  *(_QWORD *)&v79[-1].fields._IsQuestStartMenuMode_k__BackingField = 0LL;
  sub_1BCA784(v79, 0LL, v80, v81, v82, v83, v84, v85);
  v86 = AccountLinkageParams_TypeInfo->static_fields;
  v86->newSecretKey = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v86->newSecretKey, 0LL, v87, v88, v89, v90, v91, v92);
  v93 = (PartyOrganizationUtility_o *)AccountLinkageParams_TypeInfo->static_fields;
  v93[1].klass = 0LL;
  sub_1BCA784(v93 + 1, 0LL, v94, v95, v96, v97, v98, v99);
  v100 = AccountLinkageParams_TypeInfo->static_fields;
  v100->basicPassword = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v100->basicPassword, 0LL, v101, v102, v103, v104, v105, v106);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Text_Encoding_o *ASCII; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Security_Cryptography_SHA256Managed_o *v10; // x20

  if ( (byte_4B183A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Security_Cryptography_SHA256Managed_TypeInfo, method, v2);
    byte_4B183A9 = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v6 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._19_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._20_GetBytes.methodPtr),
        v10 = (System_Security_Cryptography_SHA256Managed_o *)sub_1BCAA2C(
                                                                System_Security_Cryptography_SHA256Managed_TypeInfo,
                                                                v7,
                                                                v8,
                                                                v9),
        System_Security_Cryptography_SHA256Managed___ctor(v10, 0LL),
        !v10) )
  {
    sub_1BCAA3C(ASCII, v5);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v10,
           v6,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183AC & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams___c_TypeInfo, v1, v2);
    byte_4B183AC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AccountLinkageParams___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2

  value = (Il2CppObject *)pair.fields.value;
  key = (Il2CppObject *)pair.fields.key;
  if ( (byte_4B183AD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__,
      pair.fields.key,
      pair.fields.value);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v5, v6);
    sub_1BCA7E0(&StringLiteral_25344/*"{0}={1}"*/, v7, v8);
    byte_4B183AD = 1;
  }
  return System_String__Format_62415592((System_String_o *)StringLiteral_25344/*"{0}={1}"*/, key, value, 0LL);
}