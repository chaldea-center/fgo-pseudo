System_String_o *AccountLinkageParams__AddColorCodeBracket(System_String_o *userName, const MethodInfo *method)
{
  System_Text_RegularExpressions_Regex_o *v3; // x20
  System_Text_RegularExpressions_MatchCollection_o *v4; // x0
  int32_t Count; // w0
  System_Collections_Generic_IEnumerable_string__o *v6; // x0
  System_String_o *v7; // x1

  if ( (byte_4C45468 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Repeat_string___);
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_15823/*"[-]"*/);
    sub_1C37058(&StringLiteral_734/*"(\\[[0-9A-F]{6}\\])"*/);
    byte_4C45468 = 1;
  }
  v3 = (System_Text_RegularExpressions_Regex_o *)sub_1C372A4(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_70101544(v3, (System_String_o *)StringLiteral_734/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0);
  if ( !v3 || (v4 = System_Text_RegularExpressions_Regex__Matches_70097628(v3, userName, 0)) == 0 )
    sub_1C372B4(v4);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v4, 0);
  v6 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                             (Il2CppObject *)StringLiteral_15823/*"[-]"*/,
                                                             Count,
                                                             (const MethodInfo_3117FE4 *)Method_System_Linq_Enumerable_Repeat_string___);
  v7 = System_String__Concat_63600676(v6, 0);
  return System_String__Concat_63561656(userName, v7, 0);
}


System_String_o *AccountLinkageParams__ConvertToBase64Url(System_Byte_array *bytes, const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( (byte_4C45466 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&StringLiteral_1744/*"="*/);
    sub_1C37058(&StringLiteral_803/*"+"*/);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_16109/*"_"*/);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45466 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__ToBase64String(bytes, 0);
  if ( !v3
    || (v3 = System_String__Replace_63608204(
               v3,
               (System_String_o *)StringLiteral_803/*"+"*/,
               (System_String_o *)StringLiteral_861/*"-"*/,
               0)) == 0
    || (v3 = System_String__Replace_63608204(
               v3,
               (System_String_o *)StringLiteral_1048/*"/"*/,
               (System_String_o *)StringLiteral_16109/*"_"*/,
               0)) == 0 )
  {
    sub_1C372B4(v3);
  }
  return System_String__Replace_63608204(
           v3,
           (System_String_o *)StringLiteral_1744/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


System_String_o *AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v4; // x21
  System_String_o *UserInfo; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_c *klass; // x8
  CGThumbnailListItem_c *monitor; // x1
  struct System_String_o *fields; // x21
  CGThumbnailListItem_o *static_fields; // x0
  __int64 v12; // x27
  __int64 v13; // x28
  struct AccountLinkageParams_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_object__object__o *v17; // x21
  Il2CppObject *v18; // x20
  AccountLinkageParams___c_c *v19; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v21; // x20
  Il2CppObject *v22; // x23
  struct AccountLinkageParams___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_string__o *v26; // x0
  Il2CppObject *v27; // x0

  if ( (byte_4C45463 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
    sub_1C37058(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1C37058(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__);
    sub_1C37058(&AccountLinkageParams___c_TypeInfo);
    sub_1C37058(&System_Uri_TypeInfo);
    sub_1C37058(&StringLiteral_11442/*"S256"*/);
    sub_1C37058(&StringLiteral_18015/*"client_id"*/);
    sub_1C37058(&StringLiteral_22651/*"password_emailcode"*/);
    sub_1C37058(&StringLiteral_22268/*"nonce"*/);
    sub_1C37058(&StringLiteral_19751/*"game_id"*/);
    sub_1C37058(&StringLiteral_18039/*"code_challenge_method"*/);
    sub_1C37058(&StringLiteral_16947/*"auth_method"*/);
    sub_1C37058(&StringLiteral_501/*"&"*/);
    sub_1C37058(&StringLiteral_22995/*"redirect_uri"*/);
    sub_1C37058(&StringLiteral_25190/*"{0}?{1}"*/);
    sub_1C37058(&StringLiteral_22650/*"password"*/);
    sub_1C37058(&StringLiteral_18038/*"code_challenge"*/);
    byte_4C45463 = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v4 = (System_Uri_o *)sub_1C372A4(System_Uri_TypeInfo);
  System_Uri___ctor(v4, authorizationUrl, 0);
  if ( !v4
    || (UserInfo = System_Uri__get_UserInfo(v4, 0)) == 0
    || (UserInfo = (System_String_o *)System_String__Split(UserInfo, 0x3Au, 0, 0)) == 0 )
  {
LABEL_23:
    sub_1C372B4(UserInfo);
  }
  klass = UserInfo[1].klass;
  if ( klass )
  {
    if ( !(_DWORD)klass )
      sub_1C372BC(UserInfo);
    monitor = (CGThumbnailListItem_c *)UserInfo[1].monitor;
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
  static_fields = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
  v12 = StringLiteral_22651/*"password_emailcode"*/;
  v13 = StringLiteral_22650/*"password"*/;
  static_fields[1].klass = monitor;
  sub_1C36FFC(static_fields + 1, (int32_t)monitor, v6, v7);
  v14 = AccountLinkageParams_TypeInfo->static_fields;
  v14->basicPassword = fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->basicPassword, (int32_t)fields, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v17 )
    goto LABEL_23;
  if ( isTakeOver )
    v18 = (Il2CppObject *)v12;
  else
    v18 = (Il2CppObject *)v13;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_19751/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_18015/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_22995/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_22268/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_18038/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_18039/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11442/*"S256"*/,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v17,
    (Il2CppObject *)StringLiteral_16947/*"auth_method"*/,
    v18,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v19 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v19 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v19->static_fields->__9__21_0;
  v21 = (System_String_o *)StringLiteral_501/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = AccountLinkageParams___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v22,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0);
    v23 = AccountLinkageParams___c_TypeInfo->static_fields;
    v23->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v23->__9__21_0, (int32_t)_9__21_0, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_3119E58 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v27 = (Il2CppObject *)System_String__Join_63604232(v21, v26, 0);
  return System_String__Format_63602948(
           (System_String_o *)StringLiteral_25190/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v27,
           0);
}


void AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  System_String_o *RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  System_Byte_array *v7; // x0
  const MethodInfo *v8; // x1
  System_String_o *v9; // x0
  struct AccountLinkageParams_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C45464 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    byte_4C45464 = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->codeVerifier, (int32_t)RandomStringForUrl, v4, v5);
  v7 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v6);
  v9 = AccountLinkageParams__ConvertToBase64Url(v7, v8);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->codeChallenge = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->codeChallenge, (int32_t)v9, v11, v12);
}


