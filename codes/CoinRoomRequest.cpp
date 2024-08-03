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
  System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  System_String_o *v48; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v49; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_49FDB43 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_1B640C8(&StringLiteral_25052/*"}"*/, v10);
    sub_1B640C8(&StringLiteral_908/*",\"num\":"*/, v11);
    sub_1B640C8(&StringLiteral_24821/*"{\"id\":"*/, v12);
    sub_1B640C8(&StringLiteral_20798/*"itemData"*/, v13);
    sub_1B640C8(&StringLiteral_869/*","*/, v14);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v17);
    byte_49FDB43 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  monitor = 0;
  if ( !requestValuse
    || (v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v49,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v51 = v49;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v51,
            (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v51.fields._currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_61375396(v18, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    v21 = sub_1B64170(string___TypeInfo, 6LL);
    v25 = v21;
    if ( !v21 )
      sub_1B64324(0LL);
    if ( !*(_DWORD *)(v21 + 24) )
      sub_1B6432C(v21, v22);
    *(_QWORD *)(v21 + 32) = v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v18, v23, v24);
    if ( *(_DWORD *)(v25 + 24) <= 1u )
      sub_1B6432C(v26, v27);
    v30 = StringLiteral_24821/*"{\"id\":"*/;
    *(_QWORD *)(v25 + 40) = StringLiteral_24821/*"{\"id\":"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 40), v30, v28, v29);
    if ( !currentValue )
      sub_1B64324(v31);
    monitor = (int)currentValue[1].monitor;
    v32 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 2u )
      sub_1B6432C(v32, v32);
    *(_QWORD *)(v25 + 48) = v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 48), (int32_t)v32, v33, v34);
    if ( *(_DWORD *)(v25 + 24) <= 3u )
      sub_1B6432C(v35, v36);
    v39 = StringLiteral_908/*",\"num\":"*/;
    *(_QWORD *)(v25 + 56) = StringLiteral_908/*",\"num\":"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 56), v39, v37, v38);
    monitor = HIDWORD(currentValue[1].monitor);
    v40 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v25 + 24) <= 4u )
      sub_1B6432C(v40, v40);
    *(_QWORD *)(v25 + 64) = v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 64), (int32_t)v40, v41, v42);
    if ( *(_DWORD *)(v25 + 24) <= 5u )
      sub_1B6432C(v43, v44);
    v47 = StringLiteral_25052/*"}"*/;
    *(_QWORD *)(v25 + 72) = StringLiteral_25052/*"}"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 72), v47, v45, v46);
    ++v19;
    v18 = System_String__Concat_61388924((System_String_array *)v25, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v51,
    (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v48 = System_String__Concat_61386656(
          (System_String_o *)StringLiteral_15744/*"["*/,
          v18,
          (System_String_o *)StringLiteral_16000/*"]"*/,
          0LL);
  RequestBase__addField_40850936(v4, (System_String_o *)StringLiteral_20798/*"itemData"*/, v48, 0LL);
  RequestBase__beginRequest(v4, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDB42 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17973/*"coinRoom/put"*/, v2);
    byte_49FDB42 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_17973/*"coinRoom/put"*/, 0LL);
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

  if ( (byte_49FDB44 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, responseList);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49FDB44 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_40846016(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21968/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}