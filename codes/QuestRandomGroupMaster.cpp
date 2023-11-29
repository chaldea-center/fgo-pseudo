void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD55D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method);
    byte_40FD55D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    72,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_40FD55B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_40FD55B = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestRandomGroupMaster___c__DisplayClass3_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 v20; // x10

  if ( (byte_40FD55E & 1) == 0 )
  {
    sub_B16FFC(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Predicate_DataEntityBase___ctor__, v7);
    sub_B16FFC(&System_Predicate_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&QuestRandomGroupEntity_TypeInfo, v9);
    sub_B16FFC(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v10);
    sub_B16FFC(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v11);
    byte_40FD55E = 1;
  }
  v12 = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                           QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo,
                                                           *(_QWORD *)&questId,
                                                           method,
                                                           v3,
                                                           v4);
  QuestRandomGroupMaster___c__DisplayClass3_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.questId = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_DataEntityBase__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_DataEntityBase___ctor__);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v18,
                                         (const MethodInfo_19DE954 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
  if ( result )
  {
    v20 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
    {
      if ( (QuestRandomGroupEntity_c *)result->klass->_2.typeHierarchy[v20 - 1] != QuestRandomGroupEntity_TypeInfo )
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x19
  QuestRandomGroupMaster___c_c *v16; // x8
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v19; // x21
  struct QuestRandomGroupMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  int32_t RandomRangeIndex; // w0

  if ( (byte_40FD55F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B16FFC(&Method_System_Func_QuestRandomGroupEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v8);
    sub_B16FFC(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v9);
    sub_B16FFC(&QuestRandomGroupMaster___c_TypeInfo, v10);
    byte_40FD55F = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v16 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v16 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_QuestRandomGroupEntity__int__TypeInfo,
                                                                                v11,
                                                                                v12,
                                                                                v13,
                                                                                v14);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v19,
      Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_QuestRandomGroupEntity__int___ctor__);
    v20 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v20->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v28, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !ValidEntityListFromGroupId )
    sub_B170D4();
  if ( ValidEntityListFromGroupId->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return ValidEntityListFromGroupId->fields._items->m_Items[RandomRangeIndex];
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestRandomGroupEntity__o *__fastcall QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v23; // x0
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v26; // x22
  struct QuestRandomGroupMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_40FD560 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v8);
    sub_B16FFC(&Method_System_Func_QuestRandomGroupEntity__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__, v10);
    sub_B16FFC(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v12);
    sub_B16FFC(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v13);
    sub_B16FFC(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v14);
    sub_B16FFC(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v15);
    sub_B16FFC(&QuestRandomGroupMaster___c_TypeInfo, v16);
    byte_40FD560 = 1;
  }
  v17 = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B170CC(
                                                           QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo,
                                                           *(_QWORD *)&groupId,
                                                           method,
                                                           v3,
                                                           v4);
  QuestRandomGroupMaster___c__DisplayClass5_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B170D4();
  v17->fields.groupId = groupId;
  list = this->fields.list;
  v23 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v23 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo,
                                                                                                v18,
                                                                                                v19,
                                                                                                v20,
                                                                                                v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v26,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__);
    v27 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v27->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_QuestRandomGroupEntity__bool__TypeInfo,
                                                                             v35,
                                                                             v36,
                                                                             v37,
                                                                             v38);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_QuestRandomGroupEntity__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v34,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v40,
                                                                        (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_40FD55C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__, entity);
    byte_40FD55C = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&randomGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40FA314 & 1) == 0 )
  {
    sub_B16FFC(&QuestRandomGroupMaster___c_TypeInfo, v1);
    byte_40FA314 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestRandomGroupMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40FA315 & 1) == 0 )
  {
    sub_B16FFC(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_40FA315 = 1;
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
  __int64 v5; // x10

  if ( (byte_40FA316 & 1) == 0 )
  {
    sub_B16FFC(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_40FA316 = 1;
  }
  if ( !entity
    || (v5 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1),
        *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_B170D4();
  }
  return LODWORD(entity[1].klass) == this->fields.questId;
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
  int32_t questId; // w19

  if ( (byte_40FA317 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, entity);
    byte_40FA317 = 1;
  }
  if ( !entity )
    sub_B170D4();
  if ( entity->fields.randomGroupId == this->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_25438860(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}