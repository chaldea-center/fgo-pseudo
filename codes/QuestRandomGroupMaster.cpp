void QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938E2D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
    byte_5938E2D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    78,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *QuestRandomGroupMaster__GetEntity(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938E2B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
    byte_5938E2B = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


QuestRandomGroupEntity_o *QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5938E2E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__);
    sub_21FFC50(&Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___);
    sub_21FFC50(&System_Predicate_QuestRandomGroupEntity__TypeInfo);
    sub_21FFC50(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__);
    sub_21FFC50(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
    byte_5938E2E = 1;
  }
  v5 = sub_21FFEBC(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_DWORD *)(v5 + 16) = questId;
  v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_QuestRandomGroupEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0);
  return (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                       list,
                                       (System_Predicate_T__o *)v9,
                                       (const MethodInfo_38C0C1C *)Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___);
}


QuestRandomGroupEntity_o *QuestRandomGroupMaster__GetRandomRangeQuest(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x0
  __int64 v6; // x1
  QuestRandomGroupMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct QuestRandomGroupMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array *v20; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v22; // x1

  if ( (byte_5938E2F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_QuestRandomGroupEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
    sub_21FFC50(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__);
    sub_21FFC50(&QuestRandomGroupMaster___c_TypeInfo);
    byte_5938E2F = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v7 = QuestRandomGroupMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId;
  if ( !*(&QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo, v6);
    v7 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v11, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0);
    v12 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__4_0, (int32_t)_9__4_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v20, -1, 0);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0;
  if ( !v8 )
    sub_21FFECC(RandomRangeIndex, v22);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v8,
                                       RandomRangeIndex,
                                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
}


System_Collections_Generic_List_QuestRandomGroupEntity__o *QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  QuestRandomGroupMaster___c_c *v9; // x0
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__5_0; // x20
  Il2CppObject *v12; // x22
  struct QuestRandomGroupMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_5938E30 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
    sub_21FFC50(&System_Func_QuestRandomGroupEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo);
    sub_21FFC50(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__);
    sub_21FFC50(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__);
    sub_21FFC50(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
    sub_21FFC50(&QuestRandomGroupMaster___c_TypeInfo);
    byte_5938E30 = 1;
  }
  v5 = sub_21FFEBC(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  *(_DWORD *)(v5 + 16) = groupId;
  v9 = QuestRandomGroupMaster___c_TypeInfo;
  if ( !*(&QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo, v7);
    v9 = QuestRandomGroupMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__5_0 = (System_Func_object__object__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v12,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0);
    v13 = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    v13->__9__5_0 = (struct System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__o *)_9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__5_0, (int32_t)_9__5_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___);
  v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v22,
                                                                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool QuestRandomGroupMaster__TryGetEntity(
        QuestRandomGroupMaster_o *this,
        QuestRandomGroupEntity_o **entity,
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938E2C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
    byte_5938E2C = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&randomGroupId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938E31 & 1) == 0 )
  {
    sub_21FFC50(&QuestRandomGroupMaster___c_TypeInfo);
    byte_5938E31 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestRandomGroupMaster___c___ctor(QuestRandomGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestRandomGroupMaster___c___GetRandomRangeQuest_b__4_0(
        QuestRandomGroupMaster___c_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


void QuestRandomGroupMaster___c__DisplayClass3_0___ctor(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRandomGroupMaster___c__DisplayClass3_0___GetEntityFromQuestId_b__0(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.questId == this->fields.questId;
}


void QuestRandomGroupMaster___c__DisplayClass5_0___ctor(
        QuestRandomGroupMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestRandomGroupMaster___c__DisplayClass5_0___GetValidEntityListFromGroupId_b__1(
        QuestRandomGroupMaster___c__DisplayClass5_0_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  QuestRandomGroupMaster___c__DisplayClass5_0_o *v4; // x20
  int32_t questId; // w19

  v4 = this;
  if ( (byte_5938E32 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_5938E32 = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    return !CondType__IsQuestClear_47254560(questId, -1, 0, 0);
  }
  else
  {
    return 0;
  }
}