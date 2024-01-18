void __fastcall CondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  CondType_c *v10; // x8
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v12; // x19
  struct CondType_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CondType_c *v20; // x8

  if ( (byte_4188042 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v9);
    byte_4188042 = 1;
  }
  CondType_TypeInfo->static_fields->EVENT_POINT_DEVIDER = 100;
  CondType_TypeInfo->static_fields->EVENT_RACE_DEVIDER = 100;
  v10 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->TARGET_PARAM_NUM = 2;
  static_fields = v10->static_fields;
  static_fields->uQuestMst = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->uQuestMst, 0LL, v2, v3, v4, v5, v6, v7);
  v12 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v12,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v13 = CondType_TypeInfo->static_fields;
  v13->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v13->cachedServantEquipIdStrDic,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->lastUserId = -1LL;
  v20->static_fields->RAID_DAMAGE_RATE_FRACTION = 1000LL;
}


void __fastcall CondType___ctor(CondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall CondType__CheckGroupMaterialQuest(
        UserQuestEntity_o *userQuestEntity,
        int32_t condQuestId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  CondType___c__DisplayClass28_0_o *v18; // x19
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v22; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v25; // x22
  UserQuestEntity_o *v26; // x21
  UserQuestEntity_o *IncludedGroupQuest; // x22
  CondType___c_c *v28; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x24
  Il2CppObject *v31; // x25
  struct CondType___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarQuestSelectionMaster_o *v39; // x0
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v42; // x25
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x20

  if ( (byte_4187F94 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&condQuestId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____67414608, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v9);
    sub_B2C35C(&Method_System_Func_UserQuestEntity__bool___ctor__, v10);
    sub_B2C35C(&System_Func_UserQuestEntity__bool__TypeInfo, v11);
    sub_B2C35C(&MaterialGroupClearHistoryManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v14);
    sub_B2C35C(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v15);
    sub_B2C35C(&CondType___c__DisplayClass28_0_TypeInfo, v16);
    sub_B2C35C(&CondType___c_TypeInfo, v17);
    byte_4187F94 = 1;
  }
  v18 = (CondType___c__DisplayClass28_0_o *)sub_B2C42C(CondType___c__DisplayClass28_0_TypeInfo);
  CondType___c__DisplayClass28_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_38;
  v18->fields.condQuestId = condQuestId;
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
    Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v22 = Master_WarQuestSelectionMaster;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                         Master_WarQuestSelectionMaster,
                         v18->fields.condQuestId,
                         0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v22,
                                       IncludedGroups,
                                       0LL);
      v25 = QuestScriptMaterialNextMaster__GetIncludedGroups(v22, v18->fields.condQuestId, 0LL);
      v26 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      }
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v25, 0LL);
      v28 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v28 = CondType___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_1,
          v31,
          Method_CondType___c__CheckGroupMaterialQuest_b__28_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v32 = CondType___c_TypeInfo->static_fields;
        v32->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v32->__9__28_1,
          (System_Int32_array **)_9__28_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v26 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                 v22,
                 v18->fields.condQuestId,
                 v26,
                 IncludedGroupQuest,
                 0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v39 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v26->fields.questId;
      questPhase = v26->fields.questPhase;
      v42 = (UserQuestMaster_o *)v39;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0LL);
      if ( v42 )
      {
        Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                                              v42,
                                                                              questId,
                                                                              questPhase,
                                                                              (int64_t)Master_WarQuestSelectionMaster,
                                                                              0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v26->fields.updatedAt;
          v26 = (UserQuestEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster[1].klass = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                   v22,
                   v18->fields.condQuestId,
                   v26,
                   IncludedGroupQuest,
                   0LL);
        }
      }
    }
LABEL_38:
    sub_B2C434(Master_WarQuestSelectionMaster, v20);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)v18,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserQuestEntity__bool___ctor__);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                v45,
                                (System_Func_TSource__bool__o *)v46,
                                (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____67414608);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v9; // x21
  int32_t v10; // w22
  unsigned int v11; // w24
  UserServantCollectionMaster_c **v12; // x8
  UserServantCollectionEntity_o *v13; // x23
  int v14; // w8
  unsigned int v15; // w9
  __int64 v17; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418802D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, *(_QWORD *)&targetNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_418802D = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v9 = Master_WarQuestSelectionMaster;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_27;
      v12 = &v9->klass + (int)v11;
      v13 = (UserServantCollectionEntity_o *)v12[4];
      if ( !v13 )
        goto LABEL_28;
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                          (UserServantCollectionEntity_o *)v12[4],
                                                                          0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(
                                                                            v13,
                                                                            0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_28;
        v14 = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
        if ( v14 >= 1 )
          break;
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
      if ( (int)++v11 >= (int)MasterName_k__BackingField )
        return v10;
    }
    v15 = 0;
    while ( v15 < v14 )
    {
      if ( *((_DWORD *)&Master_WarQuestSelectionMaster->fields.list + (int)v15) >= skillLv )
        ++v10;
      if ( targetNum && v10 >= targetNum )
        return v10;
      if ( (int)++v15 >= v14 )
        goto LABEL_23;
    }
LABEL_27:
    v17 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v17, 0LL);
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
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
  CondType___c__DisplayClass195_0_o *v17; // x20
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  CondType___c_c *v23; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__195_1; // x20
  Il2CppObject *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct CondType___c_StaticFields *v33; // x0
  BattleServantConfConponent_o *p__9__195_1; // x0
  CondType___c_c *v35; // x0
  struct CondType___c_StaticFields *v36; // x8
  Il2CppObject *v37; // x21
  struct CondType___c_StaticFields *v38; // x0

  if ( (byte_4188034 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v7);
    sub_B2C35C(&Method_System_Func_UserClassBoardSquareEntity__int___ctor__, v8);
    sub_B2C35C(&Method_System_Func_UserClassBoardSquareEntity__bool___ctor__, v9);
    sub_B2C35C(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v10);
    sub_B2C35C(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v11);
    sub_B2C35C(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__, v12);
    sub_B2C35C(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__, v13);
    sub_B2C35C(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__, v14);
    sub_B2C35C(&CondType___c__DisplayClass195_0_TypeInfo, v15);
    sub_B2C35C(&CondType___c_TypeInfo, v16);
    byte_4188034 = 1;
  }
  v17 = (CondType___c__DisplayClass195_0_o *)sub_B2C42C(CondType___c__DisplayClass195_0_TypeInfo);
  CondType___c__DisplayClass195_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_27;
  v17->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B2C434(Master_WarQuestSelectionMaster, v19);
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           Master_WarQuestSelectionMaster,
                                                                                           (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               Entitys_WarQuestSelectionEntity,
                                                               (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v17->fields.targetId )
  {
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_UserClassBoardSquareEntity__bool___ctor__);
    v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v21,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v23 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v23 = CondType___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v26,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v33 = CondType___c_TypeInfo->static_fields;
      v33->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v33->__9__195_1;
LABEL_25:
      sub_B2C2F8(p__9__195_1, (System_Int32_array **)_9__195_1, v27, v28, v29, v30, v31, v32);
    }
  }
  else
  {
    v35 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v35 = CondType___c_TypeInfo;
    }
    v36 = v35->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v36->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v36 = CondType___c_TypeInfo->static_fields;
      }
      v37 = (Il2CppObject *)v36->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v37,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        (const MethodInfo_27127B0 *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v38 = CondType___c_TypeInfo->static_fields;
      v38->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v38->__9__195_2;
      goto LABEL_25;
    }
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           v21,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t __fastcall CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *v14; // x21
  int MasterName_k__BackingField; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x23
  int32_t v17; // w22
  int v18; // w8
  UserServantCollectionMaster_c **v19; // x8
  UserServantCollectionMaster_c *v20; // x24
  void *data; // x25
  const char *namespaze; // x26
  __int64 v24; // x0
  WarEntity_o *v25; // [xsp+8h] [xbp-68h] BYREF
  __int64 findSum; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4188031 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, countFunc);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int__Invoke__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4188031 = 1;
  }
  entity = 0LL;
  v25 = 0LL;
  findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         classId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    v14 = Master_WarQuestSelectionMaster;
    if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      MasterName_k__BackingField = (int)v14->fields._MasterName_k__BackingField;
      if ( MasterName_k__BackingField >= 1 )
      {
        v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v17 = 0;
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)MasterName_k__BackingField )
          {
            v24 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v24, 0LL);
          }
          v19 = &v14->klass + v18;
          v20 = v19[4];
          if ( !v20 )
            break;
          Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                              (UserServantCollectionEntity_o *)v19[4],
                                                                              0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            namespaze = v20->_1.namespaze;
            data = v20->_1.byval_arg.data;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v28.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v28.fields.fakeValue = data;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                v28,
                                                                                0LL);
            if ( !v16 )
              break;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                v16,
                                                                                &v25,
                                                                                (int32_t)Master_WarQuestSelectionMaster,
                                                                                (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !v25 )
                break;
              if ( v25->fields.startType == classId )
              {
                if ( !countFunc )
                  break;
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)System_Func_UserServantCollectionEntity__int___Invoke(
                                                                                    countFunc,
                                                                                    (UserServantCollectionEntity_o *)v20,
                                                                                    (const MethodInfo_27127C4 *)Method_System_Func_UserServantCollectionEntity__int__Invoke__);
                v17 += (int)Master_WarQuestSelectionMaster;
              }
            }
          }
          v18 = findSum + 1;
          LODWORD(findSum) = v18;
          MasterName_k__BackingField = (int)v14->fields._MasterName_k__BackingField;
          if ( v18 >= MasterName_k__BackingField )
            return v17;
        }
LABEL_35:
        sub_B2C434(Master_WarQuestSelectionMaster, v13);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
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
  CondType_c *v18; // x0
  int64_t lastUserId; // x22
  __int64 v20; // x1
  CondType_c *v21; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *cachedServantEquipIdStrDic; // x0
  UserServantCollectionMaster_o *v23; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ServantEquipCollectionList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  ServantLimitMaster_o *v26; // x21
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v30; // x0
  WarEntity_o *v31; // x23
  struct System_String_o *age; // x24
  __int64 v33; // x25
  __int64 v34; // x0
  ServantLimitEntity_o *v35; // x24
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // [xsp+0h] [xbp-A0h]
  int32_t v43; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_418801B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418801B = 1;
  }
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
  v18 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v18 = CondType_TypeInfo;
  }
  lastUserId = v18->static_fields->lastUserId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( lastUserId != NetworkManager__get_UserId(0LL) )
  {
    v21 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v21->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_55:
      sub_B2C434(cachedServantEquipIdStrDic, v20);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      cachedServantEquipIdStrDic,
      (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v23 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v23 )
    goto LABEL_55;
  ServantEquipCollectionList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserServantCollectionMaster__getServantEquipCollectionList(v23, CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic, 0LL);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)cachedServantEquipIdStrDic,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  v26 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)cachedServantEquipIdStrDic,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_55;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)cachedServantEquipIdStrDic;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    ServantEquipCollectionList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v43 = 0;
  v46 = v44;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B2C434(v39, v40);
    if ( LODWORD(v46.fields.current[2].monitor) == 2 )
    {
      monitor = v46.fields.current[1].monitor;
      klass = v46.fields.current[2].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v47.fields.fakeValue = klass;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(v30, (unsigned int)v30);
      v31 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              MasterData_WarQuestSelectionMaster,
              v30,
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v31 )
      {
        v33 = *(_QWORD *)&v31->fields.id;
        age = v31->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v33;
        *(_QWORD *)&v48.fields.fakeValue = age;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
        if ( !v26 )
          sub_B2C434(v34, (unsigned int)v34);
        v35 = ServantLimitMaster__GetEntity(v26, v34, 0, 0LL);
        if ( v35
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v31, 0LL)
          && v35->fields.rarity == targetId % 100
          && SHIDWORD(current[2].monitor) >= targetId / 100 )
        {
          if ( !v42 )
            sub_B2C434(0LL, v36);
          v37 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v42,
                  &entity,
                  (int32_t)v31[1].monitor,
                  (const MethodInfo_24E412C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v37 )
            goto LABEL_48;
          if ( !entity )
            sub_B2C434(v37, v38);
          if ( *(&entity->fields.id + 1) != 3 )
LABEL_48:
            ++v43;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v43;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188038 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188038 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  UserEventRandomMissionMaster_o *v7; // x20
  int32_t v8; // w21
  unsigned __int64 v9; // x22
  __int64 v11; // x0

  if ( (byte_4188025 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188025 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_18;
  v6 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = Master_WarQuestSelectionMaster;
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
      {
        v11 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v11, 0LL);
      }
      if ( !v7 )
        break;
      Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                                           v7,
                                                                           missionIds->m_Items[v9 + 1],
                                                                           0LL);
      if ( Master_WarQuestSelectionMaster )
        v8 += HIDWORD(Master_WarQuestSelectionMaster->fields.list);
      LODWORD(v6) = missionIds->max_length;
      if ( (__int64)++v9 >= (int)v6 )
        return v8;
    }
