void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6BB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
    byte_4A5B6BB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntity(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        int32_t randomGroupId,
        int32_t probability,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B6B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
    byte_4A5B6B9 = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v9; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B6BC & 1) == 0 )
  {
    sub_1B885B0(&Method_ObservableCollectionExtensions_Find_DataEntityBase___);
    sub_1B885B0(&System_Predicate_DataEntityBase__TypeInfo);
    sub_1B885B0(&QuestRandomGroupEntity_TypeInfo);
    sub_1B885B0(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__);
    sub_1B885B0(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
    byte_4A5B6BC = 1;
  }
  v5 = sub_1B887FC(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0LL);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v9,
                                         (const MethodInfo_2F04490 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
  if ( result )
  {
    methodPtr_low = LOBYTE(QuestRandomGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (QuestRandomGroupEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestRandomGroupEntity_TypeInfo )
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
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x0
  QuestRandomGroupMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v16; // x1

  if ( (byte_4A5B6BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_QuestRandomGroupEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
    sub_1B885B0(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__);
    sub_1B885B0(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4A5B6BD = 1;
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
    _9__4_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v14, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !v7 )
    sub_1B8880C(RandomRangeIndex, v16);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v7,
                                       RandomRangeIndex,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
}


System_Collections_Generic_List_QuestRandomGroupEntity__o *__fastcall QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v9; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v11; // x22
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4A5B6BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
    sub_1B885B0(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo);
    sub_1B885B0(&System_Func_QuestRandomGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__);
    sub_1B885B0(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__);
    sub_1B885B0(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
    sub_1B885B0(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4A5B6BE = 1;
  }
  v5 = sub_1B887FC(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = groupId;
  list = this->fields.list;
  v9 = QuestRandomGroupMaster___c_TypeInfo;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v9 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v9->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v11,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v17,
                                                                        (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B6BA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
    byte_4A5B6BA = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6BF & 1) == 0 )
  {
    sub_1B885B0(&QuestRandomGroupMaster___c_TypeInfo);
    byte_4A5B6BF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B6C0 & 1) == 0 )
  {
    sub_1B885B0(&QuestRandomGroupEntity_TypeInfo);
    byte_4A5B6C0 = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(QuestRandomGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestRandomGroupEntity_TypeInfo )
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
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4A5B6C1 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_1B885B0(&QuestRandomGroupEntity_TypeInfo);
    byte_4A5B6C1 = 1;
  }
  if ( !entity
    || (methodPtr_low = LOBYTE(QuestRandomGroupEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_1B8880C(this, entity);
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
  if ( (byte_4A5B6C2 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B6C2 = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}