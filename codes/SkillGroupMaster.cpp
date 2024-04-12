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

  if ( (byte_42B0D45 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
    byte_42B0D45 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B52A54(System_Collections_Generic_Dictionary_SimpleSkillData__int____TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v3,
    (const MethodInfo_2EC6248 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int_____ctor__);
  this->fields.skillToGroupDict = (struct System_Collections_Generic_Dictionary_SimpleSkillData__int____o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillToGroupDict,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.skillIdToGroupDict = (struct System_Collections_Generic_Dictionary_int__int____o *)v10;
  sub_B52920(
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
    (const MethodInfo_23E268C *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string___ctor__);
}


void __fastcall SkillGroupMaster__CreateSkillToGroupDict(SkillGroupMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *skillToGroupDict; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  __int64 v6; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x22
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  __int64 v14; // x22
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  SimpleSkillData_o v27; // x24
  System_Collections_Generic_List_int__o *v28; // x25
  Il2CppObject *Item; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w24
  System_Collections_Generic_List_int__o *v34; // x25
  WarBoardEvalValueSquare_EvalValueSquare_o *v35; // x0
  __int64 v36; // x1
  WarBoardEvalValueSquare_EvalValueSquare_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  Il2CppObject *key; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v45; // x22
  System_Int32_array *v46; // x0
  __int64 v47; // x1
  int v48; // w24
  int v49; // w8
  __int64 v50; // x1
  int32_t v51; // w20
  struct System_Collections_Generic_Dictionary_int__int____o *skillIdToGroupDict; // x21
  WarBoardAIRoute_RouteData_o *v53; // x0
  __int64 v54; // x1
  int v55; // w24
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+0h] [xbp-E0h] BYREF
  int v57[3]; // [xsp+28h] [xbp-B8h]
  int v58; // [xsp+34h] [xbp-ACh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+60h] [xbp-80h] BYREF
  SimpleSkillData_o v61; // 0:x1.8
  SimpleSkillData_o v62; // 0:x1.8
  SimpleSkillData_o v63; // 0:x1.8
  SimpleSkillData_o v64; // 0:x1.8

  if ( (byte_42B0D42 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_SimpleSkillData__List_int___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B0D42 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___Clear(
    skillToGroupDict,
    (const MethodInfo_2EC6FD4 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____Clear__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillIdToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)skillToGroupDict,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__int____Clear__);
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B52A54(System_Collections_Generic_Dictionary_SimpleSkillData__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_SimpleSkillData__object____ctor(
    v4,
    (const MethodInfo_2EC6248 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int____ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                                (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_SkillGroupEntity___);
  if ( !skillToGroupDict )
    goto LABEL_73;
  klass = skillToGroupDict->klass;
  v8 = skillToGroupDict;
  if ( *(_WORD *)&skillToGroupDict->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SkillGroupEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&skillToGroupDict->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_AEB880(skillToGroupDict, System_Collections_Generic_IEnumerable_SkillGroupEntity__TypeInfo, 0LL, v6);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v11)(
          v8,
          *(_QWORD *)(v11 + 8));
  if ( !v14 )
    sub_B52A5C(0LL, v12);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_17;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_17:
      v18 = sub_AEB880(v14, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_24;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_24:
      v23 = sub_AEB880(v14, System_Collections_Generic_IEnumerator_SkillGroupEntity__TypeInfo, 0LL, v19);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_B52A5C(0LL, v25);
    if ( !v4 )
      sub_B52A5C(v24, v25);
    v27 = *(SimpleSkillData_o *)(v24 + 20);
    v61 = v27;
    if ( !System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
            v4,
            v61,
            (const MethodInfo_2EC706C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___ContainsKey__) )
    {
      v28 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v28,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      v62 = v27;
      System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
        v4,
        v62,
        (Il2CppObject *)v28,
        (const MethodInfo_2EC6DD0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___set_Item__);
    }
    v63 = v27;
    Item = System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
             v4,
             v63,
             (const MethodInfo_2EC6D34 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___get_Item__);
    if ( !Item )
      sub_B52A5C(0LL, v30);
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      *(_DWORD *)(v26 + 16),
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    if ( !v5 )
      sub_B52A5C(v31, v32);
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5,
            *(_DWORD *)(v26 + 20),
            (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
    {
      v33 = *(_DWORD *)(v26 + 20);
      v34 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v34,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5,
        v33,
        (WarBoardAIRoute_RouteData_o *)v34,
        (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    }
    v35 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v5,
            *(_DWORD *)(v26 + 20),
            (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    if ( !v35 )
      sub_B52A5C(0LL, v36);
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)v35,
            *(_DWORD *)(v26 + 16),
            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v37 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v5,
              *(_DWORD *)(v26 + 20),
              (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
      if ( !v37 )
        sub_B52A5C(0LL, v38);
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v37,
        *(_DWORD *)(v26 + 16),
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v57[0] = 226;
  v58 = 1;
  v39 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_42;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_42:
    v42 = sub_AEB880(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(
                                                                                v14,
                                                                                *(_QWORD *)(v42 + 8));
  v58 = 0;
  if ( !v4 )
    goto LABEL_73;
  System_Collections_Generic_Dictionary_SimpleSkillData__object___GetEnumerator(
    &v56,
    v4,
    (const MethodInfo_2EC73D8 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__List_int___GetEnumerator__);
  v60 = v56;
  while ( System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___MoveNext(
            &v60,
            (const MethodInfo_2754078 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___MoveNext__) )
  {
    if ( !v60.fields.current.fields.value )
      sub_B52A5C(0LL, v43);
    key = v60.fields.current.fields.key;
    v45 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    v46 = System_Collections_Generic_List_int___ToArray(
            (System_Collections_Generic_List_int__o *)v60.fields.current.fields.value,
            (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v45 )
      sub_B52A5C(v46, v47);
    v64 = (SimpleSkillData_o)key;
    System_Collections_Generic_Dictionary_SimpleSkillData__object___set_Item(
      v45,
      v64,
      &v46->obj,
      (const MethodInfo_2EC6DD0 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____set_Item__);
  }
  v57[0] = 300;
  v48 = ++v58;
  System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__object___Dispose(
    &v60,
    (const MethodInfo_27541E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_SimpleSkillData__List_int___Dispose__);
  if ( v48 )
  {
    v49 = v48 - 1;
    if ( v57[v48 - 1] == 300 )
    {
      --v48;
      v58 = v49;
    }
  }
  if ( !v5 )
LABEL_73:
    sub_B52A5C(skillToGroupDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v59,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v5,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v59,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    if ( !v59.fields.current.fields.value )
      sub_B52A5C(0LL, v50);
    v51 = (int32_t)v59.fields.current.fields.key;
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    v53 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)v59.fields.current.fields.value,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !skillIdToGroupDict )
      sub_B52A5C(v53, v54);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
      v51,
      v53,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v57[v48] = 374;
  v55 = ++v58;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v59,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v55 && v57[v55 - 1] == 374 )
    v58 = v55 - 1;
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

  if ( (byte_42B0D46 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
    byte_42B0D46 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&lv);
  return (SkillGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__GetEntity__);
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

  if ( (byte_42B0D43 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    byte_42B0D43 = 1;
  }
  skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
  if ( !skillToGroupDict )
    goto LABEL_19;
  v8 = (unsigned int)skillId | ((unsigned __int64)(unsigned int)skillLv << 32);
  v16 = (SimpleSkillData_o)v8;
  if ( System_Collections_Generic_Dictionary_SimpleSkillData__object___ContainsKey(
         skillToGroupDict,
         v16,
         (const MethodInfo_2EC706C *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____ContainsKey__) )
  {
    skillToGroupDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.skillToGroupDict;
    if ( skillToGroupDict )
    {
      v17 = (SimpleSkillData_o)v8;
      return (System_Int32_array *)System_Collections_Generic_Dictionary_SimpleSkillData__object___get_Item(
                                     skillToGroupDict,
                                     v17,
                                     (const MethodInfo_2EC6D34 *)Method_System_Collections_Generic_Dictionary_SimpleSkillData__int____get_Item__);
    }
LABEL_19:
    sub_B52A5C(skillToGroupDict, *(_QWORD *)&skillId);
  }
  v10 = (_QWORD **)Method_System_Array_Empty_int___;
  v11 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_AEB684(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AEB684(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AEB684(*v10[6]);
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

  if ( (byte_42B0D44 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    byte_42B0D44 = 1;
  }
  skillIdToGroupDict = this->fields.skillIdToGroupDict;
  if ( !skillIdToGroupDict )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)skillIdToGroupDict,
         skillId,
         (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    skillIdToGroupDict = this->fields.skillIdToGroupDict;
    if ( skillIdToGroupDict )
      return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)skillIdToGroupDict,
                                     skillId,
                                     (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
LABEL_19:
    sub_B52A5C(skillIdToGroupDict, *(_QWORD *)&skillId);
  }
  v7 = (_QWORD **)Method_System_Array_Empty_int___;
  v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AEB684(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(*v7[6]);
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

  if ( (byte_42B0D47 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
    byte_42B0D47 = 1;
  }
  PK = SkillGroupEntity__CreatePK(id, skillId, lv, *(const MethodInfo **)&skillId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_SkillGroupMaster__SkillGroupEntity__string__TryGetEntity__);
}


bool __fastcall SkillGroupMaster__preProcess(SkillGroupMaster_o *this, const MethodInfo *method)
{
  SkillGroupMaster__CreateSkillToGroupDict(this, method);
  return 1;
}