LABEL_18:
    sub_B2C434(Master_WarQuestSelectionMaster, v5);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4188015 & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v4);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5);
    byte_4188015 = 1;
  }
  v6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v6,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4188018 & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v4);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5);
    byte_4188018 = 1;
  }
  v6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v6,
    0LL,
    Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4188013 & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v4);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5);
    byte_4188013 = 1;
  }
  v6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v6,
    0LL,
    Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418802F & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v4);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5);
    byte_418802F = 1;
  }
  v6 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v6,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CondType___c__DisplayClass158_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_4188014 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v3);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    sub_B2C35C(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__, v5);
    sub_B2C35C(&CondType___c__DisplayClass158_0_TypeInfo, v6);
    byte_4188014 = 1;
  }
  v7 = (CondType___c__DisplayClass158_0_o *)sub_B2C42C(CondType___c__DisplayClass158_0_TypeInfo);
  CondType___c__DisplayClass158_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v10 = targetId / 100;
  v7->fields.friendShipRank = targetId % 100;
  v11 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v10, (System_Func_UserServantCollectionEntity__int__o *)v11, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x21
  int datalist; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x23
  __int64 v16; // x26
  int32_t v17; // w22
  __int64 v18; // x24
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v22; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4188017 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&level);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4188017 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         classId,
         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v13 = Instance;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      datalist = (int)v13->fields.datalist;
      if ( datalist >= 1 )
      {
        v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v16 = 0LL;
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= datalist )
          {
            v22 = sub_B2C460(Instance);
            sub_B2C400(v22, 0LL);
          }
          v18 = *((_QWORD *)&v13->fields.lookup + v16);
          if ( !v18 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(
                                        *((UserServantCollectionEntity_o **)&v13->fields.lookup + v16),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && *(_DWORD *)(v18 + 44) >= level )
          {
            v20 = *(_QWORD *)(v18 + 24);
            v19 = *(_QWORD *)(v18 + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v24.fields.currentCryptoKey = v20;
            *(_QWORD *)&v24.fields.fakeValue = v19;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
            if ( !v15 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v15,
                                          (int32_t)Instance,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == classId )
              ++v17;
          }
          datalist = (int)v13->fields.datalist;
          if ( (int)++v16 >= datalist )
            return v17;
        }
LABEL_28:
        sub_B2C434(Instance, v12);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataManager_o *v10; // x20

  if ( (byte_4188019 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&level);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188019 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B2C434(Instance, v8);
  }
  v10 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v10->fields.masterDataBytes) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int v11; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v13; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  __int64 v15; // x26
  int32_t v16; // w23
  int v17; // w28
  UserServantCollectionEntity_o *v18; // x20
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v22; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4188012 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188012 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  v11 = targetId / 100;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         targetId / 100,
         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_28;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_28;
    v13 = *(_QWORD *)&CollectionList->max_length;
    if ( v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v15 = 0LL;
        v16 = 0;
        v17 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v15 >= (unsigned int)v13 )
          {
            v22 = sub_B2C460(Instance);
            sub_B2C400(v22, 0LL);
          }
          v18 = CollectionList->m_Items[v15];
          if ( !v18 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v15], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v24.fields.currentCryptoKey = v20;
            *(_QWORD *)&v24.fields.fakeValue = v19;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
            if ( !v14 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v14,
                                          (int32_t)Instance,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == v11 && v18->fields.maxLimitCount >= v17 )
              ++v16;
          }
          LODWORD(v13) = CollectionList->max_length;
          if ( (int)++v15 >= (int)v13 )
            return v16;
        }
LABEL_28:
        sub_B2C434(Instance, v10);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CondType___c__DisplayClass189_0_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v11; // x19
  const MethodInfo *v12; // x2

  if ( (byte_418802E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v3);
    sub_B2C35C(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    sub_B2C35C(&Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__, v5);
    sub_B2C35C(&CondType___c__DisplayClass189_0_TypeInfo, v6);
    byte_418802E = 1;
  }
  v7 = (CondType___c__DisplayClass189_0_o *)sub_B2C42C(CondType___c__DisplayClass189_0_TypeInfo);
  CondType___c__DisplayClass189_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v10 = targetId / 100;
  v7->fields.skillLv = targetId % 100;
  v11 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    (const MethodInfo_27127B0 *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v10, (System_Func_UserServantCollectionEntity__int__o *)v11, v12);
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
  if ( (byte_4188016 & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_B2C35C(&CondType_TypeInfo, func);
    byte_4188016 = 1;
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
        v10 = sub_B2C460(targetParam);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  int v6; // w9
  int v7; // w10
  int32_t v8; // w8
  __int64 v9; // x11
  __int64 v11; // x0

  if ( (byte_418800C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418800C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_26998172((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    v6 = *((_DWORD *)Instance + 6);
    if ( v6 >= 1 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)v6 )
        {
          v11 = sub_B2C460(Instance);
          sub_B2C400(v11, 0LL);
        }
        v9 = *((_QWORD *)Instance + v7 + 4);
        if ( !v9 )
          break;
        ++v7;
        if ( *(_DWORD *)(v9 + 28) == tokenId )
          ++v8;
        if ( v7 >= v6 )
          return v8;
      }
LABEL_19:
      sub_B2C434(Instance, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4187FFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FFA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v6);
  return UserEventPointMaster__GetEventPointTotal(
           MasterData_WarQuestSelectionMaster,
           (int64_t)Instance,
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418803C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418803C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188036 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188036 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418803A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418803A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187F8B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187F8B = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_13:
    sub_B2C434(Instance, v6);
  }
  return 0;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  EventMissionMaster_o *v8; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v10; // x19
  int32_t v11; // w20
  unsigned __int64 v12; // x23
  int32_t v13; // w21
  __int64 v14; // x0

  if ( (byte_4187FC3 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FC3 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v8,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B2C434(Instance, v7);
    }
    datalist = Instance->fields.datalist;
    v10 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)datalist )
      {
        v14 = sub_B2C460(Instance);
        sub_B2C400(v14, 0LL);
      }
      v13 = *((_DWORD *)&v10->fields.lookup + v12);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionClear(v13, v7);
      LODWORD(datalist) = v10->fields.datalist;
      ++v12;
      v11 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v12 < (int)datalist );
    return v11;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  EventMissionMaster_o *v8; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v10; // x19
  int32_t v11; // w20
  unsigned __int64 v12; // x23
  int32_t v13; // w21
  __int64 v14; // x0

  if ( (byte_4187FC4 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FC4 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v8,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B2C434(Instance, v7);
    }
    datalist = Instance->fields.datalist;
    v10 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)datalist )
      {
        v14 = sub_B2C460(Instance);
        sub_B2C400(v14, 0LL);
      }
      v13 = *((_DWORD *)&v10->fields.lookup + v12);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionAchive(v13, v7);
      LODWORD(datalist) = v10->fields.datalist;
      ++v12;
      v11 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v12 < (int)datalist );
    return v11;
  }
}


int32_t __fastcall CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  int v2; // w8

  if ( cond > 8 )
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_31A2740[v2];
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetNotQuestGoupClearCount(
        int32_t questId,
        int32_t groupId,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Instance; // x0
  __int64 v14; // x1
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserQuestMaster_o *v16; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x24
  __int64 v26; // x8
  int32_t v27; // w21
  unsigned __int64 v28; // x25
  bool v29; // w22
  int32_t v30; // w23
  __int64 v32; // x0

  if ( (byte_4187FCD & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187FCD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v16 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)sameGroupQuestIds,
          (System_Int32_array **)QuestIdListByGroupId,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (v25 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_28:
    sub_B2C434(Instance, v14);
  }
  v26 = *(_QWORD *)&v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0;
    v28 = 0LL;
    v29 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
      {
        v32 = sub_B2C460(Instance);
        sub_B2C400(v32, 0LL);
      }
      v30 = v25->m_Items[v28 + 1];
      if ( v30 != questId )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsQuestClear_25746984(v30, -1, v29, v24);
        if ( (Instance & 1) != 0 )
        {
          ++v27;
        }
        else
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v16 )
            goto LABEL_28;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v16, Instance, v30, 0LL);
          if ( Instance )
          {
            Instance = UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
              ++v27;
          }
        }
      }
      LODWORD(v26) = v25->max_length;
      if ( (__int64)++v28 >= (int)v26 )
        return v27;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4187FD1 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4187FD1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) >= condVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Instance; // x0
  __int64 v8; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FC1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
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
    sub_B2C434(Instance, v8);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187FD0 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_4187FD0 = 1;
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
  __int64 v9; // x1
  CondType_c *v10; // x0
  struct CondType_StaticFields **p_static_fields; // x9
  int64_t v12; // x8
  int32_t Num; // w0
  bool v16; // w0
  const MethodInfo *v17; // x4
  CondType_c *v18; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187F92 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_4187F92 = 1;
  }
  sameGroupQuestIds = 0LL;
  v10 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v10 = CondType_TypeInfo;
  }
  p_static_fields = &v10->static_fields;
  v10->static_fields->EventId = eventId;
  if ( condType <= 71 )
  {
    if ( condType > 46 )
    {
      if ( condType == 67 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 71 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
      }
      return 0LL;
    }
    v12 = 1LL;
    switch ( condType )
    {
      case 0:
        return v12;
      case 1:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetOpenTime((const MethodInfo *)v10);
      case 22:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        v16 = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
LABEL_162:
        v12 = v16;
        break;
      case 29:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
      case 30:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          p_static_fields = &CondType_TypeInfo->static_fields;
        }
        return CondType__GetSuperBossDamage(
                 targetId,
                 condValue,
                 (*p_static_fields)->EventId,
                 *(const MethodInfo **)&eventId);
      case 34:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
      case 35:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
      case 40:
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__get_UserId(0LL);
        v18 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__GetQuestClearPhaseCount((int64_t)v18, targetId, -1, 0, v17);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType > 95 )
    {
      v12 = 0LL;
      switch ( condType )
      {
        case 174:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v12;
        case 178:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          switch ( condType )
          {
            case 136:
              if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v12;
            case 139:
              if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              v16 = CondType__TimeLimitRaidDead(eventId, targetId, (const MethodInfo *)condValue);
              goto LABEL_162;
            case 141:
              if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v10);
            default:
              if ( condType != 127 )
                return v12;
              if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              Num = CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return Num;
      }
      return v12;
    }
    if ( condType != 85 )
    {
      if ( condType == 93 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 95 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v10);
      }
      return 0LL;
    }
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    return CondType__GetEventTotalPoint(eventId, *(const MethodInfo **)&targetId);
  }
  return v12;
}


int64_t __fastcall CondType__GetProgressNumByTargetIds(
        int32_t condType,
        System_Int32_array *targetIds,
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
  __int64 v14; // x1
  int64_t result; // x0
  CondType___c_c *v16; // x0
  struct CondType___c_StaticFields *v17; // x8
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct CondType___c_StaticFields *v26; // x0
  BattleServantConfConponent_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v28; // x0
  __int64 *v29; // x8
  CondType___c_c *v30; // x0
  struct CondType___c_StaticFields *v31; // x8
  Il2CppObject *v32; // x21
  struct CondType___c_StaticFields *v33; // x0
  CondType_CountDelegate_o *v34; // x20
  const MethodInfo *v35; // x2
  CondType___c_c *v36; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  Il2CppObject *v38; // x21
  struct CondType___c_StaticFields *v39; // x0

  if ( (byte_4187F93 & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType_CountServantLevelClassNum__, targetIds);
    sub_B2C35C(&Method_CondType_CountServantLevelIdNum__, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&CondType_CountDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Aggregate_int__int___, v8);
    sub_B2C35C(&Method_System_Func_int__int__int___ctor__, v9);
    sub_B2C35C(&System_Func_int__int__int__TypeInfo, v10);
    sub_B2C35C(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v11);
    sub_B2C35C(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v12);
    sub_B2C35C(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v13);
    sub_B2C35C(&CondType___c_TypeInfo, v14);
    byte_4187F93 = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v36 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v36 = CondType___c_TypeInfo;
        }
        static_fields = v36->static_fields;
        _9__26_1 = static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B2C42C(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v38,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_1__,
          (const MethodInfo_271AD2C *)Method_System_Func_int__int__int___ctor__);
        v39 = CondType___c_TypeInfo->static_fields;
        v39->__9__26_1 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v39->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v30 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v30 = CondType___c_TypeInfo;
        }
        v31 = v30->static_fields;
        _9__26_1 = v31->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v31 = CondType___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)v31->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B2C42C(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v32,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_2__,
          (const MethodInfo_271AD2C *)Method_System_Func_int__int__int___ctor__);
        v33 = CondType___c_TypeInfo->static_fields;
        v33->__9__26_2 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v33->__9__26_2;
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
      v16 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v16 = CondType___c_TypeInfo;
      }
      v17 = v16->static_fields;
      _9__26_1 = v17->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_47;
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v17 = CondType___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)v17->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_B2C42C(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(
        _9__26_1,
        v19,
        Method_CondType___c__GetProgressNumByTargetIds_b__26_0__,
        (const MethodInfo_271AD2C *)Method_System_Func_int__int__int___ctor__);
      v26 = CondType___c_TypeInfo->static_fields;
      v26->__9__26_0 = _9__26_1;
      p__9__26_1 = (BattleServantConfConponent_o *)&v26->__9__26_0;
    }
    sub_B2C2F8(p__9__26_1, (System_Int32_array **)_9__26_1, v20, v21, v22, v23, v24, v25);
