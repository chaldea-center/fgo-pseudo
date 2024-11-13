void __fastcall QuestAutoOrganizationAdjustMaster___ctor(
        QuestAutoOrganizationAdjustMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16635 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__,
      method,
      v2);
    byte_4B16635 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    485,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_QuestAutoOrganizationAdjustMaster__QuestAutoOrganizationAdjustEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestAutoOrganizationAdjustEntity_array *__fastcall QuestAutoOrganizationAdjustMaster__GetEntitiesMatchingQuest(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v23; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Func_object__bool__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4B16633 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustEntity___TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo, v17, v18);
    byte_4B16633 = 1;
  }
  v19 = sub_1BCAA2C(
          QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_DWORD *)(v19 + 16) = questId;
  *(_DWORD *)(v19 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return (QuestAutoOrganizationAdjustEntity_array *)sub_1BCA888(QuestAutoOrganizationAdjustEntity___TypeInfo, 0LL);
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v19 + 16),
                    v23);
  *(_QWORD *)(v19 + 24) = QuestGroupIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)QuestGroupIds, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v36 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo,
                                         v33,
                                         v34,
                                         v35);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v19,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0__GetEntitiesMatchingQuest_b__0__,
    0LL);
  v37 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestAutoOrganizationAdjustEntity___);
  return (QuestAutoOrganizationAdjustEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                      v37,
                                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestAutoOrganizationAdjustEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_QuestGroupType_Type__int__array *__fastcall QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  Il2CppObject *Master_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  intptr_t v44; // w19
  __int64 v45; // x1
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Func_T__TResult__o *v52; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  QuestAutoOrganizationAdjustMaster___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x19
  System_Func_T__TResult__o *_9__2_1; // x20
  Il2CppObject *v60; // x21
  struct QuestAutoOrganizationAdjustMaster___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_RuntimeTypeHandle_o v70; // 0:w0.4

  if ( (byte_4B16634 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Enum_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___, v9, v10);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____, v15, v16);
    sub_1BCA7E0(&System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestGroupType_Type_var, v21, v22);
    sub_1BCA7E0(&System_Type_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__, v25, v26);
    sub_1BCA7E0(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__, v27, v28);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v31, v32);
    byte_4B16634 = 1;
  }
  v33 = sub_1BCAA2C(QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    sub_1BCAA3C(v34, v35);
  *(_DWORD *)(v33 + 24) = questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  *(_QWORD *)(v33 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)Master_object, v37, v38, v39, v40, v41, v42);
  v44 = (int)QuestGroupType_Type_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v43);
  v70.fields.value = v44;
  TypeFromHandle = System_Type__GetTypeFromHandle(v70, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v45);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_2F20EF4 *)Method_System_Linq_Enumerable_Cast_QuestGroupType_Type___);
  v52 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int___TypeInfo,
                                       v49,
                                       v50,
                                       v51);
  System_Func_Int32Enum__ValueTuple_Int32Enum__int_____ctor(
    v52,
    (Il2CppObject *)v33,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass2_0__GetQuestGroupIds_b__0__,
    0LL);
  v53 = System_Linq_Enumerable__Select_Int32Enum__ValueTuple_Int32Enum__int__(
          v48,
          (System_Func_TSource__TResult__o *)v52,
          (const MethodInfo_2F41C78 *)Method_System_Linq_Enumerable_Select_QuestGroupType_Type__ValueTuple_QuestGroupType_Type__int____);
  v57 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
  if ( !QuestAutoOrganizationAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAutoOrganizationAdjustMaster___c_TypeInfo, v54);
    v57 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_T__TResult__o *)v57->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57, v54);
      v57 = QuestAutoOrganizationAdjustMaster___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__2_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_ValueTuple_QuestGroupType_Type__int___bool__TypeInfo,
                                             v54,
                                             v55,
                                             v56);
    System_Func_ValueTuple_Int32Enum__int___bool____ctor(
      _9__2_1,
      v60,
      Method_QuestAutoOrganizationAdjustMaster___c__GetQuestGroupIds_b__2_1__,
      0LL);
    static_fields = QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_1 = (struct System_Func_ValueTuple_QuestGroupType_Type__int___bool__o *)_9__2_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_1, (int64_t)_9__2_1, v62, v63, v64, v65, v66, v67);
  }
  v68 = System_Linq_Enumerable__Where_ValueTuple_Int32Enum__int__(
          v58,
          (System_Func_TSource__bool__o *)_9__2_1,
          (const MethodInfo_2F50D44 *)Method_System_Linq_Enumerable_Where_ValueTuple_QuestGroupType_Type__int____);
  return (System_ValueTuple_QuestGroupType_Type__int__array *)System_Linq_Enumerable__ToArray_ValueTuple_Int32Enum__int__(
                                                                v68,
                                                                (const MethodInfo_2F4B650 *)Method_System_Linq_Enumerable_ToArray_ValueTuple_QuestGroupType_Type__int____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAutoOrganizationAdjustMaster__IsExistEntity(
        QuestAutoOrganizationAdjustMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x2
  System_ValueTuple_QuestGroupType_Type__int__array *QuestGroupIds; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Func_object__bool__o *v32; // x21

  if ( (byte_4B16632 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__, v11, v12);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo, v13, v14);
    byte_4B16632 = 1;
  }
  v15 = sub_1BCAA2C(
          QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_TypeInfo,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = questId;
  *(_DWORD *)(v15 + 20) = questPhase;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.list, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  QuestGroupIds = QuestAutoOrganizationAdjustMaster__GetQuestGroupIds(
                    (QuestAutoOrganizationAdjustMaster_o *)IsNullOrEmpty,
                    *(_DWORD *)(v15 + 16),
                    v19);
  *(_QWORD *)(v15 + 24) = QuestGroupIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)QuestGroupIds, v22, v23, v24, v25, v26, v27);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_QuestAutoOrganizationAdjustEntity___);
  v32 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_QuestAutoOrganizationAdjustEntity__bool__TypeInfo,
                                         v29,
                                         v30,
                                         v31);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v15,
    Method_QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0__IsExistEntity_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49415960(
           v28,
           (System_Func_TSource__bool__o *)v32,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_QuestAutoOrganizationAdjustEntity___);
}


