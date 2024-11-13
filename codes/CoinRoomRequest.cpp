void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
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
  System_String_o *v31; // x20
  int v32; // w24
  Il2CppObject *currentValue; // x25
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  System_String_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x0
  __int64 v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  System_String_o *v86; // x0
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v89; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v91; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4B17A51 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__,
      requestValuse,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&StringLiteral_25409/*"}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_903/*",\"num\":"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25175/*"{\"id\":"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21108/*"itemData"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    this = (CoinRoomRequest_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v29, v30);
    byte_4B17A51 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  monitor = 0;
  if ( !requestValuse
    || (v31 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1BCAA3C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v89,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v32 = 0;
  v91 = v89;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v91,
            (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v91.fields._currentValue;
    if ( v32 >= 1 )
      v31 = System_String__Concat_62401220(v31, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    v34 = sub_1BCA888(string___TypeInfo, 6LL);
    v42 = v34;
    if ( !v34 )
      sub_1BCAA3C(0LL, v35);
    if ( !*(_DWORD *)(v34 + 24) )
      sub_1BCAA44(v34, v35);
    *(_QWORD *)(v34 + 32) = v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v31, v36, v37, v38, v39, v40, v41);
    if ( *(_DWORD *)(v42 + 24) <= 1u )
      sub_1BCAA44(v43, v44);
    v51 = StringLiteral_25175/*"{\"id\":"*/;
    *(_QWORD *)(v42 + 40) = StringLiteral_25175/*"{\"id\":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 40), v51, v45, v46, v47, v48, v49, v50);
    if ( !currentValue )
      sub_1BCAA3C(v52, v53);
    monitor = (int)currentValue[1].monitor;
    v54 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v42 + 24) <= 2u )
      sub_1BCAA44(v54, v54);
    *(_QWORD *)(v42 + 48) = v54;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 48), (int64_t)v54, v55, v56, v57, v58, v59, v60);
    if ( *(_DWORD *)(v42 + 24) <= 3u )
      sub_1BCAA44(v61, v62);
    v69 = StringLiteral_903/*",\"num\":"*/;
    *(_QWORD *)(v42 + 56) = StringLiteral_903/*",\"num\":"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 56), v69, v63, v64, v65, v66, v67, v68);
    monitor = HIDWORD(currentValue[1].monitor);
    v70 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v42 + 24) <= 4u )
      sub_1BCAA44(v70, v70);
    *(_QWORD *)(v42 + 64) = v70;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 64), (int64_t)v70, v71, v72, v73, v74, v75, v76);
    if ( *(_DWORD *)(v42 + 24) <= 5u )
      sub_1BCAA44(v77, v78);
    v85 = StringLiteral_25409/*"}"*/;
    *(_QWORD *)(v42 + 72) = StringLiteral_25409/*"}"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 72), v85, v79, v80, v81, v82, v83, v84);
    ++v32;
    v31 = System_String__Concat_62414748((System_String_array *)v42, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v91,
    (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v86 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_15978/*"["*/,
          v31,
          (System_String_o *)StringLiteral_16236/*"]"*/,
          0LL);
  RequestBase__addField_41862348(v4, (System_String_o *)StringLiteral_21108/*"itemData"*/, v86, v87);
  RequestBase__beginRequest(v4, v88);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A50 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18225/*"coinRoom/put"*/, v3, v4);
    byte_4B17A50 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_18225/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17A52 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A52 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v9
    && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v13,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}