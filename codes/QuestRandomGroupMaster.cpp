void __fastcall QuestRandomGroupMaster___ctor(QuestRandomGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EB6B & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__, method);
    byte_4A4EB6B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    78,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string___ctor__);
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

  if ( (byte_4A4EB69 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4A4EB69 = 1;
  }
  PK = (Il2CppObject *)QuestRandomGroupEntity__CreatePK(
                         questId,
                         randomGroupId,
                         probability,
                         *(const MethodInfo **)&probability);
  return (QuestRandomGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3218D38 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4A4EB6C & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__,
      *(_QWORD *)&questId);
    sub_1B863B8(&Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___, v5);
    sub_1B863B8(&System_Predicate_QuestRandomGroupEntity__TypeInfo, v6);
    sub_1B863B8(&Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__, v7);
    sub_1B863B8(&QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo, v8);
    byte_4A4EB6C = 1;
  }
  v9 = sub_1B86604(QuestRandomGroupMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v13 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_QuestRandomGroupEntity__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_QuestRandomGroupMaster___c__DisplayClass3_0__GetEntityFromQuestId_b__0__,
    0LL);
  return (QuestRandomGroupEntity_o *)ObservableCollectionExtensions__Find_object_(
                                       list,
                                       (System_Predicate_T__o *)v13,
                                       (const MethodInfo_2FF69F8 *)Method_ObservableCollectionExtensions_Find_QuestRandomGroupEntity___);
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
  QuestRandomGroupMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v21; // x1

  if ( (byte_4A4EB6D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___, *(_QWORD *)&groupId);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B863B8(&System_Func_QuestRandomGroupEntity__int__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__, v7);
    sub_1B863B8(&Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, v8);
    sub_1B863B8(&QuestRandomGroupMaster___c_TypeInfo, v9);
    byte_4A4EB6D = 1;
  }
  ValidEntityListFromGroupId = QuestRandomGroupMaster__GetValidEntityListFromGroupId(this, groupId, method);
  v11 = QuestRandomGroupMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidEntityListFromGroupId;
  if ( !QuestRandomGroupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRandomGroupMaster___c_TypeInfo);
    v11 = QuestRandomGroupMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v11->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = QuestRandomGroupMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B86604(System_Func_QuestRandomGroupEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v14, Method_QuestRandomGroupMaster___c__GetRandomRangeQuest_b__4_0__, 0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_QuestRandomGroupEntity__int__o *)_9__4_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v19, -1, 0LL);
  if ( (RandomRangeIndex & 0x80000000) != 0 )
    return 0LL;
  if ( !v12 )
    sub_1B86614(RandomRangeIndex, v21);
  return (QuestRandomGroupEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v12,
                                       RandomRangeIndex,
                                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_QuestRandomGroupEntity__get_Item__);
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
  __int64 v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  QuestRandomGroupMaster___c_c *v18; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  struct QuestRandomGroupMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4A4EB6E & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__getEntityList__,
      *(_QWORD *)&groupId);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___, v7);
    sub_1B863B8(&System_Func_QuestRandomGroupEntity__bool__TypeInfo, v8);
    sub_1B863B8(&System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo, v9);
    sub_1B863B8(&Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__, v10);
    sub_1B863B8(&Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__, v11);
    sub_1B863B8(&QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo, v12);
    sub_1B863B8(&QuestRandomGroupMaster___c_TypeInfo, v13);
    byte_4A4EB6E = 1;
  }
  v14 = sub_1B86604(QuestRandomGroupMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1B86614(v15, v16);
  *(_DWORD *)(v14 + 16) = groupId;
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
    _9__5_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__5_0,
      v20,
      Method_QuestRandomGroupMaster___c__GetValidEntityListFromGroupId_b__5_0__,
      0LL);
    static_fields = QuestRandomGroupMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_QuestRandomGroupEntity__QuestRandomGroupEntity__o *)_9__5_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_QuestRandomGroupEntity__QuestRandomGroupEntity___);
  v25 = (System_Func_object__bool__o *)sub_1B86604(System_Func_QuestRandomGroupEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_QuestRandomGroupMaster___c__DisplayClass5_0__GetValidEntityListFromGroupId_b__1__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_QuestRandomGroupEntity___);
  return (System_Collections_Generic_List_QuestRandomGroupEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v26,
                                                                        (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_QuestRandomGroupEntity___);
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

  if ( (byte_4A4EB6A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__, entity);
    byte_4A4EB6A = 1;
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
           (const MethodInfo_3218D84 *)Method_DataMasterBase_QuestRandomGroupMaster__QuestRandomGroupEntity__string__TryGetEntity__);
}


void __fastcall QuestRandomGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4EB6F & 1) == 0 )
  {
    sub_1B863B8(&QuestRandomGroupMaster___c_TypeInfo, v1);
    byte_4A4EB6F = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(QuestRandomGroupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRandomGroupMaster___c_TypeInfo->static_fields->__9 = (struct QuestRandomGroupMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)QuestRandomGroupMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return entity->fields.probability;
}


QuestRandomGroupEntity_o *__fastcall QuestRandomGroupMaster___c___GetValidEntityListFromGroupId_b__5_0(
        QuestRandomGroupMaster___c_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


void __fastcall QuestRandomGroupMaster___c__DisplayClass3_0___ctor(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRandomGroupMaster___c__DisplayClass3_0___GetEntityFromQuestId_b__0(
        QuestRandomGroupMaster___c__DisplayClass3_0_o *this,
        QuestRandomGroupEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
  return entity->fields.questId == this->fields.questId;
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
  if ( (byte_4A4EB70 & 1) == 0 )
  {
    this = (QuestRandomGroupMaster___c__DisplayClass5_0_o *)sub_1B863B8(&CondType_TypeInfo, entity);
    byte_4A4EB70 = 1;
  }
  if ( !entity )
    sub_1B86614(this, entity);
  if ( entity->fields.randomGroupId == v4->fields.groupId )
  {
    questId = entity->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_38542260(questId, -1, 0, 0LL);
  }
  else
  {
    return 0;
  }
}