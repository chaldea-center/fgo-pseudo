void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_421551A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo, v7);
    byte_421551A = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                  System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v8,
    (const MethodInfo_2E7CC3C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v15,
                                                                                                   v16);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIdToGroupDict,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    440,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
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
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v44; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v46; // x22
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 v49; // x0
  __int64 v50; // x22
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x23
  SimpleSkillData_o v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_int__o *v64; // x25
  Il2CppObject *Item; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  int32_t v69; // w24
  System_Collections_Generic_List_int__o *v70; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v71; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v72; // x0
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v78; // x22
  System_Int32_array *v79; // x0
  int v80; // w24
  int v81; // w8
  int32_t v82; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  WarBoardAIRoute_RouteData_o *v84; // x0
  int v85; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v86; // [xsp+0h] [xbp-E0h] BYREF
  int v87[3]; // [xsp+28h] [xbp-B8h]
  int v88; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v91; // 0:x1.8
  SimpleSkillData_o v92; // 0:x1.8
  SimpleSkillData_o v93; // 0:x1.8
  SimpleSkillData_o v94; // 0:x1.8

  if ( (byte_4215517 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v24);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v25);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, v26);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, v27);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v37);
    byte_4215517 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2E7D9C8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillToGroupDict,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v41 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo,
                                                                   v39,
                                                                   v40);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v41,
    (const MethodInfo_2E7CC3C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v44 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                   v42,
                                                                                                   v43);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v44,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_73;
  klass = skillToGroupDict->klass;
  v46 = skillToGroupDict;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&skillToGroupDict->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v49 = sub_AA67A0(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v49)(
          v46,
          *(_QWORD *)(v49 + 8));
  if ( !v50 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_17;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_17:
      v54 = sub_AA67A0(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v55 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v57 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_24;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_24:
      v58 = sub_AA67A0(v50, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
    v60 = v59;
    if ( !v59 )
      sub_B0D97C(0LL);
    if ( !v41 )
      sub_B0D97C(v59);
    v61 = *(SimpleSkillData_o *)(v59 + 20);
    v91 = v61;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v41,
            v91,
            (const MethodInfo_2E7DA60 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v64 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v62,
                                                        v63);
      System_Collections_Generic_List_int____ctor(
        v64,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v92 = v61;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v41,
        v92,
        (Il2CppObject *)v64,
        (const MethodInfo_2E7D7C4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v93 = v61;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v41,
             v93,
             (const MethodInfo_2E7D728 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v60 + 16),
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v44 )
      sub_B0D97C(v66);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v44,
            *(_DWORD *)(v60 + 20),
            (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v69 = *(_DWORD *)(v60 + 20);
      v70 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v67,
                                                        v68);
      System_Collections_Generic_List_int____ctor(
        v70,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v44,
        v69,
        (WarBoardAIRoute_RouteData_o *)v70,
        (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v71 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v44,
            *(_DWORD *)(v60 + 20),
            (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v71 )
      sub_B0D97C(0LL);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v71,
            *(_DWORD *)(v60 + 16),
            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v72 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v44,
              *(_DWORD *)(v60 + 20),
              (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v72 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v72,
        *(_DWORD *)(v60 + 16),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v87[0] = 226;
  v88 = 1;
  v73 = *(_QWORD *)v50;
  if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
  {
    v74 = 0LL;
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
        goto LABEL_42;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_42:
    v76 = sub_AA67A0(v50, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(
                                                                                v50,
                                                                                *(_QWORD *)(v76 + 8));
  v88 = 0;
  if ( !v41 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v86,
    v41,
    (const MethodInfo_2E7DDCC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v90 = v86;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v90,
            (const MethodInfo_26CECD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v90.fields.current.fields.value )
      sub_B0D97C(0LL);
    key = v90.fields.current.fields.key;
    v78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v79 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v90.fields.current.fields.value,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v78 )
      sub_B0D97C(v79);
    v94 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v78,
      v94,
      &v79->obj,
      (const MethodInfo_2E7D7C4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v87[0] = 300;
  v80 = ++v88;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v90,
    (const MethodInfo_26CEE3C *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v80 )
  {
    v81 = v80 - 1;
    if ( v87[v80 - 1] == 300 )
    {
      --v80;
      v88 = v81;
    }
  }
  if ( !v44 )
LABEL_73:
    sub_B0D97C(skillToGroupDict);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v89,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v44,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v89,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v89.fields.current.fields.value )
      sub_B0D97C(0LL);
    v82 = (int32_t)v89.fields.current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v84 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)v89.fields.current.fields.value,
                                           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_B0D97C(v84);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
      v82,
      v84,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v87[v80] = 374;
  v85 = ++v88;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v89,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v85 && v87[v85 - 1] == 374 )
    v88 = v85 - 1;
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

  if ( (byte_421551B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_421551B = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266A024 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
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

  if ( (byte_4215518 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__, v8);
    byte_4215518 = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v10 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v18 = (SimpleSkillData_o)v10;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v18,
         (const MethodInfo_2E7DA60 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v19 = (SimpleSkillData_o)v10;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v19,
                                     (const MethodInfo_2E7D728 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B0D97C(skillToGroupDict);
  }
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AA65A4(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AA65A4(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AA65A4(*v12[6]);
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

  if ( (byte_4215519 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6);
    byte_4215519 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B0D97C(skillIdToGroupDict);
  }
  v9 = (_QWORD **)Method_System_Array_Empty_int___;
  v10 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AA65A4(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AA65A4(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AA65A4(*v9[6]);
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

  if ( (byte_421551C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__, entity);
    byte_421551C = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}