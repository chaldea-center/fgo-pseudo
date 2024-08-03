void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC95A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method);
    byte_49FC95A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_49FC958 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC958 = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v14; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FC95B & 1) == 0 )
  {
    sub_1B640C8(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, *(_QWORD *)&questId);
    sub_1B640C8(&System_Predicate_DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&QuestRandomGroupEntity_TypeInfo, v6);
    sub_1B640C8(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v7);
    sub_1B640C8(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v8);
    byte_49FC95B = 1;
  }
  v9 = sub_1B64314(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&questId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_DWORD *)(v9 + 16) = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v14 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DataEntityBase__TypeInfo, v11, v12);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0LL);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v14,
                                         (const MethodInfo_2EBC8D4 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
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
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  QuestRandomGroupMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_49FC95C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v7);
    sub_1B640C8(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v8);
    sub_1B640C8(&QuestRandomGroupMaster___c_TypeInfo, v9);
    byte_49FC95C = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v13 = QuestRandomGroupMaster___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v13 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v13->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_QuestRandomGroupEntity__int__TypeInfo, v11, v12);
    System_Func_object__int____ctor(_9__4_0, v16, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v21, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !v14 )
    sub_1B64324(RandomRangeIndex);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v14,
                                       RandomRangeIndex,
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
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
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v18; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_object__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_49FC95D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v6);
    sub_1B640C8(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v7);
    sub_1B640C8(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v9);
    sub_1B640C8(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v10);
    sub_1B640C8(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v11);
    sub_1B640C8(&QuestRandomGroupMaster___c_TypeInfo, v12);
    byte_49FC95D = 1;
  }
  v13 = sub_1B64314(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&groupId, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64324(v14);
  *(_DWORD *)(v13 + 16) = groupId;
  list = this->fields.list;
  v18 = QuestRandomGroupMaster___c_TypeInfo;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v18 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v18->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo,
                                                 v15,
                                                 v16);
    System_Func_object__object____ctor(
      _9__5_0,
      v20,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v27 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestRandomGroupEntity__bool__TypeInfo, v25, v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v28,
                                                                        (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_49FC959 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__, entity);
    byte_49FC959 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC95E & 1) == 0 )
  {
    sub_1B640C8(&QuestRandomGroupMaster___c_TypeInfo, v1);
    byte_49FC95E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestRandomGroupMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FC95F & 1) == 0 )
  {
    sub_1B640C8(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_49FC95F = 1;
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
  if ( (byte_49FC960 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_1B640C8(&QuestRandomGroupEntity_TypeInfo, entity);
    byte_49FC960 = 1;
  }
  if ( !entity
    || (methodPtr_low = LOBYTE(QuestRandomGroupEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_1B64324(this);
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
  if ( (byte_49FC961 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_1B640C8(&CondType_TypeInfo, entity);
    byte_49FC961 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}