void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  System_String_o *v5; // x20
  int v6; // w24
  Il2CppObject *currentValue; // x25
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  System_String_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  System_String_o *v60; // x0
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v65; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4BDDE34 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C21E38(&StringLiteral_25603/*"}"*/);
    sub_1C21E38(&StringLiteral_906/*",\"num\":"*/);
    sub_1C21E38(&StringLiteral_25363/*"{\"id\":"*/);
    sub_1C21E38(&StringLiteral_21259/*"itemData"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDDE34 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1C22094(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v63,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v65 = v63;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v65,
            (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v65.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_63115476(v5, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    v8 = sub_1C21EE0(string___TypeInfo, 6LL);
    v16 = v8;
    if ( !v8 )
      sub_1C22094(0LL, v9);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1C2209C(v8, v9);
    *(_QWORD *)(v8 + 32) = v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)v5, v10, v11, v12, v13, v14, v15);
    if ( *(_DWORD *)(v16 + 24) <= 1u )
      sub_1C2209C(v17, v18);
    v25 = StringLiteral_25363/*"{\"id\":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_25363/*"{\"id\":"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 40), v25, v19, v20, v21, v22, v23, v24);
    if ( !currentValue )
      sub_1C22094(v26, v27);
    monitor = (int)currentValue[1].monitor;
    v28 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 2u )
      sub_1C2209C(v28, v28);
    *(_QWORD *)(v16 + 48) = v28;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 48), (int64_t)v28, v29, v30, v31, v32, v33, v34);
    if ( *(_DWORD *)(v16 + 24) <= 3u )
      sub_1C2209C(v35, v36);
    v43 = StringLiteral_906/*",\"num\":"*/;
    *(_QWORD *)(v16 + 56) = StringLiteral_906/*",\"num\":"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 56), v43, v37, v38, v39, v40, v41, v42);
    monitor = HIDWORD(currentValue[1].monitor);
    v44 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v16 + 24) <= 4u )
      sub_1C2209C(v44, v44);
    *(_QWORD *)(v16 + 64) = v44;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 64), (int64_t)v44, v45, v46, v47, v48, v49, v50);
    if ( *(_DWORD *)(v16 + 24) <= 5u )
      sub_1C2209C(v51, v52);
    v59 = StringLiteral_25603/*"}"*/;
    *(_QWORD *)(v16 + 72) = StringLiteral_25603/*"}"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 72), v59, v53, v54, v55, v56, v57, v58);
    ++v6;
    v5 = System_String__Concat_63129004((System_String_array *)v16, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v65,
    (const MethodInfo_34054B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v60 = System_String__Concat_63126736(
          (System_String_o *)StringLiteral_16086/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16345/*"]"*/,
          0LL);
  RequestBase__addField_42414744(v4, (System_String_o *)StringLiteral_21259/*"itemData"*/, v60, v61);
  RequestBase__beginRequest(v4, v62);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDE33 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_18347/*"coinRoom/put"*/);
    byte_4BDDE33 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_18347/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDE35 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDE35 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}