void __fastcall AccountLinkageParams___cctor(const MethodInfo *method)
{
  ;
}


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

  if ( (byte_438CDBB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Repeat_string___);
    sub_B775C4(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B775C4(&StringLiteral_15935/*"[-]"*/);
    sub_B775C4(&StringLiteral_643/*"(\\[[0-9A-F]{6}\\])"*/);
    byte_438CDBB = 1;
  }
  v3 = (System_Text_RegularExpressions_Regex_o *)sub_B77694(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_49342424(v3, (System_String_o *)StringLiteral_643/*"(\\[[0-9A-F]{6}\\])"*/, 1, 0LL);
  if ( !v3 || (v4 = System_Text_RegularExpressions_Regex__Matches(v3, userName, 0LL)) == 0LL )
    sub_B7769C(v4, v5);
  Count = System_Text_RegularExpressions_MatchCollection__get_Count(v4, 0LL);
  v7 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Repeat_string_(
                                                             (System_String_o *)StringLiteral_15935/*"[-]"*/,
                                                             Count,
                                                             (const MethodInfo_1D35160 *)Method_System_Linq_Enumerable_Repeat_string___);
  v8 = System_String__Concat_44982060(v7, 0LL);
  return System_String__Concat_44901936(userName, v8, 0LL);
}


System_String_o *__fastcall AccountLinkageParams__ConvertToBase64Url(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438CDB9 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&StringLiteral_1533/*"="*/);
    sub_B775C4(&StringLiteral_706/*"+"*/);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CDB9 = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v3 = System_Convert__ToBase64String(bytes, 0LL);
  if ( !v3
    || (v3 = System_String__Replace_44909172(
               v3,
               (System_String_o *)StringLiteral_706/*"+"*/,
               (System_String_o *)StringLiteral_762/*"-"*/,
               0LL)) == 0LL
    || (v3 = System_String__Replace_44909172(
               v3,
               (System_String_o *)StringLiteral_892/*"/"*/,
               (System_String_o *)StringLiteral_16197/*"_"*/,
               0LL)) == 0LL )
  {
    sub_B7769C(v3, v4);
  }
  return System_String__Replace_44909172(
           v3,
           (System_String_o *)StringLiteral_1533/*"="*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
}


System_String_o *__fastcall AccountLinkageParams__GetAuthURL(bool isTakeOver, const MethodInfo *method)
{
  AccountLinkageParams_c *v3; // x0
  System_String_o *authorizationUrl; // x19
  System_Uri_o *v5; // x21
  System_String_array *v6; // x0
  System_String_array *v7; // x1
  System_String_o *UserInfo; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x8
  System_Int32_array **v16; // x22
  System_Int32_array **v17; // x23
  System_Xml_Schema_XmlSchemaObject_o **v18; // x8
  AccountLinkageParams_c *v19; // x0
  System_Xml_Schema_XmlSchemaObject_o *v20; // x21
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x20
  AccountLinkageParams___c_c *v30; // x0
  struct AccountLinkageParams___c_StaticFields *v31; // x8
  System_Func_KeyValuePair_string__string___string__o *_9__21_0; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct AccountLinkageParams___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_string__o *v42; // x0
  Il2CppObject *v43; // x0
  __int64 v45; // x0

  if ( (byte_438CDB6 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
    sub_B775C4(&Method_System_Func_KeyValuePair_string__string___string___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_B775C4(&Method_AccountLinkageParams___c__GetAuthURL_b__21_0__);
    sub_B775C4(&AccountLinkageParams___c_TypeInfo);
    sub_B775C4(&System_Uri_TypeInfo);
    sub_B775C4(&StringLiteral_11761/*"S256"*/);
    sub_B775C4(&StringLiteral_17823/*"client_id"*/);
    sub_B775C4(&StringLiteral_21879/*"password_emailcode"*/);
    sub_B775C4(&StringLiteral_21554/*"nonce"*/);
    sub_B775C4(&StringLiteral_19339/*"game_id"*/);
    sub_B775C4(&StringLiteral_17843/*"code_challenge_method"*/);
    sub_B775C4(&StringLiteral_16852/*"auth_method"*/);
    sub_B775C4(&StringLiteral_452/*"&"*/);
    sub_B775C4(&StringLiteral_22189/*"redirect_uri"*/);
    sub_B775C4(&StringLiteral_24126/*"{0}?{1}"*/);
    sub_B775C4(&StringLiteral_21878/*"password"*/);
    sub_B775C4(&StringLiteral_17842/*"code_challenge"*/);
    byte_438CDB6 = 1;
  }
  v3 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v3 = AccountLinkageParams_TypeInfo;
  }
  authorizationUrl = v3->static_fields->authorizationUrl;
  v5 = (System_Uri_o *)sub_B77694(System_Uri_TypeInfo);
  System_Uri___ctor(v5, authorizationUrl, 0LL);
  if ( !v5
    || (UserInfo = System_Uri__get_UserInfo(v5, 0LL),
        (v6 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_32:
    sub_B7769C(v6, v7);
  }
  v7 = v6;
  if ( !v6->max_length )
    goto LABEL_33;
  LOWORD(v6->m_Items[0]) = 58;
  if ( !UserInfo )
    goto LABEL_32;
  v6 = System_String__Split(UserInfo, (System_Char_array *)v6, 0LL);
  if ( !v6 )
    goto LABEL_32;
  v15 = *(_QWORD *)&v6->max_length;
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_16;
  }
  if ( !(_DWORD)v15 )
  {
LABEL_33:
    v45 = sub_B776C8(v6);
    sub_B77668(v45, 0LL);
  }
  v16 = (System_Int32_array **)v6->m_Items[0];
  if ( (int)v15 >= 2 )
  {
    v17 = (System_Int32_array **)v6->m_Items[1];
    goto LABEL_17;
  }
LABEL_16:
  v17 = 0LL;
LABEL_17:
  v18 = (System_Xml_Schema_XmlSchemaObject_o **)&StringLiteral_21879/*"password_emailcode"*/;
  v19 = AccountLinkageParams_TypeInfo;
  if ( !isTakeOver )
    v18 = (System_Xml_Schema_XmlSchemaObject_o **)&StringLiteral_21878/*"password"*/;
  v20 = *v18;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v19 = AccountLinkageParams_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->basicUserName = (struct System_String_o *)v16;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->basicUserName, v16, v9, v10, v11, v12, v13, v14);
  v22 = AccountLinkageParams_TypeInfo->static_fields;
  v22->basicPassword = (struct System_String_o *)v17;
  sub_B77560((BattleServantConfConponent_o *)&v22->basicPassword, v17, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v29,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v29 )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_19339/*"game_id"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)AccountLinkageParams_TypeInfo->static_fields->gameId,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17823/*"client_id"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)AccountLinkageParams_TypeInfo->static_fields->clientId,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22189/*"redirect_uri"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)AccountLinkageParams_TypeInfo->static_fields->redirectUri,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21554/*"nonce"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)AccountLinkageParams_TypeInfo->static_fields->nonce,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17842/*"code_challenge"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)AccountLinkageParams_TypeInfo->static_fields->codeChallenge,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17843/*"code_challenge_method"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_11761/*"S256"*/,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v29,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16852/*"auth_method"*/,
    v20,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  v30 = AccountLinkageParams___c_TypeInfo;
  if ( (BYTE3(AccountLinkageParams___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams___c_TypeInfo);
    v30 = AccountLinkageParams___c_TypeInfo;
  }
  v31 = v30->static_fields;
  _9__21_0 = v31->__9__21_0;
  v33 = (System_String_o *)StringLiteral_452/*"&"*/;
  if ( !_9__21_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v31 = AccountLinkageParams___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v31->__9;
    _9__21_0 = (System_Func_KeyValuePair_string__string___string__o *)sub_B77694(System_Func_KeyValuePair_string__string___string__TypeInfo);
    System_Func_KeyValuePair_string__string___string____ctor(
      _9__21_0,
      v34,
      Method_AccountLinkageParams___c__GetAuthURL_b__21_0__,
      (const MethodInfo_29DBD40 *)Method_System_Func_KeyValuePair_string__string___string___ctor__);
    v35 = AccountLinkageParams___c_TypeInfo->static_fields;
    v35->__9__21_0 = _9__21_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v35->__9__21_0,
      (System_Int32_array **)_9__21_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_KeyValuePair_string__string___string_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                              (System_Func_TSource__TResult__o *)_9__21_0,
                                                              (const MethodInfo_1D36294 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__string___string___);
  v43 = (Il2CppObject *)System_String__Join_44957380(v33, v42, 0LL);
  return System_String__Format_44897472(
           (System_String_o *)StringLiteral_24126/*"{0}?{1}"*/,
           (Il2CppObject *)authorizationUrl,
           v43,
           0LL);
}


void __fastcall AccountLinkageParams__GetCodeChallenge(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  System_Int32_array **RandomStringForUrl; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  System_Byte_array *v11; // x0
  const MethodInfo *v12; // x1
  System_Int32_array **v13; // x0
  struct AccountLinkageParams_StaticFields *v14; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_438CDB7 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    byte_438CDB7 = 1;
  }
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  RandomStringForUrl = (System_Int32_array **)AccountLinkageParams__GetRandomStringForUrl(0x20u, v1);
  static_fields = AccountLinkageParams_TypeInfo->static_fields;
  static_fields->codeVerifier = (struct System_String_o *)RandomStringForUrl;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->codeVerifier, RandomStringForUrl, v4, v5, v6, v7, v8, v9);
  v11 = AccountLinkageParams__Sha256(AccountLinkageParams_TypeInfo->static_fields->codeVerifier, v10);
  v13 = (System_Int32_array **)AccountLinkageParams__ConvertToBase64Url(v11, v12);
  v14 = AccountLinkageParams_TypeInfo->static_fields;
  v14->codeChallenge = (struct System_String_o *)v13;
  sub_B77560((BattleServantConfConponent_o *)&v14->codeChallenge, v13, v15, v16, v17, v18, v19, v20);
}


