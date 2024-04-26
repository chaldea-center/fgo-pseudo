void __fastcall CondType___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  CondType_c *v7; // x8
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x19
  struct CondType_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CondType_c *v17; // x8

  if ( (byte_4351578 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    byte_4351578 = 1;
  }
  CondType_TypeInfo->static_fields->EVENT_POINT_DEVIDER = 100;
  CondType_TypeInfo->static_fields->EVENT_RACE_DEVIDER = 100;
  v7 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->TARGET_PARAM_NUM = 2;
  static_fields = v7->static_fields;
  static_fields->uQuestMst = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->uQuestMst, 0LL, v1, v2, v3, v4, v5, v6);
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v10 = CondType_TypeInfo->static_fields;
  v10->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->cachedServantEquipIdStrDic,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->lastUserId = -1LL;
  v17->static_fields->RAID_DAMAGE_RATE_FRACTION = 1000LL;
}


void __fastcall CondType___ctor(CondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserQuestEntity_o *__fastcall CondType__CheckGroupMaterialQuest(
        UserQuestEntity_o *userQuestEntity,
        int32_t condQuestId,
        const MethodInfo *method)
{
  CondType___c__DisplayClass28_0_o *v5; // x19
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v9; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v12; // x22
  UserQuestEntity_o *v13; // x21
  UserQuestEntity_o *IncludedGroupQuest; // x22
  CondType___c_c *v15; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x24
  Il2CppObject *v18; // x25
  struct CondType___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarQuestSelectionMaster_o *v26; // x0
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v29; // x25
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x20

  if ( (byte_43514C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_All_UserQuestEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____69271400);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    sub_B70694(&Method_System_Func_UserQuestEntity__bool___ctor__);
    sub_B70694(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_B70694(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__);
    sub_B70694(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__);
    sub_B70694(&CondType___c__DisplayClass28_0_TypeInfo);
    sub_B70694(&CondType___c_TypeInfo);
    byte_43514C6 = 1;
  }
  v5 = (CondType___c__DisplayClass28_0_o *)sub_B70764(CondType___c__DisplayClass28_0_TypeInfo);
  CondType___c__DisplayClass28_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_38;
  v5->fields.condQuestId = condQuestId;
  if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  }
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0LL);
  if ( userQuestEntity )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v9 = Master_WarQuestSelectionMaster;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                         Master_WarQuestSelectionMaster,
                         v5->fields.condQuestId,
                         0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v9,
                                       IncludedGroups,
                                       0LL);
      v12 = QuestScriptMaterialNextMaster__GetIncludedGroups(v9, v5->fields.condQuestId, 0LL);
      v13 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_1CBC6C4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      }
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v12, 0LL);
      v15 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v15 = CondType___c_TypeInfo;
      }
      static_fields = v15->static_fields;
      _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v18 = (Il2CppObject *)static_fields->__9;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_1,
          v18,
          Method_CondType___c__CheckGroupMaterialQuest_b__28_1__,
          (const MethodInfo_29AC578 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v19 = CondType___c_TypeInfo->static_fields;
        v19->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v19->__9__28_1,
          (System_Int32_array **)_9__28_1,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
      if ( !System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_1CA7D8C *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v13 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                 v9,
                 v5->fields.condQuestId,
                 v13,
                 IncludedGroupQuest,
                 0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v26 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v13->fields.questId;
      questPhase = v13->fields.questPhase;
      v29 = (UserQuestMaster_o *)v26;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0LL);
      if ( v29 )
      {
        Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                                              v29,
                                                                              questId,
                                                                              questPhase,
                                                                              (int64_t)Master_WarQuestSelectionMaster,
                                                                              0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v13->fields.updatedAt;
          v13 = (UserQuestEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster[1].klass = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                   v9,
                   v5->fields.condQuestId,
                   v13,
                   IncludedGroupQuest,
                   0LL);
        }
      }
    }
LABEL_38:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v33,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_UserQuestEntity__bool___ctor__);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                v32,
                                (System_Func_TSource__bool__o *)v33,
                                (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____69271400);
}


int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v8; // x21
  int32_t v9; // w22
  unsigned int v10; // w24
  UserServantCollectionMaster_c **v11; // x8
  UserServantCollectionEntity_o *v12; // x23
  int v13; // w8
  unsigned int v14; // w9
  __int64 v16; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435155F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435155F = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionMaster__getCollectionList(
                                                                            Master_WarQuestSelectionMaster,
                                                                            &findSum[1],
                                                                            findSum,
                                                                            0,
                                                                            0,
                                                                            0LL)) == 0LL )
  {
LABEL_28:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v8 = Master_WarQuestSelectionMaster;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_27;
      v11 = &v8->klass + (int)v10;
      v12 = (UserServantCollectionEntity_o *)v11[4];
      if ( !v12 )
        goto LABEL_28;
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                          (UserServantCollectionEntity_o *)v11[4],
                                                                          0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(
                                                                            v12,
                                                                            0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_28;
        v13 = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
        if ( v13 >= 1 )
          break;
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v8->fields._MasterName_k__BackingField;
      if ( (int)++v10 >= (int)MasterName_k__BackingField )
        return v9;
    }
    v14 = 0;
    while ( v14 < v13 )
    {
      if ( *((_DWORD *)&Master_WarQuestSelectionMaster->fields.list + (int)v14) >= skillLv )
        ++v9;
      if ( targetNum && v9 >= targetNum )
        return v9;
      if ( (int)++v14 >= v13 )
        goto LABEL_23;
    }
LABEL_27:
    v16 = sub_B70798(Master_WarQuestSelectionMaster);
    sub_B70738(v16, 0LL);
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass195_0_o *v3; // x20
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v8; // x21
  CondType___c_c *v9; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__195_1; // x20
  Il2CppObject *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CondType___c_StaticFields *v19; // x0
  BattleServantConfConponent_o *p__9__195_1; // x0
  CondType___c_c *v21; // x0
  struct CondType___c_StaticFields *v22; // x8
  Il2CppObject *v23; // x21
  struct CondType___c_StaticFields *v24; // x0

  if ( (byte_4351566 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    sub_B70694(&Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
    sub_B70694(&Method_System_Func_UserClassBoardSquareEntity__bool___ctor__);
    sub_B70694(&System_Func_UserClassBoardSquareEntity__int__TypeInfo);
    sub_B70694(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_B70694(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__);
    sub_B70694(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__);
    sub_B70694(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__);
    sub_B70694(&CondType___c__DisplayClass195_0_TypeInfo);
    sub_B70694(&CondType___c_TypeInfo);
    byte_4351566 = 1;
  }
  v3 = (CondType___c__DisplayClass195_0_o *)sub_B70764(CondType___c__DisplayClass195_0_TypeInfo);
  CondType___c__DisplayClass195_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_27;
  v3->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           Master_WarQuestSelectionMaster,
                                                                                           (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              Entitys_WarQuestSelectionEntity,
                                                              (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v3->fields.targetId )
  {
    v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      (const MethodInfo_29AC578 *)Method_System_Func_UserClassBoardSquareEntity__bool___ctor__);
    v7 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v9 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v9 = CondType___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v12,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        (const MethodInfo_29AD124 *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v19 = CondType___c_TypeInfo->static_fields;
      v19->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v19->__9__195_1;
LABEL_25:
      sub_B70630(p__9__195_1, (System_Int32_array **)_9__195_1, v13, v14, v15, v16, v17, v18);
    }
  }
  else
  {
    v21 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v21 = CondType___c_TypeInfo;
    }
    v22 = v21->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v22->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v22 = CondType___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)v22->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v23,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        (const MethodInfo_29AD124 *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v24 = CondType___c_TypeInfo->static_fields;
      v24->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v24->__9__195_2;
      goto LABEL_25;
    }
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           v7,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_1CC7BBC *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t __fastcall CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *v7; // x21
  int MasterName_k__BackingField; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x23
  int32_t v10; // w22
  int v11; // w8
  UserServantCollectionMaster_c **v12; // x8
  UserServantCollectionMaster_c *v13; // x24
  void *data; // x25
  const char *namespaze; // x26
  __int64 v17; // x0
  WarEntity_o *v18; // [xsp+8h] [xbp-68h] BYREF
  __int64 findSum; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4351563 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int__Invoke__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4351563 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         classId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_35;
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionMaster__getCollectionList(
                                                                        Master_WarQuestSelectionMaster,
                                                                        (int32_t *)&findSum + 1,
                                                                        (int32_t *)&findSum,
                                                                        0,
                                                                        0,
                                                                        0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_35;
    v7 = Master_WarQuestSelectionMaster;
    if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      MasterName_k__BackingField = (int)v7->fields._MasterName_k__BackingField;
      if ( MasterName_k__BackingField >= 1 )
      {
        v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)MasterName_k__BackingField )
          {
            v17 = sub_B70798(Master_WarQuestSelectionMaster);
            sub_B70738(v17, 0LL);
          }
          v12 = &v7->klass + v11;
          v13 = v12[4];
          if ( !v13 )
            break;
          Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                              (UserServantCollectionEntity_o *)v12[4],
                                                                              0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            namespaze = v13->_1.namespaze;
            data = v13->_1.byval_arg.data;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v21.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v21.fields.fakeValue = data;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                v21,
                                                                                0LL);
            if ( !v9 )
              break;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                v9,
                                                                                &v18,
                                                                                (int32_t)Master_WarQuestSelectionMaster,
                                                                                (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !v18 )
                break;
              if ( v18->fields.startType == classId )
              {
                if ( !countFunc )
                  break;
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)System_Func_UserServantCollectionEntity__int___Invoke(
                                                                                    countFunc,
                                                                                    (UserServantCollectionEntity_o *)v13,
                                                                                    (const MethodInfo_29AD138 *)Method_System_Func_UserServantCollectionEntity__int__Invoke__);
                v10 += (int)Master_WarQuestSelectionMaster;
              }
            }
          }
          v11 = findSum + 1;
          LODWORD(findSum) = v11;
          MasterName_k__BackingField = (int)v7->fields._MasterName_k__BackingField;
          if ( v11 >= MasterName_k__BackingField )
            return v10;
        }
LABEL_35:
        sub_B7076C(Master_WarQuestSelectionMaster, v6);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  CondType_c *v3; // x0
  int64_t lastUserId; // x22
  __int64 v5; // x1
  CondType_c *v6; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *cachedServantEquipIdStrDic; // x0
  UserServantCollectionMaster_o *v8; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ServantEquipCollectionList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  ServantLimitMaster_o *v11; // x21
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v15; // x0
  WarEntity_o *v16; // x23
  struct System_String_o *age; // x24
  __int64 v18; // x25
  __int64 v19; // x0
  ServantLimitEntity_o *v20; // x24
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // [xsp+0h] [xbp-A0h]
  int32_t v28; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_435154D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435154D = 1;
  }
  entity = 0LL;
  memset(&v31, 0, sizeof(v31));
  v3 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v3 = CondType_TypeInfo;
  }
  lastUserId = v3->static_fields->lastUserId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( lastUserId != NetworkManager__get_UserId(0LL) )
  {
    v6 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v6->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_55:
      sub_B7076C(cachedServantEquipIdStrDic, v5);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      cachedServantEquipIdStrDic,
      (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v8 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v8 )
    goto LABEL_55;
  ServantEquipCollectionList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserServantCollectionMaster__getServantEquipCollectionList(v8, CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic, 0LL);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)cachedServantEquipIdStrDic,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  v11 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)cachedServantEquipIdStrDic,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_55;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)cachedServantEquipIdStrDic;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    ServantEquipCollectionList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v28 = 0;
  v31 = v29;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B7076C(v24, v25);
    if ( LODWORD(v31.fields.current[2].monitor) == 2 )
    {
      monitor = v31.fields.current[1].monitor;
      klass = v31.fields.current[2].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v32.fields.fakeValue = klass;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v32, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(v15, (unsigned int)v15);
      v16 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              MasterData_WarQuestSelectionMaster,
              v15,
              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v16 )
      {
        v18 = *(_QWORD *)&v16->fields.id;
        age = v16->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v18;
        *(_QWORD *)&v33.fields.fakeValue = age;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v33, 0LL);
        if ( !v11 )
          sub_B7076C(v19, (unsigned int)v19);
        v20 = ServantLimitMaster__GetEntity(v11, v19, 0, 0LL);
        if ( v20
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v16, 0LL)
          && v20->fields.rarity == targetId % 100
          && SHIDWORD(current[2].monitor) >= targetId / 100 )
        {
          if ( !v27 )
            sub_B7076C(0LL, v21);
          v22 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v27,
                  &entity,
                  (int32_t)v16[1].monitor,
                  (const MethodInfo_21C049C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v22 )
            goto LABEL_48;
          if ( !entity )
            sub_B7076C(v22, v23);
          if ( *(&entity->fields.id + 1) != 3 )
LABEL_48:
            ++v28;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v28;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435156A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435156A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  UserEventRandomMissionMaster_o *v6; // x20
  int32_t v7; // w21
  unsigned __int64 v8; // x22
  __int64 v10; // x0

  if ( (byte_4351557 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4351557 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_18;
  v5 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = Master_WarQuestSelectionMaster;
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
      {
        v10 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v10, 0LL);
      }
      if ( !v6 )
        break;
      Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                                           v6,
                                                                           missionIds->m_Items[v8 + 1],
                                                                           0LL);
      if ( Master_WarQuestSelectionMaster )
        v7 += HIDWORD(Master_WarQuestSelectionMaster->fields.list);
      LODWORD(v5) = missionIds->max_length;
      if ( (__int64)++v8 >= (int)v5 )
        return v7;
    }
LABEL_18:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4351547 & 1) == 0 )
  {
    sub_B70694(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4351547 = 1;
  }
  v3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435154A & 1) == 0 )
  {
    sub_B70694(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_435154A = 1;
  }
  v3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4351545 & 1) == 0 )
  {
    sub_B70694(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4351545 = 1;
  }
  v3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4351561 & 1) == 0 )
  {
    sub_B70694(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4351561 = 1;
  }
  v3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass158_0_o *v3; // x21
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4351546 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_B70694(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__);
    sub_B70694(&CondType___c__DisplayClass158_0_TypeInfo);
    byte_4351546 = 1;
  }
  v3 = (CondType___c__DisplayClass158_0_o *)sub_B70764(CondType___c__DisplayClass158_0_TypeInfo);
  CondType___c__DisplayClass158_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v6 = targetId / 100;
  v3->fields.friendShipRank = targetId % 100;
  v7 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v7, v8);
}


int32_t __fastcall CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x21
  int datalist; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x23
  __int64 v10; // x26
  int32_t v11; // w22
  __int64 v12; // x24
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v16; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4351549 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351549 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         classId,
         (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)UserServantCollectionMaster__getCollectionList(
                                  (UserServantCollectionMaster_o *)Instance,
                                  &findSum[1],
                                  findSum,
                                  0,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_28;
    v7 = Instance;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      datalist = (int)v7->fields.datalist;
      if ( datalist >= 1 )
      {
        v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v10 = 0LL;
        v11 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= datalist )
          {
            v16 = sub_B70798(Instance);
            sub_B70738(v16, 0LL);
          }
          v12 = *((_QWORD *)&v7->fields.lookup + v10);
          if ( !v12 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(
                                        *((UserServantCollectionEntity_o **)&v7->fields.lookup + v10),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && *(_DWORD *)(v12 + 44) >= level )
          {
            v14 = *(_QWORD *)(v12 + 24);
            v13 = *(_QWORD *)(v12 + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v18.fields.currentCryptoKey = v14;
            *(_QWORD *)&v18.fields.fakeValue = v13;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL);
            if ( !v9 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v9,
                                          (int32_t)Instance,
                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == classId )
              ++v11;
          }
          datalist = (int)v7->fields.datalist;
          if ( (int)++v10 >= datalist )
            return v11;
        }
LABEL_28:
        sub_B7076C(Instance, v6);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataManager_o *v8; // x20

  if ( (byte_435154B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435154B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                      MasterData_WarQuestSelectionMaster,
                                      (int64_t)Instance,
                                      sarvantId,
                                      0LL)) == 0LL )
  {
LABEL_12:
    sub_B7076C(Instance, v6);
  }
  v8 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v8->fields.masterDataBytes) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v7; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x22
  __int64 v9; // x26
  int32_t v10; // w23
  int v11; // w28
  UserServantCollectionEntity_o *v12; // x20
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v16; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4351544 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351544 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  v5 = targetId / 100;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         targetId / 100,
         (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_28;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_28;
    v7 = *(_QWORD *)&CollectionList->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v9 = 0LL;
        v10 = 0;
        v11 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= (unsigned int)v7 )
          {
            v16 = sub_B70798(Instance);
            sub_B70738(v16, 0LL);
          }
          v12 = CollectionList->m_Items[v9];
          if ( !v12 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v9], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v18.fields.currentCryptoKey = v14;
            *(_QWORD *)&v18.fields.fakeValue = v13;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL);
            if ( !v8 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v8,
                                          (int32_t)Instance,
                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == v5 && v12->fields.maxLimitCount >= v11 )
              ++v10;
          }
          LODWORD(v7) = CollectionList->max_length;
          if ( (int)++v9 >= (int)v7 )
            return v10;
        }
LABEL_28:
        sub_B7076C(Instance, v4);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass189_0_o *v3; // x21
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4351560 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Func_UserServantCollectionEntity__int___ctor__);
    sub_B70694(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_B70694(&Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__);
    sub_B70694(&CondType___c__DisplayClass189_0_TypeInfo);
    byte_4351560 = 1;
  }
  v3 = (CondType___c__DisplayClass189_0_o *)sub_B70764(CondType___c__DisplayClass189_0_TypeInfo);
  CondType___c__DisplayClass189_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v6 = targetId / 100;
  v3->fields.skillLv = targetId % 100;
  v7 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    (const MethodInfo_29AD124 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v7, v8);
}


