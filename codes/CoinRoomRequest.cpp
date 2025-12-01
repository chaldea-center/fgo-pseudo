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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x21
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  System_String_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w1
  System_String_o *v57; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v58; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v60; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4CC8EDC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1C713B0(&StringLiteral_25388/*"}"*/);
    sub_1C713B0(&StringLiteral_846/*",\"num\":"*/);
    sub_1C713B0(&StringLiteral_25169/*"{\"id\":"*/);
    sub_1C713B0(&StringLiteral_21102/*"itemData"*/);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_1C713B0(&StringLiteral_16058/*"]"*/);
    byte_4CC8EDC = 1;
  }
  memset(&v60, 0, sizeof(v60));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_34620A4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0) )
  {
    sub_1C71608(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v58,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3B4C9F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v60 = v58;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v60,
            (const MethodInfo_35BAD28 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v60.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_64031724(v5, (System_String_o *)StringLiteral_808/*","*/, 0);
    v8 = sub_1C71458(string___TypeInfo, 6);
    v16 = v8;
    if ( !v8 )
      sub_1C71608(0, v9);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1C71610(v8);
    *(_QWORD *)(v8 + 32) = v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)v5, v10, v11, v12, v13, v14, v15);
    if ( *(_DWORD *)(v16 + 24) <= 1u )
      sub_1C71610(v17);
    v24 = StringLiteral_25169/*"{\"id\":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_25169/*"{\"id\":"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
    if ( !currentValue )
      sub_1C71608(v25, v26);
    monitor = (int)currentValue[1].monitor;
    v27 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v16 + 24) <= 2u )
      sub_1C71610(v27);
    *(_QWORD *)(v16 + 48) = v27;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 48), (int32_t)v27, v28, v29, v30, v31, v32, v33);
    if ( *(_DWORD *)(v16 + 24) <= 3u )
      sub_1C71610(v34);
    v41 = StringLiteral_846/*",\"num\":"*/;
    *(_QWORD *)(v16 + 56) = StringLiteral_846/*",\"num\":"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 56), v41, v35, v36, v37, v38, v39, v40);
    monitor = HIDWORD(currentValue[1].monitor);
    v42 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v16 + 24) <= 4u )
      sub_1C71610(v42);
    *(_QWORD *)(v16 + 64) = v42;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 64), (int32_t)v42, v43, v44, v45, v46, v47, v48);
    if ( *(_DWORD *)(v16 + 24) <= 5u )
      sub_1C71610(v49);
    v56 = StringLiteral_25388/*"}"*/;
    *(_QWORD *)(v16 + 72) = StringLiteral_25388/*"}"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 72), v56, v50, v51, v52, v53, v54, v55);
    ++v6;
    v5 = System_String__Concat_64072256((System_String_array *)v16, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v60,
    (const MethodInfo_35BAD24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v57 = System_String__Concat_64069988(
          (System_String_o *)StringLiteral_15808/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16058/*"]"*/,
          0);
  RequestBase__addField_44518324(v4, (System_String_o *)StringLiteral_21102/*"itemData"*/, v57, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8EDB & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_18066/*"coinRoom/put"*/);
    byte_4CC8EDB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_18066/*"coinRoom/put"*/, 0);
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

  if ( (byte_4CC8EDD & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8EDD = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44515240(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22316/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}