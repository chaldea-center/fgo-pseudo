void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1676C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method, v2);
    byte_4B1676C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    74,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_4B1676A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&randomGroupId);
    byte_4B1676A = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster__GetEntityFromQuestId(
        QuestRandomGroupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v20; // x20
  QuestRandomGroupEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1676D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_Find_DataEntityBase___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&System_Predicate_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&QuestRandomGroupEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v10, v11);
    sub_1BCA7E0(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v12, v13);
    byte_4B1676D = 1;
  }
  v14 = sub_1BCAA2C(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v20 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DataEntityBase__TypeInfo, v16, v17, v18);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0LL);
  result = (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                         list,
                                         (System_Predicate_T__o *)v20,
                                         (const MethodInfo_2F983D0 *)Method_ObservableCollectionExtensions_Find_DataEntityBase___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_QuestRandomGroupEntity__o *ValidEntityListFromGroupId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  QuestRandomGroupMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v22; // x21
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v31; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v33; // x1

  if ( (byte_4B1676E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6);
    sub_1BCA7E0(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v11, v12);
    sub_1BCA7E0(&QuestRandomGroupMaster___c_TypeInfo, v13, v14);
    byte_4B1676E = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v19 = QuestRandomGroupMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo, v16);
    v19 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v19->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_QuestRandomGroupEntity__int__TypeInfo,
                                              v16,
                                              v17,
                                              v18);
    System_Func_object__int____ctor(_9__4_0, v22, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v31 = System_Linq_Enumerable__ToArray_int_(
          v30,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v31, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !v20 )
    sub_1BCAA3C(RandomRangeIndex, v33);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v20,
                                       RandomRangeIndex,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestRandomGroupEntity__o *__fastcall QuestRandomGroupMaster__GetValidEntityListFromGroupId(
        QuestRandomGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  QuestRandomGroupMaster___c_c *v28; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v30; // x22
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4B1676F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v14, v15);
    sub_1BCA7E0(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v16, v17);
    sub_1BCA7E0(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&QuestRandomGroupMaster___c_TypeInfo, v20, v21);
    byte_4B1676F = 1;
  }
  v22 = sub_1BCAA2C(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&groupId, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = groupId;
  list = this->fields.list;
  v28 = QuestRandomGroupMaster___c_TypeInfo;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo, v24);
    v28 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v28->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__QuestRandomGroupEntity__TypeInfo,
                                                 v24,
                                                 v25,
                                                 v26);
    System_Func_object__object____ctor(
      _9__5_0,
      v30,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_DataEntityBase__QuestRandomGroupEntity__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__QuestRandomGroupEntity___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestRandomGroupEntity__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v22,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v43,
                                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_4B1676B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B1676B = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16770 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRandomGroupMaster___c_TypeInfo, v1, v2);
    byte_4B16770 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestRandomGroupMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B16771 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRandomGroupEntity_TypeInfo, entity, method);
    byte_4B16771 = 1;
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
  if ( (byte_4B16772 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass3_0_o *)sub_1BCA7E0(
                                                              &QuestRandomGroupEntity_TypeInfo,
                                                              entity,
                                                              method);
    byte_4B16772 = 1;
  }
  if ( !entity
    || (methodPtr_low = LOBYTE(QuestRandomGroupEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (QuestRandomGroupEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestRandomGroupEntity_TypeInfo )
  {
    sub_1BCAA3C(this, entity);
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
  if ( (byte_4B16773 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_1BCA7E0(&CondType_TypeInfo, entity, method);
    byte_4B16773 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
    return !CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}