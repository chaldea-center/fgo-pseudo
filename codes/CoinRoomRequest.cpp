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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  System_Int32_array **v36; // x1
  __int64 v37; // x0
  System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  System_Int32_array **v53; // x1
  System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x0
  System_Int32_array **v69; // x1
  System_String_o *v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
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
  RequestBase_o *v83; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v84; // [xsp+10h] [xbp-90h] BYREF
  int monitor; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v86; // [xsp+30h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42143A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_B0D8A4(&StringLiteral_23774/*"}"*/, v10);
    sub_B0D8A4(&StringLiteral_744/*",\"num\":"*/, v11);
    sub_B0D8A4(&StringLiteral_23555/*"{\"id\":"*/, v12);
    sub_B0D8A4(&StringLiteral_20077/*"itemData"*/, v13);
    sub_B0D8A4(&StringLiteral_705/*","*/, v14);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    this = (CoinRoomRequest_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v17);
    byte_42143A3 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  monitor = 0;
  if ( !requestValuse
    || (v83 = (RequestBase_o *)v4,
        v18 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                       (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)requestValuse,
                                       (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v84,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v19 = 0;
  v86 = v84;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v86,
            (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v86.fields.currentValue;
    if ( v19 >= 1 )
      v18 = System_String__Concat_43849904(v18, (System_String_o *)StringLiteral_705/*","*/, 0LL);
    v21 = sub_B0D8BC(string___TypeInfo, 6LL);
    v28 = (System_String_array *)v21;
    if ( !v21 )
      sub_B0D97C(0LL);
    if ( v18 )
    {
      v21 = sub_B0D964(v18, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !v21 )
      {
        v77 = sub_B0D99C(0LL);
        sub_B0D948(v77, 0LL);
      }
    }
    if ( !v28->max_length )
    {
      v72 = sub_B0D9A8(v21);
      sub_B0D948(v72, 0LL);
    }
    v28->m_Items[0] = v18;
    sub_B0D840((BattleServantConfConponent_o *)v28->m_Items, (System_Int32_array **)v18, v22, v23, v24, v25, v26, v27);
    v35 = StringLiteral_23555/*"{\"id\":"*/;
    if ( StringLiteral_23555/*"{\"id\":"*/ )
    {
      v35 = sub_B0D964(StringLiteral_23555/*"{\"id\":"*/, v28->obj.klass->_1.element_class);
      if ( !v35 )
      {
        v82 = sub_B0D99C(0LL);
        sub_B0D948(v82, 0LL);
      }
      v36 = (System_Int32_array **)StringLiteral_23555/*"{\"id\":"*/;
    }
    else
    {
      v36 = 0LL;
    }
    if ( v28->max_length <= 1 )
    {
      v73 = sub_B0D9A8(v35);
      sub_B0D948(v73, 0LL);
    }
    v28->m_Items[1] = (System_String_o *)v36;
    sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[1], v36, v29, v30, v31, v32, v33, v34);
    if ( !currentValue )
      sub_B0D97C(v37);
    monitor = (int)currentValue[1].monitor;
    v38 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v45 = (System_Int32_array **)v38;
    if ( v38 )
    {
      v38 = (System_String_o *)sub_B0D964(v38, v28->obj.klass->_1.element_class);
      if ( !v38 )
      {
        v79 = sub_B0D99C(0LL);
        sub_B0D948(v79, 0LL);
      }
    }
    if ( v28->max_length <= 2 )
    {
      v76 = sub_B0D9A8(v38);
      sub_B0D948(v76, 0LL);
    }
    v28->m_Items[2] = (System_String_o *)v45;
    sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
    v52 = StringLiteral_744/*",\"num\":"*/;
    if ( StringLiteral_744/*",\"num\":"*/ )
    {
      v52 = sub_B0D964(StringLiteral_744/*",\"num\":"*/, v28->obj.klass->_1.element_class);
      if ( !v52 )
      {
        v78 = sub_B0D99C(0LL);
        sub_B0D948(v78, 0LL);
      }
      v53 = (System_Int32_array **)StringLiteral_744/*",\"num\":"*/;
    }
    else
    {
      v53 = 0LL;
    }
    if ( v28->max_length <= 3 )
    {
      v75 = sub_B0D9A8(v52);
      sub_B0D948(v75, 0LL);
    }
    v28->m_Items[3] = (System_String_o *)v53;
    sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[3], v53, v46, v47, v48, v49, v50, v51);
    monitor = HIDWORD(currentValue[1].monitor);
    v54 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v61 = (System_Int32_array **)v54;
    if ( v54 )
    {
      v54 = (System_String_o *)sub_B0D964(v54, v28->obj.klass->_1.element_class);
      if ( !v54 )
      {
        v81 = sub_B0D99C(0LL);
        sub_B0D948(v81, 0LL);
      }
    }
    if ( v28->max_length <= 4 )
    {
      v71 = sub_B0D9A8(v54);
      sub_B0D948(v71, 0LL);
    }
    v28->m_Items[4] = (System_String_o *)v61;
    sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
    v68 = StringLiteral_23774/*"}"*/;
    if ( StringLiteral_23774/*"}"*/ )
    {
      v68 = sub_B0D964(StringLiteral_23774/*"}"*/, v28->obj.klass->_1.element_class);
      if ( !v68 )
      {
        v80 = sub_B0D99C(0LL);
        sub_B0D948(v80, 0LL);
      }
      v69 = (System_Int32_array **)StringLiteral_23774/*"}"*/;
    }
    else
    {
      v69 = 0LL;
    }
    if ( v28->max_length <= 5 )
    {
      v74 = sub_B0D9A8(v68);
      sub_B0D948(v74, 0LL);
    }
    v28->m_Items[5] = (System_String_o *)v69;
    sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[5], v69, v62, v63, v64, v65, v66, v67);
    ++v19;
    v18 = System_String__Concat_43930028(v28, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v86,
    (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v70 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_15681/*"["*/,
          v18,
          (System_String_o *)StringLiteral_15917/*"]"*/,
          0LL);
  RequestBase__addField_30435648(v83, (System_String_o *)StringLiteral_20077/*"itemData"*/, v70, 0LL);
  RequestBase__beginRequest(v83, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_42143A2 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17548/*"coinRoom/put"*/, v2);
    byte_42143A2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_17548/*"coinRoom/put"*/, 0LL);
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

  if ( (byte_42143A4 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, responseList);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v6);
    byte_42143A4 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(110, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30403444(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}