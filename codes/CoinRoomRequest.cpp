void __fastcall CoinRoomRequest___ctor(CoinRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v20; // w23
  Il2CppObject *currentValue; // x19
  __int64 v22; // x2
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  System_Int32_array **v39; // x1
  System_String_o *v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  System_Int32_array **v56; // x1
  System_String_o *v57; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x0
  System_Int32_array **v73; // x1
  System_String_o *v74; // x0
  RequestBase_o *v75; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v76; // [xsp+10h] [xbp-90h] BYREF
  int monitor; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v78; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F9A62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__, requestValuse);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v7);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v9);
    sub_B16FFC(&StringLiteral_23602, v10);
    sub_B16FFC(&StringLiteral_737, v11);
    sub_B16FFC(&StringLiteral_23383, v12);
    sub_B16FFC(&StringLiteral_19932, v13);
    sub_B16FFC(&StringLiteral_698, v14);
    sub_B16FFC(&StringLiteral_15571, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    sub_B16FFC(&StringLiteral_15807, v17);
    byte_40F9A62 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  monitor = 0;
  if ( !requestValuse
    || (v75 = (RequestBase_o *)this,
        v18 = (System_String_o *)StringLiteral_1,
        (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                    (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)requestValuse,
                    (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v76,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v20 = 0;
  v78 = v76;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v78,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v78.fields.currentValue;
    if ( v20 >= 1 )
      v18 = System_String__Concat_43743732(v18, (System_String_o *)StringLiteral_698, 0LL);
    v23 = sub_B17014(string___TypeInfo, 6LL, v22);
    v31 = (System_String_array *)v23;
    if ( !v23 )
      sub_B170D4();
    if ( v18 )
    {
      v23 = sub_B170BC(v18, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
      if ( !v23 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !v31->max_length )
    {
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    v31->m_Items[0] = v18;
    sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, (System_Int32_array **)v18, v25, v26, v27, v28, v29, v30);
    v38 = StringLiteral_23383;
    if ( StringLiteral_23383 )
    {
      v38 = sub_B170BC(StringLiteral_23383, v31->obj.klass->_1.element_class);
      if ( !v38 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      v39 = (System_Int32_array **)StringLiteral_23383;
    }
    else
    {
      v39 = 0LL;
    }
    if ( v31->max_length <= 1 )
    {
      sub_B17100(v38, v39, v32);
      sub_B170A0();
    }
    v31->m_Items[1] = (System_String_o *)v39;
    sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[1], v39, v32, v33, v34, v35, v36, v37);
    if ( !currentValue )
      sub_B170D4();
    monitor = (int)currentValue[1].monitor;
    v40 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v48 = (System_Int32_array **)v40;
    if ( v40 )
    {
      v40 = (System_String_o *)sub_B170BC(v40, v31->obj.klass->_1.element_class);
      if ( !v40 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v31->max_length <= 2 )
    {
      sub_B17100(v40, v41, v42);
      sub_B170A0();
    }
    v31->m_Items[2] = (System_String_o *)v48;
    sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
    v55 = StringLiteral_737;
    if ( StringLiteral_737 )
    {
      v55 = sub_B170BC(StringLiteral_737, v31->obj.klass->_1.element_class);
      if ( !v55 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      v56 = (System_Int32_array **)StringLiteral_737;
    }
    else
    {
      v56 = 0LL;
    }
    if ( v31->max_length <= 3 )
    {
      sub_B17100(v55, v56, v49);
      sub_B170A0();
    }
    v31->m_Items[3] = (System_String_o *)v56;
    sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[3], v56, v49, v50, v51, v52, v53, v54);
    monitor = HIDWORD(currentValue[1].monitor);
    v57 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v65 = (System_Int32_array **)v57;
    if ( v57 )
    {
      v57 = (System_String_o *)sub_B170BC(v57, v31->obj.klass->_1.element_class);
      if ( !v57 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v31->max_length <= 4 )
    {
      sub_B17100(v57, v58, v59);
      sub_B170A0();
    }
    v31->m_Items[4] = (System_String_o *)v65;
    sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
    v72 = StringLiteral_23602;
    if ( StringLiteral_23602 )
    {
      v72 = sub_B170BC(StringLiteral_23602, v31->obj.klass->_1.element_class);
      if ( !v72 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      v73 = (System_Int32_array **)StringLiteral_23602;
    }
    else
    {
      v73 = 0LL;
    }
    if ( v31->max_length <= 5 )
    {
      sub_B17100(v72, v73, v66);
      sub_B170A0();
    }
    v31->m_Items[5] = (System_String_o *)v73;
    sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[5], v73, v66, v67, v68, v69, v70, v71);
    ++v20;
    v18 = System_String__Concat_43823856(v31, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v78,
    (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v74 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_15571,
          v18,
          (System_String_o *)StringLiteral_15807,
          0LL);
  RequestBase__addField_30957164(v75, (System_String_o *)StringLiteral_19932, v74, 0LL);
  RequestBase__beginRequest(v75, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F9A61 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_17426, v2);
    byte_40F9A61 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_17426, 0LL);
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

  if ( (byte_40F9A63 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40F9A63 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v7 = ResponseCommandKind__SearchData(110, responseList, 0LL);
  if ( v7
    && (v8 = v7, ResponseData__checkError_30924960(v7, 0LL))
    && (success = (Il2CppObject *)v8->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_20980;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}