LABEL_47:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_1736EB8 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v28 = (CondType_CountDelegate_o *)sub_B2C42C(CondType_CountDelegate_TypeInfo);
    v29 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v28 = (CondType_CountDelegate_o *)sub_B2C42C(CondType_CountDelegate_TypeInfo);
    v29 = &Method_CondType_CountServantLevelIdNum__;
  }
  v34 = v28;
  CondType_CountDelegate___ctor(v28, 0LL, *v29, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v34, v35);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FBB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FBB = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B2C434(Instance, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CondType_c *v9; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v12; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w24
  QuestGroupMaster_o *v15; // x20
  __int64 v16; // x8
  int64_t v17; // x20
  unsigned __int64 v18; // x25
  int32_t v19; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v22; // x0

  if ( (byte_4187FD3 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187FD3 = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v15 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v15 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v15,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v16 = *(_QWORD *)(Instance + 24);
          v17 = Instance;
          if ( (int)v16 < 1 )
            goto LABEL_31;
          challengeNum = 0;
          v18 = 0LL;
          while ( 1 )
          {
            if ( v18 >= (unsigned int)v16 )
            {
              v22 = sub_B2C460(Instance);
              sub_B2C400(v22, 0LL);
            }
            v19 = *(_DWORD *)(v17 + 32 + 4 * v18);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v19, 0LL);
            if ( Instance )
              challengeNum += *(_DWORD *)(Instance + 56);
            LODWORD(v16) = *(_DWORD *)(v17 + 24);
            if ( (__int64)++v18 >= (int)v16 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B2C434(Instance, v12);
  }
  v9 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w20
  int64_t Instance; // x0
  __int64 v10; // x1
  QuestGroupMaster_o *v11; // x19
  __int64 v12; // x8
  int64_t v13; // x19
  unsigned __int64 v14; // x25
  int32_t v15; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v17; // x3
  __int64 v19; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187FC2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FC2 = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
            return 0;
          v8 = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)v12 )
            {
              v19 = sub_B2C460(Instance);
              sub_B2C400(v19, 0LL);
            }
            v15 = *(_DWORD *)(v13 + 32 + 4 * v14);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v15, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              Instance = CondType__IsQuestClear_25746984(v15, -1, 0, v17);
              v8 += Instance & 1;
            }
            LODWORD(v12) = *(_DWORD *)(v13 + 24);
            if ( (__int64)++v14 >= (int)v12 )
              return v8;
          }
        }
      }
    }
    sub_B2C434(Instance, v10);
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(targetId, -1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CondType_c *v9; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v12; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w20
  QuestGroupMaster_o *v15; // x20
  __int64 v16; // x8
  int64_t v17; // x21
  unsigned __int64 v18; // x25
  int32_t v19; // w22
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v22; // x0

  if ( (byte_4187FCA & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187FCA = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v15 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v15 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v15,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v16 = *(_QWORD *)(Instance + 24);
          v17 = Instance;
          if ( (int)v16 < 1 )
            goto LABEL_31;
          ClearNum = 0;
          v18 = 0LL;
          while ( 1 )
          {
            if ( v18 >= (unsigned int)v16 )
            {
              v22 = sub_B2C460(Instance);
              sub_B2C400(v22, 0LL);
            }
            v19 = *(_DWORD *)(v17 + 32 + 4 * v18);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v19, 0LL);
            if ( Instance )
            {
              Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += Instance;
            }
            LODWORD(v16) = *(_DWORD *)(v17 + 24);
            if ( (__int64)++v18 >= (int)v16 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B2C434(Instance, v12);
  }
  v9 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestClearPhaseCount(
        int64_t userId,
        int32_t targetId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v8; // x1
  CondType_c *v9; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  int64_t v11; // x0
  __int64 v12; // x1
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187F9A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_4187F9A = 1;
  }
  entity = 0LL;
  v9 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v11 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_19;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, v11, targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    v11 = (int64_t)entity;
    if ( !entity )
      goto LABEL_19;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  v11 = (int64_t)entity;
  if ( !entity )
LABEL_19:
    sub_B2C434(v11, v12);
  result = UserQuestEntity__getQuestPhase(entity, 0LL);
  if ( beforeClearQuestId >= 1 )
    result -= targetId == beforeClearQuestId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestGroupClearCount(
        int32_t questId,
        int32_t groupId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v13; // x20
  int32_t v14; // w22
  unsigned __int64 v15; // x24
  bool v16; // w21
  int32_t v17; // w23
  __int64 v19; // x0

  if ( (byte_4187FCF & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187FCF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  datalist = Instance->fields.datalist;
  v13 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v14 = 0;
  v15 = 0LL;
  v16 = isCheckResetFlag;
  do
  {
    if ( v15 >= (unsigned int)datalist )
    {
      v19 = sub_B2C460(Instance);
      sub_B2C400(v19, 0LL);
    }
    v17 = *((_DWORD *)&v13->fields.lookup + v15);
    if ( v17 != questId )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsQuestClear_25746984(v17, -1, v16, v11);
      v14 += (unsigned __int8)Instance & 1;
    }
    LODWORD(datalist) = v13->fields.datalist;
    ++v15;
  }
  while ( (__int64)v15 < (int)datalist );
  return v14;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v11; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4187FD2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FD2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v11 = (int64_t)Instance;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
    sub_B2C434(Instance, v9);
  Entity = UserEventRaidMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             v11,
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
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v11; // x21
  unsigned int v12; // w23
  int32_t v13; // w22
  EventRaidEntity_o *v14; // x24
  __int64 v16; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4187F8A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187F8A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = (TotalEventRaidMaster_o *)Instance;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v16 = sub_B2C460(Instance);
        sub_B2C400(v16, 0LL);
      }
      v14 = EventRaidEntityArray->m_Items[v12];
      if ( !v14 || !v11 )
        break;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v11, &entity, targetId, v14->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v14->fields.maxHp )
          ++v13;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_20:
    sub_B2C434(Instance, v8);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4188024 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188024 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t __fastcall CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4187FAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187FAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4187FF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187FF9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  __int64 v12; // x22
  int32_t v13; // w20
  ShopGroupEntity_o *v14; // x8
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187FF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FF2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v9->max_length;
      if ( max_length >= 1 )
      {
        v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v12 = 0LL;
        v13 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v12 >= max_length )
          {
            v16 = sub_B2C460(Instance);
            sub_B2C400(v16, 0LL);
          }
          v14 = v9->m_Items[v12];
          if ( !v14 || !v11 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v11,
                                        &entity,
                                        v14->fields.shopId,
                                        (const MethodInfo_24E412C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v13 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v9->max_length;
          if ( (int)++v12 >= max_length )
            return v13;
        }
LABEL_22:
        sub_B2C434(Instance, v7);
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

  if ( (byte_4187FD4 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    byte_4187FD4 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v11; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4187FD6 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FD6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    v11 = (int64_t)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v11,
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
    sub_B2C434(Instance, v9);
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


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CondType__GetSuperBossDamageValue(int32_t eventId, int32_t bossId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserSuperBossMaster___, *(_QWORD *)&bossId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FD5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B2C434(Instance, v8);
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
  __int64 v1; // x1
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187FFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4187FFC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4187FC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FC8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B2C434(Instance, v9);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v12;
    *(_QWORD *)&v15.fields.fakeValue = v13;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4187FC5 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4187FC5 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4187FC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FC6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Instance, v8);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtLv(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4187FC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FC7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B2C434(Instance, v8);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  CondType_c *v4; // x0
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CondType_c *v14; // x8
  System_Int32_array **v15; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4187F82 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187F82 = 1;
  }
  v4 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v4 = CondType_TypeInfo;
  }
  if ( !v4->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v14 = CondType_TypeInfo;
    v15 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v14 = CondType_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v15;
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->uQuestMst, v15, v8, v9, v10, v11, v12, v13);
    v4 = CondType_TypeInfo;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = CondType_TypeInfo;
  }
  return v4->static_fields->uQuestMst;
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4188004 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188004 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4187FF4 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4187FF4 = 1;
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
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4188041 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    byte_4188041 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v15; // x22
  unsigned __int64 v16; // x24
  int32_t v17; // w25
  int32_t v18; // w21
  int32_t v19; // w23
  __int64 v21; // x0

  if ( (byte_418800F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418800F = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                15,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v12 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v12->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v15 = MasterData_WarQuestSelectionMaster;
      v16 = 0LL;
      v17 = 0;
      if ( isWin )
        v18 = 128;
      else
        v18 = 256;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)datalist )
        {
          v21 = sub_B2C460(MasterData_WarQuestSelectionMaster);
          sub_B2C400(v21, 0LL);
        }
        v19 = *((_DWORD *)&v12->fields.lookup + v16);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v15 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v15,
                                                                    (int64_t)Instance,
                                                                    v19,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v18,
                                                                      0LL);
          v17 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v17 >= val )
          return 1;
        LODWORD(datalist) = v12->fields.datalist;
        if ( (__int64)++v16 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B2C434(Instance, v11);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleLineReusltConsecutiveCount(
        int32_t groupId,
        int32_t val,
        bool isWin,
        bool isBelow,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v18; // x23
  unsigned __int64 v19; // x25
  int32_t v20; // w26
  int32_t v21; // w22
  int32_t v22; // w24
  __int64 v24; // x0

  if ( (byte_418800E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int___, *(_QWORD *)&val);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418800E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_31;
  v15 = Instance;
  if ( !Instance->fields.datalist )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_23CB7EC *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B2C434(Instance, v14);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  datalist = v15->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v18 = MasterData_WarQuestSelectionMaster;
    v19 = 0LL;
    v20 = 0;
    if ( isWin )
      v21 = 128;
    else
      v21 = 256;
    do
    {
      if ( v19 >= (unsigned int)datalist )
      {
        v24 = sub_B2C460(MasterData_WarQuestSelectionMaster);
        sub_B2C400(v24, 0LL);
      }
      v22 = *((_DWORD *)&v15->fields.lookup + v19);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v18 )
        goto LABEL_31;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                  v18,
                                                                  (int64_t)Instance,
                                                                  v22,
                                                                  0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                    (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                    v21,
                                                                    0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
          ++v20;
        else
          v20 = 0;
      }
      else
      {
        v20 = 0;
      }
      if ( isBelow )
      {
        if ( v20 > val )
          return 0;
      }
      else if ( v20 >= val )
      {
        return 1;
      }
      LODWORD(datalist) = v15->fields.datalist;
      ++v19;
    }
    while ( (__int64)v19 < (int)datalist );
  }
  return isBelow;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v15; // x22
  unsigned __int64 v16; // x24
  int32_t v17; // w25
  int32_t v18; // w21
  int32_t v19; // w23
  __int64 v21; // x0

  if ( (byte_418800D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418800D = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v12 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v12->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v15 = MasterData_WarQuestSelectionMaster;
      v16 = 0LL;
      v17 = 0;
      if ( isWin )
        v18 = 128;
      else
        v18 = 256;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)datalist )
        {
          v21 = sub_B2C460(MasterData_WarQuestSelectionMaster);
          sub_B2C400(v21, 0LL);
        }
        v19 = *((_DWORD *)&v12->fields.lookup + v16);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v15 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v15,
                                                                    (int64_t)Instance,
                                                                    v19,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v18,
                                                                      0LL);
          v17 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v17 >= val )
          return 1;
        LODWORD(datalist) = v12->fields.datalist;
        if ( (__int64)++v16 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B2C434(Instance, v11);
    }
  }
  return 0;
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_418800B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, value);
    byte_418800B = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418800A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, *(_QWORD *)&kindNum);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418800A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188009 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188009 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188020 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, *(_QWORD *)&giftId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188020 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
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
    sub_B2C434(Instance, v9);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_4188001 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4188001 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_25805984(UserId, commandCodeId, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCommandCodeGet_25805984(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188002 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188002 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188006 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188006 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4188037 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetCount);
    byte_4188037 = 1;
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
  if ( (byte_418803B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank);
    byte_418803B = 1;
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
  if ( (byte_4188035 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetLevel);
    byte_4188035 = 1;
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
  if ( (byte_4188039 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetSkillLevel);
    byte_4188039 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188033 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4188033 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_WarQuestSelectionMaster )
          return HeelPortraitMaster__GetCompleteNum(
                   (HeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                   eventId,
                   0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_16:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  }
  return 0;
}


bool __fastcall CondType__IsConst(int32_t condType, const MethodInfo *method)
{
  return condType == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  int64_t Time_26270684; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_4188026 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&condNum);
    byte_4188026 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v8.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_26270684 = NetworkManager__getTime_26270684(v8, 0LL);
  dateData = NetworkManager__getDateTime_26271468(Time_26270684 - 3600 * condNum, 0LL).fields.dateData;
  v9.fields.dateData = (uint64_t)&dateData;
  return ((1 << (System_DateTime__get_DayOfWeek(v9, 0LL) + 1)) & condId) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FE0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B2C434(Instance, v8);
  return UserServantCollectionEntity__IsCostumeGet(entity, costumeId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsDeadRaidDay(
        int32_t day,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_TotalEventRaidEntity__o *EntityListFromDay; // x23
  __int64 v21; // x24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  float v24; // s0
  int64_t v25; // x22
  CondType_c *v26; // x0
  float v27; // s1
  bool v28; // cc
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  int64_t maxHpSum; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_418803E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418803E = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = TotalEventRaidMaster__TryGetEntityListFromDay(
                              (TotalEventRaidMaster_o *)Instance,
                              day,
                              &maxHpSum,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_B2C434(Instance, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromDay,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v21 = 0LL;
  for ( i = v31; ; v21 += (__int64)i.fields.current[1].monitor )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !i.fields.current )
      sub_B2C434(v22, v23);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v24 = 0.0;
    if ( v21 >= 1 )
    {
      v25 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v26 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v26 = CondType_TypeInfo;
        }
        v24 = (float)((float)v21 / (float)v25) * (float)v26->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v27 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v28 = v24 < v27;
        if ( isIncludingEquals )
          return !v28;
        return !v28;
      }
      return v24 == v27;
    }
    if ( isIncludingEquals )
      return v24 <= v27;
    else
      return v24 < v27;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v28 = v21 < num;
        if ( isIncludingEquals )
          return !v28;
        return !v28;
      }
      return v21 == num;
    }
    if ( isIncludingEquals )
      return v21 <= num;
    else
      return v21 < num;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsDeadRaidGroup(
        int32_t eventId,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v17; // x25
  int v18; // w28
  __int64 v19; // x27
  __int64 v20; // x26
  EventRaidEntity_o *v21; // x19
  float v22; // s0
  CondType_c *v23; // x0
  float v24; // s1
  bool v25; // cc
  bool v28; // cc
  __int64 v29; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418803F & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_418803F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_52:
    sub_B2C434(Instance, v14);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v20 = 0LL;
    v19 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v22 = 0.0;
      if ( v19 >= 1 && v20 >= 1 )
      {
        v23 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v23 = CondType_TypeInfo;
        }
        v22 = (float)((float)v20 / (float)v19) * (float)v23->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v24 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          if ( isIncludingEquals )
          {
            v25 = v22 < v24;
            return !v25;
          }
          v28 = v22 <= v24;
          return !v28;
        }
        return v22 == v24;
      }
      if ( isIncludingEquals )
        return v22 <= v24;
      else
        return v22 < v24;
    }
  }
  else
  {
    v17 = (TotalEventRaidMaster_o *)Instance;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)max_length )
      {
        v29 = sub_B2C460(Instance);
        sub_B2C400(v29, 0LL);
      }
      v21 = EventRaidEntityArrayFromEventId->m_Items[v18];
      if ( !v21 || !v17 )
        goto LABEL_52;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v17, &entity, eventId, v21->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_52;
        v19 += v21->fields.maxHp;
        v20 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v18;
    }
    while ( v18 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      if ( isIncludingEquals )
      {
        v25 = v20 < num;
        return !v25;
      }
      v28 = v20 <= num;
      return !v28;
    }
    return v20 == num;
  }
  if ( isIncludingEquals )
    return v20 <= num;
  else
    return v20 < num;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v11; // x19
  QuestPhaseMaster_c *v12; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v14; // x19

  if ( (byte_4187FFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&phase);
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4187FFE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v11 = Entity;
    v12 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v12 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v11, v12->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v14 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[11].fields.context;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v14, 0LL);
      }
