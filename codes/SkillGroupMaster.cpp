void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4186D97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v6);
    byte_4186D97 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B2C42C(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v7,
    (const MethodInfo_2E367A8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIdToGroupDict,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    440,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v39; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x20
  __int64 v41; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v43; // x22
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x3
  __int64 v49; // x22
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x3
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x23
  SimpleSkillData_o v62; // x24
  System_Collections_Generic_List_int__o *v63; // x25
  Il2CppObject *Item; // x0
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w24
  System_Collections_Generic_List_int__o *v69; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v70; // x0
  __int64 v71; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x1
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v80; // x22
  System_Int32_array *v81; // x0
  __int64 v82; // x1
  int v83; // w24
  int v84; // w8
  __int64 v85; // x1
  int32_t v86; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  WarBoardAIRoute_RouteData_o *v88; // x0
  __int64 v89; // x1
  int v90; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v91; // [xsp+0h] [xbp-E0h] BYREF
  int v92[3]; // [xsp+28h] [xbp-B8h]
  int v93; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v94; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v96; // 0:x1.8
  SimpleSkillData_o v97; // 0:x1.8
  SimpleSkillData_o v98; // 0:x1.8
  SimpleSkillData_o v99; // 0:x1.8

  if ( (byte_4186D94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v24);
    sub_B2C35C(&System_IDisposable_TypeInfo, v25);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v26);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v27);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v37);
    byte_4186D94 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  memset(&v94, 0, sizeof(v94));
  v93 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2E37534 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillToGroupDict,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v39 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B2C42C(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v39,
    (const MethodInfo_2E367A8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v40,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_73;
  klass = skillToGroupDict->klass;
  v43 = skillToGroupDict;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v44;
      p_offset += 4;
      if ( v44 >= *(unsigned __int16 *)&skillToGroupDict->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v46 = sub_AC5258(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL, v41);
  }
  v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v46)(
          v43,
          *(_QWORD *)(v46 + 8));
  if ( !v49 )
    sub_B2C434(0LL, v47);
  while ( 1 )
  {
    v50 = *(_QWORD *)v49;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v51 = 0LL;
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_17;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_17:
      v53 = sub_AC5258(v49, System_Collections_IEnumerator_TypeInfo, 0LL, v48);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v49;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v57 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_24;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_24:
      v58 = sub_AC5258(v49, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL, v54);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v49, *(_QWORD *)(v58 + 8));
    v61 = v59;
    if ( !v59 )
      sub_B2C434(0LL, v60);
    if ( !v39 )
      sub_B2C434(v59, v60);
    v62 = *(SimpleSkillData_o *)(v59 + 20);
    v96 = v62;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v39,
            v96,
            (const MethodInfo_2E375CC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v63 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v63,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v97 = v62;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v39,
        v97,
        (Il2CppObject *)v63,
        (const MethodInfo_2E37330 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v98 = v62;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v39,
             v98,
             (const MethodInfo_2E37294 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B2C434(0LL, v65);
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v61 + 16),
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v40 )
      sub_B2C434(v66, v67);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v40,
            *(_DWORD *)(v61 + 20),
            (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v68 = *(_DWORD *)(v61 + 20);
      v69 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v69,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v40,
        v68,
        (WarBoardAIRoute_RouteData_o *)v69,
        (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v70 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v40,
            *(_DWORD *)(v61 + 20),
            (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v70 )
      sub_B2C434(0LL, v71);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v70,
            *(_DWORD *)(v61 + 16),
            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v72 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v40,
              *(_DWORD *)(v61 + 20),
              (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v72 )
        sub_B2C434(0LL, v73);
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v72,
        *(_DWORD *)(v61 + 16),
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v92[0] = 226;
  v93 = 1;
  v74 = *(_QWORD *)v49;
  if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
  {
    v75 = 0LL;
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      ++v75;
      v76 += 4;
      if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
        goto LABEL_42;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_42:
    v77 = sub_AC5258(v49, System_IDisposable_TypeInfo, 0LL, v54);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v77)(
                                                                                v49,
                                                                                *(_QWORD *)(v77 + 8));
  v93 = 0;
  if ( !v39 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v91,
    v39,
    (const MethodInfo_2E37938 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v95 = v91;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v95,
            (const MethodInfo_2758584 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v95.fields.current.fields.value )
      sub_B2C434(0LL, v78);
    key = v95.fields.current.fields.key;
    v80 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v81 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v95.fields.current.fields.value,
            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v80 )
      sub_B2C434(v81, v82);
    v99 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v80,
      v99,
      &v81->obj,
      (const MethodInfo_2E37330 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v92[0] = 300;
  v83 = ++v93;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v95,
    (const MethodInfo_27586EC *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v83 )
  {
    v84 = v83 - 1;
    if ( v92[v83 - 1] == 300 )
    {
      --v83;
      v93 = v84;
    }
  }
  if ( !v40 )
LABEL_73:
    sub_B2C434(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v94,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v40,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v94,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v94.fields.current.fields.value )
      sub_B2C434(0LL, v85);
    v86 = (int32_t)v94.fields.current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v88 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)v94.fields.current.fields.value,
                                           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_B2C434(v88, v89);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
      v86,
      v88,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v92[v83] = 374;
  v90 = ++v93;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v94,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v90 && v92[v90 - 1] == 374 )
    v93 = v90 - 1;
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

  if ( (byte_4186D98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4186D98 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
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
  _QWORD **v12; // x20
  __int64 v13; // x19
  __int16 v14; // w8
  __int64 v15; // x19
  __int64 v16; // x19
  __int64 v17; // x19
  SimpleSkillData_o v18; // 0:x1.8
  SimpleSkillData_o v19; // 0:x1.8

  if ( (byte_4186D95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v8);
    byte_4186D95 = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v10 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v18 = (SimpleSkillData_o)v10;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v18,
         (const MethodInfo_2E375CC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v19 = (SimpleSkillData_o)v10;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v19,
                                     (const MethodInfo_2E37294 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B2C434(skillToGroupDict, *(_QWORD *)&skillId);
  }
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AC505C(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AC505C(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(*v12[6]);
  return **(System_Int32_array ***)(v17 + 184);
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
  _QWORD **v9; // x20
  __int64 v10; // x19
  __int16 v11; // w8
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x19

  if ( (byte_4186D96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6);
    byte_4186D96 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B2C434(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v9 = (_QWORD **)Method_System_Array_Empty_int___;
  v10 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AC505C(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(*v9[6]);
  return **(System_Int32_array ***)(v14 + 184);
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

  if ( (byte_4186D99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__, entity);
    byte_4186D99 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}