int32_t __fastcall CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  CondType_c *v5; // x8
  int32_t v6; // w21
  int v7; // w23
  int32_t TARGET_PARAM_NUM; // w9
  __int64 v10; // x0

  v4 = targetParam;
  if ( (byte_4351548 & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_B70694(&CondType_TypeInfo);
    byte_4351548 = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  v5 = *(CondType_c **)&v4->max_length;
  if ( !v5 )
    return 0;
  targetParam = (System_Int32_array *)CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    targetParam = (System_Int32_array *)CondType_TypeInfo;
    v5 = *(CondType_c **)&v4->max_length;
  }
  v6 = 0;
  if ( (int)v5 % *(_DWORD *)(*(_QWORD *)&targetParam->m_Items[39] + 8LL) != 1 && (int)v5 >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 || v7 + 1 >= (unsigned int)v5 )
      {
        v10 = sub_B70798(targetParam);
        sub_B70738(v10, 0LL);
      }
      if ( !func )
        break;
      targetParam = (System_Int32_array *)CondType_CountDelegate__Invoke(
                                            func,
                                            v4->m_Items[v7 + 1],
                                            v4->m_Items[v7 + 2],
                                            0LL);
      v5 = CondType_TypeInfo;
      v6 += (int)targetParam;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v5 = CondType_TypeInfo;
      }
      TARGET_PARAM_NUM = v5->static_fields->TARGET_PARAM_NUM;
      LODWORD(v5) = v4->max_length;
      v7 += TARGET_PARAM_NUM;
      if ( v7 >= (int)v5 )
        return v6;
    }
LABEL_22:
    sub_B7076C(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  int v5; // w9
  int v6; // w10
  int32_t v7; // w8
  __int64 v8; // x11
  __int64 v10; // x0

  if ( (byte_435153E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435153E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_27939048((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    v5 = *((_DWORD *)Instance + 6);
    if ( v5 >= 1 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        if ( v6 >= (unsigned int)v5 )
        {
          v10 = sub_B70798(Instance);
          sub_B70738(v10, 0LL);
        }
        v8 = *((_QWORD *)Instance + v6 + 4);
        if ( !v8 )
          break;
        ++v6;
        if ( *(_DWORD *)(v8 + 28) == tokenId )
          ++v7;
        if ( v6 >= v5 )
          return v7;
      }
LABEL_19:
      sub_B7076C(Instance, v4);
    }
    return 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_19;
    return *((_DWORD *)Instance + 6);
  }
}


int64_t __fastcall CondType__GetEventTotalPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_435152C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           MasterData_WarQuestSelectionMaster,
           (int64_t)Instance,
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435156E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435156E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4351568 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351568 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435156C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435156C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemEntity_o *v7; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514BD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B70694(&SingletonTemplate_BattleItemData__TypeInfo);
    byte_43514BD = 1;
  }
  v7 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               targetId,
               (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( entity->fields.bannerId == 35 )
    {
      if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_23:
      sub_B7076C(Instance, v4);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v7, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v7 )
    goto LABEL_23;
  return v7->fields.num;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21
  __int64 v12; // x0

  if ( (byte_43514F5 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F5 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v6,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B7076C(Instance, v5);
    }
    datalist = Instance->fields.datalist;
    v8 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)datalist )
      {
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      v11 = *((_DWORD *)&v8->fields.lookup + v10);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionClear(v11, v5);
      LODWORD(datalist) = v8->fields.datalist;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)datalist );
    return v9;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21
  __int64 v12; // x0

  if ( (byte_43514F6 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F6 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v6,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B7076C(Instance, v5);
    }
    datalist = Instance->fields.datalist;
    v8 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)datalist )
      {
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      v11 = *((_DWORD *)&v8->fields.lookup + v10);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionAchive(v11, v5);
      LODWORD(datalist) = v8->fields.datalist;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)datalist );
    return v9;
  }
}


int32_t __fastcall CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  int v2; // w8

  if ( cond > 8 )
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_32EAB40[v2];
  }
  else if ( cond == 1 )
  {
    return 36;
  }
  else if ( cond == 8 )
  {
    return 38;
  }
  return cond;
}


int32_t __fastcall CondType__GetNotQuestGoupClearCount(
        int32_t questId,
        int32_t groupId,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserQuestMaster_o *v12; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x3
  System_Int32_array *v21; // x24
  __int64 v22; // x8
  int32_t v23; // w21
  unsigned __int64 v24; // x25
  bool v25; // w22
  int32_t v26; // w23
  __int64 v28; // x0

  if ( (byte_43514FF & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514FF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v12 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_B70630(
          (BattleServantConfConponent_o *)sameGroupQuestIds,
          (System_Int32_array **)QuestIdListByGroupId,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (v21 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_28:
    sub_B7076C(Instance, v10);
  }
  v22 = *(_QWORD *)&v21->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0;
    v24 = 0LL;
    v25 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
      {
        v28 = sub_B70798(Instance);
        sub_B70738(v28, 0LL);
      }
      v26 = v21->m_Items[v24 + 1];
      if ( v26 != questId )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsQuestClear_24296868(v26, -1, v25, v20);
        if ( (Instance & 1) != 0 )
        {
          ++v23;
        }
        else
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v12 )
            goto LABEL_28;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v12, Instance, v26, 0LL);
          if ( Instance )
          {
            Instance = UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
              ++v23;
          }
        }
      }
      LODWORD(v22) = v21->max_length;
      if ( (__int64)++v24 >= (int)v22 )
        return v23;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4351503 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351503 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) >= condVal;
}


int32_t __fastcall CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514F3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Instance = UserEventMissionCondDetailMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               condId,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_14:
    sub_B7076C(Instance, v6);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  if ( (byte_4351502 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351502 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CondType__GetProgressNum(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t eventId,
        const MethodInfo *method)
{
  CondType_c *v9; // x0
  struct CondType_StaticFields **p_static_fields; // x9
  int64_t v11; // x8
  int32_t Num; // w0
  bool v15; // w0
  const MethodInfo *v16; // x4
  CondType_c *v17; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43514C4 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514C4 = 1;
  }
  sameGroupQuestIds = 0LL;
  v9 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v9 = CondType_TypeInfo;
  }
  p_static_fields = &v9->static_fields;
  v9->static_fields->EventId = eventId;
  if ( condType <= 71 )
  {
    if ( condType > 46 )
    {
      if ( condType == 67 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 71 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
      }
      return 0LL;
    }
    v11 = 1LL;
    switch ( condType )
    {
      case 0:
        return v11;
      case 1:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetOpenTime((const MethodInfo *)v9);
      case 22:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        v15 = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
LABEL_162:
        v11 = v15;
        break;
      case 29:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
      case 30:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          p_static_fields = &CondType_TypeInfo->static_fields;
        }
        return CondType__GetSuperBossDamage(
                 targetId,
                 condValue,
                 (*p_static_fields)->EventId,
                 *(const MethodInfo **)&eventId);
      case 34:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
      case 35:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
      case 40:
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__get_UserId(0LL);
        v17 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__GetQuestClearPhaseCount((int64_t)v17, targetId, -1, 0, v16);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType > 95 )
    {
      v11 = 0LL;
      switch ( condType )
      {
        case 174:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v11;
        case 178:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          switch ( condType )
          {
            case 136:
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v11;
            case 139:
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              v15 = CondType__TimeLimitRaidDead(eventId, targetId, (const MethodInfo *)condValue);
              goto LABEL_162;
            case 141:
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v9);
            default:
              if ( condType != 127 )
                return v11;
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              Num = CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return Num;
      }
      return v11;
    }
    if ( condType != 85 )
    {
      if ( condType == 93 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 95 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v9);
      }
      return 0LL;
    }
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    return CondType__GetEventTotalPoint(eventId, *(const MethodInfo **)&targetId);
  }
  return v11;
}


int64_t __fastcall CondType__GetProgressNumByTargetIds(
        int32_t condType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  int64_t result; // x0
  CondType___c_c *v6; // x0
  struct CondType___c_StaticFields *v7; // x8
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CondType___c_StaticFields *v16; // x0
  BattleServantConfConponent_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v18; // x0
  __int64 *v19; // x8
  CondType___c_c *v20; // x0
  struct CondType___c_StaticFields *v21; // x8
  Il2CppObject *v22; // x21
  struct CondType___c_StaticFields *v23; // x0
  CondType_CountDelegate_o *v24; // x20
  const MethodInfo *v25; // x2
  CondType___c_c *v26; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  Il2CppObject *v28; // x21
  struct CondType___c_StaticFields *v29; // x0

  if ( (byte_43514C5 & 1) == 0 )
  {
    sub_B70694(&Method_CondType_CountServantLevelClassNum__);
    sub_B70694(&Method_CondType_CountServantLevelIdNum__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&CondType_CountDelegate_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Aggregate_int__int___);
    sub_B70694(&Method_System_Func_int__int__int___ctor__);
    sub_B70694(&System_Func_int__int__int__TypeInfo);
    sub_B70694(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__);
    sub_B70694(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__);
    sub_B70694(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__);
    sub_B70694(&CondType___c_TypeInfo);
    byte_43514C5 = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v26 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v26 = CondType___c_TypeInfo;
        }
        static_fields = v26->static_fields;
        _9__26_1 = static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B70764(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v28,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_1__,
          (const MethodInfo_29B56A0 *)Method_System_Func_int__int__int___ctor__);
        v29 = CondType___c_TypeInfo->static_fields;
        v29->__9__26_1 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v29->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v20 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v20 = CondType___c_TypeInfo;
        }
        v21 = v20->static_fields;
        _9__26_1 = v21->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v21 = CondType___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)v21->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B70764(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v22,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_2__,
          (const MethodInfo_29B56A0 *)Method_System_Func_int__int__int___ctor__);
        v23 = CondType___c_TypeInfo->static_fields;
        v23->__9__26_2 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v23->__9__26_2;
      }
    }
    else
    {
      if ( condType == 158 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        LODWORD(result) = CondType__CountRandomMissionClearNum(targetIds, (const MethodInfo *)targetIds);
        return (int)result;
      }
      if ( condType != 188 )
        return result;
      v6 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v6 = CondType___c_TypeInfo;
      }
      v7 = v6->static_fields;
      _9__26_1 = v7->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_47;
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v7 = CondType___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)v7->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_B70764(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(
        _9__26_1,
        v9,
        Method_CondType___c__GetProgressNumByTargetIds_b__26_0__,
        (const MethodInfo_29B56A0 *)Method_System_Func_int__int__int___ctor__);
      v16 = CondType___c_TypeInfo->static_fields;
      v16->__9__26_0 = _9__26_1;
      p__9__26_1 = (BattleServantConfConponent_o *)&v16->__9__26_0;
    }
    sub_B70630(p__9__26_1, (System_Int32_array **)_9__26_1, v10, v11, v12, v13, v14, v15);
LABEL_47:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_1CA6A6C *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v18 = (CondType_CountDelegate_o *)sub_B70764(CondType_CountDelegate_TypeInfo);
    v19 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v18 = (CondType_CountDelegate_o *)sub_B70764(CondType_CountDelegate_TypeInfo);
    v19 = &Method_CondType_CountServantLevelIdNum__;
  }
  v24 = v18;
  CondType_CountDelegate___ctor(v18, 0LL, *v19, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v24, v25);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514ED & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514ED = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserShopMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_13:
    sub_B7076C(Instance, v4);
  }
  return 0;
}


int32_t __fastcall CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w24
  QuestGroupMaster_o *v11; // x20
  __int64 v12; // x8
  int64_t v13; // x20
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v18; // x0

  if ( (byte_4351505 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351505 = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v11 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v11,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v12 = *(_QWORD *)(Instance + 24);
          v13 = Instance;
          if ( (int)v12 < 1 )
            goto LABEL_31;
          challengeNum = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)v12 )
            {
              v18 = sub_B70798(Instance);
              sub_B70738(v18, 0LL);
            }
            v15 = *(_DWORD *)(v13 + 32 + 4 * v14);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v15, 0LL);
            if ( Instance )
              challengeNum += *(_DWORD *)(Instance + 56);
            LODWORD(v12) = *(_DWORD *)(v13 + 24);
            if ( (__int64)++v14 >= (int)v12 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B7076C(Instance, v8);
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_35;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, Instance, condId, 0LL);
  if ( EntityFromId )
  {
    challengeNum = EntityFromId->fields.challengeNum;
    goto LABEL_32;
  }
LABEL_31:
  challengeNum = 0;
LABEL_32:
  if ( challengeNum >= condVal )
    return condVal;
  else
    return challengeNum;
}


int32_t __fastcall CondType__GetQuestClearCount(int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  int64_t Instance; // x0
  __int64 v6; // x1
  QuestGroupMaster_o *v7; // x19
  __int64 v8; // x8
  int64_t v9; // x19
  unsigned __int64 v10; // x25
  int32_t v11; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v13; // x3
  __int64 v15; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43514F4 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F4 = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v7 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v7 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v7,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v8 = *(_QWORD *)(Instance + 24);
          v9 = Instance;
          if ( (int)v8 < 1 )
            return 0;
          v4 = 0;
          v10 = 0LL;
          while ( 1 )
          {
            if ( v10 >= (unsigned int)v8 )
            {
              v15 = sub_B70798(Instance);
              sub_B70738(v15, 0LL);
            }
            v11 = *(_DWORD *)(v9 + 32 + 4 * v10);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v11, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              Instance = CondType__IsQuestClear_24296868(v11, -1, 0, v13);
              v4 += Instance & 1;
            }
            LODWORD(v8) = *(_DWORD *)(v9 + 24);
            if ( (__int64)++v10 >= (int)v8 )
              return v4;
          }
        }
      }
    }
    sub_B7076C(Instance, v6);
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(targetId, -1, 0, v2);
}


int32_t __fastcall CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w20
  QuestGroupMaster_o *v11; // x20
  __int64 v12; // x8
  int64_t v13; // x21
  unsigned __int64 v14; // x25
  int32_t v15; // w22
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v18; // x0

  if ( (byte_43514FC & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514FC = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v11 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v11,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v12 = *(_QWORD *)(Instance + 24);
          v13 = Instance;
          if ( (int)v12 < 1 )
            goto LABEL_31;
          ClearNum = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)v12 )
            {
              v18 = sub_B70798(Instance);
              sub_B70738(v18, 0LL);
            }
            v15 = *(_DWORD *)(v13 + 32 + 4 * v14);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v15, 0LL);
            if ( Instance )
            {
              Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += Instance;
            }
            LODWORD(v12) = *(_DWORD *)(v13 + 24);
            if ( (__int64)++v14 >= (int)v12 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B7076C(Instance, v8);
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_35;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, Instance, condId, 0LL);
  if ( EntityFromId )
  {
    ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0LL);
    goto LABEL_32;
  }
LABEL_31:
  ClearNum = 0;
LABEL_32:
  if ( ClearNum >= condVal )
    return condVal;
  else
    return ClearNum;
}


int32_t __fastcall CondType__GetQuestClearPhaseCount(
        int64_t userId,
        int32_t targetId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  int64_t v10; // x0
  __int64 v11; // x1
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43514CC & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514CC = 1;
  }
  entity = 0LL;
  v8 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v10 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_19;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, v10, targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    v10 = (int64_t)entity;
    if ( !entity )
      goto LABEL_19;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  v10 = (int64_t)entity;
  if ( !entity )
LABEL_19:
    sub_B7076C(v10, v11);
  result = UserQuestEntity__getQuestPhase(entity, 0LL);
  if ( beforeClearQuestId >= 1 )
    result -= targetId == beforeClearQuestId;
  return result;
}


int32_t __fastcall CondType__GetQuestGroupClearCount(
        int32_t questId,
        int32_t groupId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x20
  int32_t v12; // w22
  unsigned __int64 v13; // x24
  bool v14; // w21
  int32_t v15; // w23
  __int64 v17; // x0

  if ( (byte_4351501 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351501 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v12 = 0;
  v13 = 0LL;
  v14 = isCheckResetFlag;
  do
  {
    if ( v13 >= (unsigned int)datalist )
    {
      v17 = sub_B70798(Instance);
      sub_B70738(v17, 0LL);
    }
    v15 = *((_DWORD *)&v11->fields.lookup + v13);
    if ( v15 != questId )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsQuestClear_24296868(v15, -1, v14, v9);
      v12 += (unsigned __int8)Instance & 1;
    }
    LODWORD(datalist) = v11->fields.datalist;
    ++v13;
  }
  while ( (__int64)v13 < (int)datalist );
  return v12;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v8; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4351504 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351504 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v8 = (int64_t)Instance;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
    sub_B7076C(Instance, v6);
  Entity = UserEventRaidMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             v8,
             CondType_TypeInfo->static_fields->EventId,
             condId,
             0LL);
  if ( Entity )
    damage = Entity->fields.damage;
  else
    damage = 0LL;
  if ( damage >= condVal )
    return condVal;
  else
    return damage;
}


int32_t __fastcall CondType__GetRaidGroupDeadCount(int32_t targetId, int64_t condValue, const MethodInfo *method)
{
  int32_t v3; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v9; // x21
  unsigned int v10; // w23
  int32_t v11; // w22
  EventRaidEntity_o *v12; // x24
  __int64 v14; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_43514BC & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514BC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v9 = (TotalEventRaidMaster_o *)Instance;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v14 = sub_B70798(Instance);
        sub_B70738(v14, 0LL);
      }
      v12 = EventRaidEntityArray->m_Items[v10];
      if ( !v12 || !v9 )
        break;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v9, &entity, targetId, v12->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v12->fields.maxHp )
          ++v11;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v10 >= max_length )
        return v11;
    }