LABEL_14:
      sub_B2C434(Instance, v9);
    }
  }
  return 0;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4187FFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FFF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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
  if ( (byte_418801A & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_418801A = 1;
  }
  if ( !v4 )
    sub_B2C434(targetIds, *(_QWORD *)&targetNum);
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
        v10 = sub_B2C460(v6);
        sub_B2C400(v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventEntity_o *Entity; // x0

  if ( (byte_4187FB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FB3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen(Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FE4 = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_B2C434(Instance, v7);
  return entity->fields.targetId <= (__int64)Instance && (__int64)Instance <= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FE3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FE3 = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_15:
      sub_B2C434(Instance, v7);
    if ( (__int64)Instance < *(_QWORD *)&entity->fields.eventId )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CondType_c *v7; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4187FE5 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&rate);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FE5 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  return EventRaceMaster__IsReachedPointRateInTerm(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           rate,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventGroupRankInTerm(int32_t eventTerm, int32_t rank, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CondType_c *v8; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4187FE6 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&rank);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FE6 = 1;
  }
  v8 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v8 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v8->static_fields->EVENT_RACE_DEVIDER;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v12);
  }
  return EventRaceMaster__GetGoaledTeamCount(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           Time,
           0LL) >= rank;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventMissionGroupClear(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventMissionGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionGroupEntity__o *EntityList; // x0
  int32_t i; // w21
  int32_t klass_high; // w20
  const MethodInfo *v16; // x1
  _BOOL8 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4188032 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condNum);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v10);
    byte_4188032 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v12);
  EntityList = EventMissionGroupMaster__GetEntityList(Master_WarQuestSelectionMaster, condId, 0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v16) )
    {
      v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v17 )
        break;
      if ( !v19.fields.current )
        sub_B2C434(v17, v16);
      klass_high = HIDWORD(v19.fields.current[1].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CondType_c *v7; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4187FDC & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FDC = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventPointGroupWin(int32_t evGroupId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CondType_c *v7; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4187FDB & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FDB = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  return TotalEventPointMaster__IsGroupWin(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           condVal,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceGoalScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CondType___c__DisplayClass115_0_o *v14; // x22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v18; // x23
  const MethodInfo *v19; // x3
  int32_t v20; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FEB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, *(_QWORD *)&termId);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v8);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v9);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__, v12);
    sub_B2C35C(&CondType___c__DisplayClass115_0_TypeInfo, v13);
    byte_4187FEB = 1;
  }
  goalTime = 0LL;
  v14 = (CondType___c__DisplayClass115_0_o *)sub_B2C42C(CondType___c__DisplayClass115_0_TypeInfo);
  CondType___c__DisplayClass115_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.groupId = groupId,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v16);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v18 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
  v20 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v20 < 1 )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v20, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FE9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_12;
    v10 = *(&entity->fields.id + 1);
  }
  else
  {
    v10 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_B2C434(Instance, v9);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, v10, 0LL) == groupId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceRankedScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v12; // x2
  int32_t flagId; // w20

  if ( (byte_4187FEC & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&termId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventScriptMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187FEC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
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
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v12);
  }
  return (char)RaceResultEntity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flagId);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FEA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
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
    sub_B2C434(Instance, v8);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t v11; // w21
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = flagId;
  if ( (byte_4187FF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusMaster___, flagId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FF7 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
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
  v11 = *(_DWORD *)(Instance + 32);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v11, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return (entity->fields.status & (1 << v3)) != 0;
LABEL_16:
    sub_B2C434(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v9; // x1
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188029 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventMaster___, *(_QWORD *)&bitNum);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    byte_4188029 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventMaster___);
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
    sub_B2C434(UserId, v9);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventTypeStartTimeToEndDate(
        int32_t eventType,
        int32_t overWriteTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x19
  int64_t v15; // x21
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v19; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x25
  __int64 v30; // x9
  int64_t v31; // x26
  int32_t Year; // w26
  int32_t Month; // w27
  int32_t Day; // w3
  uint64_t v35; // x25
  bool v36; // w20
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  int v42; // [xsp+8h] [xbp-78h]
  int v43; // [xsp+Ch] [xbp-74h]
  int v44; // [xsp+10h] [xbp-70h]
  System_DateTime_o dateTime; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8

  if ( (byte_418801F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&overWriteTime);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B2C35C(&EventEntity_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418801F = 1;
  }
  dateTime.fields.dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
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
    sub_B2C434(Instance, v13);
  v15 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 lookup,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  v43 = overWriteTime / 100 % 100;
  v42 = overWriteTime % 100;
  v19 = overWriteTime / 10000;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_22:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v29 = v28;
    if ( v28 )
    {
      v30 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) < (unsigned int)v30
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) != EventEntity_TypeInfo )
      {
        Instance = (DataManager_o *)sub_B2C728(v28);
        goto LABEL_48;
      }
      if ( *(_DWORD *)(v28 + 24) == eventType )
      {
        v31 = *(_QWORD *)(v28 + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getDateTime_26271468(v31, 0LL).fields.dateData;
        v47.fields.dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v47, 0LL);
        v48.fields.dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v48, 0LL);
        v49.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v49, 0LL);
        v50.fields.dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_15270708(v50, Year, Month, Day, v19, v43, v42, 0LL);
        if ( *(_QWORD *)(v29 + 88) <= v15 )
        {
          v35 = dateTime.fields.dateData;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v51.fields.dateData = v35;
          if ( v15 <= NetworkManager__getTime_26270684(v51, 0LL) )
          {
            v44 = 157;
            v36 = 1;
            goto LABEL_38;
          }
        }
      }
    }
  }
  v36 = 0;
  v44 = 155;
LABEL_38:
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_42:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( v44 == 155 )
    return 0;
  return v36;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCampaign; // x0
  char i; // w22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418803D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v8);
    byte_418803D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  ExchangeSvtCampaign = EventCampaignMaster__GetExchangeSvtCampaign(Master_WarQuestSelectionMaster, 0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ExchangeSvtCampaign,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= LODWORD(v16.fields.current[1].klass) == targetId )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B2C434(v13, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(
                                  (UserExchangeSvtMaster_o *)Master_WarQuestSelectionMaster,
                                  targetId,
                                  0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4187F8C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4187F8C = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int32_t Value_28238692; // w0

  if ( (byte_4188027 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8379/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v4);
    byte_4188027 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  Value_28238692 = ConstantMaster__GetValue_28238692(
                     Master_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_8379/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_28238692 == targetId && Value_28238692 != 0;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FC0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    sub_B2C434(Instance, v6);
  }
  return 0;
}


bool __fastcall CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FBE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FBE = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                          condId,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
      sub_B2C434(Instance, v9);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FBF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FBF = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    sub_B2C434(Instance, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4187FBD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FBD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               Instance,
                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B2C434(Instance, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4188003 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188003 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v7);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotEventRaceQuestOrNotAllGroupGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  bool v8; // w22
  CondType_c *v9; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FE7 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FE7 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v8 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v9 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v9 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v9->static_fields->EVENT_RACE_DEVIDER;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v12);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0LL);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool v10; // w21
  CondType_c *v11; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int32_t Value; // w20
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FE8 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_11002/*"RACE_TARGET_GOAL_RANK"*/, v9);
    byte_4187FE8 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v10 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v11 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v11 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v11->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11002/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
      sub_B2C434(Instance, v15);
    return EventRaceMaster__GetGoaledTeamCount(
             MasterData_WarQuestSelectionMaster,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0LL) < Value;
  }
  return v10;
}


bool __fastcall CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x19
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v10; // x8
  __int64 v12; // x0

  if ( (byte_4187FD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FD7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_17;
  v8 = Instance;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*(_DWORD *)(v8 + 24) )
      {
        v12 = sub_B2C460(Instance);
        sub_B2C400(v12, 0LL);
      }
      v10 = *(_QWORD *)(v8 + 32);
      if ( v10 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                Instance,
                                *(_DWORD *)(v10 + 20),
                                0LL);
          if ( Instance )
            return *(_DWORD *)(Instance + 28) > 0;
        }
      }
    }
LABEL_17:
    sub_B2C434(Instance, v7);
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
  if ( (byte_4187FCB & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4187FCB = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotQuestGroupClear_25804488(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v11; // x4
  int32_t v12; // w19
  int32_t shortCutBannerId; // w20
  System_Int32_array *v15; // [xsp+0h] [xbp-30h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  v17 = targetId;
  if ( (byte_4187FCC & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FCC = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  if ( condValue <= 1 )
    v7 = 1;
  else
    v7 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v17, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                MasterData_WarQuestSelectionMaster,
                                &entity,
                                (System_String_o *)Instance,
                                (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B2C434(Instance, v9);
  if ( entity->fields.questId != 26 )
    return 0;
  v12 = v17;
  shortCutBannerId = entity->fields.shortCutBannerId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v12, shortCutBannerId, &v15, 1, v11) >= v7;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4187FD8 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FD8 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v7);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  UserShopMaster_o *v8; // x20
  unsigned __int64 v9; // x22
  int32_t v10; // w21
  __int64 v12; // x0

  if ( (byte_4187FD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FD9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___),
        !values) )
  {
LABEL_17:
    sub_B2C434(Instance, v6);
  }
  v7 = *(_QWORD *)&values->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = (UserShopMaster_o *)Instance;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v7 )
    {
      v12 = sub_B2C460(Instance);
      sub_B2C400(v12, 0LL);
    }
    v10 = values->m_Items[v9 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v8 )
      goto LABEL_17;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v8, Instance, v10, 0LL);
    if ( !Instance )
      goto LABEL_17;
    if ( !*(_DWORD *)(Instance + 28) )
      return 1;
    LODWORD(v7) = values->max_length;
    if ( (__int64)++v9 >= (int)v7 )
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  char IsQuestClear; // w0
  bool v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  int32_t v21; // w2
  bool IsPurchaseShop; // w0
  int64_t Instance; // x0
  __int64 v24; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t EventPointNoGroup; // x0
  bool v27; // w2
  int32_t v28; // w0
  int32_t v29; // w1
  UserEventPointMaster_o *v30; // x21
  int64_t Point; // x0
  CondType_c *v32; // x0
  UserEventMaster_o *v33; // x21
  UserEventMaster_o *v34; // x21
  __int64 v35; // x8
  int32_t v36; // w0
  int32_t v37; // w1
  bool v38; // w2
  int32_t v39; // w0
  int32_t v40; // w1
  CondType_c *v41; // x0
  UserQuestMaster_o *v42; // x21
  int32_t ClearCountsFromId; // w0
  int32_t v44; // w1
  int32_t v45; // w2
  bool v46; // w3
  UserEventMaster_o *v47; // x21
  bool v48; // cc
  bool v49; // w2
  int32_t v50; // w0
  int32_t v51; // w1
  int32_t ChallengeCountsFromId; // w0
  int32_t v53; // w0
  int32_t v54; // w1
  bool v55; // w2
  int32_t v56; // w2
  int32_t v57; // w2
  int32_t v58; // w1
  int32_t v59; // w2
  bool v60; // w3
  bool v61; // w3
  bool v62; // w4
  int32_t v63; // w0
  int32_t v64; // w1
  bool v65; // w3
  int32_t v66; // w2
  CondType_c *v67; // x0
  bool v68; // w2
  int32_t v69; // w0
  int32_t v70; // w1
  bool v71; // w4
  int32_t v72; // w0
  int32_t v73; // w1
  bool v74; // w3
  CondType_c *v75; // x0
  UserQuestMaster_o *v76; // x21
  int32_t v77; // w0
  CondType_c *v78; // x0
  UserQuestMaster_o *v79; // x21
  bool v80; // zf
  CondType_c *v81; // x0
  CondType_c *v82; // x0
  UserQuestMaster_o *v83; // x21
  bool v84; // cc
  UserEventPointMaster_o *v85; // x21
  const MethodInfo *v86; // x5
  int64_t UserId; // x22
  UserEventPointMaster_o *v88; // x21
  UserEventMaster_o *v89; // x21
  CondType_c *v90; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  UserEventMaster_o *v92; // x21
  const MethodInfo *v93; // x5
  int64_t v94; // x21
  const MethodInfo *v95; // x5
  int64_t v96; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187F83 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4187F83 = 1;
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
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v86);
      return IsQuestClear & 1;
    case 2:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_25744432(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 1;
      goto LABEL_520;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v18 = 1;
      v19 = targetId;
      v20 = condValue;
      goto LABEL_329;
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
      v27 = 1;
      v28 = targetId;
      v29 = condValue;
      goto LABEL_102;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v28 = targetId;
      v29 = condValue;
      v27 = 0;
LABEL_102:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v28, v29, v27, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v90 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v90);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_789;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, Instance, targetId, 0LL);
      goto LABEL_688;
    case 32:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = 1;
      v58 = targetId;
      v59 = condValue;
      goto LABEL_312;
    case 35:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 36:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = 1;
      v39 = targetId;
      v40 = condValue;
      goto LABEL_511;
    case 37:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 40:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 42:
      v78 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = CondType__GetUserQuestMaster((const MethodInfo *)v78);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v79 )
        goto LABEL_789;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v79, Instance, targetId, 0LL);
      goto LABEL_591;
    case 43:
      v75 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = CondType__GetUserQuestMaster((const MethodInfo *)v75);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v76 )
        goto LABEL_789;
      v77 = UserQuestMaster__getChallengeCountsFromId(v76, Instance, targetId, 0LL);
      goto LABEL_620;
    case 44:
      v41 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v42 = CondType__GetUserQuestMaster((const MethodInfo *)v41);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v42 )
        goto LABEL_789;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v42, Instance, targetId, 0LL);
LABEL_591:
      v80 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_709;
    case 45:
      v82 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v83 = CondType__GetUserQuestMaster((const MethodInfo *)v82);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v83 )
        goto LABEL_789;
      v77 = UserQuestMaster__getClearCountsFromId(v83, Instance, targetId, 0LL);
LABEL_620:
      v84 = v77 <= (int)condValue;
      goto LABEL_673;
    case 46:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v94 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v94, targetId, condValue, -1, 0, v93);
      return IsQuestClear & 1;
    case 47:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v96 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v96, targetId, condValue, -1, 0, v95);
      goto LABEL_787;
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
      goto LABEL_787;
    case 53:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
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
      IsQuestClear = CondType__IsQuestClear_25746984(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v58 = targetId;
      v59 = condValue;
      v60 = 0;
LABEL_312:
      IsQuestClear = CondType__IsQuestGroupClear(0, v58, v59, v60, method);
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
      goto LABEL_631;
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
      goto LABEL_787;
    case 73:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 74:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = targetId;
      v40 = condValue;
      v38 = 0;
LABEL_511:
      IsPurchaseShop = CondType__IsQuestClear_25746984(v39, v40, v38, (const MethodInfo *)isCollection);
      goto LABEL_787;
    case 75:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v44 = targetId;
      v45 = condValue;
      v46 = 0;
      goto LABEL_307;
    case 76:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 77:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 78:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 79:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_789;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_631;
    case 84:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v30 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v30 )
        goto LABEL_789;
      Point = UserEventPointMaster__GetPoint(v30, Instance, targetId / 100, targetId, 0LL);
      goto LABEL_665;
    case 85:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v85 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v85 )
        goto LABEL_789;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(v85, Instance, targetId, -1, 0LL);
