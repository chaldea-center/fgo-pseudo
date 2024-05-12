void __fastcall SkillGroupMaster___ctor(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438C085 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_438C085 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B77694(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_2FAF2BC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.skillIdToGroupDict,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    441,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x22
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  SimpleSkillData_o v24; // x24
  System_Collections_Generic_List_int__o *v25; // x25
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w24
  System_Collections_Generic_List_int__o *v31; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v32; // x0
  __int64 v33; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x22
  System_Int32_array *v43; // x0
  __int64 v44; // x1
  int v45; // w24
  int v46; // w8
  __int64 v47; // x1
  int32_t v48; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  WarBoardAIRoute_RouteData_o *v50; // x0
  __int64 v51; // x1
  int v52; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+0h] [xbp-E0h] BYREF
  int v54[3]; // [xsp+28h] [xbp-B8h]
  int v55; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v58; // 0:x1.8
  SimpleSkillData_o v59; // 0:x1.8
  SimpleSkillData_o v60; // 0:x1.8
  SimpleSkillData_o v61; // 0:x1.8

  if ( (byte_438C082 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438C082 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
  v55 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2FB0048 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillToGroupDict,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B77694(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_2FAF2BC *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_73;
  klass = skillToGroupDict->klass;
  v7 = skillToGroupDict;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&skillToGroupDict->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_B0F4C0(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v10)(
          v7,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_B7769C(0LL, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v14 = 0LL;
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_17;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_17:
      v16 = sub_B0F4C0(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_24;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_24:
      v20 = sub_B0F4C0(v12, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_B7769C(0LL, v22);
    if ( !v4 )
      sub_B7769C(v21, v22);
    v24 = *(SimpleSkillData_o *)(v21 + 20);
    v58 = v24;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v58,
            (const MethodInfo_2FB00E0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v25 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v25,
        (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
      v59 = v24;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v59,
        (Il2CppObject *)v25,
        (const MethodInfo_2FAFE44 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v60 = v24;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v4,
             v60,
             (const MethodInfo_2FAFDA8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B7769C(0LL, v27);
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v23 + 16),
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v5 )
      sub_B7769C(v28, v29);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v30 = *(_DWORD *)(v23 + 20);
      v31 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5,
        v30,
        (WarBoardAIRoute_RouteData_o *)v31,
        (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v32 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v5,
            *(_DWORD *)(v23 + 20),
            (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v32 )
      sub_B7769C(0LL, v33);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v32,
            *(_DWORD *)(v23 + 16),
            (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v34 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v5,
              *(_DWORD *)(v23 + 20),
              (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v34 )
        sub_B7769C(0LL, v35);
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v34,
        *(_DWORD *)(v23 + 16),
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v54[0] = 226;
  v55 = 1;
  v36 = *(_QWORD *)v12;
  if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
        goto LABEL_42;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_42:
    v39 = sub_B0F4C0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(
                                                                                v12,
                                                                                *(_QWORD *)(v39 + 8));
  v55 = 0;
  if ( !v4 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v53,
    v4,
    (const MethodInfo_2FB044C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v57 = v53;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v57,
            (const MethodInfo_2AB89AC *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v57.fields.current.fields.value )
      sub_B7769C(0LL, v40);
    key = v57.fields.current.fields.key;
    v42 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v43 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v57.fields.current.fields.value,
            (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v42 )
      sub_B7769C(v43, v44);
    v61 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v42,
      v61,
      &v43->obj,
      (const MethodInfo_2FAFE44 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v54[0] = 300;
  v45 = ++v55;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v57,
    (const MethodInfo_2AB8B14 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v45 )
  {
    v46 = v45 - 1;
    if ( v54[v45 - 1] == 300 )
    {
      --v45;
      v55 = v46;
    }
  }
  if ( !v5 )
LABEL_73:
    sub_B7769C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v56,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v5,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v56,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v56.fields.current.fields.value )
      sub_B7769C(0LL, v47);
    v48 = (int32_t)v56.fields.current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v50 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)v56.fields.current.fields.value,
                                           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_B7769C(v50, v51);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
      v48,
      v50,
      (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v54[v45] = 374;
  v52 = ++v55;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v56,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v52 && v54[v52 - 1] == 374 )
    v55 = v52 - 1;
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

  if ( (byte_438C086 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_438C086 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdArray(
        SkillGroupMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  unsigned __int64 v8; // x21
  _QWORD **v10; // x20
  __int64 v11; // x19
  __int16 v12; // w8
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v15; // x19
  SimpleSkillData_o v16; // 0:x1.8
  SimpleSkillData_o v17; // 0:x1.8

  if ( (byte_438C083 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_438C083 = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v8 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v16 = (SimpleSkillData_o)v8;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v16,
         (const MethodInfo_2FB00E0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v17 = (SimpleSkillData_o)v8;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v17,
                                     (const MethodInfo_2FAFDA8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B7769C(skillToGroupDict, *(_QWORD *)&skillId);
  }
  v10 = (_QWORD **)Method_System_Array_Empty_int___;
  v11 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B0F2C4(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_B0F2C4(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_B0F2C4(*v10[6]);
  return **(System_Int32_array ***)(v15 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillGroupMaster__GetSkillGroupIdFromSkillId(
        SkillGroupMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x0
  _QWORD **v7; // x20
  __int64 v8; // x19
  __int16 v9; // w8
  __int64 v10; // x19
  __int64 v11; // x19
  __int64 v12; // x19

  if ( (byte_438C084 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_438C084 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B7769C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v7 = (_QWORD **)Method_System_Array_Empty_int___;
  v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B0F2C4(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_B0F2C4(*v7[6]);
  return **(System_Int32_array ***)(v12 + 184);
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

  if ( (byte_438C087 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_438C087 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}