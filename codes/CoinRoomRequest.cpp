void CoinRoomRequest___ctor(CoinRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  System_String_o *v5; // x20
  int v6; // w24
  Il2CppObject *currentValue; // x25
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x21
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  __int64 v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  System_String_o *v31; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4C44A6E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C37058(&StringLiteral_25258/*"}"*/);
    sub_1C37058(&StringLiteral_849/*",\"num\":"*/);
    sub_1C37058(&StringLiteral_25039/*"{\"id\":"*/);
    sub_1C37058(&StringLiteral_21022/*"itemData"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C44A6E = 1;
  }
  memset(&v34, 0, sizeof(v34));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_33FA394 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0) )
  {
    sub_1C372B4(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3AD998C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v34 = v32;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v34,
            (const MethodInfo_355206C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v34.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_63561656(v5, (System_String_o *)StringLiteral_811/*","*/, 0);
    v8 = sub_1C37100(string___TypeInfo, 6);
    v11 = v8;
    if ( !v8 )
      sub_1C372B4(0);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1C372BC(v8);
    *(_QWORD *)(v8 + 32) = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v5, v9, v10);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
      sub_1C372BC(v12);
    v15 = StringLiteral_25039/*"{\"id\":"*/;
    *(_QWORD *)(v11 + 40) = StringLiteral_25039/*"{\"id\":"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 40), v15, v13, v14);
    if ( !currentValue )
      sub_1C372B4(v16);
    monitor = (int)currentValue[1].monitor;
    v17 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v11 + 24) <= 2u )
      sub_1C372BC(v17);
    *(_QWORD *)(v11 + 48) = v17;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 48), (int32_t)v17, v18, v19);
    if ( *(_DWORD *)(v11 + 24) <= 3u )
      sub_1C372BC(v20);
    v23 = StringLiteral_849/*",\"num\":"*/;
    *(_QWORD *)(v11 + 56) = StringLiteral_849/*",\"num\":"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 56), v23, v21, v22);
    monitor = HIDWORD(currentValue[1].monitor);
    v24 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v11 + 24) <= 4u )
      sub_1C372BC(v24);
    *(_QWORD *)(v11 + 64) = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 64), (int32_t)v24, v25, v26);
    if ( *(_DWORD *)(v11 + 24) <= 5u )
      sub_1C372BC(v27);
    v30 = StringLiteral_25258/*"}"*/;
    *(_QWORD *)(v11 + 72) = StringLiteral_25258/*"}"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 72), v30, v28, v29);
    ++v6;
    v5 = System_String__Concat_63602172((System_String_array *)v11, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v34,
    (const MethodInfo_3552068 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v31 = System_String__Concat_63599904(
          (System_String_o *)StringLiteral_15804/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16058/*"]"*/,
          0);
  RequestBase__addField_44247300(v4, (System_String_o *)StringLiteral_21022/*"itemData"*/, v31, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44A6D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_18042/*"coinRoom/put"*/);
    byte_4C44A6D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_18042/*"coinRoom/put"*/, 0);
}


void CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4C44A6F & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44A6F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44242528(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22215/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}