void __fastcall QuestAutoOrganizationAdjustMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16636 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster___c_TypeInfo, v1, v2);
    byte_4B16636 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestAutoOrganizationAdjustMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields->__9 = (struct QuestAutoOrganizationAdjustMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestAutoOrganizationAdjustMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v6; // x2
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v15; // 0:x1.8

  v4 = this;
  if ( (byte_4B16637 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity, method);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5,
                                                                         v6);
    byte_4B16637 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
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
      (const MethodInfo_38F1320 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v15 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v15,
             (const MethodInfo_2F2AD84 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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
  __int64 v6; // x2
  int32_t questPhase; // w8
  int32_t questGroupType; // w1
  int32_t questGroupId; // w2
  System_Collections_Generic_IEnumerable_TSource__o *questGroupTuples; // x20
  System_ValueTuple_Int32Enum__int__o value; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_Int32Enum__int__o p_value; // 0:x0.8
  System_ValueTuple_Int32Enum__int__o v15; // 0:x1.8

  v4 = this;
  if ( (byte_4B16638 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____, entity, method);
    this = (QuestAutoOrganizationAdjustMaster___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                                         &Method_System_ValueTuple_QuestGroupType_Type__int___ctor__,
                                                                         v5,
                                                                         v6);
    byte_4B16638 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
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
      (const MethodInfo_38F1320 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
    v15 = value;
    return System_Linq_Enumerable__Contains_ValueTuple_Int32Enum__int__(
             questGroupTuples,
             v15,
             (const MethodInfo_2F2AD84 *)Method_System_Linq_Enumerable_Contains_ValueTuple_QuestGroupType_Type__int____);
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

  if ( (byte_4B16639 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_QuestGroupType_Type__int___ctor__, *(_QWORD *)&type, method);
    byte_4B16639 = 1;
  }
  questGroupMaster = this->fields.questGroupMaster;
  if ( !questGroupMaster )
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  GroupId = QuestGroupMaster__GetGroupId(questGroupMaster, this->fields.questId, type, v3);
  v10 = (System_ValueTuple_Int32Enum__int__o)&v9;
  v9 = 0LL;
  System_ValueTuple_Int32Enum__int____ctor(
    v10,
    type,
    GroupId,
    (const MethodInfo_38F1320 *)Method_System_ValueTuple_QuestGroupType_Type__int___ctor__);
  return v9;
}