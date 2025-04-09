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

  if ( (byte_49BD166 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Repeat_string___, method);
    sub_1B4CF90(&System_Text_RegularExpressions_Regex_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_15526/*"[-]"*/, v4);
    sub_1B4CF90(&StringLiteral_733/*"(\\[[0-9A-F]{6}\\])"*/, v5);
    byte_49BD166 = 1;
  }
  v6 = (System_Text_RegularExpressions_Regex_o *)sub_1B4D1DC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_67633728(v6, (System_String_o *)StringLiteral_733/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v6 || (v7 = System_Text_RegularExpressions_Regex__Matches_67629812(v6, userName, 0LL)) == 0LL )
    sub_1B4D1EC(v7, v8);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v7, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_object_(
                                                              (Il2CppObject *)StringLiteral_15526/*"[-]"*/,
                                                              Count,
                                                              (const MethodInfo_2F2E754 *)Method_System_Linq_Enumerable_Repeat_string___);
  v11 = System_String__Concat_61132488(v10, 0LL);
  return System_String__Concat_61093468(userName, v11, 0LL);
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

  if ( (byte_49BD164 & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1756/*"="*/, v3);
    sub_1B4CF90(&StringLiteral_808/*"+"*/, v4);
    sub_1B4CF90(&StringLiteral_867/*"-"*/, v5);
    sub_1B4CF90(&StringLiteral_15813/*"_"*/, v6);
    sub_1B4CF90(&StringLiteral_1057/*"/"*/, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49BD164 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v9
    || (v9 = System_String__Replace_61140016(
               v9,
               (System_String_o *)StringLiteral_808/*"+"*/,
               (System_String_o *)StringLiteral_867/*"-"*/,
               0LL)) == 0LL
    || (v9 = System_String__Replace_61140016(
               v9,
               (System_String_o *)StringLiteral_1057/*"/"*/,
               (System_String_o *)StringLiteral_15813/*"_"*/,
               0LL)) == 0LL )
  {
    sub_1B4D1EC(v9, v10);
  }
  return System_String__Replace_61140016(
           v9,
           (System_String_o *)StringLiteral_1756/*"="*/,
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
  System_String_o *UserInfo; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_c *klass; // x8
  struct System_String_o *monitor; // x1
  struct System_String_o *fields; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  __int64 v33; // x27
  __int64 v34; // x28
  struct AccountLinkageParams_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_Dictionary_object__object__o *v38; // x21
  Il2CppObject *v39; // x20
  AccountLinkageParams___c_c *v40; // x0
  System_Func_T__TResult__o *_9__21_0; // x22
  System_String_o *v42; // x20
  Il2CppObject *v43; // x23
  struct AccountLinkageParams___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_string__o *v47; // x0
  Il2CppObject *v48; // x0

  if ( (byte_49BD161 & 1) == 0 )
  {
    sub_1B4CF90(&AccountLinkageParams_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v4);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___, v6);
    sub_1B4CF90(&System_Func_KeyValuePair_string__string___string__TypeInfo, v7);
    sub_1B4CF90(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__, v8);
    sub_1B4CF90(&AccountLinkageParams___c_TypeInfo, v9);
    sub_1B4CF90(&System_Uri_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_11185/*"S256"*/, v11);
    sub_1B4CF90(&StringLiteral_17707/*"client_id"*/, v12);
    sub_1B4CF90(&StringLiteral_22199/*"password_emailcode"*/, v13);
    sub_1B4CF90(&StringLiteral_21832/*"nonce"*/, v14);
    sub_1B4CF90(&StringLiteral_19400/*"game_id"*/, v15);
    sub_1B4CF90(&StringLiteral_17731/*"code_challenge_method"*/, v16);
    sub_1B4CF90(&StringLiteral_16659/*"auth_method"*/, v17);
    sub_1B4CF90(&StringLiteral_502/*"&"*/, v18);
    sub_1B4CF90(&StringLiteral_22546/*"redirect_uri"*/, v19);
    sub_1B4CF90(&StringLiteral_24794/*"{0}?{1}"*/, v20);
    sub_1B4CF90(&StringLiteral_22198/*"password"*/, v21);
    sub_1B4CF90(&StringLiteral_17730/*"code_challenge"*/, v22);
    byte_49BD161 = 1;
  }
  authorizationUrl = AccountLinkageParams_TypeInfo->static_fields->authorizationUrl;
  v24 = (System_Uri_o *)sub_1B4D1DC(System_Uri_TypeInfo);
  System_Uri___ctor(v24, authorizationUrl, 0LL);
  if ( !v24
    || (UserInfo = System_Uri__get_UserInfo(v24, 0LL)) == 0LL
    || (UserInfo = (System_String_o *)System_String__Split(UserInfo, 0x3Au, 0, 0LL)) == 0LL )
  {
LABEL_23:
    sub_1B4D1EC(UserInfo, v26);
  }
  klass = UserInfo[1].klass;
  if ( klass )
  {
    if ( !(_DWORD)klass )
      sub_1B4D1F4(UserInfo, v26);
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
  v33 = StringLiteral_22199/*"password_emailcode"*/;
  v34 = StringLiteral_22198/*"password"*/;
  static_fields->basicUserName = monitor;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->basicUserName, (int32_t)monitor, v27, v28);
  v35 = AccountLinkageParams_TypeInfo->static_fields;
  v35->basicPassword = fields;
  sub_1B4CF34((CGThumbnailListItem_o *)&v35->basicPassword, (int32_t)fields, v36, v37);
  v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v38,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v38 )
    goto LABEL_23;
  if ( isTakeOver )
    v39 = (Il2CppObject *)v33;
  else
    v39 = (Il2CppObject *)v34;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_19400/*"game_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_17707/*"client_id"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_22546/*"redirect_uri"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_21832/*"nonce"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_17730/*"code_challenge"*/,
    (Il2CppObject *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_17731/*"code_challenge_method"*/,
    (Il2CppObject *)StringLiteral_11185/*"S256"*/,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    v38,
    (Il2CppObject *)StringLiteral_16659/*"auth_method"*/,
    v39,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v40 = AccountLinkageParams___c_TypeInfo;
  if ( !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v40 = AccountLinkageParams___c_TypeInfo;
  }
  _9__21_0 = (System_Func_T__TResult__o *)v40->static_fields->__9__21_0;
  v42 = (System_String_o *)StringLiteral_502/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = AccountLinkageParams___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__21_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_object__object___object____ctor(
      _9__21_0,
      v43,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      0LL);
    v44 = AccountLinkageParams___c_TypeInfo->static_fields;
    v44->__9__21_0 = (struct System_Func_KeyValuePair_string__string___string__o *)_9__21_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&v44->__9__21_0, (int32_t)_9__21_0, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_2F302D4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v48 = (Il2CppObject *)System_String__Join_61136044(v42, v47, 0LL);
  return System_String__Format_61134760(
           (System_String_o *)StringLiteral_24794/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v48,
           0LL);
}


