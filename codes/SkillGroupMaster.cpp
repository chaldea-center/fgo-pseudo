void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F922A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v9);
    byte_40F922A = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v10,
    (const MethodInfo_2DBA1D0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v17,
                                                                                                   v18,
                                                                                                   v19,
                                                                                                   v20);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v21,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIdToGroupDict,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    440,
    (const MethodInfo_266F73C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x22
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x23
  SimpleSkillData_o v67; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Collections_Generic_List_int__o *v72; // x25
  Il2CppObject *Item; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int32_t v78; // w24
  System_Collections_Generic_List_int__o *v79; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v80; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v81; // x0
  __int64 v82; // x8
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v87; // x22
  System_Int32_array *v88; // x0
  int v89; // w24
  int v90; // w8
  int32_t v91; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *v92; // x21
  WarBoardAIRoute_RouteData_o *v93; // x0
  int v94; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+0h] [xbp-E0h] BYREF
  int v96[3]; // [xsp+28h] [xbp-B8h]
  int v97; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v99; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v100; // 0:x1.8
  SimpleSkillData_o v101; // 0:x1.8
  SimpleSkillData_o v102; // 0:x1.8
  SimpleSkillData_o v103; // 0:x1.8

  if ( (byte_40F9227 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v24);
    sub_B16FFC(&System_IDisposable_TypeInfo, v25);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v26);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v27);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v37);
    byte_40F9227 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2DBAF5C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillIdToGroupDict,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v44 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo,
                                                                   v40,
                                                                   v41,
                                                                   v42,
                                                                   v43);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v44,
    (const MethodInfo_2DBA1D0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v49 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                   v45,
                                                                                                   v46,
                                                                                                   v47,
                                                                                                   v48);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v49,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v50 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !v50 )
    goto LABEL_73;
  klass = v50->klass;
  v52 = v50;
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(v50, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v52,
          *(_QWORD *)(p_method + 8));
  if ( !v56 )
    sub_B170D4();
  while ( 1 )
  {
    v57 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_17;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_17:
      v60 = sub_AAFEF8(v56, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) == 0 )
      break;
    v61 = *(_QWORD *)v56;
    if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
    {
      v62 = 0LL;
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v63 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
          goto LABEL_24;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_24:
      v64 = sub_AAFEF8(v56, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v56, *(_QWORD *)(v64 + 8));
    v66 = v65;
    if ( !v65 )
      sub_B170D4();
    if ( !v44 )
      sub_B170D4();
    v67 = *(SimpleSkillData_o *)(v65 + 20);
    v100 = v67;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v44,
            v100,
            (const MethodInfo_2DBAFF4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v72 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v68,
                                                        v69,
                                                        v70,
                                                        v71);
      System_Collections_Generic_List_int____ctor(
        v72,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v101 = v67;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v44,
        v101,
        (Il2CppObject *)v72,
        (const MethodInfo_2DBAD58 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v102 = v67;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v44,
             v102,
             (const MethodInfo_2DBACBC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v66 + 16),
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v49 )
      sub_B170D4();
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v49,
            *(_DWORD *)(v66 + 20),
            (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v78 = *(_DWORD *)(v66 + 20);
      v79 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v74,
                                                        v75,
                                                        v76,
                                                        v77);
      System_Collections_Generic_List_int____ctor(
        v79,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v49,
        v78,
        (WarBoardAIRoute_RouteData_o *)v79,
        (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v80 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v49,
            *(_DWORD *)(v66 + 20),
            (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v80 )
      sub_B170D4();
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v80,
            *(_DWORD *)(v66 + 16),
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v81 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v49,
              *(_DWORD *)(v66 + 20),
              (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v81 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v81,
        *(_DWORD *)(v66 + 16),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v96[0] = 226;
  v97 = 1;
  v82 = *(_QWORD *)v56;
  if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
  {
    v83 = 0LL;
    v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      ++v83;
      v84 += 4;
      if ( v83 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
        goto LABEL_42;
    }
    v85 = v82 + 16LL * *v84 + 312;
  }
  else
  {
LABEL_42:
    v85 = sub_AAFEF8(v56, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v85)(v56, *(_QWORD *)(v85 + 8));
  v97 = 0;
  if ( !v44 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v95,
    v44,
    (const MethodInfo_2DBB360 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v99 = v95;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v99,
            (const MethodInfo_296B61C *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v99.fields.current.fields.value )
      sub_B170D4();
    key = v99.fields.current.fields.key;
    v87 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v88 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v99.fields.current.fields.value,
            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v87 )
      sub_B170D4();
    v103 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v87,
      v103,
      &v88->obj,
      (const MethodInfo_2DBAD58 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v96[0] = 300;
  v89 = ++v97;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v99,
    (const MethodInfo_296B784 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v89 )
  {
    v90 = v89 - 1;
    if ( v96[v89 - 1] == 300 )
    {
      --v89;
      v97 = v90;
    }
  }
  if ( !v49 )
LABEL_73:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v98,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v49,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v98,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v98.fields.current.fields.value )
      sub_B170D4();
    v91 = (int32_t)v98.fields.current.fields.key;
    v92 = this->fields.skillIdToGroupDict;
    v93 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)v98.fields.current.fields.value,
                                           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v92 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v92,
      v91,
      v93,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v96[v89] = 374;
  v94 = ++v97;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v98,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v94 && v96[v94 - 1] == 374 )
    v97 = v94 - 1;
}


// local variable allocation has failed, the output may be wrong!
SkillGroupEntity_o *__fastcall SkillGroupMaster__GetEntity(
        SkillGroupMaster_o *this,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F922B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40F922B = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  unsigned __int64 v10; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x0
  _QWORD **v13; // x20
  __int64 v14; // x19
  __int16 v15; // w8
  __int64 v16; // x19
  __int64 v17; // x19
  __int64 v18; // x19
  SimpleSkillData_o v19; // 0:x1.8
  SimpleSkillData_o v20; // 0:x1.8

  if ( (byte_40F9228 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v8);
    byte_40F9228 = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v10 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v19 = (SimpleSkillData_o)v10;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v19,
         (const MethodInfo_2DBAFF4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( v11 )
    {
      v20 = (SimpleSkillData_o)v10;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     v11,
                                     v20,
                                     (const MethodInfo_2DBACBC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B170D4();
  }
  v13 = (_QWORD **)Method_System_Array_Empty_int___;
  v14 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v15 = *(_WORD *)(v14 + 306);
  if ( (v15 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v15 = *(_WORD *)(v14 + 306);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = *v13[6];
    if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
      sub_AAFCFC(*v13[6]);
    if ( !*(_DWORD *)(v16 + 224) )
    {
      v17 = *v13[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v13[6]);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = *v13[6];
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(*v13[6]);
  return **(System_Int32_array ***)(v18 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *v8; // x0
  _QWORD **v10; // x20
  __int64 v11; // x19
  __int16 v12; // w8
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v15; // x19

  if ( (byte_40F9229 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6);
    byte_40F9229 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v8 = this->fields.skillIdToGroupDict;
    if ( v8 )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8,
                                     skillId,
                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B170D4();
  }
  v10 = (_QWORD **)Method_System_Array_Empty_int___;
  v11 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AAFCFC(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AAFCFC(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(*v10[6]);
  return **(System_Int32_array ***)(v15 + 184);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillGroupMaster__TryGetEntity(
        SkillGroupMaster_o *this,
        SkillGroupEntity_o **entity,
        int32_t id,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F922C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__, entity);
    byte_40F922C = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}