System_String_o *AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v3; // x20
  __int64 v4; // x0
  System_Byte_array *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_4C45465 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    byte_4C45465 = 1;
  }
  v3 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v3, 0);
  v4 = sub_1C37100(byte___TypeInfo, length);
  if ( !v3 )
    sub_1C372B4(v4);
  v5 = (System_Byte_array *)v4;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, const MethodInfo *))v3->klass->vtable._6_GetBytes.methodPtr)(
    v3,
    v4,
    v3->klass->vtable._6_GetBytes.method);
  return AccountLinkageParams__ConvertToBase64Url(v5, v6);
}


void AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct AccountLinkageParams_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct AccountLinkageParams_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct AccountLinkageParams_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct AccountLinkageParams_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct AccountLinkageParams_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct AccountLinkageParams_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct AccountLinkageParams_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct AccountLinkageParams_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct AccountLinkageParams_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct AccountLinkageParams_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct AccountLinkageParams_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CGThumbnailListItem_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct AccountLinkageParams_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4C45469 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    byte_4C45469 = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->authorizationCode, 0, v1, v2);
  v4 = AccountLinkageParams_TypeInfo->static_fields;
  v4->accountLinkageToken = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->accountLinkageToken, 0, v5, v6);
  v7 = AccountLinkageParams_TypeInfo->static_fields;
  v7->authorizationUrl = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->authorizationUrl, 0, v8, v9);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->gameId = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->gameId, 0, v11, v12);
  v13 = AccountLinkageParams_TypeInfo->static_fields;
  v13->clientId = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->clientId, 0, v14, v15);
  v16 = AccountLinkageParams_TypeInfo->static_fields;
  v16->redirectUri = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->redirectUri, 0, v17, v18);
  v19 = AccountLinkageParams_TypeInfo->static_fields;
  v19->nonce = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->nonce, 0, v20, v21);
  v22 = AccountLinkageParams_TypeInfo->static_fields;
  v22->codeVerifier = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v22->codeVerifier, 0, v23, v24);
  v25 = AccountLinkageParams_TypeInfo->static_fields;
  v25->codeChallenge = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v25->codeChallenge, 0, v26, v27);
  v28 = AccountLinkageParams_TypeInfo->static_fields;
  v28->requestedAccountName = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->requestedAccountName, 0, v29, v30);
  v31 = AccountLinkageParams_TypeInfo->static_fields;
  v31->requestedAccountFriendCode = 0;
  v31 = (struct AccountLinkageParams_StaticFields *)((char *)v31 + 96);
  LODWORD(v31[-1].basicPassword) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)v31, 0, v32, v33);
  v34 = AccountLinkageParams_TypeInfo->static_fields;
  v34->newAuthKey = 0;
  v34 = (struct AccountLinkageParams_StaticFields *)((char *)v34 + 128);
  v34[-1].newSecretKey = 0;
  LOBYTE(v34[-1].basicUserName) = 0;
  v34[-1].basicPassword = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)v34, 0, v35, v36);
  v37 = AccountLinkageParams_TypeInfo->static_fields;
  v37->newSecretKey = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v37->newSecretKey, 0, v38, v39);
  v40 = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
  v40[1].klass = 0;
  sub_1C36FFC(v40 + 1, 0, v41, v42);
  v43 = AccountLinkageParams_TypeInfo->static_fields;
  v43->basicPassword = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v43->basicPassword, 0, v44, v45);
}


System_Byte_array *AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  System_Byte_array *v4; // x19
  System_Security_Cryptography_SHA256Managed_o *v5; // x20

  if ( (byte_4C45467 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_SHA256Managed_TypeInfo);
    byte_4C45467 = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0);
  if ( !ASCII
    || (v4 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))ASCII->klass->vtable._18_GetBytes.methodPtr)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._18_GetBytes.method),
        v5 = (System_Security_Cryptography_SHA256Managed_o *)sub_1C372A4(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v5, 0),
        !v5) )
  {
    sub_1C372B4(ASCII);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash(
           (System_Security_Cryptography_HashAlgorithm_o *)v5,
           v4,
           0);
}


void AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4546A & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams___c_TypeInfo);
    byte_4C4546A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AccountLinkageParams___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C4546B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C37058(&StringLiteral_25189/*"{0}={1}"*/);
    byte_4C4546B = 1;
  }
  return System_String__Format_63602948((System_String_o *)StringLiteral_25189/*"{0}={1}"*/, key, value, 0);
}