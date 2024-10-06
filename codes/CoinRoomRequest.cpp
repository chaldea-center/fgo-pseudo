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
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  System_String_o *v49; // x0
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v52; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v54; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4A716A7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_1B90010(&string___TypeInfo, v8);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_1B90010(&StringLiteral_25194/*"}"*/, v10);
    sub_1B90010(&StringLiteral_907/*",\"num\":"*/, v11);
    sub_1B90010(&StringLiteral_24960/*"{\"id\":"*/, v12);
    sub_1B90010(&StringLiteral_20909/*"itemData"*/, v13);
    sub_1B90010(&StringLiteral_868/*","*/, v14);
    sub_1B90010(&StringLiteral_15837/*"["*/, v15);
    sub_1B90010(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_1B90010(&StringLiteral_16094/*"]"*/, v17);
    byte_4A716A7 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  monitor = 0;
  if ( !requestValuse
    || (v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_317C3DC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1B9026C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v52,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3817D04 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v54 = v52;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v54,
            (const MethodInfo_32C9ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v54.fields._currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_61787092(v18, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    v21 = sub_1B900B8(string___TypeInfo, 6LL);
    v25 = v21;
    if ( !v21 )
      sub_1B9026C(0LL, v22);
    if ( !*(_DWORD *)(v21 + 24) )
      sub_1B90274(v21, v22);
    *(_QWORD *)(v21 + 32) = v18;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v18, v23, v24);
    if ( *(_DWORD *)(v25 + 24) <= 1u )
      sub_1B90274(v26, v27);
    v30 = StringLiteral_24960/*"{\"id\":"*/;
    *(_QWORD *)(v25 + 40) = StringLiteral_24960/*"{\"id\":"*/;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 40), v30, v28, v29);
    if ( !currentValue )
      sub_1B9026C(v31, v32);
    monitor = (int)currentValue[1].monitor;
    v33 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 2u )
      sub_1B90274(v33, v33);
    *(_QWORD *)(v25 + 48) = v33;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v33, v34, v35);
    if ( *(_DWORD *)(v25 + 24) <= 3u )
      sub_1B90274(v36, v37);
    v40 = StringLiteral_907/*",\"num\":"*/;
    *(_QWORD *)(v25 + 56) = StringLiteral_907/*",\"num\":"*/;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 56), v40, v38, v39);
    monitor = HIDWORD(currentValue[1].monitor);
    v41 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 4u )
      sub_1B90274(v41, v41);
    *(_QWORD *)(v25 + 64) = v41;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 64), (int32_t)v41, v42, v43);
    if ( *(_DWORD *)(v25 + 24) <= 5u )
      sub_1B90274(v44, v45);
    v48 = StringLiteral_25194/*"}"*/;
    *(_QWORD *)(v25 + 72) = StringLiteral_25194/*"}"*/;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 72), v48, v46, v47);
    ++v19;
    v18 = System_String__Concat_61800620((System_String_array *)v25, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v54,
    (const MethodInfo_32C9ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v49 = System_String__Concat_61798352(
          (System_String_o *)StringLiteral_15837/*"["*/,
          v18,
          (System_String_o *)StringLiteral_16094/*"]"*/,
          0LL);
  RequestBase__addField_41181164(v4, (System_String_o *)StringLiteral_20909/*"itemData"*/, v49, v50);
  RequestBase__beginRequest(v4, v51);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A716A6 & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_18069/*"coinRoom/put"*/, v2);
    byte_4A716A6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61787092(BaseUrl, (System_String_o *)StringLiteral_18069/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4A716A8 & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, responseList);
    sub_1B90010(&ResponseCommandKind_TypeInfo, v5);
    sub_1B90010(&StringLiteral_22088/*"ng"*/, v6);
    byte_4A716A8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v7
    && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_22088/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}