LABEL_631:
      v48 = EventPointNoGroup < condValue;
      goto LABEL_689;
    case 86:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v88 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v88 )
        goto LABEL_789;
      Point = UserEventPointMaster__GetEventPointTotal(v88, Instance, targetId, -1, 0LL);
LABEL_665:
      v84 = Point <= condValue;
      goto LABEL_673;
    case 87:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v47 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v47 )
        goto LABEL_789;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v47, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_789;
      v48 = *(int *)(Instance + 28) < condValue;
      goto LABEL_689;
    case 88:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v89 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v89 )
        goto LABEL_789;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v89, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_789;
      v84 = *(int *)(Instance + 28) <= condValue;
LABEL_673:
      IsQuestClear = v84;
      return IsQuestClear & 1;
    case 89:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v92 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v92 )
        goto LABEL_789;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v92, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_789;
      v35 = *(int *)(Instance + 32);
      goto LABEL_708;
    case 90:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 93:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v32 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v32);
      return IsQuestClear & 1;
    case 96:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 97:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v19 = targetId;
      v20 = condValue;
      v18 = 0;
LABEL_329:
      IsQuestClear = CondType__IsServantFriendship(v19, v20, v18, (const MethodInfo *)isCollection);
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
      goto LABEL_787;
    case 103:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v36 = targetId;
      v37 = condValue;
      v21 = 0;
      goto LABEL_521;
    case 105:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 2;
LABEL_520:
      v36 = targetId;
      v37 = condValue;
LABEL_521:
      IsQuestClear = CondType__IsServantLimit_25744608(v36, v37, v21, (const MethodInfo *)isCollection);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v34 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v34 )
        goto LABEL_789;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v34, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_789;
      v35 = *(int *)(Instance + 28);
LABEL_708:
      v80 = v35 == condValue;
LABEL_709:
      IsQuestClear = v80;
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
      goto LABEL_787;
    case 121:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 123:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_789;
      v33 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v33 )
        goto LABEL_789;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v33, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_789;
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
      v55 = 1;
      v53 = targetId;
      v54 = condValue;
      goto LABEL_700;
    case 129:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = targetId;
      v54 = condValue;
      v55 = 0;
LABEL_700:
      IsQuestClear = CondType__IsBattleLineReusltCount(v53, v54, v55, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v49 = 1;
      v50 = targetId;
      v51 = condValue;
      goto LABEL_414;
    case 131:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v50 = targetId;
      v51 = condValue;
      v49 = 0;
LABEL_414:
      v61 = 0;
      goto LABEL_415;
    case 132:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v49 = 1;
      v61 = 1;
      v50 = targetId;
      v51 = condValue;
      goto LABEL_415;
    case 133:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v61 = 1;
      v50 = targetId;
      v51 = condValue;
      v49 = 0;
LABEL_415:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(v50, v51, v49, v61, method);
      return IsQuestClear & 1;
    case 134:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = 1;
      v69 = targetId;
      v70 = condValue;
      goto LABEL_424;
    case 135:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v69 = targetId;
      v70 = condValue;
      v68 = 0;
LABEL_424:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v69, v70, v68, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
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
      goto LABEL_688;
    case 143:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v81 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v81);
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
      goto LABEL_787;
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
      goto LABEL_787;
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
      goto LABEL_688;
    case 162:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_789;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_688;
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
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
LABEL_789:
        sub_B2C434(Instance, v24);
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_688;
    case 168:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 170:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 172:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_787;
    case 174:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_688;
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
      goto LABEL_688;
    case 179:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 180:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
    case 181:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
    case 182:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
    case 183:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
    case 184:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_688;
    case 185:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_787;
    case 187:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
LABEL_688:
      v48 = ChallengeCountsFromId < (int)condValue;
LABEL_689:
      IsQuestClear = !v48;
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
      v56 = 1;
      goto LABEL_366;
    case 194:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = 2;
LABEL_366:
      v62 = 1;
      v63 = targetId;
      v64 = condValue;
      v65 = 0;
      goto LABEL_459;
    case 195:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 1;
      goto LABEL_453;
    case 196:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 2;
LABEL_453:
      v71 = 1;
      v72 = targetId;
      v73 = condValue;
      v74 = 0;
      goto LABEL_474;
    case 197:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = 1;
      goto LABEL_371;
    case 198:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = 2;
LABEL_371:
      v65 = 1;
      v62 = 1;
      v63 = targetId;
      v64 = condValue;
      goto LABEL_459;
    case 199:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = 2;
      goto LABEL_458;
    case 200:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = 1;
LABEL_458:
      v65 = 1;
      v63 = targetId;
      v64 = condValue;
      v62 = 0;
LABEL_459:
      IsQuestClear = CondType__IsDeadRaidDay(v63, v64, v56, v65, v62, v5);
      return IsQuestClear & 1;
    case 201:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 1;
      goto LABEL_464;
    case 202:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 2;
LABEL_464:
      v74 = 1;
      v71 = 1;
      v72 = targetId;
      v73 = condValue;
      goto LABEL_474;
    case 203:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 2;
      goto LABEL_473;
    case 204:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v57 = 1;
LABEL_473:
      v74 = 1;
      v72 = targetId;
      v73 = condValue;
      v71 = 0;
LABEL_474:
      IsQuestClear = CondType__IsDeadRaidGroup(v72, v73, v57, v74, v71, v5);
      return IsQuestClear & 1;
    case 205:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v46 = 1;
      v44 = targetId;
      v45 = condValue;
LABEL_307:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v44, v45, v46, method);
      goto LABEL_787;
    case 206:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = 1;
      goto LABEL_388;
    case 207:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = 2;
LABEL_388:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v66, (const MethodInfo *)isCollection);
      break;
    case 208:
      v67 = CondType_TypeInfo;
      if ( (_DWORD)condValue )
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsQuestClear = CondType__IsAuthTDAccelerate((const MethodInfo *)v67);
      }
      else
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsPurchaseShop = CondType__IsAuthTDAccelerate((const MethodInfo *)v67);
LABEL_787:
        IsQuestClear = !IsPurchaseShop;
      }
      break;
    case 211:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
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
  __int64 v11; // x1
  bool IsQuestPhaseClear; // w0
  const MethodInfo *v14; // x5
  int64_t v15; // x23
  const MethodInfo *v16; // x5
  int64_t UserId; // x23

  if ( (byte_4187F84 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    byte_4187F84 = 1;
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
                              v16);
        return !IsQuestPhaseClear;
      }
      if ( condType == 113 )
        return CommonReleaseExtension__IsOpenConsiderBeforeClearQuestFixed(
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
    v15 = NetworkManager__get_UserId(0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v15, targetId, condValue, beforeClearQuestId, isCheckResetFlag, v14);
  }
  else
  {
    if ( condType != 1 )
    {
      if ( condType == 36 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestPhaseClear = CondType__IsQuestClear_25746984(
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
    return CondType__IsQuestClear_25746984(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool v11; // w0
  bool result; // w0
  int32_t v13; // w2
  int32_t v14; // w2
  int64_t v15; // x0
  int32_t v16; // w1
  int64_t v17; // x0
  int32_t v18; // w1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int128 v21; // q1
  const MethodInfo *v22; // x5
  int64_t v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-40h]

  if ( (byte_4187F8F & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187F8F = 1;
  }
  if ( condType > 38 )
  {
    v11 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v15 = userSvtId;
          v16 = condValue;
          v13 = 0;
          return CondType__IsServantLimit(v15, v16, v13, method);
        case 'h':
LABEL_22:
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v13 = 1;
LABEL_26:
          v15 = userSvtId;
          v16 = condValue;
          return CondType__IsServantLimit(v15, v16, v13, method);
        case 'i':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v13 = 2;
          goto LABEL_26;
      }
      return v11;
    }
    if ( condType == 150 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v17 = userSvtId;
      v18 = condValue;
      v14 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v14 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v11;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v14 = 2;
      }
      v17 = userSvtId;
      v18 = condValue;
    }
    return CondType__IsServantLimitImage(v17, v18, v14, method);
  }
  v11 = 1;
  switch ( condType )
  {
    case 0:
      return v11;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                          userSvtId,
                                          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
      {
        sub_B2C434(Instance, v20);
      }
      v21 = *(_OWORD *)&Instance->fields.lastFrameTime;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&Instance->fields.saveNameList;
      *(_OWORD *)&v25.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v24 = v25;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear(v23, condValue, -1, 0, 0, v22);
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
      result = CondType__IsServantGet_25783916(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25784076(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25784644(userSvtId, condValue, (const MethodInfo *)userSvtId);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t Instance; // x0
  __int64 v14; // x1
  EventRaidMaster_o *v15; // x19
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  TotalEventRaidMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v18; // x24
  int max_length; // w8
  int64_t v20; // x20
  unsigned int v21; // w22
  int32_t v22; // w26
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x27
  EventRaidMaster_o *v25; // x21
  int32_t v26; // w24
  __int64 v27; // x8
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  int64_t v30; // x27
  __int64 v31; // x25
  int v32; // w8
  int32_t v33; // w19
  int32_t v34; // w28
  const MethodInfo *v35; // x4
  int32_t ValueInt; // w19
  __int64 v38; // x0
  int32_t v39; // [xsp+8h] [xbp-78h]
  int32_t v40; // [xsp+Ch] [xbp-74h]
  QuestReleaseMaster_o *v41; // [xsp+10h] [xbp-70h]
  TotalEventRaidMaster_o *v42; // [xsp+18h] [xbp-68h]
  int64_t time; // [xsp+20h] [xbp-60h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4188040 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_TotalEventRaidMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4188040 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_52;
  v15 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v18 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  time = Instance;
  if ( !EventRaidEntityArrayFromEventId )
LABEL_52:
    sub_B2C434(Instance, v14);
  v39 = checkType;
  v40 = num;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v20 = Instance;
    v21 = 0;
    v22 = 0;
    v41 = (QuestReleaseMaster_o *)v18;
    v42 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      if ( v21 >= max_length )
        goto LABEL_53;
      v23 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v21;
      v24 = v23[4];
      if ( !v24 )
        goto LABEL_52;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v23[4], v20, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     eventId,
                     HIDWORD(v24->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v25 = v15;
          v26 = eventId;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v15, eventId, HIDWORD(v24->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_52;
          v27 = *(_QWORD *)(Instance + 24);
          if ( v27 )
          {
            if ( !(_DWORD)v27 )
              goto LABEL_53;
            if ( !v41 )
              goto LABEL_52;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v41, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_52;
            v29 = *(_QWORD *)(Instance + 24);
            v30 = Instance;
            if ( v29 )
            {
              if ( (int)v29 >= 1 )
              {
                v31 = 0LL;
                while ( (unsigned int)v31 < (unsigned int)v29 )
                {
                  Instance = *(_QWORD *)(v30 + 32 + 8 * v31);
                  if ( !Instance )
                    goto LABEL_52;
                  v32 = *(_DWORD *)(Instance + 20);
                  if ( v32 == 32 )
                  {
                    v34 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestGroupClear(0, v34, ValueInt, 0, v35);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  else if ( v32 == 1 )
                  {
                    v33 = *(_DWORD *)(Instance + 24);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestClear_25746984(v33, -1, 0, v28);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  LODWORD(v29) = *(_DWORD *)(v30 + 24);
                  if ( (int)++v31 >= (int)v29 )
                    goto LABEL_41;
                }
LABEL_53:
                v38 = sub_B2C460(Instance);
                sub_B2C400(v38, 0LL);
              }
            }
          }
LABEL_41:
          ++v22;
LABEL_42:
          v15 = v25;
          Master_WarQuestSelectionMaster = v42;
          v20 = time;
          eventId = v26;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_46;
    }
  }
  v22 = 0;
LABEL_46:
  if ( v39 == 2 )
    return v22 <= v40;
  if ( v39 == 1 )
    return v22 >= v40;
  return v22 == v40;
}


bool __fastcall CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  CondType___c__DisplayClass19_0_o *v27; // x20
  int64_t IsOpen; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  int32_t v33; // w19
  int64_t v34; // x2
  int32_t v35; // w0
  int32_t v36; // w1
  bool result; // w0
  System_Func_int__int__o *v38; // x0
  __int64 *v39; // x8
  unsigned __int64 v40; // x22
  int32_t v41; // w23
  signed __int64 v42; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v44; // x4
  bool v45; // w0
  CondType_CountDelegate_o *v46; // x0
  __int64 *v47; // x8
  CondType_CountDelegate_o *v48; // x21
  const MethodInfo *v49; // x2
  int32_t ClearCountsFromIds; // w0
  bool v51; // cc
  int32_t v52; // w23
  unsigned __int64 v53; // x24
  signed __int64 v54; // x25
  int32_t v55; // w22
  __int64 v56; // x0
  int32_t v57; // w19
  System_Func_int__bool__o *v58; // x0
  __int64 *v59; // x8
  System_Func_int__int__o *v60; // x21
  const MethodInfo *v61; // x3
  int32_t v62; // w20
  System_Func_TSource__bool__o *v63; // x21
  CondType_c *v64; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v66; // x0
  UserQuestMaster_o *v67; // x21
  CondType_c *v68; // x0
  UserQuestMaster_o *v69; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v71; // x0
  UserQuestMaster_o *v72; // x21
  int32_t v73; // w0
  CondType_c *v74; // x0
  UserQuestMaster_o *v75; // x21
  CondType_c *v76; // x0
  UserQuestMaster_o *v77; // x21

  if ( (byte_4187F8D & 1) == 0 )
  {
    sub_B2C35C(&Method_CondType_CountExchangeServantMaxLimit__, targetIds);
    sub_B2C35C(&Method_CondType_CountServantClassTotalFriendShipUp__, v7);
    sub_B2C35C(&Method_CondType_CountServantClassTotalLevelUp__, v8);
    sub_B2C35C(&Method_CondType_CountServantClassTotalLimitUp__, v9);
    sub_B2C35C(&Method_CondType_CountServantClassTotalSkillLevelUp__, v10);
    sub_B2C35C(&Method_CondType_CountServantFriendShipClassNum__, v11);
    sub_B2C35C(&Method_CondType_CountServantLevelClassNum__, v12);
    sub_B2C35C(&Method_CondType_CountServantLevelIdNum__, v13);
    sub_B2C35C(&Method_CondType_CountServantTargetSkillLvClassNum__, v14);
    sub_B2C35C(&CondType_TypeInfo, v15);
    sub_B2C35C(&CondType_CountDelegate_TypeInfo, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_int____67413072, v17);
    sub_B2C35C(&Method_System_Func_int__int___ctor__, v18);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v19);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v20);
    sub_B2C35C(&System_Func_int__int__TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v23);
    sub_B2C35C(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v24);
    sub_B2C35C(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v25);
    sub_B2C35C(&CondType___c__DisplayClass19_0_TypeInfo, v26);
    byte_4187F8D = 1;
  }
  v27 = (CondType___c__DisplayClass19_0_o *)sub_B2C42C(CondType___c__DisplayClass19_0_TypeInfo);
  CondType___c__DisplayClass19_0___ctor(v27, 0LL);
  if ( !v27 )
LABEL_141:
    sub_B2C434(IsOpen, v29);
  v27->fields.targetNum = targetNum;
  if ( !targetIds )
    return 0;
  v32 = *(_QWORD *)&targetIds->max_length;
  if ( !v32 )
    return 0;
  if ( (_DWORD)v32 == 1 )
  {
    v33 = targetIds->m_Items[1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v34 = targetNum;
    v35 = condType;
    v36 = v33;
    return CondType__IsOpen(v35, v36, v34, 0, v31);
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
        if ( (int)v32 < 1 )
        {
          v52 = 0;
        }
        else
        {
          if ( !(_DWORD)v32 )
            goto LABEL_44;
          v52 = 0;
          v53 = 0LL;
          v54 = (int)v32;
          while ( 1 )
          {
            v55 = targetIds->m_Items[v53 + 1];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsOpen = CondType__IsOpen(condType, v55, 0LL, 0, v31);
            ++v53;
            v52 += IsOpen & 1;
            if ( (__int64)v53 >= v54 )
              break;
            if ( v53 >= targetIds->max_length )
              goto LABEL_44;
          }
          targetNum = v27->fields.targetNum;
        }
        v51 = v52 < targetNum;
        return !v51;
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
        v64 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v64);
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
        if ( (int)v32 < 1 )
        {
          v41 = 0;
        }
        else
        {
          v40 = 0LL;
          v41 = 0;
          v42 = (int)v32;
          do
          {
            IsOpen = (int64_t)CondType_TypeInfo;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( v40 >= targetIds->max_length )
              goto LABEL_44;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v29);
            v45 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v40], 0LL, 0, v44);
            v41 += v45;
          }
          while ( (__int64)v40 < v42 );
          targetNum = v27->fields.targetNum;
        }
        result = v41 < targetNum;
        break;
      case 30:
        v66 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v67 = CondType__GetUserQuestMaster((const MethodInfo *)v66);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v67 )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v67, IsOpen, targetIds, 0LL);
        goto LABEL_33;
      case 42:
        v68 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v69 = CondType__GetUserQuestMaster((const MethodInfo *)v68);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v69 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v69, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v27->fields.targetNum;
      case 43:
        v71 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v72 = CondType__GetUserQuestMaster((const MethodInfo *)v71);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v72 )
          goto LABEL_141;
        v73 = UserQuestMaster__getChallengeCountsFromIds(v72, IsOpen, targetIds, 0LL);
        return v73 <= v27->fields.targetNum;
      case 44:
        v74 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v75 = CondType__GetUserQuestMaster((const MethodInfo *)v74);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v75 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v75, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v27->fields.targetNum;
      case 45:
        v76 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v77 = CondType__GetUserQuestMaster((const MethodInfo *)v76);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v77 )
          goto LABEL_141;
        v73 = UserQuestMaster__getClearCountsFromIds(v77, IsOpen, targetIds, 0LL);
        return v73 <= v27->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_69;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsServantLimitClassNum(targetIds, targetNum, v30);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_81;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_69;
        case 180:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_81;
        case 181:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_81;
        case 182:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_81;
        case 183:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_81;
        case 184:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_81;
        case 188:
          v58 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          v59 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_87;
        case 189:
          v38 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
          v39 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_81:
          v60 = v38;
          System_Func_int__int____ctor(v38, 0LL, *v39, (const MethodInfo_270CF34 *)Method_System_Func_int__int___ctor__);
          v62 = v27->fields.targetNum;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v60, targetIds, v62, v61);
        case 190:
          v58 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          v59 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_87;
        case 191:
          v58 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
          v59 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_87:
          v63 = (System_Func_TSource__bool__o *)v58;
          System_Func_int__bool____ctor(
            v58,
            (Il2CppObject *)v27,
            *v59,
            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
          return System_Linq_Enumerable__Any_int__24354728(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v63,
                   (const MethodInfo_1739FA8 *)Method_System_Linq_Enumerable_Any_int____67413072);
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
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v29);
LABEL_33:
              v51 = ClearCountsFromIds < v27->fields.targetNum;
              return !v51;
            }
            goto LABEL_69;
          }
          v46 = (CondType_CountDelegate_o *)sub_B2C42C(CondType_CountDelegate_TypeInfo);
          v47 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_29:
      v48 = v46;
      CondType_CountDelegate___ctor(v46, 0LL, *v47, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v48, v49);
      goto LABEL_33;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v46 = (CondType_CountDelegate_o *)sub_B2C42C(CondType_CountDelegate_TypeInfo);
        v47 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_29;
      }
