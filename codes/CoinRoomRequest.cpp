void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
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
  System_String_o *v18; // x20
  int v19; // w24
  Il2CppObject *currentValue; // x25
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  System_String_o *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  System_String_o *v73; // x0
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v76; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v78; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4BC938A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_1C1ABD4(&string___TypeInfo, v8);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_1C1ABD4(&StringLiteral_25580/*"}"*/, v10);
    sub_1C1ABD4(&StringLiteral_906/*",\"num\":"*/, v11);
    sub_1C1ABD4(&StringLiteral_25341/*"{\"id\":"*/, v12);
    sub_1C1ABD4(&StringLiteral_21241/*"itemData"*/, v13);
    sub_1C1ABD4(&StringLiteral_866/*","*/, v14);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v15);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v17);
    byte_4BC938A = 1;
  }
  memset(&v78, 0, sizeof(v78));
  monitor = 0;
  if ( !requestValuse
    || (v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_32A210C *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1C1AE30(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v76,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_396B37C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v78 = v76;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v78,
            (const MethodInfo_33F2710 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v78.fields._currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_63040368(v18, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    v21 = sub_1C1AC7C(string___TypeInfo, 6LL);
    v29 = v21;
    if ( !v21 )
      sub_1C1AE30(0LL, v22);
    if ( !*(_DWORD *)(v21 + 24) )
      sub_1C1AE38(v21, v22);
    *(_QWORD *)(v21 + 32) = v18;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v18, v23, v24, v25, v26, v27, v28);
    if ( *(_DWORD *)(v29 + 24) <= 1u )
      sub_1C1AE38(v30, v31);
    v38 = StringLiteral_25341/*"{\"id\":"*/;
    *(_QWORD *)(v29 + 40) = StringLiteral_25341/*"{\"id\":"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 40), v38, v32, v33, v34, v35, v36, v37);
    if ( !currentValue )
      sub_1C1AE30(v39, v40);
    monitor = (int)currentValue[1].monitor;
    v41 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v29 + 24) <= 2u )
      sub_1C1AE38(v41, v41);
    *(_QWORD *)(v29 + 48) = v41;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 48), (int64_t)v41, v42, v43, v44, v45, v46, v47);
    if ( *(_DWORD *)(v29 + 24) <= 3u )
      sub_1C1AE38(v48, v49);
    v56 = StringLiteral_906/*",\"num\":"*/;
    *(_QWORD *)(v29 + 56) = StringLiteral_906/*",\"num\":"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 56), v56, v50, v51, v52, v53, v54, v55);
    monitor = HIDWORD(currentValue[1].monitor);
    v57 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v29 + 24) <= 4u )
      sub_1C1AE38(v57, v57);
    *(_QWORD *)(v29 + 64) = v57;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 64), (int64_t)v57, v58, v59, v60, v61, v62, v63);
    if ( *(_DWORD *)(v29 + 24) <= 5u )
      sub_1C1AE38(v64, v65);
    v72 = StringLiteral_25580/*"}"*/;
    *(_QWORD *)(v29 + 72) = StringLiteral_25580/*"}"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 72), v72, v66, v67, v68, v69, v70, v71);
    ++v19;
    v18 = System_String__Concat_63053896((System_String_array *)v29, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v78,
    (const MethodInfo_33F270C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v73 = System_String__Concat_63051628(
          (System_String_o *)StringLiteral_16075/*"["*/,
          v18,
          (System_String_o *)StringLiteral_16334/*"]"*/,
          0LL);
  RequestBase__addField_42362156(v4, (System_String_o *)StringLiteral_21241/*"itemData"*/, v73, v74);
  RequestBase__beginRequest(v4, v75);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9389 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18333/*"coinRoom/put"*/, v2);
    byte_4BC9389 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_18333/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_4BC938B & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, responseList);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC938B = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_42452820(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_22437/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}