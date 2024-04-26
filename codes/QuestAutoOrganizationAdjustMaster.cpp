void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353043 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
    byte_4353043 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    484,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
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
  System_Int32_array **QuestGroupIds; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4353041 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
    sub_B70694(&Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
    sub_B70694(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_B70694(&QuestAutoOrganizationAdjustEntity___TypeInfo);
    sub_B70694(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__);
    sub_B70694(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
    byte_4353041 = 1;
  }
  v7 = sub_B70764(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_B706AC(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = (System_Int32_array **)QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                                           (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                                           *(_DWORD *)(v7 + 16),
                                           v11);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), QuestGroupIds, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                      v22,
                                                      (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


System_ValueTuple_QuestGroupType_Type__int__array *__fastcall QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  intptr_t v14; // w20
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  QuestAutoOrganizationAdjustMaster___c_c *v20; // x8
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x9
  System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *_9__2_1; // x20
  Il2CppObject *v23; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_RuntimeTypeHandle_o v33; // 0:w0.4

  if ( (byte_4353042 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
    sub_B70694(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
    sub_B70694(&Method_System_Func_ValueTuple_QuestGroupType_Type__int___bool___ctor__);
    sub_B70694(&Method_System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____ctor__);
    sub_B70694(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    sub_B70694(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
    sub_B70694(&QuestGroupType_Type_var);
    sub_B70694(&System_Type_TypeInfo);
    sub_B70694(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__);
    sub_B70694(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__);
    sub_B70694(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
    sub_B70694(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4353042 = 1;
  }
  v4 = sub_B70764(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *)v4,
    0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  *(_DWORD *)(v4 + 24) = questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v4 + 16) = Master_WarQuestSelectionMaster;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 16), Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
  v14 = (int)QuestGroupType_Type_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v33.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_1CAABA4 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v18 = (System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___o *)sub_B70764(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int_____ctor(
    v18,
    (Il2CppObject *)v4,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    (const MethodInfo_29A7DBC *)Method_System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____ctor__);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int__(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_1CC2EFC *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v20 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  if ( (BYTE3(QuestAutoOrganizationAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v20 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__2_1 = static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)sub_B70764(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_QuestGroupType_Type__int___bool____ctor(
      _9__2_1,
      v23,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      (const MethodInfo_29A0904 *)Method_System_Func_ValueTuple_QuestGroupType_Type__int___bool___ctor__);
    v24 = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    v24->__9__2_1 = _9__2_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v24->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Where_ValueTuple_QuestGroupType_Type__int__(
          v19,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_1CCC3F4 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return System_Linq_Enumerable__ToArray_ValueTuple_QuestGroupType_Type__int__(
           v31,
           (const MethodInfo_1CC83C0 *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


bool __fastcall QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x2
  System_Int32_array **QuestGroupIds; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4353040 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
    sub_B70694(&Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
    sub_B70694(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
    sub_B70694(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__);
    sub_B70694(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
    byte_4353040 = 1;
  }
  v7 = sub_B70764(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = (System_Int32_array **)QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                                           (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                                           *(_DWORD *)(v7 + 16),
                                           v11);
  *(_QWORD *)(v7 + 24) = QuestGroupIds;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), QuestGroupIds, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v20,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_1CAA848 *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351ADE & 1) == 0 )
  {
    sub_B70694(&QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    byte_4351ADE = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o value; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o p_value; // 0:x0.8
  System_ValueTuple_QuestGroupType_Type__int__o v13; // 0:x1.8

  v4 = this;
  if ( (byte_4351ADF & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_B70694(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4351ADF = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  if ( entity->fields.questId == v4->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v4->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.questGroupTuples;
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    p_value = (System_ValueTuple_QuestGroupType_Type__int__o)&value;
    value = 0LL;
    System_ValueTuple_QuestGroupType_Type__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_2677A64 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v13 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_QuestGroupType_Type__int__(
             questGroupTuples,
             v13,
             (const MethodInfo_1CB54DC *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o value; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o p_value; // 0:x0.8
  System_ValueTuple_QuestGroupType_Type__int__o v13; // 0:x1.8

  v4 = this;
  if ( (byte_4351AE0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_B70694(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4351AE0 = 1;
  }
  if ( !entity )
    sub_B7076C(this, entity);
  if ( entity->fields.questId == v4->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v4->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.questGroupTuples;
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    p_value = (System_ValueTuple_QuestGroupType_Type__int__o)&value;
    value = 0LL;
    System_ValueTuple_QuestGroupType_Type__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_2677A64 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v13 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_QuestGroupType_Type__int__(
             questGroupTuples,
             v13,
             (const MethodInfo_1CB54DC *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  QuestGroupMaster_o *questGroupMaster; // x0
  int32_t GroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o v8; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o v9; // 0:x0.8

  if ( (byte_4351AE1 & 1) == 0 )
  {
    sub_B70694(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    byte_4351AE1 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_B7076C(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, 0LL);
  v9 = (System_ValueTuple_QuestGroupType_Type__int__o)&v8;
  v8 = 0LL;
  System_ValueTuple_QuestGroupType_Type__int____ctor(
    v9,
    type,
    GroupId,
    (const MethodInfo_2677A64 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v8;
}