LABEL_20:
    sub_B7076C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4351556 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4351556 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t __fastcall CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43514DC & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435152B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  __int64 v9; // x22
  int32_t v10; // w20
  ShopGroupEntity_o *v11; // x8
  __int64 v13; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351524 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351524 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v9 = 0LL;
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
          {
            v13 = sub_B70798(Instance);
            sub_B70738(v13, 0LL);
          }
          v11 = v6->m_Items[v9];
          if ( !v11 || !v8 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v8,
                                        &entity,
                                        v11->fields.shopId,
                                        (const MethodInfo_21C049C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)entity;
            if ( !entity )
              break;
            Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                break;
              Instance = (DataManager_o *)ShopEntity__IsSoldOut((ShopEntity_o *)entity, 0LL);
              v10 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v6->max_length;
          if ( (int)++v9 >= max_length )
            return v10;
        }
LABEL_22:
        sub_B7076C(Instance, v4);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CondType__GetSuperBossDamage(
        int32_t condId,
        int64_t condVal,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4351506 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4351506 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetSuperBossDamageValue(eventId, condId, *(const MethodInfo **)&eventId);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t __fastcall CondType__GetSuperBossDamageAll(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v8; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4351508 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351508 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    v8 = (int64_t)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v8,
                 CondType_TypeInfo->static_fields->EventId,
                 condId,
                 0LL);
      if ( Entity )
        damage = Entity->fields.damage;
      else
        damage = 0LL;
      if ( damage >= condVal )
        return condVal;
      else
        return damage;
    }
LABEL_25:
    sub_B7076C(Instance, v6);
  }
  Instance = (DataManager_o *)CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  result = UserSuperBossMaster__getTotalDamagePoint(
             MasterData_WarQuestSelectionMaster,
             CondType_TypeInfo->static_fields->EventId,
             0LL);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t __fastcall CondType__GetSuperBossDamageValue(int32_t eventId, int32_t bossId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351507 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351507 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B7076C(Instance, v6);
  UserSuperBossMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int64_t)Instance,
    eventId,
    bossId,
    0LL);
  if ( entity )
    return entity->fields.damage;
  else
    return 0LL;
}


int32_t __fastcall CondType__GetSvtEquipFriendShip(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_435152E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL);
}


int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_43514FA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514FA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B7076C(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v10 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v10;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_43514F7 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514F7 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


int32_t __fastcall CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_43514F8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLimitCount >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtLv(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_43514F9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B7076C(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLv >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  }
  return (int)EntityDefinitely;
}


UserQuestMaster_o *__fastcall CondType__GetUserQuestMaster(const MethodInfo *method)
{
  CondType_c *v1; // x0
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  CondType_c *v11; // x8
  System_Int32_array **v12; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_43514B4 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514B4 = 1;
  }
  v1 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v3);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v11 = CondType_TypeInfo;
    v12 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v11 = CondType_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v12;
    sub_B70630((BattleServantConfConponent_o *)&static_fields->uQuestMst, v12, v5, v6, v7, v8, v9, v10);
    v1 = CondType_TypeInfo;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = CondType_TypeInfo;
  }
  return v1->static_fields->uQuestMst;
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4351536 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351536 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4351526 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351526 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) >= time;
}


bool __fastcall CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4351573 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4351573 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v3 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v3, 0LL);
}


bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v12; // x22
  unsigned __int64 v13; // x24
  int32_t v14; // w25
  int32_t v15; // w21
  int32_t v16; // w23
  __int64 v18; // x0

  if ( (byte_4351541 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351541 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                15,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v9 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v9->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v12 = MasterData_WarQuestSelectionMaster;
      v13 = 0LL;
      v14 = 0;
      if ( isWin )
        v15 = 128;
      else
        v15 = 256;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)datalist )
        {
          v18 = sub_B70798(MasterData_WarQuestSelectionMaster);
          sub_B70738(v18, 0LL);
        }
        v16 = *((_DWORD *)&v9->fields.lookup + v13);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v12 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v12,
                                                                    (int64_t)Instance,
                                                                    v16,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v15,
                                                                      0LL);
          v14 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v14 >= val )
          return 1;
        LODWORD(datalist) = v9->fields.datalist;
        if ( (__int64)++v13 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B7076C(Instance, v8);
    }
  }
  return 0;
}


bool __fastcall CondType__IsBattleLineReusltConsecutiveCount(
        int32_t groupId,
        int32_t val,
        bool isWin,
        bool isBelow,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v14; // x23
  unsigned __int64 v15; // x25
  int32_t v16; // w26
  int32_t v17; // w22
  int32_t v18; // w24
  __int64 v20; // x0

  if ( (byte_4351540 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351540 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_31;
  v11 = Instance;
  if ( !Instance->fields.datalist )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_1BCD22C *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B7076C(Instance, v10);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  datalist = v11->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v14 = MasterData_WarQuestSelectionMaster;
    v15 = 0LL;
    v16 = 0;
    if ( isWin )
      v17 = 128;
    else
      v17 = 256;
    do
    {
      if ( v15 >= (unsigned int)datalist )
      {
        v20 = sub_B70798(MasterData_WarQuestSelectionMaster);
        sub_B70738(v20, 0LL);
      }
      v18 = *((_DWORD *)&v11->fields.lookup + v15);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v14 )
        goto LABEL_31;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                  v14,
                                                                  (int64_t)Instance,
                                                                  v18,
                                                                  0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                    (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                    v17,
                                                                    0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
          ++v16;
        else
          v16 = 0;
      }
      else
      {
        v16 = 0;
      }
      if ( isBelow )
      {
        if ( v16 > val )
          return 0;
      }
      else if ( v16 >= val )
      {
        return 1;
      }
      LODWORD(datalist) = v11->fields.datalist;
      ++v15;
    }
    while ( (__int64)v15 < (int)datalist );
  }
  return isBelow;
}


bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v12; // x22
  unsigned __int64 v13; // x24
  int32_t v14; // w25
  int32_t v15; // w21
  int32_t v16; // w23
  __int64 v18; // x0

  if ( (byte_435153F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435153F = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v9 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v9->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v12 = MasterData_WarQuestSelectionMaster;
      v13 = 0LL;
      v14 = 0;
      if ( isWin )
        v15 = 128;
      else
        v15 = 256;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)datalist )
        {
          v18 = sub_B70798(MasterData_WarQuestSelectionMaster);
          sub_B70738(v18, 0LL);
        }
        v16 = *((_DWORD *)&v9->fields.lookup + v13);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v12 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v12,
                                                                    (int64_t)Instance,
                                                                    v16,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v15,
                                                                      0LL);
          v14 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v14 >= val )
          return 1;
        LODWORD(datalist) = v9->fields.datalist;
        if ( (__int64)++v13 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B7076C(Instance, v8);
    }
  }
  return 0;
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_435153D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_435153D = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_435153C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435153C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_435153B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435153B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0LL);
}


bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351552 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351552 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !UserBoxGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, gachaId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7076C(Instance, v6);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsClearLatestQuestPhase(
        int32_t questId,
        int64_t phase,
        bool isEqual,
        const MethodInfo *method)
{
  int v5; // w19
  const MethodInfo *v7; // x4
  CondType_c *v8; // x0
  const MethodInfo *v10; // x4
  CondType_c *v11; // x0

  v5 = phase;
  if ( (byte_4351577 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351577 = 1;
  }
  if ( isEqual )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    NetworkManager__get_UserId(0LL);
    v8 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetQuestClearPhaseCount((int64_t)v8, questId, -1, 1, v7) == v5;
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    NetworkManager__get_UserId(0LL);
    v11 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetQuestClearPhaseCount((int64_t)v11, questId, -1, 1, v10) != v5;
  }
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_4351533 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351533 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_24357984(UserId, commandCodeId, v3);
}


bool __fastcall CondType__IsCommandCodeGet_24357984(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351534 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351534 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  UserCommandCodeCollectionMaster__TryGetEntity(
    (UserCommandCodeCollectionMaster_o *)Instance,
    &entity,
    userId,
    commandCodeId,
    0LL);
  return entity && entity->fields.status == 2;
}


bool __fastcall CondType__IsCommonRelease(int32_t releaseId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4351538 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351538 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4351569 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4351569 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountExchangeServantMaxLimit(eventId, *(const MethodInfo **)&targetCount) >= targetCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetFriendShipRank(
        int32_t eventId,
        int32_t targetFriendShipRank,
        const MethodInfo *method)
{
  if ( (byte_435156D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_435156D = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetLevel(
        int32_t eventId,
        int32_t targetLevel,
        const MethodInfo *method)
{
  if ( (byte_4351567 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4351567 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestLevel(eventId, *(const MethodInfo **)&targetLevel) >= targetLevel;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetSkillLevel(
        int32_t eventId,
        int32_t targetSkillLevel,
        const MethodInfo *method)
{
  if ( (byte_435156B & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_435156B = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351565 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4351565 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                                                  (UserHeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  eventId,
                                                                  0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
    {
      heelPortraitIds = entity->fields.heelPortraitIds;
      if ( heelPortraitIds )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_WarQuestSelectionMaster )
          return HeelPortraitMaster__GetCompleteNum(
                   (HeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                   eventId,
                   0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_16:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}


bool __fastcall CondType__IsCompleteUserGameCommonValue(
        int32_t no,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v9; // x1
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351574 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserGameCommonMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351574 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_20;
  UserId = UserGameCommonMaster__TryGetEntity(
             (UserGameCommonMaster_o *)Master_WarQuestSelectionMaster,
             &entity,
             UserId,
             no,
             0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_14;
    }
LABEL_20:
    sub_B7076C(UserId, v9);
  }
  value = 0;
LABEL_14:
  if ( checkType == 2 )
    return value <= num;
  if ( checkType == 1 )
    return value >= num;
  return value == num;
}


bool __fastcall CondType__IsConst(int32_t condType, const MethodInfo *method)
{
  return condType == 0;
}


bool __fastcall CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  int64_t Time_25947024; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_4351558 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351558 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v8.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_25947024 = NetworkManager__getTime_25947024(v8, 0LL);
  dateData = NetworkManager__getDateTime_25947808(Time_25947024 - 3600 * condNum, 0LL).fields.dateData;
  v9.fields.dateData = (uint64_t)&dateData;
  return ((1 << (System_DateTime__get_DayOfWeek(v9, 0LL) + 1)) & condId) != 0;
}


bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351512 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351512 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7076C(Instance, v6);
  return UserServantCollectionEntity__IsCostumeGet(entity, costumeId, 0LL);
}


bool __fastcall CondType__IsDeadRaidDay(
        int32_t day,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_TotalEventRaidEntity__o *EntityListFromDay; // x23
  __int64 v14; // x24
  _BOOL8 v15; // x0
  __int64 v16; // x1
  float v17; // s0
  int64_t v18; // x22
  CondType_c *v19; // x0
  float v20; // s1
  bool v21; // cc
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  int64_t maxHpSum; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4351570 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351570 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = TotalEventRaidMaster__TryGetEntityListFromDay(
                              (TotalEventRaidMaster_o *)Instance,
                              day,
                              &maxHpSum,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_B7076C(Instance, v12);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromDay,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v14 = 0LL;
  for ( i = v24; ; v14 += (__int64)i.fields.current[1].monitor )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v15, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v17 = 0.0;
    if ( v14 >= 1 )
    {
      v18 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v19 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v19 = CondType_TypeInfo;
        }
        v17 = (float)((float)v14 / (float)v18) * (float)v19->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v20 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v21 = v17 < v20;
        if ( isIncludingEquals )
          return !v21;
        return !v21;
      }
      return v17 == v20;
    }
    if ( isIncludingEquals )
      return v17 <= v20;
    else
      return v17 < v20;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v21 = v14 < num;
        if ( isIncludingEquals )
          return !v21;
        return !v21;
      }
      return v14 == num;
    }
    if ( isIncludingEquals )
      return v14 <= num;
    else
      return v14 < num;
  }
}


bool __fastcall CondType__IsDeadRaidGroup(
        int32_t eventId,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v14; // x25
  int v15; // w28
  __int64 v16; // x27
  __int64 v17; // x26
  EventRaidEntity_o *v18; // x19
  float v19; // s0
  CondType_c *v20; // x0
  float v21; // s1
  bool v22; // cc
  bool v25; // cc
  __int64 v26; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4351571 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351571 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_52:
    sub_B7076C(Instance, v11);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v17 = 0LL;
    v16 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v19 = 0.0;
      if ( v16 >= 1 && v17 >= 1 )
      {
        v20 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v20 = CondType_TypeInfo;
        }
        v19 = (float)((float)v17 / (float)v16) * (float)v20->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v21 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          if ( isIncludingEquals )
          {
            v22 = v19 < v21;
            return !v22;
          }
          v25 = v19 <= v21;
          return !v25;
        }
        return v19 == v21;
      }
      if ( isIncludingEquals )
        return v19 <= v21;
      else
        return v19 < v21;
    }
  }
  else
  {
    v14 = (TotalEventRaidMaster_o *)Instance;
    v15 = 0;
    v16 = 0LL;
    v17 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)max_length )
      {
        v26 = sub_B70798(Instance);
        sub_B70738(v26, 0LL);
      }
      v18 = EventRaidEntityArrayFromEventId->m_Items[v15];
      if ( !v18 || !v14 )
        goto LABEL_52;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v14, &entity, eventId, v18->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_52;
        v16 += v18->fields.maxHp;
        v17 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v15;
    }
    while ( v15 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      if ( isIncludingEquals )
      {
        v22 = v17 < num;
        return !v22;
      }
      v25 = v17 <= num;
      return !v25;
    }
    return v17 == num;
  }
  if ( isIncludingEquals )
    return v17 <= num;
  else
    return v17 < num;
}


bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  QuestPhaseMaster_c *v9; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v11; // x19

  if ( (byte_4351530 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&QuestPhaseMaster_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351530 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v8 = Entity;
    v9 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v9 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v8, v9->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v11 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[11].fields.context;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v11, 0LL);
      }
LABEL_14:
      sub_B7076C(Instance, v6);
    }
  }
  return 0;
}


bool __fastcall CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  const MethodInfo *UserId; // x0
  int64_t v6; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v10; // x3
  UserQuestEntity_o *v11; // x21
  bool IsQuestClear_24296868; // w8
  int64_t updatedAt; // x20
  int64_t Time_25947024; // x20
  System_DateTime_o v16; // 0:x0.8

  if ( (byte_4351575 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4351575 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v6 = (int64_t)UserId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_B7076C(0LL, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v6, questId, 0LL);
  if ( EntityFromId )
  {
    v11 = EntityFromId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_24296868 = CondType__IsQuestClear_24296868(questId, -1, 0, v10);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_24296868 )
    {
      updatedAt = v11->fields.updatedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v16.fields.dateData = NetworkManager__getServerDateTime_25948096(updatedAt, 0LL).fields.dateData;
      Time_25947024 = NetworkManager__getTime_25947024(v16, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_25947024 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4351531 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestDateRangeMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351531 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  return QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
           (QuestDateRangeMaster_o *)Instance,
           questDateRangeId,
           Time,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEquipRarityLevelNum(
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x22
  int32_t v8; // w23
  int32_t v9; // w21
  __int64 v10; // x0

  v4 = targetIds;
  if ( (byte_435154C & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B70694(&CondType_TypeInfo);
    byte_435154C = 1;
  }
  if ( !v4 )
    sub_B7076C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v10 = sub_B70798(v6);
        sub_B70738(v10, 0LL);
      }
      v9 = v4->m_Items[v7 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountEquipRarityLevelNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = v4->max_length;
      if ( (__int64)++v7 >= (int)v5 )
      {
        LOBYTE(v6) = 0;
        return v6;
      }
    }
    LOBYTE(v6) = 1;
  }
  return v6;
}


bool __fastcall CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  EventEntity_o *Entity; // x0

  if ( (byte_43514E5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514E5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen(Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351516 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351516 = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_B7076C(Instance, v4);
  return entity->fields.targetId <= (__int64)Instance && (__int64)Instance <= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351515 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351515 = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_15:
      sub_B7076C(Instance, v4);
    if ( (__int64)Instance < *(_QWORD *)&entity->fields.eventId )
      return 0;
  }
  return 1;
}


bool __fastcall CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4351517 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351517 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  return EventRaceMaster__IsReachedPointRateInTerm(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           rate,
           0LL);
}


bool __fastcall CondType__IsEventGroupRankInTerm(int32_t eventTerm, int32_t rank, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4351518 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351518 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v9);
  }
  return EventRaceMaster__GetGoaledTeamCount(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           Time,
           0LL) >= rank;
}


bool __fastcall CondType__IsEventMissionGroupClear(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  EventMissionGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionGroupEntity__o *EntityList; // x0
  int32_t i; // w21
  int32_t klass_high; // w20
  const MethodInfo *v10; // x1
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4351564 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    byte_4351564 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v6);
  EntityList = EventMissionGroupMaster__GetEntityList(Master_WarQuestSelectionMaster, condId, 0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v10) )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v11 )
        break;
      if ( !v13.fields.current )
        sub_B7076C(v11, v10);
      klass_high = HIDWORD(v13.fields.current[1].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_435150E & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435150E = 1;
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  return TotalEventPointMaster__GetPeriodTotalPoint(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           0LL) >= condVal;
}


bool __fastcall CondType__IsEventPoint(int32_t eventId, int64_t evPoint, const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL) >= evPoint;
}


bool __fastcall CondType__IsEventPointGroupWin(int32_t evGroupId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_435150D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435150D = 1;
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  return TotalEventPointMaster__IsGroupWin(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           condVal,
           0LL);
}


bool __fastcall CondType__IsEventRaceGoalScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  CondType___c__DisplayClass115_0_o *v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v11; // x23
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435151D & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindIndex_int___);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B70694(&Method_System_Predicate_int___ctor__);
    sub_B70694(&System_Predicate_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__);
    sub_B70694(&CondType___c__DisplayClass115_0_TypeInfo);
    byte_435151D = 1;
  }
  goalTime = 0LL;
  v7 = (CondType___c__DisplayClass115_0_o *)sub_B70764(CondType___c__DisplayClass115_0_TypeInfo);
  CondType___c__DisplayClass115_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.groupId = groupId,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v9);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v11 = (System_Predicate_int__o *)sub_B70764(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    (const MethodInfo_2BF0CF4 *)Method_System_Predicate_int___ctor__);
  v13 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_1FCB1CC *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v13 < 1 )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v13, v12);
  }
}


bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435151B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435151B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_12;
    v7 = *(&entity->fields.id + 1);
  }
  else
  {
    v7 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_B7076C(Instance, v6);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, v7, 0LL) == groupId;
}


bool __fastcall CondType__IsEventRaceRankedScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v10; // x2
  int32_t flagId; // w20

  if ( (byte_435151E & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435151E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  RaceResultEntity = EventScriptMaster__getRaceResultEntity(
                       (EventScriptMaster_o *)Instance,
                       1,
                       eventId,
                       termId,
                       rank,
                       0LL);
  if ( RaceResultEntity )
  {
    flagId = RaceResultEntity->fields.flagId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v10);
  }
  return (char)RaceResultEntity;
}


bool __fastcall CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435151C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435151C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7076C(Instance, v6);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  int64_t Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t v8; // w21
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = flagId;
  if ( (byte_4351529 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351529 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  Instance = (int64_t)UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, Instance, eventId, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v8 = *(_DWORD *)(Instance + 32);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v8, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return (entity->fields.status & (1 << v3)) != 0;
LABEL_16:
    sub_B7076C(Instance, v6);
  }
  return 0;
}


bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  UserEventMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435155B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_435155B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  if ( !UserEventMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, eventId, 0LL) )
    return 0;
  UserId = (int64_t)entity;
  if ( !entity )
LABEL_15:
    sub_B7076C(UserId, v7);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0LL);
}


bool __fastcall CondType__IsEventTypeStartTimeToEndDate(
        int32_t eventType,
        int32_t overWriteTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x19
  int64_t v8; // x21
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v11; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x25
  __int64 v22; // x9
  int64_t v23; // x26
  int32_t Year; // w26
  int32_t Month; // w27
  int32_t Day; // w3
  uint64_t v27; // x25
  bool v28; // w20
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+8h] [xbp-78h]
  int v35; // [xsp+Ch] [xbp-74h]
  int v36; // [xsp+10h] [xbp-70h]
  System_DateTime_o dateTime; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8

  if ( (byte_4351551 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&EventEntity_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351551 = 1;
  }
  dateTime.fields.dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_48;
  lookup = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance->fields.lookup;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getServerTime(0LL);
  if ( !lookup )
LABEL_48:
    sub_B7076C(Instance, v6);
  v8 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 lookup,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v9);
  v35 = overWriteTime / 100 % 100;
  v34 = overWriteTime % 100;
  v11 = overWriteTime / 10000;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_22:
      v19 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( v20 )
    {
      v22 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != EventEntity_TypeInfo )
      {
        Instance = (DataManager_o *)sub_B70A60(v20);
        goto LABEL_48;
      }
      if ( *(_DWORD *)(v20 + 24) == eventType )
      {
        v23 = *(_QWORD *)(v20 + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getDateTime_25947808(v23, 0LL).fields.dateData;
        v39.fields.dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v39, 0LL);
        v40.fields.dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v40, 0LL);
        v41.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v41, 0LL);
        v42.fields.dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_42969584(v42, Year, Month, Day, v11, v35, v34, 0LL);
        if ( *(_QWORD *)(v21 + 88) <= v8 )
        {
          v27 = dateTime.fields.dateData;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v43.fields.dateData = v27;
          if ( v8 <= NetworkManager__getTime_25947024(v43, 0LL) )
          {
            v36 = 157;
            v28 = 1;
            goto LABEL_38;
          }
        }
      }
    }
  }
  v28 = 0;
  v36 = 155;
LABEL_38:
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_42:
    v32 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v36 == 155 )
    return 0;
  return v28;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCampaign; // x0
  char i; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435156F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    byte_435156F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  ExchangeSvtCampaign = EventCampaignMaster__GetExchangeSvtCampaign(Master_WarQuestSelectionMaster, 0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ExchangeSvtCampaign,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= LODWORD(v10.fields.current[1].klass) == targetId )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields.current )
      sub_B7076C(v7, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(
                                  (UserExchangeSvtMaster_o *)Master_WarQuestSelectionMaster,
                                  targetId,
                                  0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_43514BE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514BE = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&condValue) >= condValue;
}


bool __fastcall CondType__IsLimitCountCondType(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 103) < 3 || (unsigned int)(condType - 150) < 3;
}


bool __fastcall CondType__IsLimitedPeriodVoiceChangeTypeOn(int32_t targetId, const MethodInfo *method)
{
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  int32_t Value_28086212; // w0

  if ( (byte_4351559 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_8478/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4351559 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  Value_28086212 = ConstantMaster__GetValue_28086212(
                     Master_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_8478/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_28086212 == targetId && Value_28086212 != 0;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514F2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F2 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, condId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_13:
    sub_B7076C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514F0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, condId, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                          condId,
                          (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_21;
    Instance = EventMissionEntity__IsDaily((EventMissionEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_17;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_21;
    Instance = UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
    if ( (Instance & 1) != 0 )
    {
LABEL_17:
      if ( entity )
        return (entity->fields.missionProgressType | 1) == 5;
LABEL_21:
      sub_B7076C(Instance, v4);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514F1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514F1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, condId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_13:
    sub_B7076C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_43514EF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514EF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               Instance,
                                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B7076C(Instance, v6);
  Entity = UserEventMissionCondDetailMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int64_t)Instance,
             condId,
             0LL);
  if ( Entity )
    LOBYTE(Entity) = Entity->fields.progressNum >= condVal;
  return (char)Entity;
}


bool __fastcall CondType__IsMultiTargetParamCond(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 148) <= 0x28 && ((1LL << ((unsigned __int8)condType + 108)) & 0x10000000403LL) != 0
      || (condType | 1) == 191;
}


bool __fastcall CondType__IsNotCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4351535 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351535 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v5);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0LL);
  }
}


bool __fastcall CondType__IsNotEventRaceQuestOrNotAllGroupGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  bool v6; // w22
  CondType_c *v7; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351519 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351519 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v6 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v7 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v10);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0LL);
  }
  return v6;
}


bool __fastcall CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  bool v6; // w21
  CondType_c *v7; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int32_t Value; // w20
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435151A & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11156/*"RACE_TARGET_GOAL_RANK"*/);
    byte_435151A = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v6 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v7 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11156/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
      sub_B7076C(Instance, v11);
    return EventRaceMaster__GetGoaledTeamCount(
             MasterData_WarQuestSelectionMaster,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0LL) < Value;
  }
  return v6;
}


bool __fastcall CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x19
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v7; // x8
  __int64 v9; // x0

  if ( (byte_4351509 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351509 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_17;
  v5 = Instance;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*(_DWORD *)(v5 + 24) )
      {
        v9 = sub_B70798(Instance);
        sub_B70738(v9, 0LL);
      }
      v7 = *(_QWORD *)(v5 + 32);
      if ( v7 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                Instance,
                                *(_DWORD *)(v7 + 20),
                                0LL);
          if ( Instance )
            return *(_DWORD *)(Instance + 28) > 0;
        }
      }
    }
LABEL_17:
    sub_B7076C(Instance, v4);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_43514FD & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514FD = 1;
  }
  if ( condVal <= 1 )
    condVal = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(
           questId,
           groupId,
           sameGroupQuestIds,
           isCheckResetFlag,
           (const MethodInfo *)isCheckResetFlag) < condVal;
}


bool __fastcall CondType__IsNotQuestGroupClear_24356488(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int32_t v4; // w21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v8; // x4
  int32_t v9; // w19
  int32_t shortCutBannerId; // w20
  System_Int32_array *v12; // [xsp+0h] [xbp-30h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-14h] BYREF

  v14 = targetId;
  if ( (byte_43514FE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B70694(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514FE = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  if ( condValue <= 1 )
    v4 = 1;
  else
    v4 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                MasterData_WarQuestSelectionMaster,
                                &entity,
                                (System_String_o *)Instance,
                                (const MethodInfo_21C08E8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B7076C(Instance, v6);
  if ( entity->fields.questId != 26 )
    return 0;
  v9 = v14;
  shortCutBannerId = entity->fields.shortCutBannerId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v9, shortCutBannerId, &v12, 1, v8) >= v4;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_435150A & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435150A = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B7076C(Instance, v5);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  UserShopMaster_o *v6; // x20
  unsigned __int64 v7; // x22
  int32_t v8; // w21
  __int64 v10; // x0

  if ( (byte_435150B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435150B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !values) )
  {
LABEL_17:
    sub_B7076C(Instance, v4);
  }
  v5 = *(_QWORD *)&values->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = (UserShopMaster_o *)Instance;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      v10 = sub_B70798(Instance);
      sub_B70738(v10, 0LL);
    }
    v8 = values->m_Items[v7 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v6 )
      goto LABEL_17;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v6, Instance, v8, 0LL);
    if ( !Instance )
      goto LABEL_17;
    if ( !*(_DWORD *)(Instance + 28) )
      return 1;
    LODWORD(v5) = values->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        bool isCollection,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  char IsQuestClear; // w0
  int32_t v11; // w2
  bool v12; // w2
  int32_t v13; // w0
  int32_t v14; // w1
  bool v15; // w2
  int32_t v16; // w0
  int32_t v17; // w1
  bool IsPurchaseShop; // w0
  CondType_c *v19; // x0
  UserQuestMaster_o *v20; // x21
  int64_t Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w0
  const MethodInfo *v24; // x5
  int64_t v25; // x21
  UserEventPointMaster_o *v26; // x21
  int64_t Point; // x0
  int32_t v28; // w0
  int32_t v29; // w1
  bool v30; // w2
  UserEventMaster_o *v31; // x21
  __int64 v32; // x8
  bool v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  UserEventMaster_o *v36; // x21
  bool v37; // cc
  bool v38; // w3
  int32_t v39; // w0
  int32_t v40; // w1
  bool v41; // w2
  UserEventMaster_o *v42; // x21
  CondType_c *v43; // x0
  UserQuestMaster_o *v44; // x21
  int32_t ClearCountsFromId; // w0
  int32_t v46; // w0
  int32_t v47; // w1
  CondType_c *v48; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int32_t ChallengeCountsFromId; // w0
  CondType_c *v51; // x0
  UserQuestMaster_o *v52; // x21
  bool v53; // cc
  bool v54; // w2
  int32_t v55; // w0
  int32_t v56; // w1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t EventPointNoGroup; // x0
  UserEventMaster_o *v59; // x21
  UserEventMaster_o *v60; // x21
  bool v61; // zf
  bool v62; // w2
  int32_t v63; // w0
  int32_t v64; // w1
  const MethodInfo *v65; // x5
  int64_t v66; // x21
  int32_t v67; // w2
  int32_t v68; // w2
  int32_t v69; // w1
  int32_t v70; // w2
  bool v71; // w3
  bool v72; // w3
  bool v73; // w4
  int32_t v74; // w0
  int32_t v75; // w1
  int32_t v76; // w2
  CondType_c *v77; // x0
  UserQuestMaster_o *v78; // x21
  CondType_c *v79; // x0
  bool v80; // w3
  int32_t v81; // w0
  int32_t v82; // w1
  bool v83; // w4
  CondType_c *v84; // x0
  int32_t v85; // w2
  bool v86; // w2
  int32_t v87; // w0
  int64_t v88; // x1
  UserEventPointMaster_o *v89; // x21
  UserEventPointMaster_o *v90; // x21
  const MethodInfo *v91; // x5
  int64_t UserId; // x22
  CondType_c *v93; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43514B5 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514B5 = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0LL;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v91);
      return IsQuestClear & 1;
    case 2:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_24294316(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v11 = 1;
      goto LABEL_188;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 1;
      v13 = targetId;
      v14 = condValue;
      goto LABEL_81;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEvent(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 12:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsArrivalDate(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseQpShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseStoneShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 16:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 17:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 20:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 22:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 23:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 24:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 25:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 26:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotQuestGroupClear(0, targetId, condValue, &sameGroupQuestIds, 1, v5);
      return IsQuestClear & 1;
    case 27:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v15 = 1;
      v16 = targetId;
      v17 = condValue;
      goto LABEL_791;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v16 = targetId;
      v17 = condValue;
      v15 = 0;
LABEL_791:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v16, v17, v15, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v48 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v48);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_819;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, Instance, targetId, 0LL);
      goto LABEL_722;
    case 32:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v33 = 1;
      v34 = targetId;
      v35 = condValue;
      goto LABEL_666;
    case 35:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 36:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v30 = 1;
      v28 = targetId;
      v29 = condValue;
      goto LABEL_808;
    case 37:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 40:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 42:
      v43 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v44 = CondType__GetUserQuestMaster((const MethodInfo *)v43);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v44 )
        goto LABEL_819;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v44, Instance, targetId, 0LL);
      goto LABEL_437;
    case 43:
      v51 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = CondType__GetUserQuestMaster((const MethodInfo *)v51);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v52 )
        goto LABEL_819;
      v23 = UserQuestMaster__getChallengeCountsFromId(v52, Instance, targetId, 0LL);
      goto LABEL_217;
    case 44:
      v77 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = CondType__GetUserQuestMaster((const MethodInfo *)v77);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v78 )
        goto LABEL_819;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v78, Instance, targetId, 0LL);
LABEL_437:
      v61 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_438;
    case 45:
      v19 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v20 = CondType__GetUserQuestMaster((const MethodInfo *)v19);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v20 )
        goto LABEL_819;
      v23 = UserQuestMaster__getClearCountsFromId(v20, Instance, targetId, 0LL);
LABEL_217:
      v53 = v23 <= (int)condValue;
      goto LABEL_604;
    case 46:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v66 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v66, targetId, condValue, -1, 0, v65);
      return IsQuestClear & 1;
    case 47:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v25 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v25, targetId, condValue, -1, 0, v24);
      goto LABEL_809;
    case 48:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventPointGroupWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 49:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 50:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestAvailable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 51:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestGroupAvailable(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 52:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 53:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 54:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 55:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 56:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGetBeforeEventEnd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 57:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClear_24296868(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v34 = targetId;
      v35 = condValue;
      v33 = 0;
LABEL_666:
      IsQuestClear = CondType__IsQuestGroupClear(0, v34, v35, v33, method);
      return IsQuestClear & 1;
    case 59:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventGroupPointRatioInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 60:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventGroupRankInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 61:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotAllGroupGoal(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 62:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventRaceGroupTotalWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 63:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 64:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 66:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtRecoverd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 67:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsShopReleased(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 68:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0LL);
      goto LABEL_673;
    case 69:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsVoicePlayCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 71:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__checkCondTypeRaidGroupAlive(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 72:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 73:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 74:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v28 = targetId;
      v29 = condValue;
      v30 = 0;
LABEL_808:
      IsPurchaseShop = CondType__IsQuestClear_24296868(v28, v29, v30, (const MethodInfo *)isCollection);
      goto LABEL_809;
    case 75:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v69 = targetId;
      v70 = condValue;
      v71 = 0;
      goto LABEL_412;
    case 76:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 77:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 78:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 79:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 80:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 81:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPlayerGenderType(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 82:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 83:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_819;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_673;
    case 84:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v89 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v89 )
        goto LABEL_819;
      Point = UserEventPointMaster__GetPoint(v89, Instance, targetId / 100, targetId, 0LL);
      goto LABEL_603;
    case 85:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v90 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v90 )
        goto LABEL_819;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(v90, Instance, targetId, -1, 0LL);
LABEL_673:
      v37 = EventPointNoGroup < condValue;
      goto LABEL_723;
    case 86:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v26 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v26 )
        goto LABEL_819;
      Point = UserEventPointMaster__GetEventPointTotal(v26, Instance, targetId, -1, 0LL);
LABEL_603:
      v53 = Point <= condValue;
      goto LABEL_604;
    case 87:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v36 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v36 )
        goto LABEL_819;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v36, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_819;
      v37 = *(int *)(Instance + 28) < condValue;
      goto LABEL_723;
    case 88:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v59 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v59 )
        goto LABEL_819;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v59, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_819;
      v53 = *(int *)(Instance + 28) <= condValue;
LABEL_604:
      IsQuestClear = v53;
      return IsQuestClear & 1;
    case 89:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v60 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v60 )
        goto LABEL_819;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v60, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_819;
      v32 = *(int *)(Instance + 32);
      goto LABEL_294;
    case 90:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 93:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v93 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v93);
      return IsQuestClear & 1;
    case 96:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 97:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 = targetId;
      v14 = condValue;
      v12 = 0;
