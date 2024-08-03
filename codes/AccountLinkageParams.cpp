System_String_o *__fastcall AccountLinkageParams__AddColorCodeBracket(
        System_String_o *userName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Text_RegularExpressions_Regex_o *v7; // x20
  System_Text_RegularExpressions_MatchCollection_o *v8; // x0
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_49FE450 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Repeat_string___, method);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_15763/*"[-]"*/, v5);
    sub_1B640C8(&StringLiteral_784/*"(\\[[0-9A-F]{6}\\])"*/, v6);
    byte_49FE450 = 1;
  }
  v7 = (System_Text_RegularExpressions_Regex_o *)sub_1B64314(System_Text_RegularExpressions_Regex_TypeInfo, method, v2);
  System_Text_RegularExpressions_Regex___ctor_67935748(v7, (System_String_o *)StringLiteral_784/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v7 || (v8 = System_Text_RegularExpressions_Regex__Matches(v7, userName, 0LL)) == 0LL )
    sub_1B64324(v8);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v8, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                              (Il2CppObject *)StringLiteral_15763/*"[-]"*/,
                                                              Count,
                                                              (const MethodInfo_2E63C3C *)Method_System_Linq_Enumerable_Repeat_string___);
  v11 = System_String__Concat_61387428(v10, 0LL);
  return System_String__Concat_61375396(userName, v11, 0LL);
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

  if ( (byte_49FE44E & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1854/*"="*/, v3);
    sub_1B640C8(&StringLiteral_861/*"+"*/, v4);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v5);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v6);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FE44E = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v9
    || (v9 = System_String__Replace_61395016(
               v9,
               (System_String_o *)StringLiteral_861/*"+"*/,
               (System_String_o *)StringLiteral_920/*"-"*/,
               0LL)) == 0LL
    || (v9 = System_String__Replace_61395016(
               v9,
               (System_String_o *)StringLiteral_1124/*"/"*/,
               (System_String_o *)StringLiteral_16054/*"_"*/,
               0LL)) == 0LL )
  {
    sub_1B64324(v9);
  }
  return System_String__Replace_61395016(
           v9,
           (System_String_o *)StringLiteral_1854/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v23; // x1
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v25; // x21
  System_String_o *UserInfo; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_c *klass; // x8
  struct System_String_o *monitor; // x1
  struct System_String_o *fields; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v34; // x27
  __int64 v35; // x28
  struct AccountLinkageParams_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_object__object__o *v41; // x21
  Il2CppObject *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  AccountLinkageParams___c_c *v45; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v47; // x20
  Il2CppObject *v48; // x23
  struct AccountLinkageParams___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_string__o *v52; // x0
  Il2CppObject *v53; // x0

  if ( (byte_49FE44B & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___, v7);
    sub_1B640C8(&System_Func_KeyValuePair_string__string___string__TypeInfo, v8);
    sub_1B640C8(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__, v9);
    sub_1B640C8(&AccountLinkageParams___c_TypeInfo, v10);
    sub_1B640C8(&System_Uri_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_11362/*"S256"*/, v12);
    sub_1B640C8(&StringLiteral_17946/*"client_id"*/, v13);
    sub_1B640C8(&StringLiteral_22387/*"password_emailcode"*/, v14);
    sub_1B640C8(&StringLiteral_22024/*"nonce"*/, v15);
    sub_1B640C8(&StringLiteral_19624/*"game_id"*/, v16);
    sub_1B640C8(&StringLiteral_17970/*"code_challenge_method"*/, v17);
    sub_1B640C8(&StringLiteral_16904/*"auth_method"*/, v18);
    sub_1B640C8(&StringLiteral_536/*"&"*/, v19);
    sub_1B640C8(&StringLiteral_22725/*"redirect_uri"*/, v20);
    sub_1B640C8(&StringLiteral_24990/*"{0}?{1}"*/, v21);
    sub_1B640C8(&StringLiteral_22386/*"password"*/, v22);
    sub_1B640C8(&StringLiteral_17969/*"code_challenge"*/, v23);
    byte_49FE44B = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v25 = (System_Uri_o *)sub_1B64314(System_Uri_TypeInfo, method, v2);
  System_Uri___ctor(v25, authorizationUrl, 0LL);
  if ( !v25
    || (UserInfo = System_Uri__get_UserInfo(v25, 0LL)) == 0LL
    || (UserInfo = (System_String_o *)System_String__Split(UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1B64324(UserInfo);
  }
  klass = UserInfo[1].klass;
  if ( klass )
  {
    if ( !(_DWORD)klass )
      sub_1B6432C(UserInfo, v27);
    monitor = (struct System_String_o *)UserInfo[1].monitor;
    if ( (int)klass >= 2 )
    {
      fields = (struct System_String_o *)UserInfo[1].fields;
      goto LABEL_12;
    }
  }
  else
  {
    monitor = 0LL;
  }
  fields = 0LL;
LABEL_12:
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  v34 = StringLiteral_22387/*"password_emailcode"*/;
  v35 = StringLiteral_22386/*"password"*/;
  static_fields->basicUserName = monitor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->basicUserName, (int32_t)monitor, v28, v29);
  v36 = AccountLinkageParams_TypeInfo->static_fields;
  v36->basicPassword = fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->basicPassword, (int32_t)fields, v37, v38);
  v41 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v39,
                                                                     v40);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v41,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v41 )
    goto LABEL_23;
  if ( isTakeOver )
    v42 = (Il2CppObject *)v34;
  else
    v42 = (Il2CppObject *)v35;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_19624/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_17946/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_22725/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_22024/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_17969/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_17970/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11362/*"S256"*/,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v41,
    (Il2CppObject *)StringLiteral_16904/*"auth_method"*/,
    v42,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v45 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v45 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v45->static_fields->__9__21_0;
  v47 = (System_String_o *)StringLiteral_536/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = AccountLinkageParams___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_KeyValuePair_string__string___string__TypeInfo,
                                              v43,
                                              v44);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v48,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v49 = AccountLinkageParams___c_TypeInfo->static_fields;
    v49->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->__9__21_0, (int32_t)_9__21_0, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2E657BC *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v53 = (Il2CppObject *)System_String__Join_61391052(v47, v52, 0LL);
  return System_String__Format_61389768(
           (System_String_o *)StringLiteral_24990/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v53,
           0LL);
}


