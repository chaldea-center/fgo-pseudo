void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E760C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E760C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    413,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_o *__fastcall WarBoardPartySkillMaster__GetEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E760D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      id,
      target,
      *(_QWORD *)&num);
    byte_42E760D = 1;
  }
  PK = WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  WarBoardPartySkillMaster___c__DisplayClass2_0_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int v28; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_42E760E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, id, isEnemy, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v19, v20, v21);
    sub_B5D5C4(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v22, v23, v24);
    byte_42E760E = 1;
  }
  v25 = (WarBoardPartySkillMaster___c__DisplayClass2_0_o *)sub_B5D694(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(v25, 0LL);
  if ( !v25 )
    sub_B5D69C(v26, v27);
  if ( isEnemy )
    v28 = 2;
  else
    v28 = 1;
  v25->fields.id = id;
  v25->fields.target = v28;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v25,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v31,
                                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v19; // x1
  signed int max_length; // w8
  unsigned int v21; // w23
  int32_t target; // w8
  __int64 v24; // x0

  if ( (byte_42E7610 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillEntity__Add__, partyNum, checkTarget, entityArray);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_SkillEntity__TypeInfo, v14, v15, v16);
    byte_42E7610 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_16;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v24 = sub_B5D6C8(SkillEntity);
        sub_B5D668(v24, 0LL);
      }
      SkillEntity = entityArray->m_Items[v21];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v19);
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SkillEntity,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkillEntity__Add__);
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(SkillEntity, v19);
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (SkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
}


SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t maxNum; // [xsp+Ch] [xbp-4h] BYREF

  maxNum = 0;
  return WarBoardPartySkillMaster__GetPartySkillEntity_23023468(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
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
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v26; // x4
  SkillEntity_array *v27; // x22
  int32_t v28; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v30; // x1
  WarBoardPartySkillMaster___c_c *v32; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v35; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v44; // x0
  const MethodInfo *v45; // x4
  int32_t transactionId; // w1

  if ( (byte_42E760F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___,
      partySkillId,
      partyNum,
      isEnemy);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardPartySkillMaster___c_TypeInfo, v21, v22, v23);
    byte_42E760F = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0LL);
  v27 = 0LL;
  if ( IsNullOrEmpty )
    return v27;
  if ( isEnemy )
    v28 = 2;
  else
    v28 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v28,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v26);
  if ( !PartyNumMatchSkillArray )
    sub_B5D69C(0LL, v30);
  v27 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v27;
  v32 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v32 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v35,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    v36 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    v36->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v36->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v44 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v43,
          (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v44 )
    return v27;
  transactionId = (int32_t)v44->fields.transactionId;
  if ( transactionId >= partyNum )
    return v27;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v44,
             transactionId,
             v28,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v45);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_23023468(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  WarBoardPartySkillMaster___c__DisplayClass6_0_o *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x22
  WarBoardPartySkillEntity_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo *v49; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v51; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_1; // x22
  Il2CppObject *v54; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0

  if ( (byte_42E7611 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, partySkillId, partyNum, isEnemy);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v32, v33, v34);
    sub_B5D5C4(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&WarBoardPartySkillMaster___c_TypeInfo, v38, v39, v40);
    byte_42E7611 = 1;
  }
  v41 = (WarBoardPartySkillMaster___c__DisplayClass6_0_o *)sub_B5D694(WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(v41, 0LL);
  if ( !v41 )
    sub_B5D69C(v42, v43);
  v41->fields.partyNum = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v44);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v41,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                   (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)EntityArray,
                                                                                                   (System_Func_T__bool__o *)v47,
                                                                                                   (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
  }
  else
  {
    v51 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v51 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    static_fields = v51->static_fields;
    _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)static_fields->__9;
      _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_1,
        v54,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
      v55 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      v55->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v55->__9__6_1,
        (System_Int32_array **)_9__6_1,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                                                     v62,
                                                                                                     (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
      return 0LL;
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
    if ( num >= v41->fields.partyNum )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v49);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FAE & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartySkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FAE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarBoardPartySkillMaster___c___ctor(WarBoardPartySkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntityArray_b__3_0(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.num;
}


void __fastcall WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartySkillMaster___c__DisplayClass2_0___GetEntityArray_b__0(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return WarBoardPartySkillEntity__IsMatch(entity, this->fields.id, this->fields.target, 0LL);
}


void __fastcall WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartySkillMaster___c__DisplayClass6_0___GetPartySkillEntity_b__0(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.num == this->fields.partyNum;
}