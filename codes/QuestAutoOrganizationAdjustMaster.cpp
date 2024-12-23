void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67012 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__,
      method);
    byte_4B67012 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    489,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestAutoOrganizationAdjustEntity_array *__fastcall QuestAutoOrganizationAdjustMaster__GetEntitiesMatchingQuest(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v17; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__bool__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4B67010 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___, v8);
    sub_1BE4ACC(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v9);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustEntity___TypeInfo, v10);
    sub_1BE4ACC(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__, v11);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo, v12);
    byte_4B67010 = 1;
  }
  v13 = sub_1BE4D18(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BE4D28(v14, v15);
  *(_DWORD *)(v13 + 16) = questId;
  *(_DWORD *)(v13 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_1BE4B74(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v13 + 16),
                    v17);
  *(_QWORD *)(v13 + 24) = QuestGroupIds;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)QuestGroupIds, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v27 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          v26,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                      v28,
                                                      (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_QuestGroupType_Type__int__array *__fastcall QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  intptr_t v28; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_T__TResult__o *v32; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x0
  QuestAutoOrganizationAdjustMaster___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_T__TResult__o *_9__2_1; // x20
  Il2CppObject *v37; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_RuntimeTypeHandle_o v47; // 0:w0.4

  if ( (byte_4B67011 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&System_Enum_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____, v9);
    sub_1BE4ACC(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo, v11);
    sub_1BE4ACC(&QuestGroupType_Type_var, v12);
    sub_1BE4ACC(&System_Type_TypeInfo, v13);
    sub_1BE4ACC(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__, v14);
    sub_1BE4ACC(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__, v15);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo, v16);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v17);
    byte_4B67011 = 1;
  }
  v18 = sub_1BE4D18(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BE4D28(v19, v20);
  *(_DWORD *)(v18 + 24) = questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v18 + 16) = Master_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)Master_object, v22, v23, v24, v25, v26, v27);
  v28 = (int)QuestGroupType_Type_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v47.fields.value = v28;
  TypeFromHandle = System_Type__GetTypeFromHandle(v47, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_2F67374 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v32 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_Int32Enum__ValueTuple_Int32Enum__int_____ctor(
    v32,
    (Il2CppObject *)v18,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    0LL);
  v33 = System_Linq_Enumerable__Select_Int32Enum__ValueTuple_Int32Enum__int__(
          v31,
          (System_Func_TSource__TResult__o *)v32,
          (const MethodInfo_2F88AB0 *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v34 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v34 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v34->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_Int32Enum__int___bool____ctor(
      _9__2_1,
      v37,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      0LL);
    static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)_9__2_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__2_1, (int64_t)_9__2_1, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_ValueTuple_Int32Enum__int__(
          v35,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_2F97E10 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return (System_ValueTuple_QuestGroupType_Type__int__array *)System_Linq_Enumerable__ToArray_ValueTuple_Int32Enum__int__(
                                                                v45,
                                                                (const MethodInfo_2F9271C *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__bool__o *v25; // x21

  if ( (byte_4B6700F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, v7);
    sub_1BE4ACC(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__, v9);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo, v10);
    byte_4B6700F = 1;
  }
  v11 = sub_1BE4D18(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BE4D28(v12, v13);
  *(_DWORD *)(v11 + 16) = questId;
  *(_DWORD *)(v11 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v11 + 16),
                    v15);
  *(_QWORD *)(v11 + 24) = QuestGroupIds;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)QuestGroupIds, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v25 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49703832(
           v24,
           (System_Func_TSource__bool__o *)v25,
           (const MethodInfo_2F66B98 *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67013 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v1);
    byte_4B67013 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields->__9 = (struct QuestAutoOrganizationAdjustMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v5; // x1
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v14; // 0:x1.8

  v4 = this;
  if ( (byte_4B67014 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_1BE4ACC(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5);
    byte_4B67014 = 1;
  }
  if ( !entity )
    sub_1BE4D28(this, entity);
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
      (const MethodInfo_393AB90 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v14 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v14,
             (const MethodInfo_2F71204 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  __int64 v5; // x1
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v14; // 0:x1.8

  v4 = this;
  if ( (byte_4B67015 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_1BE4ACC(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5);
    byte_4B67015 = 1;
  }
  if ( !entity )
    sub_1BE4D28(this, entity);
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
      (const MethodInfo_393AB90 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v14 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v14,
             (const MethodInfo_2F71204 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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

  if ( (byte_4B67016 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__, *(_QWORD *)&type);
    byte_4B67016 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_1BE4D28(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, v3);
  v10 = (System_ValueTuple_Int32Enum__int__o)&v9;
  v9 = 0LL;
  System_ValueTuple_Int32Enum__int____ctor(
    v10,
    type,
    GroupId,
    (const MethodInfo_393AB90 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v9;
}