void __fastcall AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  System_String_o *RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  System_Byte_array *v7; // x0
  const MethodInfo *v8; // x1
  System_String_o *v9; // x0
  struct AccountLinkageParams_StaticFields *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FE44C & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v1);
    byte_49FE44C = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->codeVerifier, (int32_t)RandomStringForUrl, v4, v5);
  v7 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v6);
  v9 = AccountLinkageParams__ConvertToBase64Url(v7, v8);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->codeChallenge = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->codeChallenge, (int32_t)v9, v11, v12);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v5; // x20
  __int64 v6; // x0
  System_Byte_array *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_49FE44D & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, method);
    sub_1B640C8(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo, v4);
    byte_49FE44D = 1;
  }
  v5 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1B64314(
                                                                    System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo,
                                                                    method,
                                                                    v2);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v5, 0LL);
  v6 = sub_1B64170(byte___TypeInfo, length);
  if ( !v5 )
    sub_1B64324(v6);
  v7 = (System_Byte_array *)v6;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._6_GetBytes.method)(
    v5,
    v6,
    v5->klass->vtable._7_GetBytes.methodPtr);
  return AccountLinkageParams__ConvertToBase64Url(v7, v8);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct AccountLinkageParams_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct AccountLinkageParams_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct AccountLinkageParams_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct AccountLinkageParams_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct AccountLinkageParams_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct AccountLinkageParams_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct AccountLinkageParams_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct AccountLinkageParams_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct AccountLinkageParams_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct AccountLinkageParams_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct AccountLinkageParams_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct AccountLinkageParams_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct AccountLinkageParams_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_49FE451 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v1);
    byte_49FE451 = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->authorizationCode, 0, v2, v3);
  v5 = AccountLinkageParams_TypeInfo->static_fields;
  v5->accountLinkageToken = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->accountLinkageToken, 0, v6, v7);
  v8 = AccountLinkageParams_TypeInfo->static_fields;
  v8->authorizationUrl = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->authorizationUrl, 0, v9, v10);
  v11 = AccountLinkageParams_TypeInfo->static_fields;
  v11->gameId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->gameId, 0, v12, v13);
  v14 = AccountLinkageParams_TypeInfo->static_fields;
  v14->clientId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->clientId, 0, v15, v16);
  v17 = AccountLinkageParams_TypeInfo->static_fields;
  v17->redirectUri = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->redirectUri, 0, v18, v19);
  v20 = AccountLinkageParams_TypeInfo->static_fields;
  v20->nonce = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->nonce, 0, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->codeVerifier = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->codeVerifier, 0, v24, v25);
  v26 = AccountLinkageParams_TypeInfo->static_fields;
  v26->codeChallenge = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->codeChallenge, 0, v27, v28);
  v29 = AccountLinkageParams_TypeInfo->static_fields;
  v29->requestedAccountName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->requestedAccountName, 0, v30, v31);
  v32 = AccountLinkageParams_TypeInfo->static_fields;
  v32->requestedAccountFriendCode = 0LL;
  v32 = (struct AccountLinkageParams_StaticFields *)((char *)v32 + 96);
  LODWORD(v32[-1].basicPassword) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v32, 0, v33, v34);
  v35 = AccountLinkageParams_TypeInfo->static_fields;
  v35->newAuthKey = 0LL;
  v35 = (struct AccountLinkageParams_StaticFields *)((char *)v35 + 128);
  v35[-1].newSecretKey = 0LL;
  LOBYTE(v35[-1].basicUserName) = 0;
  v35[-1].basicPassword = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v35, 0, v36, v37);
  v38 = AccountLinkageParams_TypeInfo->static_fields;
  v38->newSecretKey = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v38->newSecretKey, 0, v39, v40);
  v41 = AccountLinkageParams_TypeInfo->static_fields;
  v41->basicUserName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41->basicUserName, 0, v42, v43);
  v44 = AccountLinkageParams_TypeInfo->static_fields;
  v44->basicPassword = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->basicPassword, 0, v45, v46);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  System_Byte_array *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Security_Cryptography_SHA256Managed_o *v7; // x20

  if ( (byte_49FE44F & 1) == 0 )
  {
    sub_1B640C8(&System_Security_Cryptography_SHA256Managed_TypeInfo, method);
    byte_49FE44F = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v4 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._19_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._20_GetBytes.methodPtr),
        v7 = (System_Security_Cryptography_SHA256Managed_o *)sub_1B64314(
                                                               System_Security_Cryptography_SHA256Managed_TypeInfo,
                                                               v5,
                                                               v6),
        System_Security_Cryptography_SHA256Managed___ctor(v7, 0LL),
        !v7) )
  {
    sub_1B64324(ASCII);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v7,
           v4,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE452 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams___c_TypeInfo, v1);
    byte_49FE452 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AccountLinkageParams___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49FE453 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, pair.fields.key);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v5);
    sub_1B640C8(&StringLiteral_24988/*"{0}={1}"*/, v6);
    byte_49FE453 = 1;
  }
  return System_String__Format_61389768((System_String_o *)StringLiteral_24988/*"{0}={1}"*/, key, value, 0LL);
}