LABEL_81:
      IsQuestClear = CondType__IsServantFriendship(v13, v14, v12, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 100:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 101:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 102:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 103:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v46 = targetId;
      v47 = condValue;
      v11 = 0;
      goto LABEL_758;
    case 105:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v11 = 2;
LABEL_188:
      v46 = targetId;
      v47 = condValue;
LABEL_758:
      IsQuestClear = CondType__IsServantLimit_24294492(v46, v47, v11, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 106:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPlayedNotMeetsScript(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 107:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 108:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 109:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAllUserBoxGachaCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 110:
    case 111:
    case 112:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsTotalTdLvCond(condType, targetId, condValue, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 113:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCommonRelease(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 116:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v31 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v31 )
        goto LABEL_819;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v31, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_819;
      v32 = *(int *)(Instance + 28);
LABEL_294:
      v61 = v32 == condValue;
LABEL_438:
      IsQuestClear = v61;
      return IsQuestClear & 1;
    case 117:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 118:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenGroupHaving(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 119:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 120:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 121:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 123:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_819;
      v42 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v42 )
        goto LABEL_819;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v42, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_819;
      IsQuestClear = *(int *)(Instance + 28) != condValue;
      return IsQuestClear & 1;
    case 127:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenGetNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 128:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = 1;
      v55 = targetId;
      v56 = condValue;
      goto LABEL_716;
    case 129:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v55 = targetId;
      v56 = condValue;
      v54 = 0;
LABEL_716:
      IsQuestClear = CondType__IsBattleLineReusltCount(v55, v56, v54, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = 1;
      v39 = targetId;
      v40 = condValue;
      goto LABEL_690;
    case 131:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = targetId;
      v40 = condValue;
      v41 = 0;
LABEL_690:
      v38 = 0;
      goto LABEL_691;
    case 132:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = 1;
      v38 = 1;
      v39 = targetId;
      v40 = condValue;
      goto LABEL_691;
    case 133:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = 1;
      v39 = targetId;
      v40 = condValue;
      v41 = 0;
LABEL_691:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(v39, v40, v41, v38, method);
      return IsQuestClear & 1;
    case 134:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v62 = 1;
      v63 = targetId;
      v64 = condValue;
      goto LABEL_749;
    case 135:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v63 = targetId;
      v64 = condValue;
      v62 = 0;
LABEL_749:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v63, v64, v62, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 137:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__checkRaidTimeLimitOver(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 138:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__TimeLimitRaidDead(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 140:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__RaidBattleProgressAbove(targetId, (float)condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 141:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 143:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v79 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v79);
      return IsQuestClear & 1;
    case 145:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 146:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 147:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseValidShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 153:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTypeStartTimeToEndDate(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 154:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 155:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 156:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsLimitedPeriodVoiceChangeTypeOn(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 157:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsStartRandomMission(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 158:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__GetRandomMissionClearNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 162:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_819;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_722;
    case 166:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
LABEL_819:
        sub_B7076C(Instance, v22);
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_722;
    case 168:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 170:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 172:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_809;
    case 174:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_722;
    case 175:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossDamageAbove(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 176:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossDamageBellow(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 177:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventMissionGroupClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 178:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 179:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 180:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 181:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 182:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 183:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 184:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_722;
    case 185:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_809;
    case 187:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
LABEL_722:
      v37 = ChallengeCountsFromId < (int)condValue;
LABEL_723:
      IsQuestClear = !v37;
      return IsQuestClear & 1;
    case 188:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetLevel(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 189:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantMaxLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 190:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetSkillLevel(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 191:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetFriendShipRank(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 192:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsExchangeSvtBuff(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 193:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 1;
      goto LABEL_639;
    case 194:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 2;
LABEL_639:
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      v80 = 0;
      goto LABEL_645;
    case 195:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 1;
      goto LABEL_493;
    case 196:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 2;
LABEL_493:
      v73 = 1;
      v74 = targetId;
      v75 = condValue;
      v72 = 0;
      goto LABEL_508;
    case 197:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 1;
      goto LABEL_644;
    case 198:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 2;
LABEL_644:
      v80 = 1;
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      goto LABEL_645;
    case 199:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 2;
      goto LABEL_502;
    case 200:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = 1;
LABEL_502:
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      v83 = 0;
LABEL_645:
      IsQuestClear = CondType__IsDeadRaidDay(v81, v82, v67, v80, v83, v5);
      return IsQuestClear & 1;
    case 201:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 1;
      goto LABEL_403;
    case 202:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 2;
LABEL_403:
      v72 = 1;
      v73 = 1;
      v74 = targetId;
      v75 = condValue;
      goto LABEL_508;
    case 203:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 2;
      goto LABEL_507;
    case 204:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 1;
LABEL_507:
      v72 = 1;
      v74 = targetId;
      v75 = condValue;
      v73 = 0;
LABEL_508:
      IsQuestClear = CondType__IsDeadRaidGroup(v74, v75, v68, v72, v73, v5);
      return IsQuestClear & 1;
    case 205:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v71 = 1;
      v69 = targetId;
      v70 = condValue;
LABEL_412:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v69, v70, v71, method);
      goto LABEL_809;
    case 206:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = 1;
      goto LABEL_513;
    case 207:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = 2;
LABEL_513:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v76, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v84 = CondType_TypeInfo;
      if ( (_DWORD)condValue )
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsQuestClear = CondType__IsAuthTDAccelerate((const MethodInfo *)v84);
      }
      else
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsPurchaseShop = CondType__IsAuthTDAccelerate((const MethodInfo *)v84);
LABEL_809:
        IsQuestClear = !IsPurchaseShop;
      }
      return IsQuestClear & 1;
    case 211:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
      goto LABEL_531;
    case 213:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
LABEL_531:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, v85, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 214:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 215:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 216:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, 0LL, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v86 = 1;
      v87 = targetId;
      v88 = condValue;
      goto LABEL_544;
    case 218:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v87 = targetId;
      v88 = condValue;
      v86 = 0;
LABEL_544:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v87, v88, v86, (const MethodInfo *)isCollection);
      break;
    default:
      return IsQuestClear & 1;
  }
  return IsQuestClear & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenExcludeBeforeClearQuest(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool IsQuestPhaseClear; // w0
  const MethodInfo *v13; // x5
  int64_t v14; // x23
  const MethodInfo *v15; // x5
  int64_t UserId; // x23

  if ( (byte_43514B6 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514B6 = 1;
  }
  if ( condType > 36 )
  {
    if ( condType != 46 )
    {
      if ( condType == 47 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestPhaseClear = CondType__IsQuestPhaseClear(
                              UserId,
                              targetId,
                              condValue,
                              beforeClearQuestId,
                              isCheckResetFlag,
                              v15);
        return !IsQuestPhaseClear;
      }
      if ( condType == 113 )
        return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
                 targetId,
                 beforeClearQuestId,
                 isCheckResetFlag,
                 0LL);
      goto LABEL_14;
    }
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v14 = NetworkManager__get_UserId(0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v14, targetId, condValue, beforeClearQuestId, isCheckResetFlag, v13);
  }
  else
  {
    if ( condType != 1 )
    {
      if ( condType == 36 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestPhaseClear = CondType__IsQuestClear_24296868(
                              targetId,
                              beforeClearQuestId,
                              isCheckResetFlag,
                              *(const MethodInfo **)&beforeClearQuestId);
        return !IsQuestPhaseClear;
      }
LABEL_14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsOpen(condType, targetId, condValue, 0, (const MethodInfo *)isCheckResetFlag);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_24296868(
             targetId,
             beforeClearQuestId,
             isCheckResetFlag,
             *(const MethodInfo **)&beforeClearQuestId);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenForUsrSvt(
        int32_t condType,
        int32_t condValue,
        int64_t userSvtId,
        const MethodInfo *method)
{
  bool v7; // w0
  bool result; // w0
  int32_t v9; // w2
  int32_t v10; // w2
  int64_t v11; // x0
  int32_t v12; // w1
  int64_t v13; // x0
  int32_t v14; // w1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  __int128 v17; // q1
  const MethodInfo *v18; // x5
  int64_t v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_43514C1 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514C1 = 1;
  }
  if ( condType > 38 )
  {
    v7 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v11 = userSvtId;
          v12 = condValue;
          v9 = 0;
          return CondType__IsServantLimit(v11, v12, v9, method);
        case 'h':
LABEL_22:
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v9 = 1;
LABEL_26:
          v11 = userSvtId;
          v12 = condValue;
          return CondType__IsServantLimit(v11, v12, v9, method);
        case 'i':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v9 = 2;
          goto LABEL_26;
      }
      return v7;
    }
    if ( condType == 150 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 = userSvtId;
      v14 = condValue;
      v10 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v10 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v7;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v10 = 2;
      }
      v13 = userSvtId;
      v14 = condValue;
    }
    return CondType__IsServantLimitImage(v13, v14, v10, method);
  }
  v7 = 1;
  switch ( condType )
  {
    case 0:
      return v7;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                          userSvtId,
                                          (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
      {
        sub_B7076C(Instance, v16);
      }
      v17 = *(_OWORD *)&Instance->fields.lastFrameTime;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&Instance->fields.saveNameList;
      *(_OWORD *)&v21.fields.fakeValue = v17;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v20 = v21;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v20, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear(v19, condValue, -1, 0, 0, v18);
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLevel(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 7:
      goto LABEL_22;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_24335916(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_24336076(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_24336644(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop(condValue, *(const MethodInfo **)&condValue);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop(condValue, *(const MethodInfo **)&condValue);
      break;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
      break;
    default:
      return 0;
  }
  return result;
}


bool __fastcall CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x19
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  TotalEventRaidMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v12; // x24
  int max_length; // w8
  int64_t v14; // x20
  unsigned int v15; // w22
  int32_t v16; // w26
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x27
  EventRaidMaster_o *v19; // x21
  int32_t v20; // w24
  __int64 v21; // x8
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  int64_t v24; // x27
  __int64 v25; // x25
  int v26; // w8
  int32_t v27; // w19
  int32_t v28; // w28
  const MethodInfo *v29; // x4
  int32_t ValueInt; // w19
  __int64 v32; // x0
  int32_t v33; // [xsp+8h] [xbp-78h]
  int32_t v34; // [xsp+Ch] [xbp-74h]
  QuestReleaseMaster_o *v35; // [xsp+10h] [xbp-70h]
  TotalEventRaidMaster_o *v36; // [xsp+18h] [xbp-68h]
  int64_t time; // [xsp+20h] [xbp-60h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4351572 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351572 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_52;
  v9 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v12 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  time = Instance;
  if ( !EventRaidEntityArrayFromEventId )
LABEL_52:
    sub_B7076C(Instance, v8);
  v33 = checkType;
  v34 = num;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v14 = Instance;
    v15 = 0;
    v16 = 0;
    v35 = (QuestReleaseMaster_o *)v12;
    v36 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_53;
      v17 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v15;
      v18 = v17[4];
      if ( !v18 )
        goto LABEL_52;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v17[4], v14, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     eventId,
                     HIDWORD(v18->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v19 = v9;
          v20 = eventId;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, HIDWORD(v18->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_52;
          v21 = *(_QWORD *)(Instance + 24);
          if ( v21 )
          {
            if ( !(_DWORD)v21 )
              goto LABEL_53;
            if ( !v35 )
              goto LABEL_52;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v35, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_52;
            v23 = *(_QWORD *)(Instance + 24);
            v24 = Instance;
            if ( v23 )
            {
              if ( (int)v23 >= 1 )
              {
                v25 = 0LL;
                while ( (unsigned int)v25 < (unsigned int)v23 )
                {
                  Instance = *(_QWORD *)(v24 + 32 + 8 * v25);
                  if ( !Instance )
                    goto LABEL_52;
                  v26 = *(_DWORD *)(Instance + 20);
                  if ( v26 == 32 )
                  {
                    v28 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestGroupClear(0, v28, ValueInt, 0, v29);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  else if ( v26 == 1 )
                  {
                    v27 = *(_DWORD *)(Instance + 24);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestClear_24296868(v27, -1, 0, v22);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  LODWORD(v23) = *(_DWORD *)(v24 + 24);
                  if ( (int)++v25 >= (int)v23 )
                    goto LABEL_41;
                }
LABEL_53:
                v32 = sub_B70798(Instance);
                sub_B70738(v32, 0LL);
              }
            }
          }
LABEL_41:
          ++v16;
LABEL_42:
          v9 = v19;
          Master_WarQuestSelectionMaster = v36;
          v14 = time;
          eventId = v20;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_46;
    }
  }
  v16 = 0;
LABEL_46:
  if ( v33 == 2 )
    return v16 <= v34;
  if ( v33 == 1 )
    return v16 >= v34;
  return v16 == v34;
}


bool __fastcall CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  CondType___c__DisplayClass19_0_o *v7; // x20
  int64_t IsOpen; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  int32_t v13; // w19
  int64_t v14; // x2
  int32_t v15; // w0
  int32_t v16; // w1
  bool result; // w0
  System_Func_int__int__o *v18; // x0
  __int64 *v19; // x8
  unsigned __int64 v20; // x22
  int32_t v21; // w23
  signed __int64 v22; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v24; // x4
  bool v25; // w0
  CondType_CountDelegate_o *v26; // x0
  __int64 *v27; // x8
  CondType_CountDelegate_o *v28; // x21
  const MethodInfo *v29; // x2
  int32_t ClearCountsFromIds; // w0
  bool v31; // cc
  int32_t v32; // w23
  unsigned __int64 v33; // x24
  signed __int64 v34; // x25
  int32_t v35; // w22
  __int64 v36; // x0
  int32_t v37; // w19
  System_Func_int__bool__o *v38; // x0
  __int64 *v39; // x8
  System_Func_int__int__o *v40; // x21
  const MethodInfo *v41; // x3
  int32_t v42; // w20
  System_Func_TSource__bool__o *v43; // x21
  CondType_c *v44; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v46; // x0
  UserQuestMaster_o *v47; // x21
  CondType_c *v48; // x0
  UserQuestMaster_o *v49; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v51; // x0
  UserQuestMaster_o *v52; // x21
  int32_t v53; // w0
  CondType_c *v54; // x0
  UserQuestMaster_o *v55; // x21
  CondType_c *v56; // x0
  UserQuestMaster_o *v57; // x21

  if ( (byte_43514BF & 1) == 0 )
  {
    sub_B70694(&Method_CondType_CountExchangeServantMaxLimit__);
    sub_B70694(&Method_CondType_CountServantClassTotalFriendShipUp__);
    sub_B70694(&Method_CondType_CountServantClassTotalLevelUp__);
    sub_B70694(&Method_CondType_CountServantClassTotalLimitUp__);
    sub_B70694(&Method_CondType_CountServantClassTotalSkillLevelUp__);
    sub_B70694(&Method_CondType_CountServantFriendShipClassNum__);
    sub_B70694(&Method_CondType_CountServantLevelClassNum__);
    sub_B70694(&Method_CondType_CountServantLevelIdNum__);
    sub_B70694(&Method_CondType_CountServantTargetSkillLvClassNum__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&CondType_CountDelegate_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_int____69269696);
    sub_B70694(&Method_System_Func_int__int___ctor__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&System_Func_int__int__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__);
    sub_B70694(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__);
    sub_B70694(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__);
    sub_B70694(&CondType___c__DisplayClass19_0_TypeInfo);
    byte_43514BF = 1;
  }
  v7 = (CondType___c__DisplayClass19_0_o *)sub_B70764(CondType___c__DisplayClass19_0_TypeInfo);
  CondType___c__DisplayClass19_0___ctor(v7, 0LL);
  if ( !v7 )
LABEL_141:
    sub_B7076C(IsOpen, v9);
  v7->fields.targetNum = targetNum;
  if ( !targetIds )
    return 0;
  v12 = *(_QWORD *)&targetIds->max_length;
  if ( !v12 )
    return 0;
  if ( (_DWORD)v12 == 1 )
  {
    v13 = targetIds->m_Items[1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v14 = targetNum;
    v15 = condType;
    v16 = v13;
    return CondType__IsOpen(v15, v16, v14, 0, v11);
  }
  if ( condType <= 136 )
  {
    if ( condType <= 1 )
    {
      if ( !condType )
        return 1;
      if ( condType == 1 )
      {
LABEL_36:
        if ( (int)v12 < 1 )
        {
          v32 = 0;
        }
        else
        {
          if ( !(_DWORD)v12 )
            goto LABEL_44;
          v32 = 0;
          v33 = 0LL;
          v34 = (int)v12;
          while ( 1 )
          {
            v35 = targetIds->m_Items[v33 + 1];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsOpen = CondType__IsOpen(condType, v35, 0LL, 0, v11);
            ++v33;
            v32 += IsOpen & 1;
            if ( (__int64)v33 >= v34 )
              break;
            if ( v33 >= targetIds->max_length )
              goto LABEL_44;
          }
          targetNum = v7->fields.targetNum;
        }
        v31 = v32 < targetNum;
        return !v31;
      }
      goto LABEL_69;
    }
    switch ( condType )
    {
      case 8:
      case 10:
      case 11:
      case 14:
      case 15:
      case 23:
      case 24:
      case 32:
      case 35:
      case 40:
      case 50:
        goto LABEL_36;
      case 9:
      case 12:
      case 13:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 27:
      case 28:
      case 29:
      case 31:
      case 33:
      case 34:
      case 39:
      case 46:
      case 47:
      case 48:
      case 49:
        goto LABEL_69;
      case 25:
        v44 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v44);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !UserQuestMaster )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getClearCountsFromIds(UserQuestMaster, IsOpen, targetIds, 0LL);
        goto LABEL_33;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        if ( (int)v12 < 1 )
        {
          v21 = 0;
        }
        else
        {
          v20 = 0LL;
          v21 = 0;
          v22 = (int)v12;
          do
          {
            IsOpen = (int64_t)CondType_TypeInfo;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( v20 >= targetIds->max_length )
              goto LABEL_44;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v9);
            v25 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v20], 0LL, 0, v24);
            v21 += v25;
          }
          while ( (__int64)v20 < v22 );
          targetNum = v7->fields.targetNum;
        }
        result = v21 < targetNum;
        break;
      case 30:
        v46 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v47 = CondType__GetUserQuestMaster((const MethodInfo *)v46);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v47 )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v47, IsOpen, targetIds, 0LL);
        goto LABEL_33;
      case 42:
        v48 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v49 = CondType__GetUserQuestMaster((const MethodInfo *)v48);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v49 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v49, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v7->fields.targetNum;
      case 43:
        v51 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v52 = CondType__GetUserQuestMaster((const MethodInfo *)v51);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v52 )
          goto LABEL_141;
        v53 = UserQuestMaster__getChallengeCountsFromIds(v52, IsOpen, targetIds, 0LL);
        return v53 <= v7->fields.targetNum;
      case 44:
        v54 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v55 = CondType__GetUserQuestMaster((const MethodInfo *)v54);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v55 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v55, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v7->fields.targetNum;
      case 45:
        v56 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v57 = CondType__GetUserQuestMaster((const MethodInfo *)v56);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v57 )
          goto LABEL_141;
        v53 = UserQuestMaster__getClearCountsFromIds(v57, IsOpen, targetIds, 0LL);
        return v53 <= v7->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_69;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsServantLimitClassNum(targetIds, targetNum, v10);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_81;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_69;
        case 180:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_81;
        case 181:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_81;
        case 182:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_81;
        case 183:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_81;
        case 184:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_81;
        case 188:
          v38 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_87;
        case 189:
          v18 = (System_Func_int__int__o *)sub_B70764(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_81:
          v40 = v18;
          System_Func_int__int____ctor(v18, 0LL, *v19, (const MethodInfo_29A68EC *)Method_System_Func_int__int___ctor__);
          v42 = v7->fields.targetNum;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v40, targetIds, v42, v41);
        case 190:
          v38 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_87;
        case 191:
          v38 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_87:
          v43 = (System_Func_TSource__bool__o *)v38;
          System_Func_int__bool____ctor(
            v38,
            (Il2CppObject *)v7,
            *v39,
            (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
          return System_Linq_Enumerable__Any_int__30057720(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v43,
                   (const MethodInfo_1CAA4F8 *)Method_System_Linq_Enumerable_Any_int____69269696);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v9);
LABEL_33:
              v31 = ClearCountsFromIds < v7->fields.targetNum;
              return !v31;
            }
            goto LABEL_69;
          }
          v26 = (CondType_CountDelegate_o *)sub_B70764(CondType_CountDelegate_TypeInfo);
          v27 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_29:
      v28 = v26;
      CondType_CountDelegate___ctor(v26, 0LL, *v27, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v28, v29);
      goto LABEL_33;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v26 = (CondType_CountDelegate_o *)sub_B70764(CondType_CountDelegate_TypeInfo);
        v27 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_29;
      }
LABEL_69:
      if ( (_DWORD)v12 )
      {
        v37 = targetIds->m_Items[1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v15 = condType;
        v16 = v37;
        v14 = 0LL;
        return CondType__IsOpen(v15, v16, v14, 0, v11);
      }
LABEL_44:
      v36 = sub_B70798(IsOpen);
      sub_B70738(v36, 0LL);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v10);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_24332796(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_43514C0 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514C0 = 1;
  }
  if ( condType <= 35 )
  {
    if ( !condType )
      return 1;
    if ( condType == 35 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsShopPurchase(condValues, condNum, *(const MethodInfo **)&condNum);
    }
    return 0;
  }
  if ( condType == 37 )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsNotShopPurchase(condValues, (const MethodInfo *)condValues);
  }
  else
  {
    if ( condType != 65 )
      return 0;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestNotClearAndCond(condValues, (const MethodInfo *)condValues);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_24337312(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_43514C2 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514C2 = 1;
  }
  result = 1;
  switch ( condType )
  {
    case 0:
      return result;
    case 1:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsQuestClear(userId, condValue, -1, 0, 0, v5);
      break;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLevel_24338064(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_24338228(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_24335916(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_24338472(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_24336644(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_24338796(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_24338968(userId, condValue, (const MethodInfo *)userId);
      break;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


bool __fastcall CondType__IsPlayedNotMeetsScript(int32_t notMeetsScriptId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = notMeetsScriptId;
  if ( (byte_4351532 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21484/*"notMeets"*/);
    byte_4351532 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44758168((System_String_o *)StringLiteral_21484/*"notMeets"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351527 & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4351527 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_B7076C(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EFC1 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EFC1 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v6->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool __fastcall CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43514E7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514E7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseQpShop_24338796(int64_t userId, int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_43514E8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return ShopEntity__IsCondType_35171424((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_43514EC & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514EC = 1;
  }
  if ( v3 <= 1 )
    v3 = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43514EA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseStoneShop_24338968(int64_t userId, int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_43514EB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514EB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return ShopEntity__IsCondType_35171424((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  il2cpp_array_size_t v9; // w23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4351523 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351523 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
      v7 = *(_QWORD *)&v6->max_length;
      if ( (int)v7 >= 1 )
      {
        v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v9 = 0;
        while ( 1 )
        {
          v10 = v6->m_Items[v9];
          if ( !v10 || !v8 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v8,
                                        v10->fields.shopId,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v11 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v11, 0LL) )
              goto LABEL_19;
            Instance = (DataManager_o *)ShopEntity__IsClosed(v11, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( (int)++v9 >= (int)v7 )
            goto LABEL_20;
          if ( v9 >= v6->max_length )
          {
            v12 = sub_B70798(Instance);
            sub_B70738(v12, 0LL);
          }
        }
LABEL_22:
        sub_B7076C(Instance, v4);
      }
LABEL_20:
      LOBYTE(TargetEntityList) = 1;
    }
    else
    {
LABEL_19:
      LOBYTE(TargetEntityList) = 0;
    }
  }
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsQuestAvailable(int32_t questId, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  bool v5; // w20
  bool v6; // w22
  bool v7; // w21
  TerminalPramsManager_c *v8; // x0
  bool v9; // w20
  bool v10; // w20
  BalanceConfig_c *v11; // x8
  int32_t WarId_k__BackingField; // w22
  bool v13; // w20
  TerminalPramsManager_c *v14; // x0
  char v15; // w8
  char v16; // w20

  if ( (byte_435150F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435150F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v5 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v6 = AvalonSceneManager__checkNowScene(Instance, 22, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v7 = AvalonSceneManager__checkNowScene(Instance, 72, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEA3 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEA3 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  v9 = v5 || v6;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = v9 || v7;
  v11 = BalanceConfig_TypeInfo;
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v13 = !v10;
  if ( WarId_k__BackingField == v11->static_fields->OrdealCallWarId )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEB8 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEB8 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v15 = !v14->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v15 = 1;
  }
  v16 = v15 & v13;
  if ( (v16 & 1) != 0 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (AvalonSceneManager_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
    if ( (v16 & 1 & (Instance != 0LL)) != 0 )
    {
      if ( Instance )
        return LODWORD(Instance->fields.scenestack) == 1;
LABEL_41:
      sub_B7076C(Instance, v4);
    }
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, questId, 0LL);
}


bool __fastcall CondType__IsQuestClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        bool isCollection,
        const MethodInfo *method)
{
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v13; // x1
  UserQuestEntity_o *EntityFromId; // x23
  const MethodInfo *v15; // x2

  if ( (byte_43514C7 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_43514C7 = 1;
  }
  v11 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( !UserQuestMaster )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_22:
    sub_B7076C(UserQuestMaster, v13);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL)
    && isCollection )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, v15);
  }
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0LL) )
    return 0;
  else
    return (beforeClearQuestId != condQuestId || beforeClearQuestId < 1) & (UserQuestEntity__getClearNum(
                                                                              EntityFromId,
                                                                              0LL) > 0);
}


bool __fastcall CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool IsQuestClear_24296868; // w8
  bool result; // w0
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *UserId; // x0
  __int64 v11; // x1
  int64_t klass; // x20

  if ( (byte_435155A & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_435155A = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_24296868 = CondType__IsQuestClear_24296868(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_24296868 )
  {
    v8 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = (EventMaster_o *)NetworkManager__get_UserId(0LL);
    if ( !UserQuestMaster )
      goto LABEL_21;
    UserId = (EventMaster_o *)UserQuestMaster__GetEntity(UserQuestMaster, (int64_t)UserId, questId, 0LL);
    if ( !UserId )
      goto LABEL_21;
    klass = (int64_t)UserId[1].klass;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
LABEL_21:
      sub_B7076C(UserId, v11);
    return klass < EventMaster__GetEventStartedAt(UserId, eventId, 0LL);
  }
  return result;
}


bool __fastcall CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_43514FB & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514FB = 1;
  }
  v5 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    sub_B7076C(UserId, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestClear_24296868(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5
  int64_t UserId; // x22

  if ( (byte_43514C8 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514C8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear(UserId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v7);
}


bool __fastcall CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int64_t UserId; // x21
  CondType_c *v9; // x0
  CondType_c *v10; // x0
  UserQuestEntity_o *v11; // x0

  if ( (byte_43514CE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514CE = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v9 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v9);
    if ( !Instance )
      goto LABEL_26;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, openQuestid, 0LL);
    if ( !EntityFromId )
      return (char)EntityFromId;
    if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) < 1 )
      goto LABEL_25;
  }
  if ( closeQuestid < 1 )
  {
LABEL_5:
    LOBYTE(EntityFromId) = 1;
    return (char)EntityFromId;
  }
  v10 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v10);
  if ( !Instance )
LABEL_26:
    sub_B7076C(Instance, v7);
  v11 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, closeQuestid, 0LL);
  if ( !v11 || UserQuestEntity__getClearNum(v11, 0LL) <= 0 )
    goto LABEL_5;
LABEL_25:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  int32_t v5; // w21
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v9; // x19
  int v10; // w22
  unsigned __int64 v11; // x23
  int32_t v12; // w20
  __int64 v14; // x0

  if ( (byte_4351510 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351510 = 1;
  }
  if ( questCount <= 1 )
    v5 = 1;
  else
    v5 = questCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  datalist = Instance->fields.datalist;
  v9 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v10 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)datalist )
    {
      v14 = sub_B70798(Instance);
      sub_B70738(v14, 0LL);
    }
    v12 = *((_DWORD *)&v9->fields.lookup + v11);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__IsQuestAvailable(v12, v7);
    if ( ((unsigned __int8)Instance & 1) != 0 && ++v10 >= v5 )
      break;
    LODWORD(datalist) = v9->fields.datalist;
    if ( (__int64)++v11 >= (int)datalist )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4351500 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4351500 = 1;
  }
  if ( condVal <= 1 )
    condVal = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= condVal;
}


bool __fastcall CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  __int64 v3; // x8
  unsigned __int64 v4; // x21
  signed __int64 v5; // x22
  CondType_c *v6; // x0
  UserQuestMaster_o *UserQuestMaster; // x20
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v10; // x0

  v2 = condQuestId;
  if ( (byte_4351520 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    condQuestId = (System_Int32_array *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4351520 = 1;
  }
  if ( !v2 )
    goto LABEL_20;
  v3 = *(_QWORD *)&v2->max_length;
  if ( !v3 )
    return 0;
  if ( (int)v3 >= 1 )
  {
    v4 = 0LL;
    v5 = (int)v3;
    while ( 1 )
    {
      v6 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v6);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      condQuestId = (System_Int32_array *)NetworkManager__get_UserId(0LL);
      if ( v4 >= v2->max_length )
      {
        v10 = sub_B70798(condQuestId);
        sub_B70738(v10, 0LL);
      }
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, (int64_t)condQuestId, v2->m_Items[v4 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( (__int64)++v4 >= v5 )
        return 1;
    }
LABEL_20:
    sub_B7076C(condQuestId, method);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestPhaseClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v11; // x0

  if ( (byte_43514CA & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_43514CA = 1;
  }
  v11 = CondType_TypeInfo;
  if ( condQuestPhase <= 0 )
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear(userId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, method);
  }
  else
  {
    if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetQuestClearPhaseCount(
             (int64_t)v11,
             condQuestId,
             beforeClearQuestId,
             isCheckResetFlag,
             (const MethodInfo *)isCheckResetFlag) >= condQuestPhase;
  }
}


bool __fastcall CondType__IsQuestPhaseClear_24354440(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  int64_t UserId; // x23

  if ( (byte_43514CB & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514CB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, condQuestId, condQuestPhase, beforeClearQuestId, isCheckResetFlag, v9);
}


bool __fastcall CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  CondType_c *v5; // x0
  const MethodInfo *v6; // x3
  WarEntity_o *v7; // x8
  unsigned __int64 v8; // x22
  bool v9; // w20
  struct System_String_o *age; // x8
  unsigned __int64 klass_low; // x9
  int32_t v12; // w19
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351511 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestResetMaster___);
    sub_B70694(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351511 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v5 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v5);
    v7 = entity;
    if ( entity )
    {
      v8 = 0LL;
      v9 = 1;
      do
      {
        age = v7->fields.age;
        if ( !age )
          break;
        klass_low = LODWORD(age[1].klass);
        if ( (__int64)v8 >= (int)klass_low )
          return 0;
        if ( v8 >= klass_low )
        {
          v14 = sub_B70798(Instance);
          sub_B70738(v14, 0LL);
        }
        v12 = *((_DWORD *)&age[1].monitor + v8);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_24296868(v12, -1, 1, v6);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v9;
        v7 = entity;
        ++v8;
      }
      while ( entity );
    }
LABEL_19:
    sub_B7076C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v8; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w20
  il2cpp_array_size_t v11; // w21
  struct System_Int32_array *v12; // x8
  int v13; // w23
  int v14; // w8
  __int64 v16; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435151F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435151F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  Instance = UserServantCollectionMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               svtId,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  v8 = entity;
  if ( !entity || (costumeIds = entity->fields.costumeIds) == 0LL )
LABEL_24:
    sub_B7076C(Instance, v6);
  max_length = costumeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = v8->fields.costumeIds;
    if ( !v12 )
      goto LABEL_24;
    if ( v11 >= v12->max_length )
    {
      v16 = sub_B70798(Instance);
      sub_B70738(v16, 0LL);
    }
    Instance = (int64_t)System_Math_TypeInfo;
    v13 = v12->m_Items[v11 + 1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = v13 >= 0 ? v13 : -v13;
    if ( v14 == costumeId )
      return 1;
    if ( (int)++v11 >= max_length )
      return 0;
    v8 = entity;
    if ( !entity )
      goto LABEL_24;
  }
}


bool __fastcall CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  UserGameEntity_o *v3; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7076C(0LL, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v3->fields.birthDay > 0;
}


bool __fastcall CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IList_int__o *v7; // x20
  const MethodInfo *v8; // x4
  System_Collections_Generic_IList_int__o *v9; // x21
  __int64 v11; // x0

  if ( (byte_4351553 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4351553 = 1;
  }
  v5 = sub_B706AC(int___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_11;
  v7 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_B706AC(int___TypeInfo, 1LL);
  if ( !v5 )
LABEL_11:
    sub_B7076C(v5, v6);
  v9 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
  {
LABEL_12:
    v11 = sub_B70798(v5);
    sub_B70738(v11, 0LL);
  }
  *(_DWORD *)(v5 + 32) = routeId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_24359688(v7, v9, 1, 0, v8);
}


bool __fastcall CondType__IsRouteSelect_24359688(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v9; // x1
  UserQuestRouteMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_HashSet_int__o *v11; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x26
  int v19; // w22
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IList_int__c *v30; // x8
  int32_t v31; // w26
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x25
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  int32_t v45; // w27
  int64_t UserId; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v48; // x1
  int v49; // w27
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  int v54; // w19
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v61; // [xsp+18h] [xbp-68h]
  _DWORD v62[2]; // [xsp+20h] [xbp-60h]
  int v63; // [xsp+28h] [xbp-58h]

  if ( (byte_4351554 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351554 = 1;
  }
  v63 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (UserQuestRouteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  if ( !questIds )
    goto LABEL_90;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_B08590(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v61 = v16;
  if ( !v16 )
    sub_B7076C(0LL, v17);
  v18 = v16;
  v19 = 0;
  while ( 1 )
  {
    v20 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_17;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_17:
      v23 = sub_B08590(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8));
    if ( (Instance & 1) == 0 )
      break;
    v24 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_B08590(v18, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      v18 = v61;
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v18, *(_QWORD *)(v27 + 8));
    if ( !routeIds )
      sub_B7076C(v28, v29);
    v30 = routeIds->klass;
    v31 = v28;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v33 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v34 = (__int64)&v30->vtable[*v33].method;
    }
    else
    {
LABEL_31:
      v34 = sub_B08590(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v34)(
            routeIds,
            *(_QWORD *)(v34 + 8));
    if ( !v36 )
      sub_B7076C(0LL, v35);
    while ( 1 )
    {
      v37 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_38;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_38:
        v40 = sub_B08590(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
        break;
      v41 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v42 = 0LL;
        v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v43 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_45;
        }
        v44 = v41 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_45:
        v44 = sub_B08590(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B7076C(UserId, UserId);
      haveRouteId = UserQuestRouteMaster__haveRouteId(MasterData_WarQuestSelectionMaster, UserId, v31, v45, 0LL);
      if ( haveRouteId )
      {
        if ( !v11 )
          sub_B7076C(haveRouteId, v48);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          v45,
          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v62[v19] = 100;
    v49 = ++v63;
    v50 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v51 = 0LL;
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_59;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_59:
      v53 = sub_B08590(v36, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v53)(v36, *(_QWORD *)(v53 + 8));
    v18 = v61;
    v19 = 0;
    if ( v49 )
    {
      v19 = v49;
      if ( v62[v49 - 1] == 100 )
      {
        v63 = v49 - 1;
        v19 = v49 - 1;
      }
    }
  }
  v62[v19] = 120;
  v54 = ++v63;
  if ( v18 )
  {
    v55 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 298LL) )
    {
      v56 = 0LL;
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v18 + 298LL) )
          goto LABEL_73;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_73:
      v58 = sub_B08590(v18, System_IDisposable_TypeInfo, 0LL);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v18, *(_QWORD *)(v58 + 8));
  }
  if ( v54 && v62[v54 - 1] == 120 )
    v63 = v54 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v11 )
        goto LABEL_90;
      return v11->fields._count <= count;
    case 1:
      if ( !v11 )
        goto LABEL_90;
      return v11->fields._count >= count;
    case 0:
      if ( v11 )
        return v11->fields._count == count;
LABEL_90:
      sub_B7076C(Instance, v9);
    default:
      return 0;
  }
}


bool __fastcall CondType__IsServantFriendship(
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  int64_t UserId; // x22

  if ( (byte_43514DE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514DE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_24338472(UserId, svtId, condFriendshipRank, isAbove, v7);
}


bool __fastcall CondType__IsServantFriendship_24336076(
        int64_t userSvtId,
        int32_t condFriendshipRank,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  int64_t v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  const MethodInfo *v11; // x4
  int32_t v12; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_43514E0 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514E0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_25;
  v7 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v15 = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v15, 0LL);
  if ( !entity )
LABEL_25:
    sub_B7076C(Instance, v6);
  v8 = Instance;
  v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_24338472(v8, v12, condFriendshipRank, 1, v11);
}


bool __fastcall CondType__IsServantFriendship_24338472(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  __int64 v14; // x20
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_43514DF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0LL);
  if ( isAbove )
  {
    if ( EntityDefinitely )
    {
      v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v14 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v15 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v14;
    *(_QWORD *)&v18.fields.fakeValue = v15;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v18, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_43514D8 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514D8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_24335916(UserId, condSvtId, v3);
}


bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *v9; // [xsp+0h] [xbp-30h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351513 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351513 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Instance = UserServantCollectionMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               svtId,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    if ( entity->fields.status )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   &v9,
                   eventId,
                   (const MethodInfo_21C049C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v9 )
      {
        if ( entity )
          return entity->fields.createdAt < *(_QWORD *)&v9->fields.eventId;
LABEL_18:
        sub_B7076C(Instance, v6);
      }
    }
  }
  return 0;
}


bool __fastcall CondType__IsServantGet_24335916(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_43514D9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514D9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       condSvtId,
                       0LL);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.status == 2;
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet_24355752(int64_t userSvtId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int128 v5; // q1
  int64_t v6; // x19
  __int64 v7; // x20
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_43514DA & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514DA = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_23;
  v5 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v13, 0LL);
  if ( !entity )
LABEL_23:
    sub_B7076C(Instance, v4);
  v6 = Instance;
  v8 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v16, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_24335916(v6, v10, v9);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_43514E2 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514E2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_24336644(UserId, condGroup, v3);
}


bool __fastcall CondType__IsServantGroup_24336644(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w22
  __int64 v11; // x8
  __int64 v13; // x0

  if ( (byte_43514E3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514E3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B7076C(Instance, v6);
  }
  v8 = *((_DWORD *)Instance + 6);
  v9 = Instance;
  if ( v8 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v8 )
    {
      v13 = sub_B70798(Instance);
      sub_B70738(v13, 0LL);
    }
    v11 = *((_QWORD *)v9 + (int)v10 + 4);
    if ( !v11 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Instance = UserServantCollectionMaster__GetEntityDefinitely(
                 MasterData_WarQuestSelectionMaster,
                 userId,
                 *(_DWORD *)(v11 + 20),
                 0LL);
    if ( Instance )
    {
      if ( *((_DWORD *)Instance + 10) == 2 )
        return 1;
    }
    v8 = *((_DWORD *)v9 + 6);
    if ( (int)++v10 >= v8 )
      return 0;
  }
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_43514DB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_435152A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0LL);
}


bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514CF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514CF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return entity->fields.lv >= condLv;
LABEL_12:
    sub_B7076C(Instance, v6);
  }
  return 0;
}


bool __fastcall CondType__IsServantLevel_24294316(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  int64_t UserId; // x21

  if ( (byte_43514D0 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514D0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_24338064(UserId, svtId, condLv, v5);
}


bool __fastcall CondType__IsServantLevel_24338064(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_43514D1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0LL);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLv >= condLv;
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantLimit(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_43514D3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514D3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_23:
    sub_B7076C(Instance, v8);
  }
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = 0;
    goto LABEL_15;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_23;
  v10 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v14, 0LL);
LABEL_15:
  if ( checkType == 2 )
    return v11 <= condLimitCount;
  if ( checkType == 1 )
    return v11 >= condLimitCount;
  if ( checkType )
    return 0;
  return v11 == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimitClassNum(
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x22
  int32_t v8; // w23
  int32_t v9; // w21
  __int64 v10; // x0

  v4 = targetIds;
  if ( (byte_4351543 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B70694(&CondType_TypeInfo);
    byte_4351543 = 1;
  }
  if ( !v4 )
    sub_B7076C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v10 = sub_B70798(v6);
        sub_B70738(v10, 0LL);
      }
      v9 = v4->m_Items[v7 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountServantLimitClassNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = v4->max_length;
      if ( (__int64)++v7 >= (int)v5 )
      {
        LOBYTE(v6) = 0;
        return v6;
      }
    }
    LOBYTE(v6) = 1;
  }
  return v6;
}


bool __fastcall CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t CombineVoiceLimitCount; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43514D4 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514D4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_B7076C(Instance, v8);
  }
  CombineVoiceLimitCount = 0;
LABEL_12:
  if ( checkType == 2 )
    return CombineVoiceLimitCount <= condLimitCount;
  if ( checkType == 1 )
    return CombineVoiceLimitCount >= condLimitCount;
  if ( checkType )
    return 0;
  return CombineVoiceLimitCount == condLimitCount;
}


bool __fastcall CondType__IsServantLimit_24294492(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  int64_t UserId; // x22

  if ( (byte_43514D5 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43514D5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_24338228(UserId, svtId, condLimitCount, checkType, v7);
}


bool __fastcall CondType__IsServantLimit_24338228(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_43514D6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514D6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0LL);
  if ( checkType == 2 )
  {
    if ( EntityDefinitely )
      LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount <= condLimitCount;
  }
  else if ( checkType == 1 )
  {
    if ( EntityDefinitely )
      LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount >= condLimitCount;
  }
  else if ( checkType )
  {
    LOBYTE(EntityDefinitely) = 0;
  }
  else if ( EntityDefinitely )
  {
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount == condLimitCount;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsShopGroupLimit(int32_t condValue, int32_t limitNum, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  __int64 v9; // x23
  UserShopMaster_o *v10; // x21
  il2cpp_array_size_t v11; // w24
  int32_t v12; // w25
  ShopGroupEntity_o *v13; // x8
  int32_t shopId; // w22
  __int64 v15; // x0
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4351528 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351528 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v8 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v9 = *(_QWORD *)&v8->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = (UserShopMaster_o *)Instance;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = v8->m_Items[v11];
      if ( !v13 )
        break;
      shopId = v13->fields.shopId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v10 )
        break;
      Instance = UserShopMaster__TryGetEntity(v10, &entity, Instance, shopId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v12 += entity->fields.num;
        if ( v12 >= limitNum )
          return 1;
      }
      if ( (int)++v11 >= (int)v9 )
        return 0;
      if ( v11 >= v8->max_length )
      {
        v15 = sub_B70798(Instance);
        sub_B70738(v15, 0LL);
      }
    }
LABEL_23:
    sub_B7076C(Instance, v6);
  }
  return 0;
}


bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  int v8; // w22
  UserShopMaster_o *v9; // x21
  unsigned __int64 v10; // x23
  signed __int64 v11; // x24
  __int64 v13; // x0

  if ( (byte_435150C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435150C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_16;
  v7 = *(_QWORD *)&values->max_length;
  v8 = 0;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = (UserShopMaster_o *)Instance;
    v10 = 0LL;
    v8 = 0;
    v11 = (int)v7;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( v10 >= values->max_length )
      {
        v13 = sub_B70798(Instance);
        sub_B70738(v13, 0LL);
      }
      if ( !v9 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v9, Instance, values->m_Items[v10 + 1], 0LL);
      if ( !Instance )
        break;
      ++v10;
      v8 += *(_DWORD *)(Instance + 28);
      if ( (__int64)v10 >= v11 )
        return num > 0 && v8 == num;
    }
LABEL_16:
    sub_B7076C(Instance, v6);
  }
  return num > 0 && v8 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  il2cpp_array_size_t v9; // w23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4351522 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351522 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v6 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B7076C(Instance, v4);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  v7 = *(_QWORD *)&v6->max_length;
  if ( (int)v7 < 1 )
    goto LABEL_18;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    v10 = v6->m_Items[v9];
    if ( !v10 || !v8 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v8,
                                  v10->fields.shopId,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v11 = (ShopEntity_o *)Instance;
      Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)ShopEntity__IsSoldOut(v11, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( (int)++v9 >= (int)v7 )
      goto LABEL_18;
    if ( v9 >= v6->max_length )
    {
      v12 = sub_B70798(Instance);
      sub_B70738(v12, 0LL);
    }
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4351555 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4351555 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}


bool __fastcall CondType__IsStartingMember(
        int32_t targetSvtId,
        int32_t targetLimitCount,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleServantData_o *_29045252; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleServantData__o *player_datalist; // x22
  int32_t *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_DeckMainMemberMax; // x8
  int32_t DeckMainMemberMax; // t1
  int32_t *v16; // x9
  UserDeckMaster_o *Master_WarQuestSelectionMaster; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  UserServantEntity_array *v19; // x21
  BalanceConfig_c *v20; // x0
  unsigned __int64 v21; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v23; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  int v27; // w25
  __int64 i; // x26
  unsigned __int64 v29; // x28
  __int64 v30; // x8
  __int64 v31; // x20
  __int64 v32; // x21
  __int64 v33; // x8
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4351576 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4351576 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _29045252 = (BattleServantData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL);
  if ( ((unsigned __int8)_29045252 & 1) != 0 )
  {
    if ( battleData )
    {
      player_datalist = battleData->fields.player_datalist;
      if ( player_datalist )
      {
        p_size = &player_datalist->fields._size;
        size = player_datalist->fields._size;
        v12 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        static_fields = v12->static_fields;
        DeckMainMemberMax = static_fields->DeckMainMemberMax;
        p_DeckMainMemberMax = &static_fields->DeckMainMemberMax;
        v16 = &player_datalist->fields._size;
        if ( size >= DeckMainMemberMax )
        {
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v16 = p_DeckMainMemberMax;
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v16 = &BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
            }
          }
          else
          {
            v16 = p_DeckMainMemberMax;
          }
        }
        v26 = *v16;
        if ( (int)v26 >= 1 )
        {
          v27 = targetLimitCount - (targetLimitCount < 11);
          for ( i = 4LL; ; ++i )
          {
            v29 = i - 4;
            if ( i - 4 >= (unsigned __int64)(unsigned int)*p_size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v30 = *((_QWORD *)&player_datalist->fields._items->obj.klass + i);
            if ( v30 )
            {
              if ( v29 >= (unsigned int)*p_size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v32 = *(_QWORD *)(v30 + 64);
              v31 = *(_QWORD *)(v30 + 72);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v37.fields.currentCryptoKey = v32;
              *(_QWORD *)&v37.fields.fakeValue = v31;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v37, 0LL) == targetSvtId )
              {
                if ( (v27 & 0x80000000) != 0 )
                  return 1;
                if ( v29 >= (unsigned int)*p_size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                _29045252 = (BattleServantData_o *)*((_QWORD *)&player_datalist->fields._items->obj.klass + i);
                if ( !_29045252 )
                  goto LABEL_69;
                if ( BattleServantData__getDispLimitCount(_29045252, 0, 0LL) == v27 )
                  return 1;
              }
            }
            v33 = i - 3;
            if ( v33 >= v26 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_69:
    sub_B7076C(_29045252, v8);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = (BattleServantData_o *)TutorialFlag__Get_29045252(126, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  if ( ((unsigned __int8)_29045252 & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            Master_WarQuestSelectionMaster,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            Master_WarQuestSelectionMaster,
                                            0LL);
  v19 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( v20->static_fields->DeckMainMemberMax <= (signed int)v19->max_length )
    {
      v21 = 0LL;
      m_Items = v19->m_Items;
      while ( 1 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v21 >= v20->static_fields->DeckMainMemberMax )
          break;
        if ( v21 >= v19->max_length )
          goto LABEL_68;
        v23 = m_Items[v21];
        if ( v23 )
        {
          v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
          v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v36.fields.currentCryptoKey = v25;
          *(_QWORD *)&v36.fields.fakeValue = v24;
          v20 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v36, 0LL);
          if ( (_DWORD)v20 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v21 >= v19->max_length )
            {
LABEL_68:
              v35 = sub_B70798(v20);
              sub_B70738(v35, 0LL);
            }
            _29045252 = (BattleServantData_o *)m_Items[v21];
            if ( !_29045252 )
              goto LABEL_69;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)_29045252, 0, 0LL) == targetLimitCount - 1 )
              return 1;
          }
        }
        v20 = BalanceConfig_TypeInfo;
        ++v21;
      }
    }
  }
  return 0;
}


bool __fastcall CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int v6; // w21
  int v7; // w20

  if ( (byte_435155D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_435155D = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__GetSuperBossDamageValue(v6, v7, method) >= condVal;
    }
  }
  return result;
}


bool __fastcall CondType__IsSuperBossDamageBellow(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int v6; // w21
  int v7; // w20

  if ( (byte_435155E & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_435155E = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__GetSuperBossDamageValue(v6, v7, method) <= condVal;
    }
  }
  return result;
}


bool __fastcall CondType__IsSuperBossValueEqual(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int v6; // w20
  int v7; // w21
  int64_t Instance; // x0
  __int64 v9; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435155C & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435155C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = UserSuperBossMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v6, v7, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_18:
        sub_B7076C(Instance, v9);
      }
      return 0;
    }
  }
  return result;
}


bool __fastcall CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_435152D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_435152F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435152F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventServantFatigueMaster_o *v7; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v9; // x8
  int64_t v10; // x22
  int32_t v11; // w26
  unsigned __int64 v12; // x27
  signed __int64 v13; // x28
  int64_t v14; // x23
  __int64 v15; // x23
  Il2CppObject *lockCountObj; // x24
  int32_t v17; // w0
  int64_t v18; // x23
  __int64 v19; // x0
  bool isRecover; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4351521 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351521 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_28:
    sub_B7076C(Instance, v6);
  }
  v7 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v9 = *(_QWORD *)(RecoverySvtIdList + 24);
    v10 = RecoverySvtIdList;
    if ( (int)v9 < 1 )
    {
LABEL_25:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v11 = 0;
    v12 = 0LL;
    v13 = (int)v9;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v10 + 32 + 8 * v12);
      if ( v14 < 1 )
        goto LABEL_22;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    v14,
                                    (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_28;
      lockCountObj = Instance->fields.lockCountObj;
      v15 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = lockCountObj;
      *(_QWORD *)&v23.fields.fakeValue = v15;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v7, &recoverAt, &isRecover, eventId, v17, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v18 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v18 - RecoverySvtIdList > 0 )
          goto LABEL_22;
        ++v11;
      }
      if ( v11 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_22:
      if ( (__int64)++v12 >= v13 )
        goto LABEL_25;
      if ( v12 >= *(unsigned int *)(v10 + 24) )
      {
        v19 = sub_B70798(RecoverySvtIdList);
        sub_B70738(v19, 0LL);
      }
    }
  }
  return RecoverySvtIdList;
}


bool __fastcall CondType__IsTargetIdsCommonCount(
        System_Func_int__int__o *countFunc,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  System_Func_int__int__o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  int32_t v9; // w23
  __int64 v10; // x0

  v6 = countFunc;
  if ( (byte_4351562 & 1) == 0 )
  {
    countFunc = (System_Func_int__int__o *)sub_B70694(&Method_System_Func_int__int__Invoke__);
    byte_4351562 = 1;
  }
  if ( !targetIds )
LABEL_14:
    sub_B7076C(countFunc, targetIds);
  v7 = *(_QWORD *)&targetIds->max_length;
  countFunc = 0LL;
  if ( v7 && (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v10 = sub_B70798(countFunc);
        sub_B70738(v10, 0LL);
      }
      if ( !v6 )
        goto LABEL_14;
      countFunc = (System_Func_int__int__o *)System_Func_int__int___Invoke(
                                               v6,
                                               targetIds->m_Items[v8 + 1],
                                               (const MethodInfo_29A6900 *)Method_System_Func_int__int__Invoke__);
      v9 += (int)countFunc;
      if ( v9 >= targetNum )
        break;
      LODWORD(v7) = targetIds->max_length;
      if ( (__int64)++v8 >= (int)v7 )
      {
        LOBYTE(countFunc) = 0;
        return (char)countFunc;
      }
    }
    LOBYTE(countFunc) = 1;
  }
  return (char)countFunc;
}


bool __fastcall CondType__IsTotalTdLvCond(
        int32_t condType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int v9; // w8

  if ( (byte_4351537 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351537 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v8);
  }
  v9 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0LL);
  switch ( condType )
  {
    case 'p':
      return v9 >= 0;
    case 'o':
      return v9 < 1;
    case 'n':
      return v9 == 0;
  }
  return 0;
}


bool __fastcall CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4351539 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&EventStatus_Type_var);
    sub_B70694(&EventStatus_Type_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    byte_4351539 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B7076C(Instance, v6);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = (int)EventStatus_Type_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v16.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
    v15 = flag;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v15, v12);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v13, 0LL)
                            && UserEventEntity__getEventFlag(v9, flag, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_435153A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserQuestEntity_StatusKind_var);
    sub_B70694(&UserQuestEntity_StatusKind_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    byte_435153A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B7076C(Instance, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, questId, 0LL);
  if ( EntityFromId )
  {
    v9 = EntityFromId;
    v10 = (int)UserQuestEntity_StatusKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v16.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
    v15 = flag;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v15, v12);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v13, 0LL)
                        && UserQuestEntity__HasStatus_21541136(v9, flag, 0LL);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool __fastcall CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4351550 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&UserShopFlag_FlagKind_var);
    sub_B70694(&UserShopFlag_FlagKind_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&System_Type_TypeInfo);
    byte_4351550 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B7076C(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = (int)UserShopFlag_FlagKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v16.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
    v15 = flagKind;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v15, v12);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v13, 0LL)
                            && UserShopEntity__CheckFlagKind(v9, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  int64_t v15; // x0
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4351525 & 1) == 0 )
  {
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4351525 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_17:
    sub_B7076C(Instance, v6);
  v7 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v7 - 1] != EventRewardRootComponent_TypeInfo )
  {
    v15 = sub_B70A60(Instance);
    return CondType__IsArrivalDate(v15, v16);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0LL);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v11 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v13, 0LL);
  if ( !byte_435157B )
  {
    sub_B70694(&EventRewardSaveData_TypeInfo);
    byte_435157B = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4351514 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351514 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7076C(Instance, v6);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  int max_length; // w8
  unsigned int v6; // w9
  __int64 v8; // x0

  if ( (byte_4351542 & 1) == 0 )
  {
    sub_B70694(&ServantCommentManager_TypeInfo);
    byte_4351542 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_B7076C(0LL, v4);
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v8 = sub_B70798(ClearWarIdList);
      sub_B70738(v8, 0LL);
    }
    if ( ClearWarIdList->m_Items[v6 + 1] == condWarId )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  return 1;
}


int32_t __fastcall CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v4; // x19
  CondType___c_c *v5; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__168_0; // x20
  Il2CppObject *v8; // x21
  struct CondType___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CondType___c_c *v16; // x0
  struct CondType___c_StaticFields *v17; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__168_1; // x20
  Il2CppObject *v19; // x21
  struct CondType___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  peRenderTexture_ChangeLayerObject_o *v27; // x0
  const MethodInfo *v28; // x3
  int32_t changeMaterial_high; // w19

  if ( (byte_435154E & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_WarEntity___ctor__);
    sub_B70694(&System_Comparison_WarEntity__TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_WarEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_WarEntity__get_Count__);
    sub_B70694(&Method_System_Predicate_WarEntity___ctor__);
    sub_B70694(&System_Predicate_WarEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__);
    sub_B70694(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__);
    sub_B70694(&CondType___c_TypeInfo);
    byte_435154E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
  if ( !EntityList )
    return 0;
  v4 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v5 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v5 = CondType___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__168_0,
      v8,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_WarEntity___ctor__);
    v9 = CondType___c_TypeInfo->static_fields;
    v9->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__168_0,
      (System_Int32_array **)_9__168_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v4,
    (System_Comparison_T__o *)_9__168_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v16 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v16 = CondType___c_TypeInfo;
  }
  v17 = v16->static_fields;
  _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v17->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v17 = CondType___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)v17->__9;
    _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__168_1,
      v19,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_WarEntity___ctor__);
    v20 = CondType___c_TypeInfo->static_fields;
    v20->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__168_1,
      (System_Int32_array **)_9__168_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v4,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v27 )
    return 0;
  changeMaterial_high = HIDWORD(v27[1].fields.changeMaterial);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(changeMaterial_high, -1, 0, v28);
}


System_String_o *__fastcall CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v7; // x19
  System_String_o *result; // x0
  LocalizationManager_c *v9; // x0

  if ( (byte_43514C3 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3370/*"COND_TYPE_NONE"*/);
    byte_43514C3 = 1;
  }
  switch ( condType )
  {
    case 0:
      v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_3370/*"COND_TYPE_NONE"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      result = LocalizationManager__Get(v7, 0LL);
      break;
    case 1:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextQuestClear(condValue, textType, (const MethodInfo *)textType);
      break;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantLevel(condValue, textType, (const MethodInfo *)textType);
      break;
    case 7:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantLimit(condValue, textType, (const MethodInfo *)textType);
      break;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantGet(condValue, textType, (const MethodInfo *)textType);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantFriendship(condValue, textType, (const MethodInfo *)textType);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantGroup(condValue, textType, (const MethodInfo *)textType);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextEvent(condValue, textType, (const MethodInfo *)textType);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextPurchaseQpShop(condValue, textType, (const MethodInfo *)textType);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextPurchaseStoneShop(condValue, textType, (const MethodInfo *)textType);
      break;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_434F6FF )
      {
        sub_B70694(&LocalizationManager_TypeInfo);
        byte_434F6FF = 1;
      }
      v9 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager_TypeInfo;
      }
      result = v9->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *__fastcall CondType__OpenConditionTextEvent(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventEntity_o *Entity; // x20
  System_String_o *v8; // x19
  System_String_o *v9; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_43514E6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3369/*"COND_TYPE_EVENT"*/);
    byte_43514E6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_3369/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B7076C(Instance, v6);
  v9 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName(Entity, 0LL);
  return System_String__Format(v9, EventName, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_43514E9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3371/*"COND_TYPE_PURCHASE_QP_SHOP"*/);
    byte_43514E9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_3371/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B7076C(Instance, v6);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_43514EE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3372/*"COND_TYPE_PURCHASE_STONE_SHOP"*/);
    byte_43514EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_3372/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B7076C(Instance, v6);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  LocalizationManager_c *v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514C9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3373/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_43514C9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         condQuestId,
         (const MethodInfo_21C049C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_3373/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = LocalizationManager__Get(v7, 0LL);
    if ( entity )
      return System_String__Format(Master_WarQuestSelectionMaster, (Il2CppObject *)entity->fields.age, 0LL);
LABEL_22:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  return v9->static_fields->unknownNameText;
}


System_String_o *__fastcall CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  WarMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v12; // x22
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v16; // x19
  Il2CppObject *age; // x20
  System_String_o *v18; // x19
  Il2CppObject *v19; // x0
  LocalizationManager_c *v20; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-24h] BYREF

  v22 = condQuestPhase;
  if ( (byte_43514CD & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_WarMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3374/*"COND_TYPE_QUEST_PHASE_CLEAR"*/);
    sub_B70694(&StringLiteral_3373/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_43514CD = 1;
  }
  entity = 0LL;
  if ( getWarName )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    QuestId = WarMaster__getByLastQuestId(Master_WarQuestSelectionMaster, condQuestId, 0LL);
    if ( QuestId )
    {
      v12 = QuestId;
      v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_3373/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get(v13, 0LL);
      return System_String__Format(v14, (Il2CppObject *)v12->fields.name, 0LL);
    }
  }
  if ( condQuestPhase <= 0 )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionTextQuestClear(condQuestId, textType, (const MethodInfo *)textType);
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           condQuestId,
           (const MethodInfo_21C049C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v16 = System_String__Concat_44758168((System_String_o *)StringLiteral_3374/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (WarMaster_o *)LocalizationManager__Get(v16, 0LL);
      if ( entity )
      {
        age = (Il2CppObject *)entity->fields.age;
        v18 = (System_String_o *)Master_WarQuestSelectionMaster;
        v19 = (Il2CppObject *)System_Int32__ToString((int32_t)&v22, 0LL);
        return System_String__Format_44753704(v18, age, v19, 0LL);
      }
LABEL_38:
      sub_B7076C(Master_WarQuestSelectionMaster, v10);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_434F6FF )
    {
      sub_B70694(&LocalizationManager_TypeInfo);
      byte_434F6FF = 1;
    }
    v20 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager_TypeInfo;
    }
    return v20->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43514E1 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3375/*"COND_TYPE_SERVANT_FRIENDSHIP"*/);
    byte_43514E1 = 1;
  }
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_3375/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v5, 0LL);
  v10 = condFriendshipRank;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v7);
  return System_String__Format(v6, v8, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ServantEntity_o *Entity; // x20
  System_String_o *v8; // x19
  System_String_o *v9; // x19
  Il2CppObject *Name; // x1

  if ( (byte_43514DD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3376/*"COND_TYPE_SERVANT_GET"*/);
    byte_43514DD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                condSvtId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_3376/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B7076C(Instance, v6);
  v9 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName(Entity, -1, -1, 0LL);
  return System_String__Format(v9, Name, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43514E4 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3377/*"COND_TYPE_SERVANT_GROUP"*/);
    byte_43514E4 = 1;
  }
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_3377/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v5, 0LL);
  v10 = condGroup;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v7);
  return System_String__Format(v6, v8, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43514D2 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3378/*"COND_TYPE_SERVANT_LEVEL"*/);
    byte_43514D2 = 1;
  }
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_3378/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v5, 0LL);
  v10 = condLv;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v7);
  return System_String__Format(v6, v8, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43514D7 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3379/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/);
    byte_43514D7 = 1;
  }
  v5 = System_String__Concat_44758168((System_String_o *)StringLiteral_3379/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v5, 0LL);
  v10 = condLimitCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v7);
  return System_String__Format(v6, v8, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w19
  SpotPathEntity_o *v9; // x19
  int32_t name; // w20
  int32_t age_high; // w21

  if ( (byte_43514B9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
    sub_B70694(&EventSpotMoveManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514B9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  bannerId = Entity->fields.bannerId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v6);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bannerId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = (SpotPathEntity_o *)Entity;
    age_high = HIDWORD(Entity->fields.age);
    name = (int32_t)Entity->fields.name;
    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    }
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(age_high, name, v9, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v9; // [xsp+8h] [xbp-28h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_43514B8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514B8 = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                  (TotalEventRaidMaster_o *)Instance,
                                  &v9,
                                  eventId,
                                  targetId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_15;
      defeatedAt = v9->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_B7076C(Instance, v6);
      }
    }
  }
  return 0;
}


bool __fastcall CondType__TrySuperBossPrimaryKey(
        int32_t condId,
        int32_t *eventId,
        int32_t *bossId,
        const MethodInfo *method)
{
  *eventId = condId / 100;
  *bossId = condId % 100;
  return *eventId && condId % 100 != 0;
}


bool __fastcall CondType__UserEventMapValueContains(int32_t mapId, int64_t target, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v10; // x21
  __int64 v11; // x0

  if ( (byte_435154F & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_long___);
    sub_B70694(&Method_DataManager_GetMasterData_MapMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435154F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  datalist = Instance->fields.datalist;
  if ( !datalist )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)datalist )
  {
    v11 = sub_B70798(Instance);
    sub_B70738(v11, 0LL);
  }
  lookup = Instance->fields.lookup;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !lookup || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    HIDWORD(lookup->fields.buckets),
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_B7076C(Instance, v6);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_22768304(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v10 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_1FCC0C4 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B7076C(0LL, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_162_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8
  bool v3; // vf
  int32_t v4; // w8

  if ( !collection )
    sub_B7076C(0LL, method);
  maxLv = collection->fields.maxLv;
  v3 = __OFSUB__(maxLv, 1);
  v4 = maxLv - 1;
  if ( v4 < 0 != v3 )
    return 0;
  else
    return v4;
}


int32_t __fastcall CondType___CountServantClassTotalLimitUp_g__CountFunc_157_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B7076C(0LL, method);
  return collection->fields.maxLimitCount;
}


int32_t __fastcall CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_190_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  unsigned __int64 currentCryptoKey; // x9
  UserServantCollectionEntity_o *v3; // x8
  __int64 v4; // x0
  unsigned __int64 v5; // x10
  int32_t *p_fakeValue; // x8
  int32_t v7; // w12
  __int64 v8; // x0

  if ( !collection
    || (collection = (UserServantCollectionEntity_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL )
  {
    sub_B7076C(collection, method);
  }
  currentCryptoKey = (unsigned int)collection->fields.svtId.fields.currentCryptoKey;
  v3 = collection;
  if ( (__int64)(currentCryptoKey << 32) < 1 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = 0LL;
    p_fakeValue = &v3->fields.svtId.fields.fakeValue;
    do
    {
      if ( v5 >= currentCryptoKey )
      {
        v8 = sub_B70798(v4);
        sub_B70738(v8, 0LL);
      }
      v7 = p_fakeValue[v5++];
      v4 = (unsigned int)(v4 + v7 - 1);
    }
    while ( (__int64)v5 < (int)currentCryptoKey );
  }
  return v4;
}


bool __fastcall CondType__checkCondTypeRaidAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  char v9; // w8
  TotalEventRaidEntity_o *v11; // [xsp+0h] [xbp-30h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43514BA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514BA = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v9 = 0;
    return v9 & 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v8);
  }
  Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                (TotalEventRaidMaster_o *)Instance,
                                &v11,
                                targetId,
                                condValue,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v11 )
    goto LABEL_14;
  v9 = (entity->fields.maxHp > v11->fields.totalDamage) ^ alive ^ 1;
  return v9 & 1;
}


bool __fastcall CondType__checkCondTypeRaidGroupAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v11; // x22
  unsigned int v12; // w23
  EventRaidEntity_o *v13; // x24
  char v14; // w8
  __int64 v16; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43514BB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514BB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_B7076C(Instance, v8);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v14 = 0;
  }
  else
  {
    v11 = (TotalEventRaidMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v16 = sub_B70798(Instance);
        sub_B70738(v16, 0LL);
      }
      v13 = EventRaidEntityArray->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_19;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v11, &entity, targetId, v13->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v13->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
    v14 = 1;
  }
  return (v14 ^ ~alive) & 1;
}


