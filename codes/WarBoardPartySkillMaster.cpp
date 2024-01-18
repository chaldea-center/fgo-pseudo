void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186586 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__, method);
    byte_4186586 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    412,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
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

  if ( (byte_4186587 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4186587 = 1;
  }
  PK = WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardPartySkillMaster___c__DisplayClass2_0_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int v16; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4186588 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v8);
    sub_B2C35C(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v9);
    sub_B2C35C(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v11);
    sub_B2C35C(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v12);
    byte_4186588 = 1;
  }
  v13 = (WarBoardPartySkillMaster___c__DisplayClass2_0_o *)sub_B2C42C(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  if ( isEnemy )
    v16 = 2;
  else
    v16 = 1;
  v13->fields.id = id;
  v13->fields.target = v16;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v19,
                                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
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
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v13; // x1
  signed int max_length; // w8
  unsigned int v15; // w23
  int32_t target; // w8
  __int64 v18; // x0

  if ( (byte_418658A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillEntity__Add__, *(_QWORD *)&partyNum);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_SkillEntity__TypeInfo, v10);
    byte_418658A = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_16;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v18 = sub_B2C460(SkillEntity);
        sub_B2C400(v18, 0LL);
      }
      SkillEntity = entityArray->m_Items[v15];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v13);
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SkillEntity,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkillEntity__Add__);
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(SkillEntity, v13);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (SkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
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
  return WarBoardPartySkillMaster__GetPartySkillEntity_22432292(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
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
  WarBoardPartySkillMaster___c_c *v22; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v25; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v34; // x0
  const MethodInfo *v35; // x4
  int32_t transactionId; // w1

  if ( (byte_4186589 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9);
    sub_B2C35C(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v12);
    sub_B2C35C(&WarBoardPartySkillMaster___c_TypeInfo, v13);
    byte_4186589 = 1;
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
    sub_B2C434(0LL, v20);
  v17 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v17;
  v22 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v22 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v25,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    v26 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v34 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v33,
          (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v34 )
    return v17;
  transactionId = (int32_t)v34->fields.transactionId;
  if ( transactionId >= partyNum )
    return v17;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v34,
             transactionId,
             v18,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v35);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_22432292(
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
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  WarBoardPartySkillEntity_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo *v29; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v31; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_1; // x22
  Il2CppObject *v34; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0

  if ( (byte_418658B & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v12);
    sub_B2C35C(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__, v13);
    sub_B2C35C(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__, v14);
    sub_B2C35C(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v15);
    sub_B2C35C(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v16);
    sub_B2C35C(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v17);
    sub_B2C35C(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v18);
    sub_B2C35C(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v19);
    sub_B2C35C(&WarBoardPartySkillMaster___c_TypeInfo, v20);
    byte_418658B = 1;
  }
  v21 = (WarBoardPartySkillMaster___c__DisplayClass6_0_o *)sub_B2C42C(WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B2C434(v22, v23);
  v21->fields.partyNum = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v24);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v21,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                   (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)EntityArray,
                                                                                                   (System_Func_T__bool__o *)v27,
                                                                                                   (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
  }
  else
  {
    v31 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v31 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_1,
        v34,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
      v35 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      v35->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v35->__9__6_1,
        (System_Int32_array **)_9__6_1,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                                                     v42,
                                                                                                     (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
      return 0LL;
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
    if ( num >= v21->fields.partyNum )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v29);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866FF & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartySkillMaster___c_TypeInfo, v1);
    byte_41866FF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return entity->fields.num == this->fields.partyNum;
}