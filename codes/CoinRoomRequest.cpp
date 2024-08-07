void __fastcall CoinRoomRequest___ctor(CoinRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v50; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v52; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4A0025F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_1B64A00(&string___TypeInfo, v8);
    sub_1B64A00(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_1B64A00(&StringLiteral_25056/*"}"*/, v10);
    sub_1B64A00(&StringLiteral_908/*",\"num\":"*/, v11);
    sub_1B64A00(&StringLiteral_24825/*"{\"id\":"*/, v12);
    sub_1B64A00(&StringLiteral_20801/*"itemData"*/, v13);
    sub_1B64A00(&StringLiteral_869/*","*/, v14);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v15);
    sub_1B64A00(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_1B64A00(&StringLiteral_16003/*"]"*/, v17);
    byte_4A0025F = 1;
  }
  memset(&v52, 0, sizeof(v52));
  monitor = 0;
  if ( !requestValuse
    || (v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_3126088 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1B64C5C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v50,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37B7EEC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v52 = v50;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v52,
            (const MethodInfo_326D1DC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v52.fields._currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_61385136(v18, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    v21 = sub_1B64AA8(string___TypeInfo, 6LL);
    v25 = v21;
    if ( !v21 )
      sub_1B64C5C(0LL, v22);
    if ( !*(_DWORD *)(v21 + 24) )
      sub_1B64C64(v21, v22);
    *(_QWORD *)(v21 + 32) = v18;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v18, v23, v24);
    if ( *(_DWORD *)(v25 + 24) <= 1u )
      sub_1B64C64(v26, v27);
    v30 = StringLiteral_24825/*"{\"id\":"*/;
    *(_QWORD *)(v25 + 40) = StringLiteral_24825/*"{\"id\":"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 40), v30, v28, v29);
    if ( !currentValue )
      sub_1B64C5C(v31, v32);
    monitor = (int)currentValue[1].monitor;
    v33 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 2u )
      sub_1B64C64(v33, v33);
    *(_QWORD *)(v25 + 48) = v33;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v33, v34, v35);
    if ( *(_DWORD *)(v25 + 24) <= 3u )
      sub_1B64C64(v36, v37);
    v40 = StringLiteral_908/*",\"num\":"*/;
    *(_QWORD *)(v25 + 56) = StringLiteral_908/*",\"num\":"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 56), v40, v38, v39);
    monitor = HIDWORD(currentValue[1].monitor);
    v41 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 4u )
      sub_1B64C64(v41, v41);
    *(_QWORD *)(v25 + 64) = v41;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 64), (int32_t)v41, v42, v43);
    if ( *(_DWORD *)(v25 + 24) <= 5u )
      sub_1B64C64(v44, v45);
    v48 = StringLiteral_25056/*"}"*/;
    *(_QWORD *)(v25 + 72) = StringLiteral_25056/*"}"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 72), v48, v46, v47);
    ++v19;
    v18 = System_String__Concat_61398664((System_String_array *)v25, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v52,
    (const MethodInfo_326D1D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v49 = System_String__Concat_61396396(
          (System_String_o *)StringLiteral_15747/*"["*/,
          v18,
          (System_String_o *)StringLiteral_16003/*"]"*/,
          0LL);
  RequestBase__addField_40856580(v4, (System_String_o *)StringLiteral_20801/*"itemData"*/, v49, 0LL);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0025E & 1) == 0 )
  {
    sub_1B64A00(&NetworkManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17976/*"coinRoom/put"*/, v2);
    byte_4A0025E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61385136(BaseUrl, (System_String_o *)StringLiteral_17976/*"coinRoom/put"*/, 0LL);
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
  System_String_o *v10; // x1

  if ( (byte_4A00260 & 1) == 0 )
  {
    sub_1B64A00(&JsonManager_TypeInfo, responseList);
    sub_1B64A00(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A00260 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_40851660(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21971/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}