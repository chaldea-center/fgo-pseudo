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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  System_String_o *v33; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4CB7DB3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_25368/*"}"*/);
    sub_1C6BA08(&StringLiteral_846/*",\"num\":"*/);
    sub_1C6BA08(&StringLiteral_25149/*"{\"id\":"*/);
    sub_1C6BA08(&StringLiteral_21087/*"itemData"*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB7DB3 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_3452300 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0) )
  {
    sub_1C6BC60(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3B3CC54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v36 = v34;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v36,
            (const MethodInfo_35AAF84 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v36.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_63966792(v5, (System_String_o *)StringLiteral_808/*","*/, 0);
    v8 = sub_1C6BAB0(string___TypeInfo, 6);
    v12 = v8;
    if ( !v8 )
      sub_1C6BC60(0, v9);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1C6BC68(v8);
    *(_QWORD *)(v8 + 32) = v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 32), (int32_t)v5, v10, v11);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      sub_1C6BC68(v13);
    v16 = StringLiteral_25149/*"{\"id\":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_25149/*"{\"id\":"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 40), v16, v14, v15);
    if ( !currentValue )
      sub_1C6BC60(v17, v18);
    monitor = (int)currentValue[1].monitor;
    v19 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v12 + 24) <= 2u )
      sub_1C6BC68(v19);
    *(_QWORD *)(v12 + 48) = v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 48), (int32_t)v19, v20, v21);
    if ( *(_DWORD *)(v12 + 24) <= 3u )
      sub_1C6BC68(v22);
    v25 = StringLiteral_846/*",\"num\":"*/;
    *(_QWORD *)(v12 + 56) = StringLiteral_846/*",\"num\":"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 56), v25, v23, v24);
    monitor = HIDWORD(currentValue[1].monitor);
    v26 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v12 + 24) <= 4u )
      sub_1C6BC68(v26);
    *(_QWORD *)(v12 + 64) = v26;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 64), (int32_t)v26, v27, v28);
    if ( *(_DWORD *)(v12 + 24) <= 5u )
      sub_1C6BC68(v29);
    v32 = StringLiteral_25368/*"}"*/;
    *(_QWORD *)(v12 + 72) = StringLiteral_25368/*"}"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 72), v32, v30, v31);
    ++v6;
    v5 = System_String__Concat_64007324((System_String_array *)v12, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v36,
    (const MethodInfo_35AAF80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v33 = System_String__Concat_64005056(
          (System_String_o *)StringLiteral_15801/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16051/*"]"*/,
          0);
  RequestBase__addField_44471996(v4, (System_String_o *)StringLiteral_21087/*"itemData"*/, v33, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7DB2 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_18057/*"coinRoom/put"*/);
    byte_4CB7DB2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_18057/*"coinRoom/put"*/, 0);
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

  if ( (byte_4CB7DB4 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7DB4 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44468912(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22301/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}