void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9FFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9FFE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    484,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
}


QuestAutoOrganizationAdjustEntity_array *__fastcall QuestAutoOrganizationAdjustMaster__GetEntitiesMatchingQuest(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v32; // x2
  System_Int32_array **QuestGroupIds; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_42E9FFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, questId, questPhase, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestAutoOrganizationAdjustEntity___TypeInfo, v19, v20, v21);
    sub_B5D5C4(
      &Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo, v25, v26, v27);
    byte_42E9FFC = 1;
  }
  v28 = sub_B5D694(QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)v28,
    0LL);
  if ( !v28 )
    sub_B5D69C(v29, v30);
  *(_DWORD *)(v28 + 16) = questId;
  *(_DWORD *)(v28 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_B5D5DC(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = (System_Int32_array **)QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                                           (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                                           *(_DWORD *)(v28 + 16),
                                           v32);
  *(_QWORD *)(v28 + 24) = QuestGroupIds;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 24), QuestGroupIds, v35, v36, v37, v38, v39, v40);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v28,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
  v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v41,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                      v43,
                                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


System_ValueTuple_QuestGroupType_Type__int__array *__fastcall QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  __int64 v53; // x19
  __int64 v54; // x0
  __int64 v55; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  intptr_t v63; // w20
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x20
  System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___o *v67; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x19
  QuestAutoOrganizationAdjustMaster___c_c *v69; // x8
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x9
  System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *_9__2_1; // x20
  Il2CppObject *v72; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_RuntimeTypeHandle_o v82; // 0:w0.4

  if ( (byte_42E9FFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Enum_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_ValueTuple_QuestGroupType_Type__int___bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&QuestGroupType_Type_var, v35, v36, v37);
    sub_B5D5C4(&System_Type_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__, v41, v42, v43);
    sub_B5D5C4(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__, v44, v45, v46);
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v50, v51, v52);
    byte_42E9FFD = 1;
  }
  v53 = sub_B5D694(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_o *)v53,
    0LL);
  if ( !v53 )
    sub_B5D69C(v54, v55);
  *(_DWORD *)(v53 + 24) = questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v53 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 16), Master_WarQuestSelectionMaster, v57, v58, v59, v60, v61, v62);
  v63 = (int)QuestGroupType_Type_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v82.fields.value = v63;
  TypeFromHandle = System_Type__GetTypeFromHandle(v82, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_1C9AC88 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v67 = (System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___o *)sub_B5D694(System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo);
  System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int_____ctor(
    v67,
    (Il2CppObject *)v53,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    (const MethodInfo_2C2A514 *)Method_System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____ctor__);
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int__(
                                                               v66,
                                                               (System_Func_TSource__TResult__o *)v67,
                                                               (const MethodInfo_1CB2298 *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v69 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  if ( (BYTE3(QuestAutoOrganizationAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
    v69 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  static_fields = v69->static_fields;
  _9__2_1 = static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)static_fields->__9;
    _9__2_1 = (System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)sub_B5D694(System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo);
    System_Func_ValueTuple_QuestGroupType_Type__int___bool____ctor(
      _9__2_1,
      v72,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      (const MethodInfo_2799F9C *)Method_System_Func_ValueTuple_QuestGroupType_Type__int___bool___ctor__);
    v73 = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    v73->__9__2_1 = _9__2_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v73->__9__2_1,
      (System_Int32_array **)_9__2_1,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  v80 = System_Linq_Enumerable__Where_ValueTuple_QuestGroupType_Type__int__(
          v68,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_1CBB4C0 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return System_Linq_Enumerable__ToArray_ValueTuple_QuestGroupType_Type__int__(
           v80,
           (const MethodInfo_1CB748C *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


bool __fastcall QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v26; // x2
  System_Int32_array **QuestGroupIds; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x20

  if ( (byte_42E9FFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___, questId, questPhase, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__, v16, v17, v18);
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo, v19, v20, v21);
    byte_42E9FFB = 1;
  }
  v22 = sub_B5D694(QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo);
  QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0___ctor(
    (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)v22,
    0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  *(_DWORD *)(v22 + 16) = questId;
  *(_DWORD *)(v22 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = (System_Int32_array **)QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                                           (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                                           *(_DWORD *)(v22 + 16),
                                           v26);
  *(_QWORD *)(v22 + 24) = QuestGroupIds;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), QuestGroupIds, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v36,
    (Il2CppObject *)v22,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestAutoOrganizationAdjustEntity__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v35,
           (System_Func_TSource__bool__o *)v36,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7ED4 & 1) == 0 )
  {
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7ED4 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestAutoOrganizationAdjustMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t questPhase; // w8
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o value; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o p_value; // 0:x0.8
  System_ValueTuple_QuestGroupType_Type__int__o v17; // 0:x1.8

  v5 = this;
  if ( (byte_42E7ED5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v6,
                                                                         v7,
                                                                         v8);
    byte_42E7ED5 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  if ( entity->fields.questId == v5->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v5->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.questGroupTuples;
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    p_value = (System_ValueTuple_QuestGroupType_Type__int__o)&value;
    value = 0LL;
    System_ValueTuple_QuestGroupType_Type__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_2BE8B5C *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v17 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_QuestGroupType_Type__int__(
             questGroupTuples,
             v17,
             (const MethodInfo_1CA4B98 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  __int64 v3; // x3
  QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t questPhase; // w8
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o value; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o p_value; // 0:x0.8
  System_ValueTuple_QuestGroupType_Type__int__o v17; // 0:x1.8

  v5 = this;
  if ( (byte_42E7ED6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_B5D5C4(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v6,
                                                                         v7,
                                                                         v8);
    byte_42E7ED6 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  if ( entity->fields.questId == v5->fields.questId
    && ((questPhase = entity->fields.questPhase) == 0 || questPhase == v5->fields.questPhase) )
  {
    return 1;
  }
  else
  {
    questGroupTuples = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.questGroupTuples;
    questGroupType = entity->fields.questGroupType;
    questGroupId = entity->fields.questGroupId;
    p_value = (System_ValueTuple_QuestGroupType_Type__int__o)&value;
    value = 0LL;
    System_ValueTuple_QuestGroupType_Type__int____ctor(
      p_value,
      questGroupType,
      questGroupId,
      (const MethodInfo_2BE8B5C *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v17 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_QuestGroupType_Type__int__(
             questGroupTuples,
             v17,
             (const MethodInfo_1CA4B98 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  __int64 v3; // x3
  QuestGroupMaster_o *questGroupMaster; // x0
  int32_t GroupId; // w2
  System_ValueTuple_QuestGroupType_Type__int__o v9; // [xsp+8h] [xbp-18h] BYREF
  System_ValueTuple_QuestGroupType_Type__int__o v10; // 0:x0.8

  if ( (byte_42E7ED7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__, type, (_DWORD)method, v3);
    byte_42E7ED7 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_B5D69C(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, 0LL);
  v10 = (System_ValueTuple_QuestGroupType_Type__int__o)&v9;
  v9 = 0LL;
  System_ValueTuple_QuestGroupType_Type__int____ctor(
    v10,
    type,
    GroupId,
    (const MethodInfo_2BE8B5C *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v9;
}