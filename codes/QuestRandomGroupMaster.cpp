void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4217C5C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method);
    byte_4217C5C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    72,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_4217C5A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4217C5A = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
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
  __int64 v13; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_4217C5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Predicate_DataEntityBase___ctor__, v5);
    sub_B0D8A4(&System_Predicate_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&QuestRandomGroupEntity_TypeInfo, v7);
    sub_B0D8A4(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v8);
    sub_B0D8A4(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v9);
    byte_4217C5D = 1;
  }
  v10 = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                           QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo,
                                                           *(_QWORD *)&questId,
                                                           method);
  QuestRandomGroupMaster___c__DisplayClass3_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.questId = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_DataEntityBase__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_DataEntityBase___ctor__);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v15,
                                         (const MethodInfo_204B110 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
  if ( result )
  {
    v17 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
    {
      if ( (QuestRandomGroupEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] != QuestRandomGroupEntity_TypeInfo )
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x19
  QuestRandomGroupMaster___c_c *v14; // x8
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v17; // x21
  struct QuestRandomGroupMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v26; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_4217C5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&Method_System_Func_QuestRandomGroupEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v8);
    sub_B0D8A4(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v9);
    sub_B0D8A4(&QuestRandomGroupMaster___c_TypeInfo, v10);
    byte_4217C5E = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v14 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v14 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_QuestRandomGroupEntity__int__TypeInfo,
                                                                                v11,
                                                                                v12);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v17,
      Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__,
      (const MethodInfo_2619564 *)Method_System_Func_QuestRandomGroupEntity__int___ctor__);
    v18 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v18->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v26, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !ValidEntityListFromGroupId )
    sub_B0D97C(RandomRangeIndex);
  if ( ValidEntityListFromGroupId->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  __int64 v18; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v20; // x0
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v23; // x22
  struct QuestRandomGroupMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4217C5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v6);
    sub_B0D8A4(&Method_System_Func_QuestRandomGroupEntity__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__, v8);
    sub_B0D8A4(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v11);
    sub_B0D8A4(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v12);
    sub_B0D8A4(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v13);
    sub_B0D8A4(&QuestRandomGroupMaster___c_TypeInfo, v14);
    byte_4217C5F = 1;
  }
  v15 = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B0D974(
                                                           QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo,
                                                           *(_QWORD *)&groupId,
                                                           method);
  QuestRandomGroupMaster___c__DisplayClass5_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.groupId = groupId;
  list = this->fields.list;
  v20 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v20 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo,
                                                                                                v17,
                                                                                                v18);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v23,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__);
    v24 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v24->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v24->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_QuestRandomGroupEntity__bool__TypeInfo,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v15,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_QuestRandomGroupEntity__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v31,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v35,
                                                                        (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_4217C5B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__, entity);
    byte_4217C5B = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&randomGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42124E0 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRandomGroupMaster___c_TypeInfo, v1);
    byte_42124E0 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestRandomGroupMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_42124E1 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_42124E1 = 1;
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
  if ( (byte_42124E2 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B0D8A4(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_42124E2 = 1;
  }
  if ( !entity
    || (v5 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1),
        *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_B0D97C(this);
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
  if ( (byte_42124E3 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B0D8A4(&CondType_TypeInfo, entity);
    byte_42124E3 = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}