bool __fastcall CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43514B7 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43514B7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_18:
    sub_B7076C(Instance, v6);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CondType_CountDelegate___ctor(
        CondType_CountDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CondType_CountDelegate__BeginInvoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = level;
  v13 = id;
  if ( (byte_434FAF0 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    byte_434FAF0 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, *(_QWORD *)&level);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B7063C(result, 0LL, method);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType_CountDelegate__Invoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  CondType_CountDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  int32_t result; // w0
  __int64 v19; // x0
  __int64 (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  CondType_CountDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  __int64 (__fastcall *v24)(_QWORD, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CondType_CountDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v32;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (CondType_CountDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&id);
      if ( (sub_B706C4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      result = v24((unsigned int)id, (unsigned int)level, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return result;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B706BC(v23);
      v26 = sub_B70AC0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v27 = *v22;
          v28 = *(_QWORD *)(v23 + 24);
          v29 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_B08590(v22, v28, v29);
          }
          v17 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v23);
        result = (*v20)(v22, (unsigned int)id, (unsigned int)level, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v22, class_0, v11);
          }
          result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
                     v22,
                     (unsigned int)id,
                     (unsigned int)level,
                     *(_QWORD *)(v16 + 8));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22
                                                                                + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                                + 312))(
                     v22,
                     (unsigned int)id,
                     (unsigned int)level,
                     *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(
               v22,
               (unsigned int)id,
               (unsigned int)level,
               v23);
    goto LABEL_36;
  }
  return 0;
}


