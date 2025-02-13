void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDC9AE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
    byte_4BDC9AE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    489,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
}


QuestAutoOrganizationAdjustEntity_array *__fastcall QuestAutoOrganizationAdjustMaster__GetEntitiesMatchingQuest(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4BDC9AC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
    sub_1C21E38(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_1C21E38(&QuestAutoOrganizationAdjustEntity___TypeInfo);
    sub_1C21E38(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__);
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
    byte_4BDC9AC = 1;
  }
  v7 = sub_1C22084(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_1C21EE0(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v7 + 16),
                    v11);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)QuestGroupIds, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v21 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                      v22,
                                                      (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


System_ValueTuple_QuestGroupType_Type__int__array *__fastcall QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  intptr_t v14; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_T__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  QuestAutoOrganizationAdjustMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_T__TResult__o *_9__2_1; // x20
  Il2CppObject *v23; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_RuntimeTypeHandle_o v33; // 0:w0.4

  if ( (byte_4BDC9AD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
    sub_1C21E38(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    sub_1C21E38(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
    sub_1C21E38(&QuestGroupType_Type_var);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__);
    sub_1C21E38(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__);
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4BDC9AD = 1;
  }
  v4 = sub_1C22084(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_DWORD *)(v4 + 24) = questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v4 + 16) = Master_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)Master_object, v8, v9, v10, v11, v12, v13);
  v14 = (int)QuestGroupType_Type_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_2FBDD78 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v18 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_Int32Enum__ValueTuple_Int32Enum__int_____ctor(
    v18,
    (Il2CppObject *)v4,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Select_Int32Enum__ValueTuple_Int32Enum__int__(
          v17,
          (System_Func_TSource__TResult__o *)v18,
          (const MethodInfo_2FDF7C0 *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v20 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v20 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v20->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_Int32Enum__int___bool____ctor(
      _9__2_1,
      v23,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      0LL);
    static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)_9__2_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_1, (int64_t)_9__2_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_ValueTuple_Int32Enum__int__(
          v21,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_2FEEBA8 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return (System_ValueTuple_QuestGroupType_Type__int__array *)System_Linq_Enumerable__ToArray_ValueTuple_Int32Enum__int__(
                                                                v31,
                                                                (const MethodInfo_2FE942C *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


bool __fastcall QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__bool__o *v21; // x21

  if ( (byte_4BDC9AB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_1C21E38(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_1C21E38(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__);
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
    byte_4BDC9AB = 1;
  }
  v7 = sub_1C22084(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v7 + 16),
                    v11);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)QuestGroupIds, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v21 = (System_Func_object__bool__o *)sub_1C22084(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50057592(
           v20,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_2FBD178 *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC9AF & 1) == 0 )
  {
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4BDC9AF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields->__9 = (struct QuestAutoOrganizationAdjustMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___ctor(
        QuestAutoOrganizationAdjustMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestAutoOrganizationAdjustMaster___c___GetQuestGroupIds_b__2_1(
        QuestAutoOrganizationAdjustMaster___c_o *this,
        System_ValueTuple_QuestGroupType_Type__int__o group,
        const MethodInfo *method)
{
  return group.fields.Item1 != 0 && group.fields.Item2 > 0;
}


void __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___IsExistEntity_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *v4; // x20
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v13; // 0:x1.8

  v4 = this;
  if ( (byte_4BDC9B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_1C21E38(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4BDC9B0 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  if ( entity->fields.questId == v4->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v4->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.questGroupTuples;
    p_value = (System_ValueTuple_Int32Enum__int__o)&value;
    value = 0LL;
    System_ValueTuple_Int32Enum__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_39A1E38 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v13 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v13,
             (const MethodInfo_2FC7C08 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
  }
}


void __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___GetEntitiesMatchingQuest_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *v4; // x20
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v13; // 0:x1.8

  v4 = this;
  if ( (byte_4BDC9B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_1C21E38(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4BDC9B1 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  if ( entity->fields.questId == v4->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v4->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.questGroupTuples;
    p_value = (System_ValueTuple_Int32Enum__int__o)&value;
    value = 0LL;
    System_ValueTuple_Int32Enum__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_39A1E38 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v13 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v13,
             (const MethodInfo_2FC7C08 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
  }
}


void __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_QuestGroupType_Type__int__o __fastcall QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___GetQuestGroupIds_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestGroupMaster_o *questGroupMaster; // x0
  int32_t GroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o v9; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o v10; // 0:x0.8

  if ( (byte_4BDC9B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4BDC9B2 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_1C22094(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, v3);
  v10 = (System_ValueTuple_Int32Enum__int__o)&v9;
  v9 = 0LL;
  System_ValueTuple_Int32Enum__int____ctor(
    v10,
    type,
    GroupId,
    (const MethodInfo_39A1E38 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v9;
}