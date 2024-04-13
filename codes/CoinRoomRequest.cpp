void __fastcall CoinRoomRequest___ctor(CoinRoomRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall CoinRoomRequest__BeginRequest(
        CoinRoomRequest_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *requestValuse,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CoinRoomRequest_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_o *v45; // x20
  int v46; // w23
  Il2CppObject *currentValue; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  System_Int32_array **v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x0
  System_Int32_array **v82; // x1
  System_String_o *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  System_Int32_array **v98; // x1
  System_String_o *v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  RequestBase_o *v112; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v113; // [xsp+10h] [xbp-90h] BYREF
  int monitor; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v115; // [xsp+30h] [xbp-70h] BYREF

  v5 = this;
  if ( (byte_42E8D24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__,
      (_DWORD)requestValuse,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&string___TypeInfo, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&StringLiteral_24008/*"}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_746/*",\"num\":"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23788/*"{\"id\":"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20268/*"itemData"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_707/*","*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    this = (CoinRoomRequest_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v42, v43, v44);
    byte_42E8D24 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  monitor = 0;
  if ( !requestValuse
    || (v112 = (RequestBase_o *)v5,
        v45 = (System_String_o *)StringLiteral_1/*""*/,
        (this = (CoinRoomRequest_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                       (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)requestValuse,
                                       (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__get_Values__)) == 0LL) )
  {
    sub_B5D69C(this, requestValuse);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v113,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SelectedUserSvtCoin__GetEnumerator__);
  v46 = 0;
  v115 = v113;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v115,
            (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__MoveNext__) )
  {
    currentValue = v115.fields.currentValue;
    if ( v46 >= 1 )
      v45 = System_String__Concat_44577788(v45, (System_String_o *)StringLiteral_707/*","*/, 0LL);
    v48 = sub_B5D5DC(string___TypeInfo, 6LL);
    v56 = (System_String_array *)v48;
    if ( !v48 )
      sub_B5D69C(0LL, v49);
    if ( v45 )
    {
      v48 = sub_B5D684(v45, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !v48 )
      {
        v106 = sub_B5D6BC(0LL);
        sub_B5D668(v106, 0LL);
      }
    }
    if ( !v56->max_length )
    {
      v101 = sub_B5D6C8(v48);
      sub_B5D668(v101, 0LL);
    }
    v56->m_Items[0] = v45;
    sub_B5D560((BattleServantConfConponent_o *)v56->m_Items, (System_Int32_array **)v45, v50, v51, v52, v53, v54, v55);
    v63 = StringLiteral_23788/*"{\"id\":"*/;
    if ( StringLiteral_23788/*"{\"id\":"*/ )
    {
      v63 = sub_B5D684(StringLiteral_23788/*"{\"id\":"*/, v56->obj.klass->_1.element_class);
      if ( !v63 )
      {
        v111 = sub_B5D6BC(0LL);
        sub_B5D668(v111, 0LL);
      }
      v64 = (System_Int32_array **)StringLiteral_23788/*"{\"id\":"*/;
    }
    else
    {
      v64 = 0LL;
    }
    if ( v56->max_length <= 1 )
    {
      v102 = sub_B5D6C8(v63);
      sub_B5D668(v102, 0LL);
    }
    v56->m_Items[1] = (System_String_o *)v64;
    sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[1], v64, v57, v58, v59, v60, v61, v62);
    if ( !currentValue )
      sub_B5D69C(v65, v66);
    monitor = (int)currentValue[1].monitor;
    v67 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v74 = (System_Int32_array **)v67;
    if ( v67 )
    {
      v67 = (System_String_o *)sub_B5D684(v67, v56->obj.klass->_1.element_class);
      if ( !v67 )
      {
        v108 = sub_B5D6BC(0LL);
        sub_B5D668(v108, 0LL);
      }
    }
    if ( v56->max_length <= 2 )
    {
      v105 = sub_B5D6C8(v67);
      sub_B5D668(v105, 0LL);
    }
    v56->m_Items[2] = (System_String_o *)v74;
    sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[2], v74, v68, v69, v70, v71, v72, v73);
    v81 = StringLiteral_746/*",\"num\":"*/;
    if ( StringLiteral_746/*",\"num\":"*/ )
    {
      v81 = sub_B5D684(StringLiteral_746/*",\"num\":"*/, v56->obj.klass->_1.element_class);
      if ( !v81 )
      {
        v107 = sub_B5D6BC(0LL);
        sub_B5D668(v107, 0LL);
      }
      v82 = (System_Int32_array **)StringLiteral_746/*",\"num\":"*/;
    }
    else
    {
      v82 = 0LL;
    }
    if ( v56->max_length <= 3 )
    {
      v104 = sub_B5D6C8(v81);
      sub_B5D668(v104, 0LL);
    }
    v56->m_Items[3] = (System_String_o *)v82;
    sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[3], v82, v75, v76, v77, v78, v79, v80);
    monitor = HIDWORD(currentValue[1].monitor);
    v83 = System_Int32__ToString((int32_t)&monitor, 0LL);
    v90 = (System_Int32_array **)v83;
    if ( v83 )
    {
      v83 = (System_String_o *)sub_B5D684(v83, v56->obj.klass->_1.element_class);
      if ( !v83 )
      {
        v110 = sub_B5D6BC(0LL);
        sub_B5D668(v110, 0LL);
      }
    }
    if ( v56->max_length <= 4 )
    {
      v100 = sub_B5D6C8(v83);
      sub_B5D668(v100, 0LL);
    }
    v56->m_Items[4] = (System_String_o *)v90;
    sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[4], v90, v84, v85, v86, v87, v88, v89);
    v97 = StringLiteral_24008/*"}"*/;
    if ( StringLiteral_24008/*"}"*/ )
    {
      v97 = sub_B5D684(StringLiteral_24008/*"}"*/, v56->obj.klass->_1.element_class);
      if ( !v97 )
      {
        v109 = sub_B5D6BC(0LL);
        sub_B5D668(v109, 0LL);
      }
      v98 = (System_Int32_array **)StringLiteral_24008/*"}"*/;
    }
    else
    {
      v98 = 0LL;
    }
    if ( v56->max_length <= 5 )
    {
      v103 = sub_B5D6C8(v97);
      sub_B5D668(v103, 0LL);
    }
    v56->m_Items[5] = (System_String_o *)v98;
    sub_B5D560((BattleServantConfConponent_o *)&v56->m_Items[5], v98, v91, v92, v93, v94, v95, v96);
    ++v46;
    v45 = System_String__Concat_44657912(v56, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v115,
    (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SelectedUserSvtCoin__Dispose__);
  v99 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_15824/*"["*/,
          v45,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          0LL);
  RequestBase__addField_32362260(v112, (System_String_o *)StringLiteral_20268/*"itemData"*/, v99, 0LL);
  RequestBase__beginRequest(v112, 0LL);
}


System_String_o *__fastcall CoinRoomRequest__getURL(CoinRoomRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E8D23 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17711/*"coinRoom/put"*/, v4, v5, v6);
    byte_42E8D23 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_17711/*"coinRoom/put"*/, 0LL);
}


void __fastcall CoinRoomRequest__requestCompleted(
        CoinRoomRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  Il2CppObject *success; // x20
  System_String_o *v15; // x1

  if ( (byte_42E8D25 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42E8D25 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v12 = ResponseCommandKind__SearchData(111, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_29500464(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}