System_String_o *__fastcall AccountLinkageParams__GetRandomStringForUrl(uint32_t length, const MethodInfo *method)
{
  System_Security_Cryptography_RNGCryptoServiceProvider_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  const MethodInfo *v7; // x1

  if ( (byte_438CDB8 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&byte___TypeInfo);
    sub_B775C4(&System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    byte_438CDB8 = 1;
  }
  v3 = (System_Security_Cryptography_RNGCryptoServiceProvider_o *)sub_B77694(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_RNGCryptoServiceProvider___ctor(v3, 0LL);
  v4 = sub_B775DC(byte___TypeInfo, length);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v6 = (System_Byte_array *)v4;
  ((void (__fastcall *)(System_Security_Cryptography_RNGCryptoServiceProvider_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._6_GetBytes.method)(
    v3,
    v4,
    v3->klass->vtable._7_GetBytes.methodPtr);
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  return AccountLinkageParams__ConvertToBase64Url(v6, v7);
}


void __fastcall AccountLinkageParams__ResetParams(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  AccountLinkageParams_c *v7; // x0
  struct AccountLinkageParams_StaticFields *static_fields; // x0
  struct AccountLinkageParams_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct AccountLinkageParams_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct AccountLinkageParams_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct AccountLinkageParams_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct AccountLinkageParams_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct AccountLinkageParams_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct AccountLinkageParams_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct AccountLinkageParams_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct AccountLinkageParams_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  AccountLinkageParams_c *v72; // x8
  struct AccountLinkageParams_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  AccountLinkageParams_c *v80; // x8
  struct AccountLinkageParams_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct AccountLinkageParams_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct AccountLinkageParams_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct AccountLinkageParams_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7

  if ( (byte_438CDBC & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    byte_438CDBC = 1;
  }
  v7 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v7 = AccountLinkageParams_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->authorizationCode = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->authorizationCode, 0LL, v1, v2, v3, v4, v5, v6);
  v9 = AccountLinkageParams_TypeInfo->static_fields;
  v9->accountLinkageToken = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v9->accountLinkageToken, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = AccountLinkageParams_TypeInfo->static_fields;
  v16->authorizationUrl = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v16->authorizationUrl, 0LL, v17, v18, v19, v20, v21, v22);
  v23 = AccountLinkageParams_TypeInfo->static_fields;
  v23->gameId = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v23->gameId, 0LL, v24, v25, v26, v27, v28, v29);
  v30 = AccountLinkageParams_TypeInfo->static_fields;
  v30->clientId = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v30->clientId, 0LL, v31, v32, v33, v34, v35, v36);
  v37 = AccountLinkageParams_TypeInfo->static_fields;
  v37->redirectUri = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v37->redirectUri, 0LL, v38, v39, v40, v41, v42, v43);
  v44 = AccountLinkageParams_TypeInfo->static_fields;
  v44->nonce = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v44->nonce, 0LL, v45, v46, v47, v48, v49, v50);
  v51 = AccountLinkageParams_TypeInfo->static_fields;
  v51->codeVerifier = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v51->codeVerifier, 0LL, v52, v53, v54, v55, v56, v57);
  v58 = AccountLinkageParams_TypeInfo->static_fields;
  v58->codeChallenge = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v58->codeChallenge, 0LL, v59, v60, v61, v62, v63, v64);
  v65 = AccountLinkageParams_TypeInfo->static_fields;
  v65->requestedAccountName = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v65->requestedAccountName, 0LL, v66, v67, v68, v69, v70, v71);
  v72 = AccountLinkageParams_TypeInfo;
  AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel = 0;
  v73 = v72->static_fields;
  v73->requestedAccountFriendCode = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v73->requestedAccountFriendCode, 0LL, v74, v75, v76, v77, v78, v79);
  v80 = AccountLinkageParams_TypeInfo;
  AccountLinkageParams_TypeInfo->static_fields->requestedAccountLinkedTime = 0LL;
  v80->static_fields->isRequestedAccountLinked = 0;
  v80->static_fields->newUserId = 0LL;
  v81 = v80->static_fields;
  v81->newAuthKey = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v81->newAuthKey, 0LL, v82, v83, v84, v85, v86, v87);
  v88 = AccountLinkageParams_TypeInfo->static_fields;
  v88->newSecretKey = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v88->newSecretKey, 0LL, v89, v90, v91, v92, v93, v94);
  v95 = AccountLinkageParams_TypeInfo->static_fields;
  v95->basicUserName = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v95->basicUserName, 0LL, v96, v97, v98, v99, v100, v101);
  v102 = AccountLinkageParams_TypeInfo->static_fields;
  v102->basicPassword = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&v102->basicPassword, 0LL, v103, v104, v105, v106, v107, v108);
}


