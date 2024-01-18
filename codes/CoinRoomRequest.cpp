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
  int v19; // w23
  Il2CppObject *currentValue; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  System_Int32_array **v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  System_Int32_array **v55; // x1
  System_String_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  System_Int32_array **v71; // x1
  System_String_o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x0
  RequestBase_o *v85; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v86; // [xsp+10h] [xbp-90h] BYREF
  int monitor; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_418887F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_B2C35C(&StringLiteral_23696/*"}"*/, v10);
    sub_B2C35C(&StringLiteral_738/*",\"num\":"*/, v11);
    sub_B2C35C(&StringLiteral_23477/*"{\"id\":"*/, v12);
    sub_B2C35C(&StringLiteral_20014/*"itemData"*/, v13);
    sub_B2C35C(&StringLiteral_699/*","*/, v14);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v17);
    byte_418887F = 1;
  }
  memset(&v88, 0, sizeof(v88));
  monitor = 0;
  if ( !requestValuse
    || (v85 = (RequestBase_o *)v4,
        v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                       (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)requestValuse,
                                       (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_B2C434(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v86,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v88 = v86;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v88,
            (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v88.fields.currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_44305532(v18, (System_String_o *)StringLiteral_699/*","*/, 0LL);
    v21 = sub_B2C374(string___TypeInfo, 6LL);
    v29 = (System_String_array *)v21;
    if ( !v21 )
      sub_B2C434(0LL, v22);
    if ( v18 )
    {
      v21 = sub_B2C41C(v18, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !v21 )
      {
        v79 = sub_B2C454(0LL);
        sub_B2C400(v79, 0LL);
      }
    }
    if ( !v29->max_length )
    {
      v74 = sub_B2C460(v21);
      sub_B2C400(v74, 0LL);
    }
    v29->m_Items[0] = v18;
    sub_B2C2F8((BattleServantConfConponent_o *)v29->m_Items, (System_Int32_array **)v18, v23, v24, v25, v26, v27, v28);
    v36 = StringLiteral_23477/*"{\"id\":"*/;
    if ( StringLiteral_23477/*"{\"id\":"*/ )
    {
      v36 = sub_B2C41C(StringLiteral_23477/*"{\"id\":"*/, v29->obj.klass->_1.element_class);
      if ( !v36 )
      {
        v84 = sub_B2C454(0LL);
        sub_B2C400(v84, 0LL);
      }
      v37 = (System_Int32_array **)StringLiteral_23477/*"{\"id\":"*/;
    }
    else
    {
      v37 = 0LL;
    }
    if ( v29->max_length <= 1 )
    {
      v75 = sub_B2C460(v36);
      sub_B2C400(v75, 0LL);
    }
    v29->m_Items[1] = (System_String_o *)v37;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[1], v37, v30, v31, v32, v33, v34, v35);
    if ( !currentValue )
      sub_B2C434(v38, v39);
    monitor = (int)currentValue[1].monitor;
    v40 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v47 = (System_Int32_array **)v40;
    if ( v40 )
    {
      v40 = (System_String_o *)sub_B2C41C(v40, v29->obj.klass->_1.element_class);
      if ( !v40 )
      {
        v81 = sub_B2C454(0LL);
        sub_B2C400(v81, 0LL);
      }
    }
    if ( v29->max_length <= 2 )
    {
      v78 = sub_B2C460(v40);
      sub_B2C400(v78, 0LL);
    }
    v29->m_Items[2] = (System_String_o *)v47;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
    v54 = StringLiteral_738/*",\"num\":"*/;
    if ( StringLiteral_738/*",\"num\":"*/ )
    {
      v54 = sub_B2C41C(StringLiteral_738/*",\"num\":"*/, v29->obj.klass->_1.element_class);
      if ( !v54 )
      {
        v80 = sub_B2C454(0LL);
        sub_B2C400(v80, 0LL);
      }
      v55 = (System_Int32_array **)StringLiteral_738/*",\"num\":"*/;
    }
    else
    {
      v55 = 0LL;
    }
    if ( v29->max_length <= 3 )
    {
      v77 = sub_B2C460(v54);
      sub_B2C400(v77, 0LL);
    }
    v29->m_Items[3] = (System_String_o *)v55;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[3], v55, v48, v49, v50, v51, v52, v53);
    monitor = HIDWORD(currentValue[1].monitor);
    v56 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v63 = (System_Int32_array **)v56;
    if ( v56 )
    {
      v56 = (System_String_o *)sub_B2C41C(v56, v29->obj.klass->_1.element_class);
      if ( !v56 )
      {
        v83 = sub_B2C454(0LL);
        sub_B2C400(v83, 0LL);
      }
    }
    if ( v29->max_length <= 4 )
    {
      v73 = sub_B2C460(v56);
      sub_B2C400(v73, 0LL);
    }
    v29->m_Items[4] = (System_String_o *)v63;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
    v70 = StringLiteral_23696/*"}"*/;
    if ( StringLiteral_23696/*"}"*/ )
    {
      v70 = sub_B2C41C(StringLiteral_23696/*"}"*/, v29->obj.klass->_1.element_class);
      if ( !v70 )
      {
        v82 = sub_B2C454(0LL);
        sub_B2C400(v82, 0LL);
      }
      v71 = (System_Int32_array **)StringLiteral_23696/*"}"*/;
    }
    else
    {
      v71 = 0LL;
    }
    if ( v29->max_length <= 5 )
    {
      v76 = sub_B2C460(v70);
      sub_B2C400(v76, 0LL);
    }
    v29->m_Items[5] = (System_String_o *)v71;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->m_Items[5], v71, v64, v65, v66, v67, v68, v69);
    ++v19;
    v18 = System_String__Concat_44385656(v29, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v88,
    (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v72 = System_String__Concat_44307816(
          (System_String_o *)StringLiteral_15634/*"["*/,
          v18,
          (System_String_o *)StringLiteral_15870/*"]"*/,
          0LL);
  RequestBase__addField_31051928(v85, (System_String_o *)StringLiteral_20014/*"itemData"*/, v72, 0LL);
  RequestBase__beginRequest(v85, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418887E & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17492/*"coinRoom/put"*/, v2);
    byte_418887E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17492/*"coinRoom/put"*/, 0LL);
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

  if ( (byte_4188880 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_4188880 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(110, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_31019724(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}