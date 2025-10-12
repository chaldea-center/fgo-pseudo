void QuestAutoOrganizationAdjustMaster___ctor(QuestAutoOrganizationAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F92 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
    byte_4C37F92 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    492,
    (const MethodInfo_3394514 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
}


QuestAutoOrganizationAdjustEntity_array *QuestAutoOrganizationAdjustMaster__GetEntitiesMatchingQuest(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C37F90 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
    sub_1C32C20(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_1C32C20(&QuestAutoOrganizationAdjustEntity___TypeInfo);
    sub_1C32C20(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__);
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C37F90 = 1;
  }
  v7 = sub_1C32E6C(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_1C32CC8(QuestAutoOrganizationAdjustEntity___TypeInfo, 0);
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v7 + 16),
                    v10);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)QuestGroupIds, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                      v17,
                                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


System_ValueTuple_QuestGroupType_Type__int__array *QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppType *v9; // x19
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_T__TResult__o *v14; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  QuestAutoOrganizationAdjustMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_T__TResult__o *_9__2_1; // x20
  Il2CppObject *v19; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4C37F91 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
    sub_1C32C20(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    sub_1C32C20(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
    sub_1C32C20(&QuestGroupType_Type_var);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__);
    sub_1C32C20(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__);
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4C37F91 = 1;
  }
  v4 = sub_1C32E6C(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *)v4,
    0);
  if ( !v4 )
    sub_1C32E7C(v5);
  *(_DWORD *)(v4 + 24) = questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v4 + 16) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)Master_object, v7, v8);
  v9 = QuestGroupType_Type_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = (intptr_t)v9;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_30EBA3C *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v14 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_Int32Enum__ValueTuple_Int32Enum__int_____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    0);
  v15 = System_Linq_Enumerable__Select_Int32Enum__ValueTuple_Int32Enum__int__(
          v13,
          (System_Func_TSource__TResult__o *)v14,
          (const MethodInfo_31116DC *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v16 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v16 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v16->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_Int32Enum__int___bool____ctor(
      _9__2_1,
      v19,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      0);
    static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)_9__2_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v21, v22);
  }
  v23 = System_Linq_Enumerable__Where_ValueTuple_Int32Enum__int__(
          v17,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_3123058 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return (System_ValueTuple_QuestGroupType_Type__int__array *)System_Linq_Enumerable__ToArray_ValueTuple_Int32Enum__int__(
                                                                v23,
                                                                (const MethodInfo_311C6D4 *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


bool QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *v16; // x21

  if ( (byte_4C37F8F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_1C32C20(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_1C32C20(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__);
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C37F8F = 1;
  }
  v7 = sub_1C32E6C(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v7 + 16),
                    v10);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)QuestGroupIds, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51293756(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_30EAE3C *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37F93 & 1) == 0 )
  {
    sub_1C32C20(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4C37F93 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields->__9 = (struct QuestAutoOrganizationAdjustMaster___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void QuestAutoOrganizationAdjustMaster___c___ctor(
        QuestAutoOrganizationAdjustMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestAutoOrganizationAdjustMaster___c___GetQuestGroupIds_b__2_1(
        QuestAutoOrganizationAdjustMaster___c_o *this,
        System_ValueTuple_QuestGroupType_Type__int__o group,
        const MethodInfo *method)
{
  return group.fields.Item1 != 0 && group.fields.Item2 > 0;
}


void QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___IsExistEntity_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *v4; // x20
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o p_value; // x0
  System_ValueTuple_Int32Enum__int__o v11; // x1
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C37F94 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_1C32C20(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4C37F94 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
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
    value = 0;
    System_ValueTuple_Int32Enum__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_3AF3F50 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v11 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v11,
             (const MethodInfo_30FA1A8 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
  }
}


void QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___GetEntitiesMatchingQuest_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *this,
        QuestAutoOrganizationAdjustEntity_o *entity,
        const MethodInfo *method)
{
  QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *v4; // x20
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o p_value; // x0
  System_ValueTuple_Int32Enum__int__o v11; // x1
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C37F95 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_1C32C20(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4C37F95 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
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
    value = 0;
    System_ValueTuple_Int32Enum__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_3AF3F50 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v11 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v11,
             (const MethodInfo_30FA1A8 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
  }
}


void QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___ctor(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_ValueTuple_QuestGroupType_Type__int__o QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___GetQuestGroupIds_b__0(
        QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestGroupMaster_o *questGroupMaster; // x0
  int32_t GroupId; // w2
  System_ValueTuple_Int32Enum__int__o v8; // x0
  System_ValueTuple_QuestGroupType_Type__int__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37F96 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4C37F96 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_1C32E7C(0);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, v3);
  v8 = (System_ValueTuple_Int32Enum__int__o)&v10;
  v10 = 0;
  System_ValueTuple_Int32Enum__int____ctor(
    v8,
    type,
    GroupId,
    (const MethodInfo_3AF3F50 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v10;
}