void __fastcall AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
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

  if ( (byte_49BD162 & 1) == 0 )
  {
    sub_1B4CF90(&AccountLinkageParams_TypeInfo, v1);
    byte_49BD162 = 1;
  }
  RandomStringForUrl = AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = RandomStringForUrl;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->codeVerifier, (int32_t)RandomStringForUrl, v4, v5);
  v7 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v6);
  v9 = AccountLinkageParams__ConvertToBase64Url(v7, v8);
  v10 = AccountLinkageParams_TypeInfo->static_fields;
  v10->codeChallenge = v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&v10->codeChallenge, (int32_t)v9, v11, v12);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_49BD163 & 1) == 0 )
  {
    sub_1B4CF90(&byte___TypeInfo, method);
    sub_1B4CF90(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo, v3);
    byte_49BD163 = 1;
  }
  v4 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_1B4D1DC(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v4, 0LL);
  v5 = sub_1B4D038(byte___TypeInfo, length);
  if ( !v4 )
    sub_1B4D1EC(v5, v6);
  v7 = (System_Byte_array *)v5;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, void *))v4->klass->vtable._6_GetBytes.method)(
    v4,
    v5,
    v4->klass[1]._1.image);
  return AccountLinkageParams__ConvertToBase64Url(v7, v8);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct AccountLinkageParams_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct AccountLinkageParams_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct AccountLinkageParams_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct AccountLinkageParams_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct AccountLinkageParams_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct AccountLinkageParams_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct AccountLinkageParams_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct AccountLinkageParams_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct AccountLinkageParams_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  CGThumbnailListItem_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CGThumbnailListItem_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct AccountLinkageParams_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct AccountLinkageParams_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_49BD167 & 1) == 0 )
  {
    sub_1B4CF90(&AccountLinkageParams_TypeInfo, v1);
    byte_49BD167 = 1;
  }
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->authorizationCode, 0, v2, v3);
  v5 = AccountLinkageParams_TypeInfo->static_fields;
  v5->accountLinkageToken = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v5->accountLinkageToken, 0, v6, v7);
  v8 = AccountLinkageParams_TypeInfo->static_fields;
  v8->authorizationUrl = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v8->authorizationUrl, 0, v9, v10);
  v11 = AccountLinkageParams_TypeInfo->static_fields;
  v11->gameId = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v11->gameId, 0, v12, v13);
  v14 = AccountLinkageParams_TypeInfo->static_fields;
  v14->clientId = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v14->clientId, 0, v15, v16);
  v17 = AccountLinkageParams_TypeInfo->static_fields;
  v17->redirectUri = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v17->redirectUri, 0, v18, v19);
  v20 = AccountLinkageParams_TypeInfo->static_fields;
  v20->nonce = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->nonce, 0, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->codeVerifier = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v23->codeVerifier, 0, v24, v25);
  v26 = AccountLinkageParams_TypeInfo->static_fields;
  v26->codeChallenge = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v26->codeChallenge, 0, v27, v28);
  v29 = AccountLinkageParams_TypeInfo->static_fields;
  v29->requestedAccountName = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v29->requestedAccountName, 0, v30, v31);
  v32 = AccountLinkageParams_TypeInfo->static_fields;
  v32->requestedAccountFriendCode = 0LL;
  v32 = (struct AccountLinkageParams_StaticFields *)((char *)v32 + 96);
  LODWORD(v32[-1].basicPassword) = 0;
  sub_1B4CF34((CGThumbnailListItem_o *)v32, 0, v33, v34);
  v35 = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
  v35->fields._ThumbnailSpritePath_k__BackingField = 0LL;
  v35 = (CGThumbnailListItem_o *)((char *)v35 + 128);
  *(_QWORD *)&v35[-1].fields._Id_k__BackingField = 0LL;
  LOBYTE(v35[-1].fields._Type_k__BackingField) = 0;
  v35[-1].fields._ThumbnailSpritePath_k__BackingField = 0LL;
  sub_1B4CF34(v35, 0, v36, v37);
  v38 = (CGThumbnailListItem_o *)AccountLinkageParams_TypeInfo->static_fields;
  v38[1].klass = 0LL;
  sub_1B4CF34(v38 + 1, 0, v39, v40);
  v41 = AccountLinkageParams_TypeInfo->static_fields;
  v41->basicUserName = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v41->basicUserName, 0, v42, v43);
  v44 = AccountLinkageParams_TypeInfo->static_fields;
  v44->basicPassword = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v44->basicPassword, 0, v45, v46);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_49BD165 & 1) == 0 )
  {
    sub_1B4CF90(&System_Security_Cryptography_SHA256Managed_TypeInfo, method);
    byte_49BD165 = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._18_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._19_GetBytes.methodPtr),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_1B4D1DC(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0LL),
        !v6) )
  {
    sub_1B4D1EC(ASCII, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BD168 & 1) == 0 )
  {
    sub_1B4CF90(&AccountLinkageParams___c_TypeInfo, v1);
    byte_49BD168 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AccountLinkageParams___c_TypeInfo->static_fields->__9 = (struct AccountLinkageParams___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)AccountLinkageParams___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_49BD169 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, pair.fields.key);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v5);
    sub_1B4CF90(&StringLiteral_24793/*"{0}={1}"*/, v6);
    byte_49BD169 = 1;
  }
  return System_String__Format_61134760((System_String_o *)StringLiteral_24793/*"{0}={1}"*/, key, value, 0LL);
}