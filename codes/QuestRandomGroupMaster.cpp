void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED26B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED26B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    73,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_42ED269 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      questId,
      randomGroupId,
      *(_QWORD *)&probability);
    byte_42ED269 = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  QuestRandomGroupMaster___c__DisplayClass3_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 v27; // x10

  if ( (byte_42ED26C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_DataEntityBase___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QuestRandomGroupEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v15, v16, v17);
    sub_B5D5C4(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v18, v19, v20);
    byte_42ED26C = 1;
  }
  v21 = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B5D694(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  QuestRandomGroupMaster___c__DisplayClass3_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.questId = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_DataEntityBase___ctor__);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v25,
                                         (const MethodInfo_1E66A64 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
  if ( result )
  {
    v27 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v27 )
    {
      if ( (QuestRandomGroupEntity_c *)result->klass->_2.typeHierarchy[v27 - 1] != QuestRandomGroupEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetRandomRangeQuest(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x19
  QuestRandomGroupMaster___c_c *v25; // x8
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v28; // x21
  struct QuestRandomGroupMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v39; // x1

  if ( (byte_42ED26D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_QuestRandomGroupEntity__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v18, v19, v20);
    sub_B5D5C4(&QuestRandomGroupMaster___c_TypeInfo, v21, v22, v23);
    byte_42ED26D = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v25 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v25 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v28,
      Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_QuestRandomGroupEntity__int___ctor__);
    v29 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v29->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v29->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v37, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !ValidEntityListFromGroupId )
    sub_B5D69C(RandomRangeIndex, v39);
  if ( ValidEntityListFromGroupId->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return ValidEntityListFromGroupId->fields._items->m_Items[(int)RandomRangeIndex];
}


System_Collections_Generic_List_QuestRandomGroupEntity__o *__fastcall QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v40; // x0
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x21
  Il2CppObject *v43; // x22
  struct QuestRandomGroupMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_42ED26E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_QuestRandomGroupEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v24, v25, v26);
    sub_B5D5C4(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v27, v28, v29);
    sub_B5D5C4(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&QuestRandomGroupMaster___c_TypeInfo, v33, v34, v35);
    byte_42ED26E = 1;
  }
  v36 = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B5D694(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  QuestRandomGroupMaster___c__DisplayClass5_0___ctor(v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  v36->fields.groupId = groupId;
  list = this->fields.list;
  v40 = QuestRandomGroupMaster___c_TypeInfo;
  if ( (BYTE3(QuestRandomGroupMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v40 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v43,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__QuestRandomGroupEntity___ctor__);
    v44 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v44->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v36,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestRandomGroupEntity__bool___ctor__);
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v53,
                                                                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_42ED26A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&randomGroupId);
    byte_42ED26A = 1;
  }
  PK = QuestRandomGroupEntity__CreatePK(questId, randomGroupId, probability, *(const MethodInfo **)&randomGroupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F03 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRandomGroupMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F03 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E7F04 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRandomGroupEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E7F04 = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == QuestRandomGroupEntity_TypeInfo )
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
  __int64 v3; // x3
  QuestRandomGroupMaster___c__DisplayClass3_0_o *v5; // x20
  __int64 v6; // x10

  v5 = this;
  if ( (byte_42E7F05 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_B5D5C4(
                                                              &QuestRandomGroupEntity_TypeInfo,
                                                              (_DWORD)entity,
                                                              (_DWORD)method,
                                                              v3);
    byte_42E7F05 = 1;
  }
  if ( !entity
    || (v6 = *(&QuestRandomGroupEntity_TypeInfo->_2.bitflags2 + 1),
        *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[v6 - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_B5D69C(this, entity);
  }
  return LODWORD(entity[1].klass) == v5->fields.questId;
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
  __int64 v3; // x3
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v5; // x20
  int32_t questId; // w19

  v5 = this;
  if ( (byte_42E7F06 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_B5D5C4(
                                                              &CondType_TypeInfo,
                                                              (_DWORD)entity,
                                                              (_DWORD)method,
                                                              v3);
    byte_42E7F06 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  if ( entity->fields.randomGroupId == v5->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}