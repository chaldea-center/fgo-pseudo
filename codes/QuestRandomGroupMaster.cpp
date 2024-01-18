void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AEE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method);
    byte_418AEE1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    72,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntity(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AEDF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418AEDF = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestRandomGroupMaster___c__DisplayClass3_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 v16; // x10

  if ( (byte_418AEE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Predicate_DataEntityBase___ctor__, v5);
    sub_B2C35C(&System_Predicate_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&QuestRandomGroupEntity_TypeInfo, v7);
    sub_B2C35C(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v8);
    sub_B2C35C(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v9);
    byte_418AEE2 = 1;
  }
  v10 = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B2C42C(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  QuestRandomGroupMaster___c__DisplayClass3_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.questId = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_DataEntityBase___ctor__);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v14,
                                         (const MethodInfo_2096580 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
  if ( result )
  {
    v16 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
    {
      if ( (QuestRandomGroupEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != QuestRandomGroupEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetRandomRangeQuest(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x19
  QuestRandomGroupMaster___c_c *v12; // x8
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v15; // x21
  struct QuestRandomGroupMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v26; // x1

  if ( (byte_418AEE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Func_QuestRandomGroupEntity__int___ctor__, v6);
    sub_B2C35C(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v8);
    sub_B2C35C(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v9);
    sub_B2C35C(&QuestRandomGroupMaster___c_TypeInfo, v10);
    byte_418AEE3 = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v12 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v12 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v15,
      Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_QuestRandomGroupEntity__int___ctor__);
    v16 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          v23,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v24, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !ValidEntityListFromGroupId )
    sub_B2C434(RandomRangeIndex, v26);
  if ( ValidEntityListFromGroupId->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return ValidEntityListFromGroupId->fields._items->m_Items[(int)RandomRangeIndex];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestRandomGroupEntity__o *__fastcall QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
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
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v19; // x0
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v22; // x22
  struct QuestRandomGroupMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_418AEE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v6);
    sub_B2C35C(&Method_System_Func_QuestRandomGroupEntity__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__, v8);
    sub_B2C35C(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v10);
    sub_B2C35C(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v11);
    sub_B2C35C(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v12);
    sub_B2C35C(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v13);
    sub_B2C35C(&QuestRandomGroupMaster___c_TypeInfo, v14);
    byte_418AEE4 = 1;
  }
  v15 = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B2C42C(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  QuestRandomGroupMaster___c__DisplayClass5_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.groupId = groupId;
  list = this->fields.list;
  v19 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v19 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v22,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__);
    v23 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v23->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v23->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_QuestRandomGroupEntity__bool___ctor__);
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v30,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v32,
                                                                        (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRandomGroupMaster__TryGetEntity(
        QuestRandomGroupMaster_o *this,
        QuestRandomGroupEntity_o **entity,
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AEE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__, entity);
    byte_418AEE0 = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&randomGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418560F & 1) == 0 )
  {
    sub_B2C35C(&QuestRandomGroupMaster___c_TypeInfo, v1);
    byte_418560F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall QuestRandomGroupMaster___c___ctor(QuestRandomGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRandomGroupMaster___c___GetRandomRangeQuest_b__4_0(
        QuestRandomGroupMaster___c_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_4185610 & 1) == 0 )
  {
    sub_B2C35C(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_4185610 = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == QuestRandomGroupEntity_TypeInfo )
    return (QuestRandomGroupEntity_o *)entity;
  return 0LL;
}


void __fastcall QuestRandomGroupMaster___c__DisplayClass3_0___ctor(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRandomGroupMaster___c__DisplayClass3_0___GetEntityFromQuestId_b__0(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  QuestRandomGroupMaster___c__DisplayClass3_0_o *v4; // x20
  __int64 v5; // x10

  v4 = this;
  if ( (byte_4185611 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B2C35C(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_4185611 = 1;
  }
  if ( !entity
    || (v5 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1),
        *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_B2C434(this, entity);
  }
  return LODWORD(entity[1].klass) == v4->fields.questId;
}


void __fastcall QuestRandomGroupMaster___c__DisplayClass5_0___ctor(
        QuestRandomGroupMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRandomGroupMaster___c__DisplayClass5_0___GetValidEntityListFromGroupId_b__1(
        QuestRandomGroupMaster___c__DisplayClass5_0_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v4; // x20
  int32_t questId; // w19

  v4 = this;
  if ( (byte_4185612 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B2C35C(&CondType_TypeInfo, entity);
    byte_4185612 = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}