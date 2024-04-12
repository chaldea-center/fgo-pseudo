void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEAB4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
    byte_42AEAB4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    413,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
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

  if ( (byte_42AEAB5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
    byte_42AEAB5 = 1;
  }
  PK = WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  WarBoardPartySkillMaster___c__DisplayClass2_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_42AEAB6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_B52984(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__);
    sub_B52984(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
    byte_42AEAB6 = 1;
  }
  v7 = (WarBoardPartySkillMaster___c__DisplayClass2_0_o *)sub_B52A54(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  if ( isEnemy )
    v10 = 2;
  else
    v10 = 1;
  v7->fields.id = id;
  v7->fields.target = v10;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  v13 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v13,
                                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v10; // x1
  signed int max_length; // w8
  unsigned int v12; // w23
  int32_t target; // w8
  __int64 v15; // x0

  if ( (byte_42AEAB8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SkillEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SkillEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SkillEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_SkillEntity__TypeInfo);
    byte_42AEAB8 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_16;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B52A88(SkillEntity);
        sub_B52A28(v15, 0LL);
      }
      SkillEntity = entityArray->m_Items[v12];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v10);
          if ( !v8 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)SkillEntity,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SkillEntity__Add__);
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(SkillEntity, v10);
  }
LABEL_14:
  if ( !v8 )
    goto LABEL_16;
  return (SkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
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
  return WarBoardPartySkillMaster__GetPartySkillEntity_22723256(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x4
  SkillEntity_array *v12; // x22
  int32_t v13; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v15; // x1
  WarBoardPartySkillMaster___c_c *v17; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v20; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v29; // x0
  const MethodInfo *v30; // x4
  int32_t transactionId; // w1

  if ( (byte_42AEAB7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_B52984(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    sub_B52984(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_B52984(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__);
    sub_B52984(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_42AEAB7 = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0LL);
  v12 = 0LL;
  if ( IsNullOrEmpty )
    return v12;
  if ( isEnemy )
    v13 = 2;
  else
    v13 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v13,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v11);
  if ( !PartyNumMatchSkillArray )
    sub_B52A5C(0LL, v15);
  v12 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v12;
  v17 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v17 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v20,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    v21 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    v21->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v29 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
          v28,
          (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v29 )
    return v12;
  transactionId = (int32_t)v29->fields.transactionId;
  if ( transactionId >= partyNum )
    return v12;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v29,
             transactionId,
             v13,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v30);
}


SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_22723256(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  WarBoardPartySkillMaster___c__DisplayClass6_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x22
  WarBoardPartySkillEntity_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo *v19; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v21; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_1; // x22
  Il2CppObject *v24; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42AEAB9 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_B52984(&Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
    sub_B52984(&Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_B52984(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_B52984(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__);
    sub_B52984(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__);
    sub_B52984(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
    sub_B52984(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_42AEAB9 = 1;
  }
  v11 = (WarBoardPartySkillMaster___c__DisplayClass6_0_o *)sub_B52A54(WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
  WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  v11->fields.partyNum = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v14);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPartySkillEntity__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                   (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)EntityArray,
                                                                                                   (System_Func_T__bool__o *)v17,
                                                                                                   (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
  {
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
  }
  else
  {
    v21 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( (BYTE3(WarBoardPartySkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v21 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__6_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_1,
        v24,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardPartySkillEntity__int___ctor__);
      v25 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      v25->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v25->__9__6_1,
        (System_Int32_array **)_9__6_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    USFGOActorBattleActionEventConditional_OverwriteParamCondition = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                                                     v32,
                                                                                                     (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
      return 0LL;
    num = USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.num;
    if ( num >= v11->fields.partyNum )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v19);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD735 & 1) == 0 )
  {
    sub_B52984(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_42AD735 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return entity->fields.num == this->fields.partyNum;
}