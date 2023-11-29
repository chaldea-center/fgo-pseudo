void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F85CF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__, method);
    byte_40F85CF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    412,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
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

  if ( (byte_40F85D0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F85D0 = 1;
  }
  PK = WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardPartySkillMaster___c__DisplayClass2_0_o *v14; // x22
  int v15; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_40F85D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v12);
    sub_B16FFC(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v13);
    byte_40F85D1 = 1;
  }
  v14 = (WarBoardPartySkillMaster___c__DisplayClass2_0_o *)sub_B170CC(
                                                             WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo,
                                                             *(_QWORD *)&id,
                                                             isEnemy,
                                                             method,
                                                             v4);
  WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_B170D4();
  if ( isEnemy )
    v15 = 2;
  else
    v15 = 1;
  v14->fields.id = id;
  v14->fields.target = v15;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPartySkillEntity__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v16,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v22,
                                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  WarBoardPartySkillEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  unsigned int v16; // w23
  int32_t target; // w8
  SkillEntity_o *SkillEntity; // x0

  if ( (byte_40F85D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillEntity__Add__, *(_QWORD *)&partyNum);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_SkillEntity__TypeInfo, v10);
    byte_40F85D3 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SkillEntity__TypeInfo,
                                                                                                  *(_QWORD *)&partyNum,
                                                                                                  *(_QWORD *)&checkTarget,
                                                                                                  entityArray,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_16;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v12 = entityArray->m_Items[v16];
      if ( !v12 )
        break;
      if ( v12->fields.num == partyNum )
      {
        target = v12->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = WarBoardPartySkillEntity__GetSkillEntity(v12, v13);
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SkillEntity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkillEntity__Add__);
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (SkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
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
  return WarBoardPartySkillMaster__GetPartySkillEntity_22178992(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v16; // x4
  SkillEntity_array *v17; // x22
  int32_t v18; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  WarBoardPartySkillMaster___c_c *v25; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v28; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v37; // x0
  const MethodInfo *v38; // x4
  int32_t transactionId; // w1

  if ( (byte_40F85D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v12);
    sub_B16FFC(&WarBoardPartySkillMaster___c_TypeInfo, v13);
    byte_40F85D2 = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0LL);
  v17 = 0LL;
  if ( IsNullOrEmpty )
    return v17;
  if ( isEnemy )
    v18 = 2;
  else
    v18 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v18,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v16);
  if ( !PartyNumMatchSkillArray )
    sub_B170D4();
  v17 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v17;
  v25 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v25 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardPartySkillEntity__int__TypeInfo,
                                                                                v20,
                                                                                v21,
                                                                                v22,
                                                                                v23);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v28,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    v29 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    v29->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v37 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v36,
          (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v37 )
    return v17;
  transactionId = (int32_t)v37->fields.transactionId;
  if ( transactionId >= partyNum )
    return v17;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v37,
             transactionId,
             v18,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v38);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_22178992(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
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
  WarBoardPartySkillMaster___c__DisplayClass6_0_o *v21; // x20
  const MethodInfo *v22; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x22
  WarBoardPartySkillEntity_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v36; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_1; // x22
  Il2CppObject *v39; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_40F85D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v12);
    sub_B16FFC(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v13);
    sub_B16FFC(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v14);
    sub_B16FFC(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v16);
    sub_B16FFC(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v17);
    sub_B16FFC(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v18);
    sub_B16FFC(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v19);
    sub_B16FFC(&WarBoardPartySkillMaster___c_TypeInfo, v20);
    byte_40F85D4 = 1;
  }
  v21 = (WarBoardPartySkillMaster___c__DisplayClass6_0_o *)sub_B170CC(
                                                             WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo,
                                                             *(_QWORD *)&partySkillId,
                                                             *(_QWORD *)&partyNum,
                                                             isEnemy,
                                                             maxNum);
  WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B170D4();
  v21->fields.partyNum = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v22);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPartySkillEntity__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v21,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                   (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)EntityArray,
                                                                                                   (System_Func_T__bool__o *)v29,
                                                                                                   (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
  }
  else
  {
    v36 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v36 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    static_fields = v36->static_fields;
    _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)static_fields->__9;
      _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_WarBoardPartySkillEntity__int__TypeInfo,
                                                                                  v31,
                                                                                  v32,
                                                                                  v33,
                                                                                  v34);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_1,
        v39,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
      v40 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      v40->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v40->__9__6_1,
        (System_Int32_array **)_9__6_1,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                                                     v47,
                                                                                                     (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
      return 0LL;
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
    if ( num >= v21->fields.partyNum )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v31);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7853 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartySkillMaster___c_TypeInfo, v1);
    byte_40F7853 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardPartySkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return entity->fields.num == this->fields.partyNum;
}