void __fastcall CondType___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FAE7 & 1) == 0 )
  {
    sub_B70694(&CondType___c_TypeInfo);
    byte_434FAE7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CondType___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CondType___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall CondType___c___ctor(CondType___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_1(
        CondType___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_434FAEB & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B70694(&Method_System_Linq_Enumerable_Count_int___);
    byte_434FAEB = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1CB8220 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_434FAEC & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B70694(&Method_System_Linq_Enumerable_Count_int___);
    byte_434FAEC = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1CB8220 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestLevel; // w1

  if ( (byte_434FAE8 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAE8 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestLevel = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_41127884(current, ExchangeServantHighestLevel, 0LL);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestSkillLevel; // w1

  if ( (byte_434FAE9 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAE9 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestSkillLevel = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_41127884(current, ExchangeServantHighestSkillLevel, 0LL);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestFriendShipRank; // w1

  if ( (byte_434FAEA & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAEA = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestFriendShipRank = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  return UnityEngine_Mathf__Max_41127884(current, ExchangeServantHighestFriendShipRank, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__168_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7076C(this, 0LL);
  return ent->fields.lastQuestId >= 1 && WarEntity__HasFlag(ent, 128, 0LL);
}


void __fastcall CondType___c__DisplayClass115_0___ctor(
        CondType___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass115_0___IsEventRaceGoalScriptPlayed_b__0(
        CondType___c__DisplayClass115_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.groupId == x;
}


void __fastcall CondType___c__DisplayClass158_0___ctor(
        CondType___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass158_0___CountServantFriendShipClassNum_g__CountFunc_0(
        CondType___c__DisplayClass158_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B7076C(this, 0LL);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL) >= this->fields.friendShipRank;
}


void __fastcall CondType___c__DisplayClass189_0___ctor(
        CondType___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass189_0___CountServantTargetSkillLvClassNum_g__CountFunc_0(
        CondType___c__DisplayClass189_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  CondType___c__DisplayClass189_0_o *v3; // x19
  unsigned __int64 klass_low; // x9
  CondType___c__DisplayClass189_0_o *v5; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x10
  void **p_monitor; // x8
  int32_t v9; // w12
  __int64 v10; // x0

  if ( !collection
    || (v3 = this,
        (this = (CondType___c__DisplayClass189_0_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL) )
  {
    sub_B7076C(this, collection);
  }
  klass_low = LODWORD(this[1].klass);
  v5 = this;
  if ( (__int64)(klass_low << 32) < 1 )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
    p_monitor = &v5[1].monitor;
    do
    {
      if ( v7 >= klass_low )
      {
        v10 = sub_B70798(v6);
        sub_B70738(v10, 0LL);
      }
      v9 = *((_DWORD *)p_monitor + v7++);
      if ( v9 < v3->fields.skillLv )
        v6 = (unsigned int)v6;
      else
        v6 = (unsigned int)(v6 + 1);
    }
    while ( (__int64)v7 < (int)klass_low );
  }
  return v6;
}


void __fastcall CondType___c__DisplayClass195_0___ctor(
        CondType___c__DisplayClass195_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass195_0___CountClassBoardSquareReleased_b__0(
        CondType___c__DisplayClass195_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.targetId;
}


void __fastcall CondType___c__DisplayClass19_0___ctor(CondType___c__DisplayClass19_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__0(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_434FAED & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAED = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, 0LL);
}


bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_434FAEE & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAEE = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, 0LL);
}


bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_434FAEF & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434FAEF = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, targetNum, 0LL);
}


void __fastcall CondType___c__DisplayClass28_0___ctor(CondType___c__DisplayClass28_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass28_0___CheckGroupMaterialQuest_b__0(
        CondType___c__DisplayClass28_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}