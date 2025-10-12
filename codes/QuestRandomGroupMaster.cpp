void QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C380FA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
    byte_4C380FA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    78,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_4C380F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
    byte_4C380F8 = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_339B2F0 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


QuestRandomGroupEntity_o *QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C380FB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__);
    sub_1C32C20(&Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___);
    sub_1C32C20(&System_Predicate_QuestRandomGroupEntity__TypeInfo);
    sub_1C32C20(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__);
    sub_1C32C20(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C380FB = 1;
  }
  v5 = sub_1C32E6C(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_QuestRandomGroupEntity__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0);
  return (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                       list,
                                       (System_Predicate_T__o *)v8,
                                       (const MethodInfo_316A38C *)Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___);
}


QuestRandomGroupEntity_o *QuestRandomGroupMaster__GetRandomRangeQuest(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x0
  QuestRandomGroupMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_4C380FC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_QuestRandomGroupEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
    sub_1C32C20(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__);
    sub_1C32C20(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4C380FC = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v6 = QuestRandomGroupMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v6 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v14, -1, 0);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0;
  if ( !v7 )
    sub_1C32E7C(RandomRangeIndex);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v7,
                                       RandomRangeIndex,
                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
}


System_Collections_Generic_List_QuestRandomGroupEntity__o *QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestRandomGroupMaster___c_c *v8; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v10; // x22
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4C380FD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
    sub_1C32C20(&System_Func_QuestRandomGroupEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo);
    sub_1C32C20(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__);
    sub_1C32C20(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__);
    sub_1C32C20(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
    sub_1C32C20(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4C380FD = 1;
  }
  v5 = sub_1C32E6C(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = groupId;
  list = this->fields.list;
  v8 = QuestRandomGroupMaster___c_TypeInfo;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v8 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v8->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v10,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__o *)_9__5_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___);
  v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v16,
                                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_4C380F9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
    byte_4C380F9 = 1;
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
           (const MethodInfo_339B33C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C380FE & 1) == 0 )
  {
    sub_1C32C20(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4C380FE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C380FF & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C380FF = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_40225464(questId, -1, 0, 0);
  }
  else
  {
    return 0;
  }
}