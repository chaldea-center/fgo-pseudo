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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  __int64 v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *dictionary; // x21
  System_String_o *v58; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v59; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v61; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_597239A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_2213A60(&StringLiteral_26659/*"}"*/);
    sub_2213A60(&StringLiteral_911/*",\"num\":"*/);
    sub_2213A60(&StringLiteral_26419/*"{\"id\":"*/);
    sub_2213A60(&StringLiteral_22056/*"itemData"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_597239A = 1;
  }
  memset(&v61, 0, sizeof(v61));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0) )
  {
    sub_2213CDC(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v59,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v61 = v59;
  v59.fields._dictionary = 0;
  *(_QWORD *)&v59.fields._index = &v61;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v61,
            (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v61.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_75651716(v5, (System_String_o *)StringLiteral_869/*","*/, 0);
    v8 = sub_2213B20(string___TypeInfo, 6);
    v16 = v8;
    if ( !v8 )
      sub_2213CDC(0, v9);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_2213CE4(v8);
    *(_QWORD *)(v8 + 32) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)v5, v10, v11, v12, v13, v14, v15);
    if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0 )
      sub_2213CE4(v17);
    v24 = StringLiteral_26419/*"{\"id\":"*/;
    *(_QWORD *)(v16 + 40) = StringLiteral_26419/*"{\"id\":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 40), v24, v18, v19, v20, v21, v22, v23);
    if ( !currentValue )
      sub_2213CDC(v25, v26);
    monitor = (int)currentValue[1].monitor;
    v27 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v16 + 24) <= 2u )
      sub_2213CE4(v27);
    *(_QWORD *)(v16 + 48) = v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 48), (int32_t)v27, v28, v29, v30, v31, v32, v33);
    if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFC) == 0 )
      sub_2213CE4(v34);
    v41 = StringLiteral_911/*",\"num\":"*/;
    *(_QWORD *)(v16 + 56) = StringLiteral_911/*",\"num\":"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 56), v41, v35, v36, v37, v38, v39, v40);
    monitor = HIDWORD(currentValue[1].monitor);
    v42 = System_Int32__ToString((int32_t)&monitor, 0);
    if ( *(_DWORD *)(v16 + 24) <= 4u )
      sub_2213CE4(v42);
    *(_QWORD *)(v16 + 64) = v42;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 64), (int32_t)v42, v43, v44, v45, v46, v47, v48);
    if ( *(_DWORD *)(v16 + 24) <= 5u )
      sub_2213CE4(v49);
    v56 = StringLiteral_26659/*"}"*/;
    *(_QWORD *)(v16 + 72) = StringLiteral_26659/*"}"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 72), v56, v50, v51, v52, v53, v54, v55);
    ++v6;
    v5 = System_String__Concat_75697120((System_String_array *)v16, 0);
  }
  dictionary = v59.fields._dictionary;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o **)&v59.fields._index,
    (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  if ( dictionary )
    sub_2213CD4(dictionary);
  v58 = System_String__Concat_75694928(
          (System_String_o *)StringLiteral_16427/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16691/*"]"*/,
          0);
  RequestBase__addField_51259256(v4, (System_String_o *)StringLiteral_22056/*"itemData"*/, v58, 0);
  RequestBase__beginRequest(v4, 0);
}


System_String_o *CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972399 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18837/*"coinRoom/put"*/);
    byte_5972399 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18837/*"coinRoom/put"*/, 0);
}


void CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *success; // x20
  System_String_o *v9; // x1

  if ( (byte_597239B & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_597239B = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_51257228(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7);
    v9 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v9 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v9, 0);
}