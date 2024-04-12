void __fastcall CoinRoomRequest___ctor(CoinRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  CoinRoomRequest_o *v4; // x20
  System_String_o *v5; // x20
  int v6; // w23
  Il2CppObject *currentValue; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  System_Int32_array **v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  System_Int32_array **v42; // x1
  System_String_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  System_Int32_array **v58; // x1
  System_String_o *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  RequestBase_o *v72; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v73; // [xsp+10h] [xbp-90h] BYREF
  int monitor; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v75; // [xsp+30h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42B0E7E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
    sub_B52984(&StringLiteral_23890/*"}"*/);
    sub_B52984(&StringLiteral_748/*",\"num\":"*/);
    sub_B52984(&StringLiteral_23670/*"{\"id\":"*/);
    sub_B52984(&StringLiteral_20165/*"itemData"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (CoinRoomRequest_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B0E7E = 1;
  }
  memset(&v75, 0, sizeof(v75));
  monitor = 0;
  if ( !requestValuse
    || (v72 = (RequestBase_o *)v4,
        v5 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                       (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)requestValuse,
                                       (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_B52A5C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v73,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_2411CCC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v6 = 0;
  v75 = v73;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v75,
            (const MethodInfo_288A750 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v75.fields.currentValue;
    if ( v6 >= 1 )
      v5 = System_String__Concat_44568316(v5, (System_String_o *)StringLiteral_709/*","*/, 0LL);
    v8 = sub_B5299C(string___TypeInfo, 6LL);
    v16 = (System_String_array *)v8;
    if ( !v8 )
      sub_B52A5C(0LL, v9);
    if ( v5 )
    {
      v8 = sub_B52A44(v5, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v8 )
      {
        v66 = sub_B52A7C(0LL);
        sub_B52A28(v66, 0LL);
      }
    }
    if ( !v16->max_length )
    {
      v61 = sub_B52A88(v8);
      sub_B52A28(v61, 0LL);
    }
    v16->m_Items[0] = v5;
    sub_B52920((BattleServantConfConponent_o *)v16->m_Items, (System_Int32_array **)v5, v10, v11, v12, v13, v14, v15);
    v23 = StringLiteral_23670/*"{\"id\":"*/;
    if ( StringLiteral_23670/*"{\"id\":"*/ )
    {
      v23 = sub_B52A44(StringLiteral_23670/*"{\"id\":"*/, v16->obj.klass->_1.element_class);
      if ( !v23 )
      {
        v71 = sub_B52A7C(0LL);
        sub_B52A28(v71, 0LL);
      }
      v24 = (System_Int32_array **)StringLiteral_23670/*"{\"id\":"*/;
    }
    else
    {
      v24 = 0LL;
    }
    if ( v16->max_length <= 1 )
    {
      v62 = sub_B52A88(v23);
      sub_B52A28(v62, 0LL);
    }
    v16->m_Items[1] = (System_String_o *)v24;
    sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[1], v24, v17, v18, v19, v20, v21, v22);
    if ( !currentValue )
      sub_B52A5C(v25, v26);
    monitor = (int)currentValue[1].monitor;
    v27 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v34 = (System_Int32_array **)v27;
    if ( v27 )
    {
      v27 = (System_String_o *)sub_B52A44(v27, v16->obj.klass->_1.element_class);
      if ( !v27 )
      {
        v68 = sub_B52A7C(0LL);
        sub_B52A28(v68, 0LL);
      }
    }
    if ( v16->max_length <= 2 )
    {
      v65 = sub_B52A88(v27);
      sub_B52A28(v65, 0LL);
    }
    v16->m_Items[2] = (System_String_o *)v34;
    sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[2], v34, v28, v29, v30, v31, v32, v33);
    v41 = StringLiteral_748/*",\"num\":"*/;
    if ( StringLiteral_748/*",\"num\":"*/ )
    {
      v41 = sub_B52A44(StringLiteral_748/*",\"num\":"*/, v16->obj.klass->_1.element_class);
      if ( !v41 )
      {
        v67 = sub_B52A7C(0LL);
        sub_B52A28(v67, 0LL);
      }
      v42 = (System_Int32_array **)StringLiteral_748/*",\"num\":"*/;
    }
    else
    {
      v42 = 0LL;
    }
    if ( v16->max_length <= 3 )
    {
      v64 = sub_B52A88(v41);
      sub_B52A28(v64, 0LL);
    }
    v16->m_Items[3] = (System_String_o *)v42;
    sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[3], v42, v35, v36, v37, v38, v39, v40);
    monitor = HIDWORD(currentValue[1].monitor);
    v43 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v50 = (System_Int32_array **)v43;
    if ( v43 )
    {
      v43 = (System_String_o *)sub_B52A44(v43, v16->obj.klass->_1.element_class);
      if ( !v43 )
      {
        v70 = sub_B52A7C(0LL);
        sub_B52A28(v70, 0LL);
      }
    }
    if ( v16->max_length <= 4 )
    {
      v60 = sub_B52A88(v43);
      sub_B52A28(v60, 0LL);
    }
    v16->m_Items[4] = (System_String_o *)v50;
    sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
    v57 = StringLiteral_23890/*"}"*/;
    if ( StringLiteral_23890/*"}"*/ )
    {
      v57 = sub_B52A44(StringLiteral_23890/*"}"*/, v16->obj.klass->_1.element_class);
      if ( !v57 )
      {
        v69 = sub_B52A7C(0LL);
        sub_B52A28(v69, 0LL);
      }
      v58 = (System_Int32_array **)StringLiteral_23890/*"}"*/;
    }
    else
    {
      v58 = 0LL;
    }
    if ( v16->max_length <= 5 )
    {
      v63 = sub_B52A88(v57);
      sub_B52A28(v63, 0LL);
    }
    v16->m_Items[5] = (System_String_o *)v58;
    sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[5], v58, v51, v52, v53, v54, v55, v56);
    ++v6;
    v5 = System_String__Concat_44648440(v16, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v75,
    (const MethodInfo_288A74C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v59 = System_String__Concat_44570600(
          (System_String_o *)StringLiteral_15739/*"["*/,
          v5,
          (System_String_o *)StringLiteral_15976/*"]"*/,
          0LL);
  RequestBase__addField_32020920(v72, (System_String_o *)StringLiteral_20165/*"itemData"*/, v59, 0LL);
  RequestBase__beginRequest(v72, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B0E7D & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_17617/*"coinRoom/put"*/);
    byte_42B0E7D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_17617/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42B0E7F & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B0E7F = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}