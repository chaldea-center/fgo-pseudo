void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CABE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__,
      method);
    byte_4B1CABE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    492,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B1CABC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___, v8);
    sub_1BCAFF8(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v9);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustEntity___TypeInfo, v10);
    sub_1BCAFF8(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__, v11);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo, v12);
    byte_4B1CABC = 1;
  }
  v13 = sub_1BCB244(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
  *(_DWORD *)(v13 + 16) = questId;
  *(_DWORD *)(v13 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_1BCB0A0(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v13 + 16),
                    v17);
  *(_QWORD *)(v13 + 24) = QuestGroupIds;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)QuestGroupIds, v20, v21);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                      v24,
                                                      (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  intptr_t v24; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  QuestAutoOrganizationAdjustMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_T__TResult__o *_9__2_1; // x20
  Il2CppObject *v33; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_RuntimeTypeHandle_o v39; // 0:w0.4

  if ( (byte_4B1CABD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&System_Enum_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____, v9);
    sub_1BCAFF8(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo, v10);
    sub_1BCAFF8(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo, v11);
    sub_1BCAFF8(&QuestGroupType_Type_var, v12);
    sub_1BCAFF8(&System_Type_TypeInfo, v13);
    sub_1BCAFF8(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__, v14);
    sub_1BCAFF8(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__, v15);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo, v16);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v17);
    byte_4B1CABD = 1;
  }
  v18 = sub_1BCB244(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    sub_1BCB254(v19, v20);
  *(_DWORD *)(v18 + 24) = questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v18 + 16) = Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Master_object, v22, v23);
  v24 = (int)QuestGroupType_Type_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v39.fields.value = v24;
  TypeFromHandle = System_Type__GetTypeFromHandle(v39, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_30290F0 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v28 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_Int32Enum__ValueTuple_Int32Enum__int_____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Select_Int32Enum__ValueTuple_Int32Enum__int__(
          v27,
          (System_Func_TSource__TResult__o *)v28,
          (const MethodInfo_304CEE0 *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v30 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v30 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v30->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_Int32Enum__int___bool____ctor(
      _9__2_1,
      v33,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      0LL);
    static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)_9__2_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_ValueTuple_Int32Enum__int__(
          v31,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_305D40C *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return (System_ValueTuple_QuestGroupType_Type__int__array *)System_Linq_Enumerable__ToArray_ValueTuple_Int32Enum__int__(
                                                                v37,
                                                                (const MethodInfo_3056F0C *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__bool__o *v21; // x21

  if ( (byte_4B1CABB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, v7);
    sub_1BCAFF8(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__, v9);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo, v10);
    byte_4B1CABB = 1;
  }
  v11 = sub_1BCB244(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1BCB254(v12, v13);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)QuestGroupIds, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v21 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__50496752(
           v20,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_30284F0 *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CABF & 1) == 0 )
  {
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v1);
    byte_4B1CABF = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields->__9 = (struct QuestAutoOrganizationAdjustMaster___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_4B1CAC0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_1BCAFF8(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5);
    byte_4B1CAC0 = 1;
  }
  if ( !entity )
    sub_1BCB254(this, entity);
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
      (const MethodInfo_3A06C84 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v14 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v14,
             (const MethodInfo_3033884 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  if ( (byte_4B1CAC1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_1BCAFF8(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5);
    byte_4B1CAC1 = 1;
  }
  if ( !entity )
    sub_1BCB254(this, entity);
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
      (const MethodInfo_3A06C84 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v14 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v14,
             (const MethodInfo_3033884 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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

  if ( (byte_4B1CAC2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__, *(_QWORD *)&type);
    byte_4B1CAC2 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_1BCB254(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, v3);
  v10 = (System_ValueTuple_Int32Enum__int__o)&v9;
  v9 = 0LL;
  System_ValueTuple_Int32Enum__int____ctor(
    v10,
    type,
    GroupId,
    (const MethodInfo_3A06C84 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v9;
}