System_Byte_array *__fastcall AccountLinkageParams__Sha256(System_String_o *source, const MethodInfo *method)
{
  System_Text_Encoding_o *ASCII; // x0
  __int64 v4; // x1
  System_Byte_array *v5; // x19
  System_Security_Cryptography_SHA256Managed_o *v6; // x20

  if ( (byte_438CDBA & 1) == 0 )
  {
    sub_B775C4(&System_Security_Cryptography_SHA256Managed_TypeInfo);
    byte_438CDBA = 1;
  }
  ASCII = System_Text_Encoding__get_ASCII(0LL);
  if ( !ASCII
    || (v5 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))ASCII->klass->vtable._18_GetBytes.method)(
                                    ASCII,
                                    source,
                                    ASCII->klass->vtable._19_GetBytes.methodPtr),
        v6 = (System_Security_Cryptography_SHA256Managed_o *)sub_B77694(System_Security_Cryptography_SHA256Managed_TypeInfo),
        System_Security_Cryptography_SHA256Managed___ctor(v6, 0LL),
        !v6) )
  {
    sub_B7769C(ASCII, v4);
  }
  return System_Security_Cryptography_HashAlgorithm__ComputeHash_44413968(
           (System_Security_Cryptography_HashAlgorithm_o *)v6,
           v5,
           0LL);
}


void __fastcall AccountLinkageParams___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F17 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams___c_TypeInfo);
    byte_4389F17 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AccountLinkageParams___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AccountLinkageParams___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_4389F18 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_B775C4(&StringLiteral_24125/*"{0}={1}"*/);
    byte_4389F18 = 1;
  }
  return System_String__Format_44897472((System_String_o *)StringLiteral_24125/*"{0}={1}"*/, key, value, 0LL);
}