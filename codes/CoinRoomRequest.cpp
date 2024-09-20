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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  System_String_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v39; // [xsp+0h] [xbp-A0h] BYREF
  int monitor; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v41; // [xsp+20h] [xbp-80h] BYREF

  v4 = (RequestBase_o *)this;
  if ( (byte_4A5C993 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_1B885B0(&StringLiteral_25154/*"}"*/);
    sub_1B885B0(&StringLiteral_907/*",\"num\":"*/);
    sub_1B885B0(&StringLiteral_24920/*"{\"id\":"*/);
    sub_1B885B0(&StringLiteral_20880/*"itemData"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5C993 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  monitor = 0;
  if ( !requestValuse
    || (v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                       (System_Collections_Generic_Dictionary_int__object__o *)requestValuse,
                                       (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_1B8880C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v39,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v41 = v39;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v41,
            (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v41.fields._currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_61707032(v5, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    v8 = sub_1B88658(string___TypeInfo, 6LL);
    v12 = v8;
    if ( !v8 )
      sub_1B8880C(0LL, v9);
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1B88814(v8, v9);
    *(_QWORD *)(v8 + 32) = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v5, v10, v11);
    if ( *(_DWORD *)(v12 + 24) <= 1u )
      sub_1B88814(v13, v14);
    v17 = StringLiteral_24920/*"{\"id\":"*/;
    *(_QWORD *)(v12 + 40) = StringLiteral_24920/*"{\"id\":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 40), v17, v15, v16);
    if ( !currentValue )
      sub_1B8880C(v18, v19);
    monitor = (int)currentValue[1].monitor;
    v20 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 2u )
      sub_1B88814(v20, v20);
    *(_QWORD *)(v12 + 48) = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 48), (int32_t)v20, v21, v22);
    if ( *(_DWORD *)(v12 + 24) <= 3u )
      sub_1B88814(v23, v24);
    v27 = StringLiteral_907/*",\"num\":"*/;
    *(_QWORD *)(v12 + 56) = StringLiteral_907/*",\"num\":"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 56), v27, v25, v26);
    monitor = HIDWORD(currentValue[1].monitor);
    v28 = System_Int32__ToString((int32_t)&monitor, 0LL);
    if ( *(_DWORD *)(v12 + 24) <= 4u )
      sub_1B88814(v28, v28);
    *(_QWORD *)(v12 + 64) = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 64), (int32_t)v28, v29, v30);
    if ( *(_DWORD *)(v12 + 24) <= 5u )
      sub_1B88814(v31, v32);
    v35 = StringLiteral_25154/*"}"*/;
    *(_QWORD *)(v12 + 72) = StringLiteral_25154/*"}"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 72), v35, v33, v34);
    ++v6;
    v5 = System_String__Concat_61720560((System_String_array *)v12, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v41,
    (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v36 = System_String__Concat_61718292(
          (System_String_o *)StringLiteral_15812/*"["*/,
          v5,
          (System_String_o *)StringLiteral_16069/*"]"*/,
          0LL);
  RequestBase__addField_41126952(v4, (System_String_o *)StringLiteral_20880/*"itemData"*/, v36, v37);
  RequestBase__beginRequest(v4, v38);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C992 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18043/*"coinRoom/put"*/);
    byte_4A5C992 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_18043/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5C994 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C994 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}