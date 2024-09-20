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

  if ( (byte_4A5D2D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Repeat_string___);
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&StringLiteral_15831/*"[-]"*/);
    sub_1B885B0(&StringLiteral_783/*"(\\[[0-9A-F]{6}\\])"*/);
    byte_4A5D2D3 = 1;
  }
  v3 = (System_Text_RegularExpressions_Regex_o *)sub_1B887FC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_68267392(v3, (System_String_o *)StringLiteral_783/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v3 || (v4 = System_Text_RegularExpressions_Regex__Matches(v3, userName, 0LL)) == 0LL )
    sub_1B8880C(v4, v5);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v4, 0LL);
  v7 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                             (Il2CppObject *)StringLiteral_15831/*"[-]"*/,
                                                             Count,
                                                             (const MethodInfo_2EAA9A8 *)Method_System_Linq_Enumerable_Repeat_string___);
  v8 = System_String__Concat_61719064(v7, 0LL);
  return System_String__Concat_61707032(userName, v8, 0LL);
}


System_String_o *__fastcall AccountLinkageParams__ConvertToBase64Url(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4A5D2D1 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&StringLiteral_1852/*"="*/);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D2D1 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v3
    || (v3 = System_String__Replace_61726660(
               v3,
               (System_String_o *)StringLiteral_860/*"+"*/,
               (System_String_o *)StringLiteral_919/*"-"*/,
               0LL)) == 0LL
    || (v3 = System_String__Replace_61726660(
               v3,
               (System_String_o *)StringLiteral_1123/*"/"*/,
               (System_String_o *)StringLiteral_16123/*"_"*/,
               0LL)) == 0LL )
  {
    sub_1B8880C(v3, v4);
  }
  return System_String__Replace_61726660(
           v3,
           (System_String_o *)StringLiteral_1852/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v4; // x21
  System_String_o *UserInfo; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_c *klass; // x8
  struct System_String_o *monitor; // x1
  struct System_String_o *fields; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v13; // x27
  __int64 v14; // x28
  struct AccountLinkageParams_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_object__object__o *v18; // x21
  Il2CppObject *v19; // x20
  AccountLinkageParams___c_c *v20; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v22; // x20
  Il2CppObject *v23; // x23
  struct AccountLinkageParams___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_string__o *v27; // x0
  Il2CppObject *v28; // x0

  if ( (byte_4A5D2CE & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
    sub_1B885B0(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1B885B0(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__);
    sub_1B885B0(&AccountLinkageParams___c_TypeInfo);
    sub_1B885B0(&System_Uri_TypeInfo);
    sub_1B885B0(&StringLiteral_11416/*"S256"*/);
    sub_1B885B0(&StringLiteral_18016/*"client_id"*/);
    sub_1B885B0(&StringLiteral_22478/*"password_emailcode"*/);
    sub_1B885B0(&StringLiteral_22111/*"nonce"*/);
    sub_1B885B0(&StringLiteral_19703/*"game_id"*/);
    sub_1B885B0(&StringLiteral_18040/*"code_challenge_method"*/);
    sub_1B885B0(&StringLiteral_16973/*"auth_method"*/);
    sub_1B885B0(&StringLiteral_535/*"&"*/);
    sub_1B885B0(&StringLiteral_22819/*"redirect_uri"*/);
    sub_1B885B0(&StringLiteral_25091/*"{0}?{1}"*/);
    sub_1B885B0(&StringLiteral_22477/*"password"*/);
    sub_1B885B0(&StringLiteral_18039/*"code_challenge"*/);
    byte_4A5D2CE = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v4 = (System_Uri_o *)sub_1B887FC(System_Uri_TypeInfo);
  System_Uri___ctor(v4, authorizationUrl, 0LL);
  if ( !v4
    || (UserInfo = System_Uri__get_UserInfo(v4, 0LL)) == 0LL
    || (UserInfo = (System_String_o *)System_String__Split(UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1B8880C(UserInfo, v6);
  }
  klass = UserInfo[1].klass;
  if ( klass )
  {
    if ( !(_DWORD)klass )
      sub_1B88814(UserInfo, v6);
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
  v13 = StringLiteral_22478/*"password_emailcode"*/;
  v14 = StringLiteral_22477/*"password"*/;
  static_fields->basicUserName = monitor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->basicUserName, (int32_t)monitor, v7, v8);
  v15 = AccountLinkageParams_TypeInfo->static_fields;
  v15->basicPassword = fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->basicPassword, (int32_t)fields, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v18 )
    goto LABEL_23;
  if ( isTakeOver )
    v19 = (Il2CppObject *)v13;
  else
    v19 = (Il2CppObject *)v14;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_19703/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_18016/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22819/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_22111/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_18039/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_18040/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11416/*"S256"*/,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v18,
    (Il2CppObject *)StringLiteral_16973/*"auth_method"*/,
    v19,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v20 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v20 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__21_0;
  v22 = (System_String_o *)StringLiteral_535/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AccountLinkageParams___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v23,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v24 = AccountLinkageParams___c_TypeInfo->static_fields;
    v24->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__21_0, (int32_t)_9__21_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2EAC528 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v28 = (Il2CppObject *)System_String__Join_61722688(v22, v27, 0LL);
  return System_String__Format_61721404(
           (System_String_o *)StringLiteral_25091/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v28,
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

  if ( (byte_4A5D2CF & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    byte_4A5D2CF = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->codeVerifier, (int32_t)RandomStringForUrl, v4, v5);
  v7 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v6);
  v9 = AccountLinkageParams__ConvertToBase64Url(v7, v8);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->codeChallenge = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->codeChallenge, (int32_t)v9, v11, v12);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  const MethodInfo *v7; // x1

  if ( (byte_4A5D2D0 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    byte_4A5D2D0 = 1;
  }
  v3 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1B887FC(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v3, 0LL);
  v4 = sub_1B88658(byte___TypeInfo, length);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  v6 = (System_Byte_array *)v4;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._6_GetBytes.method)(
    v3,
    v4,
    v3->klass->vtable._7_GetBytes.methodPtr);
  return AccountLinkageParams__ConvertToBase64Url(v6, v7);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct AccountLinkageParams_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct AccountLinkageParams_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct AccountLinkageParams_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct AccountLinkageParams_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct AccountLinkageParams_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct AccountLinkageParams_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct AccountLinkageParams_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct AccountLinkageParams_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct AccountLinkageParams_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct AccountLinkageParams_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct AccountLinkageParams_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct AccountLinkageParams_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct AccountLinkageParams_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_4A5D2D4 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    byte_4A5D2D4 = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->authorizationCode, 0, v1, v2);
  v4 = AccountLinkageParams_TypeInfo->static_fields;
  v4->accountLinkageToken = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->accountLinkageToken, 0, v5, v6);
  v7 = AccountLinkageParams_TypeInfo->static_fields;
  v7->authorizationUrl = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->authorizationUrl, 0, v8, v9);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->gameId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->gameId, 0, v11, v12);
  v13 = AccountLinkageParams_TypeInfo->static_fields;
  v13->clientId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->clientId, 0, v14, v15);
  v16 = AccountLinkageParams_TypeInfo->static_fields;
  v16->redirectUri = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->redirectUri, 0, v17, v18);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->nonce = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->nonce, 0, v20, v21);
  v22 = AccountLinkageParams_TypeInfo->static_fields;
  v22->codeVerifier = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->codeVerifier, 0, v23, v24);
  v25 = AccountLinkageParams_TypeInfo->static_fields;
  v25->codeChallenge = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->codeChallenge, 0, v26, v27);
  v28 = AccountLinkageParams_TypeInfo->static_fields;
  v28->requestedAccountName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->requestedAccountName, 0, v29, v30);
  v31 = AccountLinkageParams_TypeInfo->static_fields;
  v31->requestedAccountFriendCode = 0LL;
  v31 = (struct AccountLinkageParams_StaticFields *)((char *)v31 + 96);
  LODWORD(v31[-1].basicPassword) = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v31, 0, v32, v33);
  v34 = AccountLinkageParams_TypeInfo->static_fields;
  v34->newAuthKey = 0LL;
  v34 = (struct AccountLinkageParams_StaticFields *)((char *)v34 + 128);
  v34[-1].newSecretKey = 0LL;
  LOBYTE(v34[-1].basicUserName) = 0;
  v34[-1].basicPassword = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v34, 0, v35, v36);
  v37 = AccountLinkageParams_TypeInfo->static_fields;
  v37->newSecretKey = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->newSecretKey, 0, v38, v39);
  v40 = AccountLinkageParams_TypeInfo->static_fields;
  v40->basicUserName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->basicUserName, 0, v41, v42);
  v43 = AccountLinkageParams_TypeInfo->static_fields;
  v43->basicPassword = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->basicPassword, 0, v44, v45);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_4A5D2D2 & 1) == 0 )
  {
    sub_1B885B0(&System_Security_Cryptography_SHA256Managed_TypeInfo);
    byte_4A5D2D2 = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._19_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._20_GetBytes.methodPtr),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_1B887FC(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0LL),
        !v6) )
  {
    sub_1B8880C(ASCII, v4);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v6,
           v5,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D2D5 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams___c_TypeInfo);
    byte_4A5D2D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)AccountLinkageParams___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  if ( (byte_4A5D2D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1B885B0(&StringLiteral_25089/*"{0}={1}"*/);
    byte_4A5D2D6 = 1;
  }
  return System_String__Format_61721404((System_String_o *)StringLiteral_25089/*"{0}={1}"*/, key, value, 0LL);
}