LABEL_69:
      if ( (_DWORD)v32 )
      {
        v57 = targetIds->m_Items[1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 = condType;
        v36 = v57;
        v34 = 0LL;
        return CondType__IsOpen(v35, v36, v34, 0, v31);
      }
LABEL_44:
      v56 = sub_B2C460(IsOpen);
      sub_B2C400(v56, 0LL);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v30);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_25780796(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4187F8E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condValues);
    byte_4187F8E = 1;
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
bool __fastcall CondType__IsOpen_25785312(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4187F90 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4187F90 = 1;
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
      result = CondType__IsServantLevel_25786064(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_25786228(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_25783916(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25786472(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25784644(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_25786796(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_25786968(userId, condValue, (const MethodInfo *)userId);
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
  if ( (byte_4188000 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21143/*"notMeets"*/, method);
    byte_4188000 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_44305532((System_String_o *)StringLiteral_21143/*"notMeets"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FF5 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4187FF5 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_B2C434(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_418472C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
      byte_418472C = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187FB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseQpShop_25786796(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4187FB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return ShopEntity__IsCondType_34871112((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4187FBA & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4187FBA = 1;
  }
  if ( v3 <= 1 )
    v3 = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4187FB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4187FB8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseStoneShop_25786968(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4187FB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FB9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return ShopEntity__IsCondType_34871112((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  il2cpp_array_size_t v12; // w23
  ShopGroupEntity_o *v13; // x8
  ShopEntity_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_4187FF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FF1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
      v10 = *(_QWORD *)&v9->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v12 = 0;
        while ( 1 )
        {
          v13 = v9->m_Items[v12];
          if ( !v13 || !v11 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v11,
                                        v13->fields.shopId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v14 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v14, 0LL) )
              goto LABEL_19;
            Instance = (DataManager_o *)ShopEntity__IsClosed(v14, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( (int)++v12 >= (int)v10 )
            goto LABEL_20;
          if ( v12 >= v9->max_length )
          {
            v15 = sub_B2C460(Instance);
            sub_B2C400(v15, 0LL);
          }
        }
LABEL_22:
        sub_B2C434(Instance, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v10; // x1
  bool v11; // w20
  bool v12; // w22
  __int64 v13; // x1
  bool v14; // w21
  TerminalPramsManager_c *v15; // x0
  bool v16; // w20
  bool v17; // w20
  BalanceConfig_c *v18; // x8
  int32_t WarId_k__BackingField; // w22
  bool v20; // w20
  TerminalPramsManager_c *v21; // x0
  char v22; // w8
  char v23; // w20

  if ( (byte_4187FDD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v6);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4187FDD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v11 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v12 = AvalonSceneManager__checkNowScene(Instance, 22, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v14 = AvalonSceneManager__checkNowScene(Instance, 72, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4183C67 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  v16 = v11 || v12;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v17 = v16 || v14;
  v18 = BalanceConfig_TypeInfo;
  WarId_k__BackingField = v15->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v20 = !v17;
  if ( WarId_k__BackingField == v18->static_fields->OrdealCallWarId )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
      byte_4183C7C = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v22 = !v21->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v22 = 1;
  }
  v23 = v22 & v20;
  if ( (v23 & 1) != 0 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (AvalonSceneManager_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
    if ( (v23 & 1 & (Instance != 0LL)) != 0 )
    {
      if ( Instance )
        return LODWORD(Instance->fields.scenestack) == 1;
LABEL_41:
      sub_B2C434(Instance, v10);
    }
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, questId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        bool isCollection,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  CondType_c *v13; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v15; // x1
  UserQuestEntity_o *EntityFromId; // x23
  const MethodInfo *v17; // x2

  if ( (byte_4187F95 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    byte_4187F95 = 1;
  }
  v13 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !UserQuestMaster )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_22:
    sub_B2C434(UserQuestMaster, v15);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL)
    && isCollection )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, v17);
  }
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0LL) )
    return 0;
  else
    return (beforeClearQuestId != condQuestId || beforeClearQuestId < 1) & (UserQuestEntity__getClearNum(
                                                                              EntityFromId,
                                                                              0LL) > 0);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool IsQuestClear_25746984; // w8
  bool result; // w0
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *UserId; // x0
  __int64 v14; // x1
  int64_t klass; // x20

  if ( (byte_4188028 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_4188028 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25746984 = CondType__IsQuestClear_25746984(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_25746984 )
  {
    v11 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
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
    UserId = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
LABEL_21:
      sub_B2C434(UserId, v14);
    return klass < EventMaster__GetEventStartedAt(UserId, eventId, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  CondType_c *v6; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  __int64 v9; // x1
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4187FC9 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4187FC9 = 1;
  }
  v6 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v6);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    sub_B2C434(UserId, v9);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear_25746984(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  int64_t UserId; // x22

  if ( (byte_4187F96 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4187F96 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear(UserId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int64_t UserId; // x21
  CondType_c *v12; // x0
  CondType_c *v13; // x0
  UserQuestEntity_o *v14; // x0

  if ( (byte_4187F9C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&closeQuestid);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187F9C = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v12 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v12);
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
  v13 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !Instance )
LABEL_26:
    sub_B2C434(Instance, v10);
  v14 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, closeQuestid, 0LL);
  if ( !v14 || UserQuestEntity__getClearNum(v14, 0LL) <= 0 )
    goto LABEL_5;
LABEL_25:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w21
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x19
  int v12; // w22
  unsigned __int64 v13; // x23
  int32_t v14; // w20
  __int64 v16; // x0

  if ( (byte_4187FDE & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&questCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FDE = 1;
  }
  if ( questCount <= 1 )
    v7 = 1;
  else
    v7 = questCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v12 = 0;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)datalist )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v14 = *((_DWORD *)&v11->fields.lookup + v13);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__IsQuestAvailable(v14, v9);
    if ( ((unsigned __int8)Instance & 1) != 0 && ++v12 >= v7 )
      break;
    LODWORD(datalist) = v11->fields.datalist;
    if ( (__int64)++v13 >= (int)datalist )
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
  if ( (byte_4187FCE & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4187FCE = 1;
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
  __int64 v3; // x1
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  signed __int64 v6; // x22
  CondType_c *v7; // x0
  UserQuestMaster_o *UserQuestMaster; // x20
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v11; // x0

  v2 = condQuestId;
  if ( (byte_4187FEE & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    condQuestId = (System_Int32_array *)sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4187FEE = 1;
  }
  if ( !v2 )
    goto LABEL_20;
  v4 = *(_QWORD *)&v2->max_length;
  if ( !v4 )
    return 0;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = (int)v4;
    while ( 1 )
    {
      v7 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v7);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      condQuestId = (System_Int32_array *)NetworkManager__get_UserId(0LL);
      if ( v5 >= v2->max_length )
      {
        v11 = sub_B2C460(condQuestId);
        sub_B2C400(v11, 0LL);
      }
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, (int64_t)condQuestId, v2->m_Items[v5 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( (__int64)++v5 >= v6 )
        return 1;
    }
LABEL_20:
    sub_B2C434(condQuestId, method);
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

  if ( (byte_4187F98 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    byte_4187F98 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestPhaseClear_25802440(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  int64_t UserId; // x23

  if ( (byte_4187F99 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_4187F99 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, condQuestId, condQuestPhase, beforeClearQuestId, isCheckResetFlag, v10);
}


bool __fastcall CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  CondType_c *v8; // x0
  const MethodInfo *v9; // x3
  WarEntity_o *v10; // x8
  unsigned __int64 v11; // x22
  bool v12; // w20
  struct System_String_o *age; // x8
  unsigned __int64 klass_low; // x9
  int32_t v15; // w19
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FDF & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestResetMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FDF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v8 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v8);
    v10 = entity;
    if ( entity )
    {
      v11 = 0LL;
      v12 = 1;
      do
      {
        age = v10->fields.age;
        if ( !age )
          break;
        klass_low = LODWORD(age[1].klass);
        if ( (__int64)v11 >= (int)klass_low )
          return 0;
        if ( v11 >= klass_low )
        {
          v17 = sub_B2C460(Instance);
          sub_B2C400(v17, 0LL);
        }
        v15 = *((_DWORD *)&age[1].monitor + v11);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_25746984(v15, -1, 1, v9);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v12;
        v10 = entity;
        ++v11;
      }
      while ( entity );
    }
LABEL_19:
    sub_B2C434(Instance, v7);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v11; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w20
  il2cpp_array_size_t v14; // w21
  struct System_Int32_array *v15; // x8
  int v16; // w23
  int v17; // w8
  __int64 v19; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FED = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v11 = entity;
  if ( !entity || (costumeIds = entity->fields.costumeIds) == 0LL )
LABEL_24:
    sub_B2C434(Instance, v9);
  max_length = costumeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = v11->fields.costumeIds;
    if ( !v15 )
      goto LABEL_24;
    if ( v14 >= v15->max_length )
    {
      v19 = sub_B2C460(Instance);
      sub_B2C400(v19, 0LL);
    }
    Instance = (int64_t)System_Math_TypeInfo;
    v16 = v15->m_Items[v14 + 1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = v16 >= 0 ? v16 : -v16;
    if ( v17 == costumeId )
      return 1;
    if ( (int)++v14 >= max_length )
      return 0;
    v11 = entity;
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
    sub_B2C434(0LL, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v3->fields.birthDay > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IList_int__o *v8; // x20
  const MethodInfo *v9; // x4
  System_Collections_Generic_IList_int__o *v10; // x21
  __int64 v12; // x0

  if ( (byte_4188021 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&routeId);
    sub_B2C35C(&int___TypeInfo, v5);
    byte_4188021 = 1;
  }
  v6 = sub_B2C374(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_11;
  v8 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v6 + 32) = questId;
  v6 = sub_B2C374(int___TypeInfo, 1LL);
  if ( !v6 )
LABEL_11:
    sub_B2C434(v6, v7);
  v10 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
  {
LABEL_12:
    v12 = sub_B2C460(v6);
    sub_B2C400(v12, 0LL);
  }
  *(_DWORD *)(v6 + 32) = routeId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_25807688(v8, v10, 1, 0, v9);
}


bool __fastcall CondType__IsRouteSelect_25807688(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 v19; // x1
  UserQuestRouteMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_HashSet_int__o *v21; // x21
  __int64 v22; // x3
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  __int64 v30; // x26
  int v31; // w22
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  System_Collections_Generic_IList_int__c *v44; // x8
  int32_t v45; // w26
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x25
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  int32_t v61; // w27
  int64_t UserId; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v64; // x1
  int v65; // w27
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  int v70; // w19
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v77; // [xsp+18h] [xbp-68h]
  _DWORD v78[2]; // [xsp+20h] [xbp-60h]
  int v79; // [xsp+28h] [xbp-58h]

  if ( (byte_4188022 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, routeIds);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4188022 = 1;
  }
  v79 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (UserQuestRouteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v21,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !questIds )
    goto LABEL_90;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v22);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v77 = v27;
  if ( !v27 )
    sub_B2C434(0LL, v28);
  v30 = v27;
  v31 = 0;
  while ( 1 )
  {
    v32 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_17;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_17:
      v35 = sub_AC5258(v30, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v30, *(_QWORD *)(v35 + 8));
    if ( (Instance & 1) == 0 )
      break;
    v37 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v39 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_24;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_24:
      v40 = sub_AC5258(v30, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v36);
      v30 = v77;
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v30, *(_QWORD *)(v40 + 8));
    if ( !routeIds )
      sub_B2C434(v41, v42);
    v44 = routeIds->klass;
    v45 = v41;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v47 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v48 = (__int64)&v44->vtable[*v47].method;
    }
    else
    {
LABEL_31:
      v48 = sub_AC5258(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v43);
    }
    v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v48)(
            routeIds,
            *(_QWORD *)(v48 + 8));
    if ( !v51 )
      sub_B2C434(0LL, v49);
    while ( 1 )
    {
      v52 = *(_QWORD *)v51;
      if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
      {
        v53 = 0LL;
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v53;
          v54 += 4;
          if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
            goto LABEL_38;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_38:
        v55 = sub_AC5258(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
        break;
      v57 = *(_QWORD *)v51;
      if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
            goto LABEL_45;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_45:
        v60 = sub_AC5258(v51, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v56);
      }
      v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v51, *(_QWORD *)(v60 + 8));
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(UserId, UserId);
      haveRouteId = UserQuestRouteMaster__haveRouteId(MasterData_WarQuestSelectionMaster, UserId, v45, v61, 0LL);
      if ( haveRouteId )
      {
        if ( !v21 )
          sub_B2C434(haveRouteId, v64);
        System_Collections_Generic_HashSet_int___Add(
          v21,
          v61,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v78[v31] = 100;
    v65 = ++v79;
    v66 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v67 = 0LL;
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_59;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_59:
      v69 = sub_AC5258(v51, System_IDisposable_TypeInfo, 0LL, v56);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v69)(v51, *(_QWORD *)(v69 + 8));
    v30 = v77;
    v31 = 0;
    if ( v65 )
    {
      v31 = v65;
      if ( v78[v65 - 1] == 100 )
      {
        v79 = v65 - 1;
        v31 = v65 - 1;
      }
    }
  }
  v78[v31] = 120;
  v70 = ++v79;
  if ( v30 )
  {
    v71 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_73;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_73:
      v74 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v36);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v30, *(_QWORD *)(v74 + 8));
  }
  if ( v70 && v78[v70 - 1] == 120 )
    v79 = v70 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v21 )
        goto LABEL_90;
      return v21->fields._count <= count;
    case 1:
      if ( !v21 )
        goto LABEL_90;
      return v21->fields._count >= count;
    case 0:
      if ( v21 )
        return v21->fields._count == count;
LABEL_90:
      sub_B2C434(Instance, v19);
    default:
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship(
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  int64_t UserId; // x22

  if ( (byte_4187FAC & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4187FAC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25786472(UserId, svtId, condFriendshipRank, isAbove, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_25784076(
        int64_t userSvtId,
        int32_t condFriendshipRank,
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
  int64_t Instance; // x0
  __int64 v14; // x1
  __int128 v15; // q1
  int64_t v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  const MethodInfo *v19; // x4
  int32_t v20; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-50h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4187FAE & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187FAE = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_25;
  v15 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v23 = v24;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v23, 0LL);
  if ( !entity )
LABEL_25:
    sub_B2C434(Instance, v14);
  v16 = Instance;
  v18 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25786472(v16, v20, condFriendshipRank, 1, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_25786472(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4187FAD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187FAD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v12);
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
      v14 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v15 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v15;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v16 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v17 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v16;
    *(_QWORD *)&v20.fields.fakeValue = v17;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_4187FA6 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4187FA6 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25783916(UserId, condSvtId, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  __int64 v10; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187FE1 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   &v13,
                   eventId,
                   (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v13 )
      {
        if ( entity )
          return entity->fields.createdAt < *(_QWORD *)&v13->fields.eventId;
LABEL_18:
        sub_B2C434(Instance, v10);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGet_25783916(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4187FA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condSvtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FA7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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


bool __fastcall CondType__IsServantGet_25803752(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Instance; // x0
  __int64 v11; // x1
  __int128 v12; // q1
  int64_t v13; // x19
  __int64 v14; // x20
  __int64 v15; // x21
  const MethodInfo *v16; // x2
  int32_t v17; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4187FA8 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187FA8 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_23;
  v12 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
  if ( !entity )
LABEL_23:
    sub_B2C434(Instance, v11);
  v13 = Instance;
  v15 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25783916(v13, v17, v16);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_4187FB0 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4187FB0 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_25784644(UserId, condGroup, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGroup_25784644(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w22
  __int64 v13; // x8
  __int64 v15; // x0

  if ( (byte_4187FB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&condGroup);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FB1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v8);
  }
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= v10 )
    {
      v15 = sub_B2C460(Instance);
      sub_B2C400(v15, 0LL);
    }
    v13 = *((_QWORD *)v11 + (int)v12 + 4);
    if ( !v13 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Instance = UserServantCollectionMaster__GetEntityDefinitely(
                 MasterData_WarQuestSelectionMaster,
                 userId,
                 *(_DWORD *)(v13 + 20),
                 0LL);
    if ( Instance )
    {
      if ( *((_DWORD *)Instance + 10) == 2 )
        return 1;
    }
    v10 = *((_DWORD *)v11 + 6);
    if ( (int)++v12 >= v10 )
      return 0;
  }
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4187FA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187FA9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4187FF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condNum);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FF8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187F9D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLv);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187F9D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return entity->fields.lv >= condLv;
LABEL_12:
    sub_B2C434(Instance, v10);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_25744432(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int64_t UserId; // x21

  if ( (byte_4187F9E & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condLv);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_4187F9E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_25786064(UserId, svtId, condLv, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_25786064(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4187F9F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187F9F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4187FA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4187FA1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_23:
    sub_B2C434(Instance, v13);
  }
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v16 = 0;
    goto LABEL_15;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_23;
  v15 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
LABEL_15:
  if ( checkType == 2 )
    return v16 <= condLimitCount;
  if ( checkType == 1 )
    return v16 >= condLimitCount;
  if ( checkType )
    return 0;
  return v16 == condLimitCount;
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
  if ( (byte_4188011 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_4188011 = 1;
  }
  if ( !v4 )
    sub_B2C434(targetIds, *(_QWORD *)&targetNum);
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
        v10 = sub_B2C460(v6);
        sub_B2C400(v10, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t CombineVoiceLimitCount; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187FA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4187FA2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_B2C434(Instance, v12);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_25744608(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  int64_t UserId; // x22

  if ( (byte_4187FA3 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condLimitCount);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    byte_4187FA3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_25786228(UserId, svtId, condLimitCount, checkType, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_25786228(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4187FA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187FA4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsShopGroupLimit(int32_t condValue, int32_t limitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  __int64 v9; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v11; // x20
  __int64 v12; // x23
  UserShopMaster_o *v13; // x21
  il2cpp_array_size_t v14; // w24
  int32_t v15; // w25
  ShopGroupEntity_o *v16; // x8
  int32_t shopId; // w22
  __int64 v18; // x0
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187FF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, *(_QWORD *)&limitNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187FF6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v11 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  v12 = *(_QWORD *)&v11->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (UserShopMaster_o *)Instance;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = v11->m_Items[v14];
      if ( !v16 )
        break;
      shopId = v16->fields.shopId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v13 )
        break;
      Instance = UserShopMaster__TryGetEntity(v13, &entity, Instance, shopId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v15 += entity->fields.num;
        if ( v15 >= limitNum )
          return 1;
      }
      if ( (int)++v14 >= (int)v12 )
        return 0;
      if ( v14 >= v11->max_length )
      {
        v18 = sub_B2C460(Instance);
        sub_B2C400(v18, 0LL);
      }
    }
LABEL_23:
    sub_B2C434(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  int v10; // w22
  UserShopMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  signed __int64 v13; // x24
  __int64 v15; // x0

  if ( (byte_4187FDA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&num);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FDA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_16;
  v9 = *(_QWORD *)&values->max_length;
  v10 = 0;
  if ( v9 && (int)v9 >= 1 )
  {
    v11 = (UserShopMaster_o *)Instance;
    v12 = 0LL;
    v10 = 0;
    v13 = (int)v9;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( v12 >= values->max_length )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      if ( !v11 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v11, Instance, values->m_Items[v12 + 1], 0LL);
      if ( !Instance )
        break;
      ++v12;
      v10 += *(_DWORD *)(Instance + 28);
      if ( (__int64)v12 >= v13 )
        return num > 0 && v10 == num;
    }
LABEL_16:
    sub_B2C434(Instance, v8);
  }
  return num > 0 && v10 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  __int64 v10; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  il2cpp_array_size_t v12; // w23
  ShopGroupEntity_o *v13; // x8
  ShopEntity_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_4187FF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187FF0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v9 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B2C434(Instance, v7);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  v10 = *(_QWORD *)&v9->max_length;
  if ( (int)v10 < 1 )
    goto LABEL_18;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    v13 = v9->m_Items[v12];
    if ( !v13 || !v11 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v11,
                                  v13->fields.shopId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v14 = (ShopEntity_o *)Instance;
      Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)ShopEntity__IsSoldOut(v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( (int)++v12 >= (int)v10 )
      goto LABEL_18;
    if ( v12 >= v9->max_length )
    {
      v15 = sub_B2C460(Instance);
      sub_B2C400(v15, 0LL);
    }
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4188023 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4188023 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}


bool __fastcall CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int v6; // w21
  int v7; // w20

  if ( (byte_418802B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    byte_418802B = 1;
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

  if ( (byte_418802C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    byte_418802C = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool result; // w0
  int v9; // w20
  int v10; // w21
  int64_t Instance; // x0
  __int64 v12; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418802A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, condVal);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418802A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v9 = condId / 100;
    v10 = condId % 100;
    if ( v10 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = UserSuperBossMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v9, v10, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_18:
        sub_B2C434(Instance, v12);
      }
      return 0;
    }
  }
  return result;
}


bool __fastcall CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187FFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4187FFB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187FFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4187FFD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0LL) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserEventServantFatigueMaster_o *v12; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v14; // x8
  int64_t v15; // x22
  int32_t v16; // w26
  unsigned __int64 v17; // x27
  signed __int64 v18; // x28
  int64_t v19; // x23
  __int64 v20; // x23
  Il2CppObject *lockCountObj; // x24
  int32_t v22; // w0
  int64_t v23; // x23
  __int64 v24; // x0
  bool isRecover; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4187FEF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, *(_QWORD *)&condNum);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187FEF = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_28:
    sub_B2C434(Instance, v11);
  }
  v12 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v14 = *(_QWORD *)(RecoverySvtIdList + 24);
    v15 = RecoverySvtIdList;
    if ( (int)v14 < 1 )
    {
LABEL_25:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v16 = 0;
    v17 = 0LL;
    v18 = (int)v14;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v15 + 32 + 8 * v17);
      if ( v19 < 1 )
        goto LABEL_22;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    v19,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_28;
      lockCountObj = Instance->fields.lockCountObj;
      v20 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = lockCountObj;
      *(_QWORD *)&v28.fields.fakeValue = v20;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v12, &recoverAt, &isRecover, eventId, v22, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v23 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v23 - RecoverySvtIdList > 0 )
          goto LABEL_22;
        ++v16;
      }
      if ( v16 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_22:
      if ( (__int64)++v17 >= v18 )
        goto LABEL_25;
      if ( v17 >= *(unsigned int *)(v15 + 24) )
      {
        v24 = sub_B2C460(RecoverySvtIdList);
        sub_B2C400(v24, 0LL);
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
  if ( (byte_4188030 & 1) == 0 )
  {
    countFunc = (System_Func_int__int__o *)sub_B2C35C(&Method_System_Func_int__int__Invoke__, targetIds);
    byte_4188030 = 1;
  }
  if ( !targetIds )
LABEL_14:
    sub_B2C434(countFunc, targetIds);
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
        v10 = sub_B2C460(countFunc);
        sub_B2C400(v10, 0LL);
      }
      if ( !v6 )
        goto LABEL_14;
      countFunc = (System_Func_int__int__o *)System_Func_int__int___Invoke(
                                               v6,
                                               targetIds->m_Items[v8 + 1],
                                               (const MethodInfo_270CF48 *)Method_System_Func_int__int__Invoke__);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsTotalTdLvCond(
        int32_t condType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int v10; // w8

  if ( (byte_4188005 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188005 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  v10 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0LL);
  switch ( condType )
  {
    case 'p':
      return v10 >= 0;
    case 'o':
      return v10 < 1;
    case 'n':
      return v10 == 0;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_4188007 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flag);
    sub_B2C35C(&System_Enum_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&EventStatus_Type_var, v8);
    sub_B2C35C(&EventStatus_Type_TypeInfo, v9);
    sub_B2C35C(&System_Type_TypeInfo, v10);
    byte_4188007 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B2C434(Instance, v12);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v15 = EntityDefinitely;
    v16 = (int)EventStatus_Type_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v21.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
    v20 = flag;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v20);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v18, 0LL)
                            && UserEventEntity__getEventFlag(v15, flag, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_4188008 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&flag);
    sub_B2C35C(&System_Enum_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&UserQuestEntity_StatusKind_var, v8);
    sub_B2C35C(&UserQuestEntity_StatusKind_TypeInfo, v9);
    sub_B2C35C(&System_Type_TypeInfo, v10);
    byte_4188008 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B2C434(Instance, v12);
  EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, questId, 0LL);
  if ( EntityFromId )
  {
    v15 = EntityFromId;
    v16 = (int)UserQuestEntity_StatusKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v21.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
    v20 = flag;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v20);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v18, 0LL)
                        && UserQuestEntity__HasStatus_21570428(v15, flag, 0LL);
  }
  return (unsigned __int8)EntityFromId & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_418801E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&flagKind);
    sub_B2C35C(&System_Enum_TypeInfo, v5);
    sub_B2C35C(&UserShopFlag_FlagKind_var, v6);
    sub_B2C35C(&UserShopFlag_FlagKind_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&System_Type_TypeInfo, v10);
    byte_418801E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B2C434(Instance, v12);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v15 = EntityDefinitely;
    v16 = (int)UserShopFlag_FlagKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v21.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
    v20 = flagKind;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v20);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v18, 0LL)
                            && UserShopEntity__CheckFlagKind(v15, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  __int64 v16; // x1
  int64_t v18; // x0
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4187FF3 & 1) == 0 )
  {
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, *(_QWORD *)&playCount);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4187FF3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_17:
    sub_B2C434(Instance, v8);
  v9 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v9 - 1] != EventRewardRootComponent_TypeInfo )
  {
    v18 = sub_B2C728(Instance);
    return CondType__IsArrivalDate(v18, v19);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0LL);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v13 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v15, 0LL);
  if ( !byte_4188045 )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v16);
    byte_4188045 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187FE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&num);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187FE2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B2C434(Instance, v8);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  int max_length; // w8
  unsigned int v6; // w9
  __int64 v8; // x0

  if ( (byte_4188010 & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, method);
    byte_4188010 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_B2C434(0LL, v4);
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v8 = sub_B2C460(ClearWarIdList);
      sub_B2C400(v8, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v17; // x19
  CondType___c_c *v18; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__168_0; // x20
  Il2CppObject *v21; // x21
  struct CondType___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CondType___c_c *v29; // x0
  struct CondType___c_StaticFields *v30; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__168_1; // x20
  Il2CppObject *v32; // x21
  struct CondType___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  peRenderTexture_ChangeLayerObject_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t changeMaterial_high; // w19

  if ( (byte_418801C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_WarEntity___ctor__, v1);
    sub_B2C35C(&System_Comparison_WarEntity__TypeInfo, v2);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__Find__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Predicate_WarEntity___ctor__, v8);
    sub_B2C35C(&System_Predicate_WarEntity__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, v11);
    sub_B2C35C(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, v12);
    sub_B2C35C(&CondType___c_TypeInfo, v13);
    byte_418801C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v15);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
  if ( !EntityList )
    return 0;
  v17 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v18 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v18 = CondType___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__168_0,
      v21,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarEntity___ctor__);
    v22 = CondType___c_TypeInfo->static_fields;
    v22->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__168_0,
      (System_Int32_array **)_9__168_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v17,
    (System_Comparison_T__o *)_9__168_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v29 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v29 = CondType___c_TypeInfo;
  }
  v30 = v29->static_fields;
  _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v30->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v30 = CondType___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__168_1,
      v32,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_WarEntity___ctor__);
    v33 = CondType___c_TypeInfo->static_fields;
    v33->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__168_1,
      (System_Int32_array **)_9__168_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v17,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v40 )
    return 0;
  changeMaterial_high = HIDWORD(v40[1].fields.changeMaterial);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25746984(changeMaterial_high, -1, 0, v41);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x19
  System_String_o *result; // x0
  LocalizationManager_c *v11; // x0

  if ( (byte_4187F91 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3295/*"COND_TYPE_NONE"*/, v8);
    byte_4187F91 = 1;
  }
  switch ( condType )
  {
    case 0:
      v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_3295/*"COND_TYPE_NONE"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      result = LocalizationManager__Get(v9, 0LL);
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
      if ( !byte_4185BC0 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
        byte_4185BC0 = 1;
      }
      v11 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v11 = LocalizationManager_TypeInfo;
      }
      result = v11->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *__fastcall CondType__OpenConditionTextEvent(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4187FB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, textType);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3294/*"COND_TYPE_EVENT"*/, v8);
    byte_4187FB4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_3294/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B2C434(Instance, v10);
  v13 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName(Entity, 0LL);
  return System_String__Format(v13, EventName, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v12; // x19

  if ( (byte_4187FB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3296/*"COND_TYPE_PURCHASE_QP_SHOP"*/, v8);
    byte_4187FB7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_3296/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B2C434(Instance, v10);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v12; // x19

  if ( (byte_4187FBC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3297/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, v8);
    byte_4187FBC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_3297/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B2C434(Instance, v10);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x19
  LocalizationManager_c *v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187F97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, textType);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3298/*"COND_TYPE_QUEST_CLEAR"*/, v8);
    byte_4187F97 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         condQuestId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_3298/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = LocalizationManager__Get(v12, 0LL);
    if ( entity )
      return System_String__Format(Master_WarQuestSelectionMaster, (Il2CppObject *)entity->fields.age, 0LL);
LABEL_22:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    byte_4185BC0 = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager_TypeInfo;
  }
  return v14->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v19; // x22
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  Il2CppObject *age; // x20
  System_String_o *v26; // x19
  Il2CppObject *v27; // x0
  LocalizationManager_c *v28; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+1Ch] [xbp-24h] BYREF

  v30 = condQuestPhase;
  if ( (byte_4187F9B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3299/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, v14);
    sub_B2C35C(&StringLiteral_3298/*"COND_TYPE_QUEST_CLEAR"*/, v15);
    byte_4187F9B = 1;
  }
  entity = 0LL;
  if ( getWarName )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    QuestId = WarMaster__getByLastQuestId(Master_WarQuestSelectionMaster, condQuestId, 0LL);
    if ( QuestId )
    {
      v19 = QuestId;
      v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_3298/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get(v20, 0LL);
      return System_String__Format(v21, (Il2CppObject *)v19->fields.name, 0LL);
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
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           condQuestId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v24 = System_String__Concat_44305532((System_String_o *)StringLiteral_3299/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (WarMaster_o *)LocalizationManager__Get(v24, 0LL);
      if ( entity )
      {
        age = (Il2CppObject *)entity->fields.age;
        v26 = (System_String_o *)Master_WarQuestSelectionMaster;
        v27 = (Il2CppObject *)System_Int32__ToString((int32_t)&v30, 0LL);
        return System_String__Format_44301068(v26, age, v27, 0LL);
      }
LABEL_38:
      sub_B2C434(Master_WarQuestSelectionMaster, v17);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v23);
      byte_4185BC0 = 1;
    }
    v28 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager_TypeInfo;
    }
    return v28->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187FAF & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, textType);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3300/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, v6);
    byte_4187FAF = 1;
  }
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_3300/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  v11 = condFriendshipRank;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  ServantEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x19
  Il2CppObject *Name; // x1

  if ( (byte_4187FAB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, textType);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_3301/*"COND_TYPE_SERVANT_GET"*/, v8);
    byte_4187FAB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                condSvtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_3301/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B2C434(Instance, v10);
  v13 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName(Entity, -1, -1, 0LL);
  return System_String__Format(v13, Name, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187FB2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, textType);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3302/*"COND_TYPE_SERVANT_GROUP"*/, v6);
    byte_4187FB2 = 1;
  }
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_3302/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  v11 = condGroup;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187FA0 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, textType);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3303/*"COND_TYPE_SERVANT_LEVEL"*/, v6);
    byte_4187FA0 = 1;
  }
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_3303/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  v11 = condLv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187FA5 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, textType);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3304/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, v6);
    byte_4187FA5 = 1;
  }
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_3304/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  v11 = condLimitCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format(v8, v9, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w19
  SpotPathEntity_o *v14; // x19
  int32_t name; // w20
  int32_t age_high; // w21

  if ( (byte_4187F87 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotPathMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v7);
    sub_B2C35C(&EventSpotMoveManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187F87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  bannerId = Entity->fields.bannerId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v11);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bannerId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = (SpotPathEntity_o *)Entity;
    age_high = HIDWORD(Entity->fields.age);
    name = (int32_t)Entity->fields.name;
    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    }
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(age_high, name, v14, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v11; // [xsp+8h] [xbp-28h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4187F86 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4187F86 = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                  (TotalEventRaidMaster_o *)Instance,
                                  &v11,
                                  eventId,
                                  targetId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_15;
      defeatedAt = v11->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_B2C434(Instance, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v15; // x21
  __int64 v16; // x0

  if ( (byte_418801D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_long___, target);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMapMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418801D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapMaster___);
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
    v16 = sub_B2C460(Instance);
    sub_B2C400(v16, 0LL);
  }
  lookup = Instance->fields.lookup;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !lookup || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    HIDWORD(lookup->fields.buckets),
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v15 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_B2C434(Instance, v11);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_27014188(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v15 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_1FFD60C *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(collection, method);
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
        v8 = sub_B2C460(v4);
        sub_B2C400(v8, 0LL);
      }
      v7 = p_fakeValue[v5++];
      v4 = (unsigned int)(v4 + v7 - 1);
    }
    while ( (__int64)v5 < (int)currentCryptoKey );
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__checkCondTypeRaidAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  char v11; // w8
  TotalEventRaidEntity_o *v13; // [xsp+0h] [xbp-30h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187F88 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187F88 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v11 = 0;
    return v11 & 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v10);
  }
  Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                (TotalEventRaidMaster_o *)Instance,
                                &v13,
                                targetId,
                                condValue,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v13 )
    goto LABEL_14;
  v11 = (entity->fields.maxHp > v13->fields.totalDamage) ^ alive ^ 1;
  return v11 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__checkCondTypeRaidGroupAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v13; // x22
  unsigned int v14; // w23
  EventRaidEntity_o *v15; // x24
  char v16; // w8
  __int64 v18; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187F89 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187F89 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_B2C434(Instance, v10);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v16 = 0;
  }
  else
  {
    v13 = (TotalEventRaidMaster_o *)Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v18 = sub_B2C460(Instance);
        sub_B2C400(v18, 0LL);
      }
      v15 = EventRaidEntityArray->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_19;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v13, &entity, targetId, v15->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v15->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_16;
    }
    v16 = 1;
  }
  return (v16 ^ ~alive) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187F85 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187F85 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_B2C434(Instance, v9);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v10);
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
  sub_B2C2F8(
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
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = level;
  v12 = id;
  if ( (byte_418649A & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&id);
    byte_418649A = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B2C300(this, v10, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B2C304(result, 0LL, method);
  if ( !v3 )
    sub_B2C434(0LL, v4);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t result; // w0
  __int64 v20; // x0
  __int64 (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  CondType_CountDelegate_o *v22; // x8
  __int64 *v23; // x22
  __int64 v24; // x23
  __int64 (__fastcall *v25)(_QWORD, _QWORD, __int64); // x24
  char v26; // w24
  char v27; // w0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  CondType_CountDelegate_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v34;
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
      v22 = v9[v10];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&id, *(_QWORD *)&level, method);
      if ( (sub_B2C38C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 2 )
        goto LABEL_35;
      result = v25((unsigned int)id, (unsigned int)level, v24);
LABEL_36:
      if ( ++v10 == v8 )
        return result;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B2C384(v24);
      v27 = sub_B2C788(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_34;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_34:
            v20 = sub_AC5258(v23, v30, v31, v28);
          }
          v18 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v24);
        result = (*v21)(v23, (unsigned int)id, (unsigned int)level, v21);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v23, class_0, v11, v13);
          }
          result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
                     v23,
                     (unsigned int)id,
                     (unsigned int)level,
                     *(_QWORD *)(v17 + 8));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v23
                                                                                + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                                + 312))(
                     v23,
                     (unsigned int)id,
                     (unsigned int)level,
                     *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v25)(
               v23,
               (unsigned int)id,
               (unsigned int)level,
               v24);
    goto LABEL_36;
  }
  return 0;
}


void __fastcall CondType___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186491 & 1) == 0 )
  {
    sub_B2C35C(&CondType___c_TypeInfo, v1);
    byte_4186491 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CondType___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)CondType___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4186495 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4186495 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4186496 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4186496 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestLevel; // w1

  if ( (byte_4186492 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4186492 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestLevel = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_40694800(current, ExchangeServantHighestLevel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestSkillLevel; // w1

  if ( (byte_4186493 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4186493 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestSkillLevel = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_40694800(current, ExchangeServantHighestSkillLevel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestFriendShipRank; // w1

  if ( (byte_4186494 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4186494 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestFriendShipRank = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  return UnityEngine_Mathf__Max_40694800(current, ExchangeServantHighestFriendShipRank, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__168_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, collection);
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
        v10 = sub_B2C460(v6);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.targetId;
}


void __fastcall CondType___c__DisplayClass19_0___ctor(CondType___c__DisplayClass19_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__0(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4186497 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4186497 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4186498 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4186498 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4186499 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4186499 = 1;
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
    sub_B2C434(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}