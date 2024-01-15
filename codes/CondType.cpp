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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x19
  struct CondType_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FA2C2 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v9);
    byte_40FA2C2 = 1;
  }
  CondType_TypeInfo->static_fields->EVENT_POINT_DEVIDER = 100;
  CondType_TypeInfo->static_fields->EVENT_RACE_DEVIDER = 100;
  v10 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->TARGET_PARAM_NUM = 2;
  static_fields = v10->static_fields;
  static_fields->uQuestMst = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->uQuestMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                                                   v12,
                                                                                                   v13,
                                                                                                   v14,
                                                                                                   v15);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v17 = CondType_TypeInfo->static_fields;
  v17->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v17->cachedServantEquipIdStrDic,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  CondType_TypeInfo->static_fields->lastUserId = -1LL;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  CondType___c__DisplayClass28_0_o *v20; // x19
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestScriptMaterialNextMaster_o *v27; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v30; // x22
  UserQuestEntity_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UserQuestEntity_o *IncludedGroupQuest; // x22
  CondType___c_c *v37; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x24
  Il2CppObject *v40; // x25
  struct CondType___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarQuestSelectionMaster_o *v48; // x0
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v51; // x25
  int64_t Time; // x0
  UserQuestEntity_o *QuestClearDummyData; // x0
  int64_t updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x20

  if ( (byte_40FA219 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&condQuestId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____66839424, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v11);
    sub_B16FFC(&Method_System_Func_UserQuestEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_UserQuestEntity__bool__TypeInfo, v13);
    sub_B16FFC(&MaterialGroupClearHistoryManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v16);
    sub_B16FFC(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v17);
    sub_B16FFC(&CondType___c__DisplayClass28_0_TypeInfo, v18);
    sub_B16FFC(&CondType___c_TypeInfo, v19);
    byte_40FA219 = 1;
  }
  v20 = (CondType___c__DisplayClass28_0_o *)sub_B170CC(
                                              CondType___c__DisplayClass28_0_TypeInfo,
                                              *(_QWORD *)&condQuestId,
                                              method,
                                              v3,
                                              v4);
  CondType___c__DisplayClass28_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_38;
  v20->fields.condQuestId = condQuestId;
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
    Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v27 = Master_WarQuestSelectionMaster;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                         Master_WarQuestSelectionMaster,
                         v20->fields.condQuestId,
                         0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v27,
                                       IncludedGroups,
                                       0LL);
      v30 = QuestScriptMaterialNextMaster__GetIncludedGroups(v27, v20->fields.condQuestId, 0LL);
      v31 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      }
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v30, 0LL);
      v37 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v37 = CondType___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_UserQuestEntity__bool__TypeInfo,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34,
                                                                                        v35);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_1,
          v40,
          Method_CondType___c__CheckGroupMaterialQuest_b__28_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v41 = CondType___c_TypeInfo->static_fields;
        v41->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v41->__9__28_1,
          (System_Int32_array **)_9__28_1,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      if ( !System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v31 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                 v27,
                 v20->fields.condQuestId,
                 v31,
                 IncludedGroupQuest,
                 0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v48 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v31->fields.questId;
      questPhase = v31->fields.questPhase;
      v51 = (UserQuestMaster_o *)v48;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v51 )
      {
        QuestClearDummyData = UserQuestMaster__CreateQuestClearDummyData(v51, questId, questPhase, Time, 0LL);
        if ( QuestClearDummyData )
        {
          updatedAt = v31->fields.updatedAt;
          v31 = QuestClearDummyData;
          QuestClearDummyData->fields.updatedAt = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                   v27,
                   v20->fields.condQuestId,
                   v31,
                   IncludedGroupQuest,
                   0LL);
        }
      }
    }
LABEL_38:
    sub_B170D4();
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserQuestEntity__bool__TypeInfo,
                                                                             v22,
                                                                             v23,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v57,
    (Il2CppObject *)v20,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserQuestEntity__bool___ctor__);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                v56,
                                (System_Func_TSource__bool__o *)v57,
                                (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____66839424);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  void *CollectionList; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  _DWORD *v11; // x21
  int32_t v12; // w22
  unsigned int v13; // w24
  char *v14; // x8
  UserServantCollectionEntity_o *v15; // x23
  int v16; // w8
  unsigned int v17; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA2B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, *(_QWORD *)&targetNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FA2B1 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (CollectionList = UserServantCollectionMaster__getCollectionList(
                           Master_WarQuestSelectionMaster,
                           &findSum[1],
                           findSum,
                           0,
                           0,
                           0LL)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  v10 = *((_QWORD *)CollectionList + 3);
  v11 = CollectionList;
  if ( v10 && (int)v10 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
        goto LABEL_27;
      v14 = (char *)&v11[2 * v13];
      v15 = (UserServantCollectionEntity_o *)*((_QWORD *)v14 + 4);
      if ( !v15 )
        goto LABEL_28;
      CollectionList = (void *)UserServantCollectionEntity__IsFinded(*((UserServantCollectionEntity_o **)v14 + 4), 0LL);
      if ( ((unsigned __int8)CollectionList & 1) != 0 )
      {
        CollectionList = UserServantCollectionEntity__getSkillLevelList(v15, 0LL);
        if ( !CollectionList )
          goto LABEL_28;
        v16 = *((_DWORD *)CollectionList + 6);
        if ( v16 >= 1 )
          break;
      }
LABEL_23:
      LODWORD(v10) = v11[6];
      if ( (int)++v13 >= (int)v10 )
        return v12;
    }
    v17 = 0;
    while ( v17 < v16 )
    {
      if ( *((_DWORD *)CollectionList + (int)v17 + 8) >= skillLv )
        ++v12;
      if ( targetNum && v12 >= targetNum )
        return v12;
      if ( (int)++v17 >= v16 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B17100(CollectionList, v8, v9);
    sub_B170A0();
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  CondType___c__DisplayClass194_0_o *v20; // x20
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CondType___c_c *v33; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__194_1; // x20
  Il2CppObject *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct CondType___c_StaticFields *v43; // x0
  BattleServantConfConponent_o *p__9__194_1; // x0
  CondType___c_c *v45; // x0
  struct CondType___c_StaticFields *v46; // x8
  Il2CppObject *v47; // x21
  struct CondType___c_StaticFields *v48; // x0

  if ( (byte_40FA2B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v10);
    sub_B16FFC(&Method_System_Func_UserClassBoardSquareEntity__int___ctor__, v11);
    sub_B16FFC(&Method_System_Func_UserClassBoardSquareEntity__bool___ctor__, v12);
    sub_B16FFC(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v13);
    sub_B16FFC(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v14);
    sub_B16FFC(&Method_CondType___c__CountClassBoardSquareReleased_b__194_1__, v15);
    sub_B16FFC(&Method_CondType___c__CountClassBoardSquareReleased_b__194_2__, v16);
    sub_B16FFC(&Method_CondType___c__DisplayClass194_0__CountClassBoardSquareReleased_b__0__, v17);
    sub_B16FFC(&CondType___c__DisplayClass194_0_TypeInfo, v18);
    sub_B16FFC(&CondType___c_TypeInfo, v19);
    byte_40FA2B8 = 1;
  }
  v20 = (CondType___c__DisplayClass194_0_o *)sub_B170CC(CondType___c__DisplayClass194_0_TypeInfo, method, v2, v3, v4);
  CondType___c__DisplayClass194_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_27;
  v20->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B170D4();
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           Master_WarQuestSelectionMaster,
                                                                                           (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               Entitys_WarQuestSelectionEntity,
                                                               (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v20->fields.targetId )
  {
    v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_UserClassBoardSquareEntity__bool__TypeInfo,
                                                                               v23,
                                                                               v24,
                                                                               v25,
                                                                               v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v28,
      (Il2CppObject *)v20,
      Method_CondType___c__DisplayClass194_0__CountClassBoardSquareReleased_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_UserClassBoardSquareEntity__bool___ctor__);
    v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v27,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v33 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v33 = CondType___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__194_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__194_1;
    if ( !_9__194_1 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__194_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_UserClassBoardSquareEntity__int__TypeInfo,
                                                                                    v29,
                                                                                    v30,
                                                                                    v31,
                                                                                    v32);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__194_1,
        v36,
        Method_CondType___c__CountClassBoardSquareReleased_b__194_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v43 = CondType___c_TypeInfo->static_fields;
      v43->__9__194_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__194_1;
      p__9__194_1 = (BattleServantConfConponent_o *)&v43->__9__194_1;
LABEL_25:
      sub_B16F98(p__9__194_1, (System_Int32_array **)_9__194_1, v37, v38, v39, v40, v41, v42);
    }
  }
  else
  {
    v45 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v45 = CondType___c_TypeInfo;
    }
    v46 = v45->static_fields;
    _9__194_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v46->__9__194_2;
    if ( !_9__194_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v46 = CondType___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)v46->__9;
      _9__194_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_UserClassBoardSquareEntity__int__TypeInfo,
                                                                                    v23,
                                                                                    v24,
                                                                                    v25,
                                                                                    v26);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__194_1,
        v47,
        Method_CondType___c__CountClassBoardSquareReleased_b__194_2__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v48 = CondType___c_TypeInfo->static_fields;
      v48->__9__194_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__194_1;
      p__9__194_1 = (BattleServantConfConponent_o *)&v48->__9__194_2;
      goto LABEL_25;
    }
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           v27,
           (System_Func_TSource__int__o *)_9__194_1,
           (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v13; // x0
  UserServantCollectionEntity_array *CollectionList; // x0
  UserServantCollectionEntity_array *v15; // x21
  WarQuestSelectionMaster_o *IsFinded; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int max_length; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x23
  int32_t v21; // w22
  int v22; // w8
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x24
  void *data; // x25
  const char *namespaze; // x26
  int32_t v27; // w0
  WarEntity_o *v29; // [xsp+8h] [xbp-68h] BYREF
  __int64 findSum; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FA2B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantClassMaster___, countFunc);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int__Invoke__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40FA2B5 = 1;
  }
  entity = 0LL;
  v29 = 0LL;
  findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         classId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v13 = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !v13 )
      goto LABEL_35;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       v13,
                       (int32_t *)&findSum + 1,
                       (int32_t *)&findSum,
                       0,
                       0,
                       0LL);
    if ( !CollectionList )
      goto LABEL_35;
    v15 = CollectionList;
    if ( *(_QWORD *)&CollectionList->max_length )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      IsFinded = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      max_length = v15->max_length;
      if ( max_length >= 1 )
      {
        v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsFinded;
        v21 = 0;
        v22 = 0;
        while ( 1 )
        {
          if ( v22 >= (unsigned int)max_length )
          {
            sub_B17100(IsFinded, v17, v18);
            sub_B170A0();
          }
          v23 = &v15->obj.klass + v22;
          v24 = v23[4];
          if ( !v24 )
            break;
          IsFinded = (WarQuestSelectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                    (UserServantCollectionEntity_o *)v23[4],
                                                    0LL);
          if ( ((unsigned __int8)IsFinded & 1) != 0 )
          {
            namespaze = v24->_1.namespaze;
            data = v24->_1.byval_arg.data;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v32.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v32.fields.fakeValue = data;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
            if ( !v20 )
              break;
            IsFinded = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v20,
                                                      &v29,
                                                      v27,
                                                      (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsFinded & 1) != 0 )
            {
              if ( !v29 )
                break;
              if ( v29->fields.startType == classId )
              {
                if ( !countFunc )
                  break;
                IsFinded = (WarQuestSelectionMaster_o *)System_Func_UserServantCollectionEntity__int___Invoke(
                                                          countFunc,
                                                          (UserServantCollectionEntity_o *)v24,
                                                          (const MethodInfo_2B6B700 *)Method_System_Func_UserServantCollectionEntity__int__Invoke__);
                v21 += (int)IsFinded;
              }
            }
          }
          v22 = findSum + 1;
          LODWORD(findSum) = v22;
          max_length = v15->max_length;
          if ( v22 >= max_length )
            return v21;
        }
LABEL_35:
        sub_B170D4();
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
  CondType_c *v20; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *cachedServantEquipIdStrDic; // x0
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ServantEquipCollectionList; // x23
  WebViewManager_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  WebViewManager_o *v27; // x0
  ServantLimitMaster_o *v28; // x21
  WebViewManager_o *v29; // x0
  WarQuestSelectionMaster_o *v30; // x0
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x23
  void *monitor; // x24
  int32_t v34; // w1
  WarEntity_o *v35; // x23
  struct System_String_o *age; // x24
  __int64 v37; // x25
  int32_t v38; // w1
  ServantLimitEntity_o *v39; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // [xsp+0h] [xbp-A0h]
  int32_t v42; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_40FA29F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FA29F = 1;
  }
  entity = 0LL;
  memset(&v45, 0, sizeof(v45));
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
    v20 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v20 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v20->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_55:
      sub_B170D4();
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      cachedServantEquipIdStrDic,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_55;
  ServantEquipCollectionList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserServantCollectionMaster__getServantEquipCollectionList(MasterData_WarQuestSelectionMaster, CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic, 0LL);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_55;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v25,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_55;
  v28 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v27,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_55;
  v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v29,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_55;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)v30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    ServantEquipCollectionList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v42 = 0;
  v45 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__) )
  {
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B170D4();
    if ( LODWORD(v45.fields.current[2].monitor) == 2 )
    {
      monitor = v45.fields.current[1].monitor;
      klass = v45.fields.current[2].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v46.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v46.fields.fakeValue = klass;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
      if ( !v26 )
        sub_B170D4();
      v35 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v26,
              v34,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v35 )
      {
        v37 = *(_QWORD *)&v35->fields.id;
        age = v35->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v47.fields.currentCryptoKey = v37;
        *(_QWORD *)&v47.fields.fakeValue = age;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
        if ( !v28 )
          sub_B170D4();
        v39 = ServantLimitMaster__GetEntity(v28, v38, 0, 0LL);
        if ( v39
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v35, 0LL)
          && v39->fields.rarity == targetId % 100
          && SHIDWORD(current[2].monitor) >= targetId / 100 )
        {
          if ( !v41 )
            sub_B170D4();
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v41,
                  &entity,
                  (int32_t)v35[1].monitor,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__) )
            goto LABEL_48;
          if ( !entity )
            sub_B170D4();
          if ( *(&entity->fields.id + 1) != 3 )
LABEL_48:
            ++v42;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v42;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserExchangeSvtMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA2BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA2BC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount(MasterData_WarQuestSelectionMaster, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  UserEventRandomMissionMaster_o *v8; // x20
  int32_t v9; // w21
  unsigned __int64 v10; // x22

  if ( (byte_40FA2A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FA2A9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_18;
  v7 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = Master_WarQuestSelectionMaster;
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v7 )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v5, v6);
        sub_B170A0();
      }
      if ( !v8 )
        break;
      Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                                           v8,
                                                                           missionIds->m_Items[v10 + 1],
                                                                           0LL);
      if ( Master_WarQuestSelectionMaster )
        v9 += HIDWORD(Master_WarQuestSelectionMaster->fields.list);
      LODWORD(v7) = missionIds->max_length;
      if ( (__int64)++v10 >= (int)v7 )
        return v9;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA299 & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_158_0__, method);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8);
    byte_40FA299 = 1;
  }
  v9 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                         System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_158_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v10);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA29C & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_161_0__, method);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8);
    byte_40FA29C = 1;
  }
  v9 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                         System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_161_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v10);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA297 & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_156_0__, method);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8);
    byte_40FA297 = 1;
  }
  v9 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                         System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_156_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v10);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA2B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_189_0__, method);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8);
    byte_40FA2B3 = 1;
  }
  v9 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                         System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_189_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v10);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CondType___c__DisplayClass157_0_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v16; // x19
  const MethodInfo *v17; // x2

  if ( (byte_40FA298 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_CondType___c__DisplayClass157_0__CountServantFriendShipClassNum_g__CountFunc_0__, v8);
    sub_B16FFC(&CondType___c__DisplayClass157_0_TypeInfo, v9);
    byte_40FA298 = 1;
  }
  v10 = (CondType___c__DisplayClass157_0_o *)sub_B170CC(CondType___c__DisplayClass157_0_TypeInfo, method, v2, v3, v4);
  CondType___c__DisplayClass157_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  v15 = targetId / 100;
  v10->fields.friendShipRank = targetId % 100;
  v16 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                          v11,
                                                                          v12,
                                                                          v13,
                                                                          v14);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_CondType___c__DisplayClass157_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v15, (System_Func_UserServantCollectionEntity__int__o *)v16, v17);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v13; // x0
  UserServantCollectionMaster_o *v14; // x0
  UserServantCollectionEntity_array *CollectionList; // x0
  UserServantCollectionEntity_array *v16; // x21
  WebViewManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *IsFinded; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x23
  __int64 v23; // x26
  int32_t v24; // w22
  UserServantCollectionEntity_o *v25; // x24
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FA29B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&level);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FA29B = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         MasterData_WarQuestSelectionMaster,
         classId,
         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v13 )
      goto LABEL_28;
    v14 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v13,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !v14 )
      goto LABEL_28;
    CollectionList = UserServantCollectionMaster__getCollectionList(v14, &findSum[1], findSum, 0, 0, 0LL);
    if ( !CollectionList )
      goto LABEL_28;
    v16 = CollectionList;
    if ( *(_QWORD *)&CollectionList->max_length )
    {
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v17 )
        goto LABEL_28;
      IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v17,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v16->max_length;
      if ( max_length >= 1 )
      {
        v22 = IsFinded;
        v23 = 0LL;
        v24 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v23 >= max_length )
          {
            sub_B17100(IsFinded, v19, v20);
            sub_B170A0();
          }
          v25 = v16->m_Items[v23];
          if ( !v25 )
            break;
          IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantCollectionEntity__IsFinded(
                                                                      v16->m_Items[v23],
                                                                      0LL);
          if ( ((unsigned __int8)IsFinded & 1) != 0 && v25->fields.maxLv >= level )
          {
            v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v31.fields.currentCryptoKey = v27;
            *(_QWORD *)&v31.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
            if ( !v22 )
              break;
            IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                        v22,
                                                                        v28,
                                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !IsFinded )
              break;
            if ( LODWORD(IsFinded[1].monitor) == classId )
              ++v24;
          }
          max_length = v16->max_length;
          if ( (int)++v23 >= max_length )
            return v24;
        }
LABEL_28:
        sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v11; // x20

  if ( (byte_40FA29D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&level);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA29D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             sarvantId,
                             0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  v11 = EntityDefinitely;
  return UserServantCollectionEntity__IsFinded(EntityDefinitely, 0LL) && v11->fields.maxLv >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int v11; // w19
  WebViewManager_o *v12; // x0
  UserServantCollectionMaster_o *v13; // x0
  UserServantCollectionEntity_array *CollectionList; // x21
  WebViewManager_o *v15; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *IsFinded; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x22
  __int64 v21; // x26
  int32_t v22; // w23
  int v23; // w28
  UserServantCollectionEntity_o *v24; // x20
  __int64 v25; // x24
  __int64 v26; // x25
  int32_t v27; // w0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FA296 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA296 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  v11 = targetId / 100;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         MasterData_WarQuestSelectionMaster,
         targetId / 100,
         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_28;
    v13 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v12,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !v13 )
      goto LABEL_28;
    CollectionList = UserServantCollectionMaster__getCollectionList(v13, &findSum[1], findSum, 0, 0, 0LL);
    v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v15 )
      goto LABEL_28;
    IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)v15,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_28;
    v19 = *(_QWORD *)&CollectionList->max_length;
    if ( v19 )
    {
      if ( (int)v19 >= 1 )
      {
        v20 = IsFinded;
        v21 = 0LL;
        v22 = 0;
        v23 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v21 >= (unsigned int)v19 )
          {
            sub_B17100(IsFinded, v17, v18);
            sub_B170A0();
          }
          v24 = CollectionList->m_Items[v21];
          if ( !v24 )
            break;
          IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)UserServantCollectionEntity__IsFinded(
                                                                      CollectionList->m_Items[v21],
                                                                      0LL);
          if ( ((unsigned __int8)IsFinded & 1) != 0 )
          {
            v26 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v30.fields.currentCryptoKey = v26;
            *(_QWORD *)&v30.fields.fakeValue = v25;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
            if ( !v20 )
              break;
            IsFinded = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                        v20,
                                                                        v27,
                                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !IsFinded )
              break;
            if ( LODWORD(IsFinded[1].monitor) == v11 && v24->fields.maxLimitCount >= v23 )
              ++v22;
          }
          LODWORD(v19) = CollectionList->max_length;
          if ( (int)++v21 >= (int)v19 )
            return v22;
        }
LABEL_28:
        sub_B170D4();
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CondType___c__DisplayClass188_0_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v16; // x19
  const MethodInfo *v17; // x2

  if ( (byte_40FA2B2 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_CondType___c__DisplayClass188_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__, v8);
    sub_B16FFC(&CondType___c__DisplayClass188_0_TypeInfo, v9);
    byte_40FA2B2 = 1;
  }
  v10 = (CondType___c__DisplayClass188_0_o *)sub_B170CC(CondType___c__DisplayClass188_0_TypeInfo, method, v2, v3, v4);
  CondType___c__DisplayClass188_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  v15 = targetId / 100;
  v10->fields.skillLv = targetId % 100;
  v16 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                          System_Func_UserServantCollectionEntity__int__TypeInfo,
                                                                          v11,
                                                                          v12,
                                                                          v13,
                                                                          v14);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_CondType___c__DisplayClass188_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v15, (System_Func_UserServantCollectionEntity__int__o *)v16, v17);
}


int32_t __fastcall CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  CondType_c *v5; // x8
  CondType_c *v6; // x0
  int32_t v7; // w21
  int v8; // w23
  int32_t TARGET_PARAM_NUM; // w9

  if ( (byte_40FA29A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, func);
    byte_40FA29A = 1;
  }
  if ( !targetParam )
    goto LABEL_22;
  v5 = *(CondType_c **)&targetParam->max_length;
  if ( !v5 )
    return 0;
  v6 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v6 = CondType_TypeInfo;
    v5 = *(CondType_c **)&targetParam->max_length;
  }
  v7 = 0;
  if ( (int)v5 % v6->static_fields->TARGET_PARAM_NUM != 1 && (int)v5 >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 || v8 + 1 >= (unsigned int)v5 )
      {
        sub_B17100(v6, func, method);
        sub_B170A0();
      }
      if ( !func )
        break;
      v6 = (CondType_c *)CondType_CountDelegate__Invoke(
                           func,
                           targetParam->m_Items[v8 + 1],
                           targetParam->m_Items[v8 + 2],
                           0LL);
      v5 = CondType_TypeInfo;
      v7 += (int)v6;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v5 = CondType_TypeInfo;
      }
      TARGET_PARAM_NUM = v5->static_fields->TARGET_PARAM_NUM;
      LODWORD(v5) = targetParam->max_length;
      v8 += TARGET_PARAM_NUM;
      if ( v8 >= (int)v5 )
        return v7;
    }
LABEL_22:
    sub_B170D4();
  }
  return v7;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserEventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventBoardGameTokenEntity_array *List_26561064; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w9
  int v10; // w10
  int32_t v11; // w8
  UserEventBoardGameTokenEntity_o *v12; // x11

  if ( (byte_40FA290 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA290 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  List_26561064 = UserEventBoardGameTokenMaster__GetList_26561064(MasterData_WarQuestSelectionMaster, 0LL);
  if ( tokenId )
  {
    if ( !List_26561064 )
      goto LABEL_19;
    max_length = List_26561064->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
        {
          sub_B17100(List_26561064, v7, v8);
          sub_B170A0();
        }
        v12 = List_26561064->m_Items[v10];
        if ( !v12 )
          break;
        ++v10;
        if ( v12->fields.tokenId == tokenId )
          ++v11;
        if ( v10 >= max_length )
          return v11;
      }
LABEL_19:
      sub_B170D4();
    }
    return 0;
  }
  else
  {
    if ( !List_26561064 )
      goto LABEL_19;
    return List_26561064->max_length;
  }
}


int64_t __fastcall CondType__GetEventTotalPoint(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0

  if ( (byte_40FA27E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA27E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  return UserEventPointMaster__GetEventPointTotal(MasterData_WarQuestSelectionMaster, UserId, eventId, -1, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserExchangeSvtMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA2C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA2C0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           MasterData_WarQuestSelectionMaster,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserExchangeSvtMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA2BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA2BA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel(MasterData_WarQuestSelectionMaster, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserExchangeSvtMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA2BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA2BE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel(MasterData_WarQuestSelectionMaster, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA210 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA210 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, targetId, 0LL) )
  {
    if ( entity )
      return entity->fields.num;
LABEL_13:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  System_Int32_array *MissionIdListByEvent; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array *v12; // x19
  int32_t v13; // w20
  unsigned __int64 v14; // x23
  int32_t v15; // w21

  if ( (byte_40FA248 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA248 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !MasterData_WarQuestSelectionMaster
      || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                   MasterData_WarQuestSelectionMaster,
                                   CondType_TypeInfo->static_fields->EventId,
                                   0LL)) == 0LL )
    {
LABEL_25:
      sub_B170D4();
    }
    v11 = *(_QWORD *)&MissionIdListByEvent->max_length;
    v12 = MissionIdListByEvent;
    if ( (int)v11 < 1 )
      return 0;
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v11 )
      {
        sub_B17100(MissionIdListByEvent, v9, v10);
        sub_B170A0();
      }
      v15 = v12->m_Items[v14 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      MissionIdListByEvent = (System_Int32_array *)CondType__IsMissionClear(v15, v9);
      LODWORD(v11) = v12->max_length;
      ++v14;
      v13 += (unsigned __int8)MissionIdListByEvent & 1;
    }
    while ( (__int64)v14 < (int)v11 );
    return v13;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  System_Int32_array *MissionIdListByEvent; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array *v12; // x19
  int32_t v13; // w20
  unsigned __int64 v14; // x23
  int32_t v15; // w21

  if ( (byte_40FA249 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA249 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !MasterData_WarQuestSelectionMaster
      || (MissionIdListByEvent = EventMissionMaster__getMissionIdListByEvent(
                                   MasterData_WarQuestSelectionMaster,
                                   CondType_TypeInfo->static_fields->EventId,
                                   0LL)) == 0LL )
    {
LABEL_25:
      sub_B170D4();
    }
    v11 = *(_QWORD *)&MissionIdListByEvent->max_length;
    v12 = MissionIdListByEvent;
    if ( (int)v11 < 1 )
      return 0;
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v11 )
      {
        sub_B17100(MissionIdListByEvent, v9, v10);
        sub_B170A0();
      }
      v15 = v12->m_Items[v14 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      MissionIdListByEvent = (System_Int32_array *)CondType__IsMissionAchive(v15, v9);
      LODWORD(v11) = v12->max_length;
      ++v14;
      v13 += (unsigned __int8)MissionIdListByEvent & 1;
    }
    while ( (__int64)v14 < (int)v11 );
    return v13;
  }
}


int32_t __fastcall CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  int v2; // w8

  if ( cond > 8 )
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_3136630[v2];
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v15; // x0
  WarQuestSelectionMaster_o *v16; // x0
  UserQuestMaster_o *v17; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserQuestEntity_o *IsQuestClear_25438860; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  System_Int32_array *v29; // x24
  __int64 v30; // x8
  int32_t v31; // w21
  unsigned __int64 v32; // x25
  bool v33; // w22
  int32_t v34; // w23
  int64_t UserId; // x0

  if ( (byte_40FA252 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA252 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15
    || (v16 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v15,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v17 = (UserQuestMaster_o *)v16,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_B16F98(
          (BattleServantConfConponent_o *)sameGroupQuestIds,
          (System_Int32_array **)QuestIdListByGroupId,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (v29 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_28:
    sub_B170D4();
  }
  v30 = *(_QWORD *)&v29->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    v32 = 0LL;
    v33 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
      {
        sub_B17100(IsQuestClear_25438860, v26, v27);
        sub_B170A0();
      }
      v34 = v29->m_Items[v32 + 1];
      if ( v34 != questId )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestClear_25438860 = (UserQuestEntity_o *)CondType__IsQuestClear_25438860(v34, -1, v33, v28);
        if ( ((unsigned __int8)IsQuestClear_25438860 & 1) != 0 )
        {
          ++v31;
        }
        else
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !v17 )
            goto LABEL_28;
          IsQuestClear_25438860 = UserQuestMaster__getEntityFromId(v17, UserId, v34, 0LL);
          if ( IsQuestClear_25438860 )
          {
            IsQuestClear_25438860 = (UserQuestEntity_o *)UserQuestEntity__getQuestPhase(IsQuestClear_25438860, 0LL);
            if ( (int)IsQuestClear_25438860 > 0 )
              ++v31;
          }
        }
      }
      LODWORD(v30) = v29->max_length;
      if ( (__int64)++v32 >= (int)v30 )
        return v31;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_40FA256 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FA256 = 1;
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
  WebViewManager_o *Instance; // x0
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA246 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA246 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !UserEventMissionCondDetailMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, condId, 0LL) )
    return 0;
  if ( !entity )
LABEL_14:
    sub_B170D4();
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA255 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40FA255 = 1;
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

  if ( (byte_40FA217 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FA217 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  int64_t result; // x0
  CondType___c_c *v18; // x0
  struct CondType___c_StaticFields *v19; // x8
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct CondType___c_StaticFields *v28; // x0
  BattleServantConfConponent_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v30; // x0
  __int64 *v31; // x8
  CondType___c_c *v32; // x0
  struct CondType___c_StaticFields *v33; // x8
  Il2CppObject *v34; // x21
  struct CondType___c_StaticFields *v35; // x0
  CondType_CountDelegate_o *v36; // x20
  const MethodInfo *v37; // x2
  CondType___c_c *v38; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  Il2CppObject *v40; // x21
  struct CondType___c_StaticFields *v41; // x0

  if ( (byte_40FA218 & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType_CountServantLevelClassNum__, targetIds);
    sub_B16FFC(&Method_CondType_CountServantLevelIdNum__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&CondType_CountDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Aggregate_int__int___, v10);
    sub_B16FFC(&Method_System_Func_int__int__int___ctor__, v11);
    sub_B16FFC(&System_Func_int__int__int__TypeInfo, v12);
    sub_B16FFC(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v13);
    sub_B16FFC(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v14);
    sub_B16FFC(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v15);
    sub_B16FFC(&CondType___c_TypeInfo, v16);
    byte_40FA218 = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v38 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v38 = CondType___c_TypeInfo;
        }
        static_fields = v38->static_fields;
        _9__26_1 = static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B170CC(
                                                     System_Func_int__int__int__TypeInfo,
                                                     targetIds,
                                                     method,
                                                     v3,
                                                     v4);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v40,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_1__,
          (const MethodInfo_2B73C68 *)Method_System_Func_int__int__int___ctor__);
        v41 = CondType___c_TypeInfo->static_fields;
        v41->__9__26_1 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v41->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v32 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v32 = CondType___c_TypeInfo;
        }
        v33 = v32->static_fields;
        _9__26_1 = v33->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          v33 = CondType___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)v33->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B170CC(
                                                     System_Func_int__int__int__TypeInfo,
                                                     targetIds,
                                                     method,
                                                     v3,
                                                     v4);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v34,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_2__,
          (const MethodInfo_2B73C68 *)Method_System_Func_int__int__int___ctor__);
        v35 = CondType___c_TypeInfo->static_fields;
        v35->__9__26_2 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v35->__9__26_2;
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
      v18 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v18 = CondType___c_TypeInfo;
      }
      v19 = v18->static_fields;
      _9__26_1 = v19->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_47;
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v19 = CondType___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)v19->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_B170CC(
                                                   System_Func_int__int__int__TypeInfo,
                                                   targetIds,
                                                   method,
                                                   v3,
                                                   v4);
      System_Func_int__int__int____ctor(
        _9__26_1,
        v21,
        Method_CondType___c__GetProgressNumByTargetIds_b__26_0__,
        (const MethodInfo_2B73C68 *)Method_System_Func_int__int__int___ctor__);
      v28 = CondType___c_TypeInfo->static_fields;
      v28->__9__26_0 = _9__26_1;
      p__9__26_1 = (BattleServantConfConponent_o *)&v28->__9__26_0;
    }
    sub_B16F98(p__9__26_1, (System_Int32_array **)_9__26_1, v22, v23, v24, v25, v26, v27);
LABEL_47:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_18C6750 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v30 = (CondType_CountDelegate_o *)sub_B170CC(CondType_CountDelegate_TypeInfo, targetIds, method, v3, v4);
    v31 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v30 = (CondType_CountDelegate_o *)sub_B170CC(CondType_CountDelegate_TypeInfo, targetIds, method, v3, v4);
    v31 = &Method_CondType_CountServantLevelIdNum__;
  }
  v36 = v30;
  CondType_CountDelegate___ctor(v30, 0LL, *v31, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v36, v37);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserShopEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA240 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA240 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserShopMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, targetId, 0LL) )
  {
    if ( entity )
      return entity->fields.num;
LABEL_13:
    sub_B170D4();
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
  int64_t v11; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w24
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _QWORD *QuestIdListByEventId; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  _QWORD *v20; // x20
  unsigned __int64 v21; // x25
  int32_t v22; // w21
  WebViewManager_o *v23; // x0
  UserQuestMaster_o *v24; // x22
  int64_t UserId; // x0

  if ( (byte_40FA258 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA258 = 1;
  }
  if ( !condId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( MasterData_WarQuestSelectionMaster )
      {
        QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId(
                                 MasterData_WarQuestSelectionMaster,
                                 CondType_TypeInfo->static_fields->EventId,
                                 0LL);
        if ( QuestIdListByEventId )
        {
          v19 = QuestIdListByEventId[3];
          v20 = QuestIdListByEventId;
          if ( (int)v19 < 1 )
            goto LABEL_31;
          challengeNum = 0;
          v21 = 0LL;
          while ( 1 )
          {
            if ( v21 >= (unsigned int)v19 )
            {
              sub_B17100(QuestIdListByEventId, v17, v18);
              sub_B170A0();
            }
            v22 = *((_DWORD *)v20 + v21 + 8);
            v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v23 )
              break;
            v24 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v23,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v24 )
              break;
            QuestIdListByEventId = UserQuestMaster__getEntityFromId(v24, UserId, v22, 0LL);
            if ( QuestIdListByEventId )
              challengeNum += *((_DWORD *)QuestIdListByEventId + 14);
            LODWORD(v19) = *((_DWORD *)v20 + 6);
            if ( (__int64)++v21 >= (int)v19 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
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
  v11 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_35;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v11, condId, 0LL);
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x19
  System_Int32_array *QuestIdListByEventId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  System_Int32_array *v15; // x19
  unsigned __int64 v16; // x25
  int32_t v17; // w21
  WebViewManager_o *v18; // x0
  UserQuestMaster_o *v19; // x22
  int64_t UserId; // x0
  const MethodInfo *v21; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA247 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA247 = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( MasterData_WarQuestSelectionMaster )
      {
        QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId(
                                 MasterData_WarQuestSelectionMaster,
                                 CondType_TypeInfo->static_fields->EventId,
                                 0LL);
        if ( QuestIdListByEventId )
        {
          v14 = *(_QWORD *)&QuestIdListByEventId->max_length;
          v15 = QuestIdListByEventId;
          if ( (int)v14 < 1 )
            return 0;
          v8 = 0;
          v16 = 0LL;
          while ( 1 )
          {
            if ( v16 >= (unsigned int)v14 )
            {
              sub_B17100(QuestIdListByEventId, v12, v13);
              sub_B170A0();
            }
            v17 = v15->m_Items[v16 + 1];
            v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v18 )
              break;
            v19 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v18,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( !v19 )
              break;
            QuestIdListByEventId = (System_Int32_array *)UserQuestMaster__TryGetEntity(v19, &entity, UserId, v17, 0LL);
            if ( ((unsigned __int8)QuestIdListByEventId & 1) != 0 )
            {
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              QuestIdListByEventId = (System_Int32_array *)CondType__IsQuestClear_25438860(v17, -1, 0, v21);
              v8 += (unsigned __int8)QuestIdListByEventId & 1;
            }
            LODWORD(v14) = v15->max_length;
            if ( (__int64)++v16 >= (int)v14 )
              return v8;
          }
        }
      }
    }
    sub_B170D4();
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(targetId, -1, 0, v2);
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
  int64_t v11; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w20
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *QuestIdListByEventId; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t userId; // x8
  UserQuestEntity_o *v20; // x21
  unsigned __int64 v21; // x25
  int32_t v22; // w22
  WebViewManager_o *v23; // x0
  UserQuestMaster_o *v24; // x23
  int64_t v25; // x0

  if ( (byte_40FA24F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA24F = 1;
  }
  if ( !condId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( MasterData_WarQuestSelectionMaster )
      {
        QuestIdListByEventId = (UserQuestEntity_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                                      MasterData_WarQuestSelectionMaster,
                                                      CondType_TypeInfo->static_fields->EventId,
                                                      0LL);
        if ( QuestIdListByEventId )
        {
          userId = QuestIdListByEventId->fields.userId;
          v20 = QuestIdListByEventId;
          if ( (int)userId < 1 )
            goto LABEL_31;
          ClearNum = 0;
          v21 = 0LL;
          while ( 1 )
          {
            if ( v21 >= (unsigned int)userId )
            {
              sub_B17100(QuestIdListByEventId, v17, v18);
              sub_B170A0();
            }
            v22 = *(&v20->fields.questId + v21);
            v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v23 )
              break;
            v24 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v23,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            v25 = NetworkManager__get_UserId(0LL);
            if ( !v24 )
              break;
            QuestIdListByEventId = UserQuestMaster__getEntityFromId(v24, v25, v22, 0LL);
            if ( QuestIdListByEventId )
            {
              QuestIdListByEventId = (UserQuestEntity_o *)UserQuestEntity__getClearNum(QuestIdListByEventId, 0LL);
              ClearNum += (int)QuestIdListByEventId;
            }
            LODWORD(userId) = v20->fields.userId;
            if ( (__int64)++v21 >= (int)userId )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
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
  v11 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_35;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v11, condId, 0LL);
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
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA21F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40FA21F = 1;
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
    if ( !entity )
      goto LABEL_19;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  if ( !entity )
LABEL_19:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  System_Int32_array *v16; // x20
  int32_t v17; // w22
  unsigned __int64 v18; // x24
  bool v19; // w21
  int32_t v20; // w23

  if ( (byte_40FA254 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA254 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v15 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  v16 = QuestIdListByGroupId;
  if ( (int)v15 < 1 )
    return 0;
  v17 = 0;
  v18 = 0LL;
  v19 = isCheckResetFlag;
  do
  {
    if ( v18 >= (unsigned int)v15 )
    {
      sub_B17100(QuestIdListByGroupId, v12, v13);
      sub_B170A0();
    }
    v20 = v16->m_Items[v18 + 1];
    if ( v20 != questId )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      QuestIdListByGroupId = (System_Int32_array *)CondType__IsQuestClear_25438860(v20, -1, v19, v14);
      v17 += (unsigned __int8)QuestIdListByGroupId & 1;
    }
    LODWORD(v15) = v16->max_length;
    ++v18;
  }
  while ( (__int64)v18 < (int)v15 );
  return v17;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_40FA257 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA257 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
    sub_B170D4();
  Entity = UserEventRaidMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             UserId,
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidEntity_array *EventRaidEntityArray; // x20
  WebViewManager_o *v10; // x0
  WarQuestSelectionMaster_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v15; // x21
  unsigned int v16; // w23
  int32_t v17; // w22
  EventRaidEntity_o *v18; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_40FA20F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA20F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(MasterData_WarQuestSelectionMaster, targetId, v3, 0LL);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_20;
  v11 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v10,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = (TotalEventRaidMaster_o *)v11;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v18 = EventRaidEntityArray->m_Items[v16];
      if ( !v18 || !v15 )
        break;
      v11 = (WarQuestSelectionMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                           v15,
                                           &entity,
                                           targetId,
                                           v18->fields.day,
                                           0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v18->fields.maxHp )
          ++v17;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v16 >= max_length )
        return v17;
    }
LABEL_20:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_40FA2A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FA2A8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t __fastcall CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA22F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA22F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__GetServantHavingCount(MasterData_WarQuestSelectionMaster, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA27D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA27D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__GetServantHavintLimitMaxCount(MasterData_WarQuestSelectionMaster, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  WebViewManager_o *v10; // x0
  WarQuestSelectionMaster_o *IsAllCondClear; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  __int64 v16; // x22
  int32_t v17; // w20
  ShopGroupEntity_o *v18; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA276 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA276 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(MasterData_WarQuestSelectionMaster, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v10 )
        goto LABEL_22;
      IsAllCondClear = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v10,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v9->max_length;
      if ( max_length >= 1 )
      {
        v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)IsAllCondClear;
        v16 = 0LL;
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= max_length )
          {
            sub_B17100(IsAllCondClear, v12, v13);
            sub_B170A0();
          }
          v18 = v9->m_Items[v16];
          if ( !v18 || !v15 )
            break;
          IsAllCondClear = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                          v15,
                                                          &entity,
                                                          v18->fields.shopId,
                                                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsAllCondClear & 1) != 0 )
          {
            if ( !entity )
              break;
            IsAllCondClear = (WarQuestSelectionMaster_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)IsAllCondClear & 1) != 0 )
            {
              if ( !entity )
                break;
              IsAllCondClear = (WarQuestSelectionMaster_o *)ShopEntity__IsSoldOut((ShopEntity_o *)entity, 0LL);
              v17 += ((unsigned __int8)IsAllCondClear & 1) == 0;
            }
          }
          max_length = v9->max_length;
          if ( (int)++v16 >= max_length )
            return v17;
        }
LABEL_22:
        sub_B170D4();
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

  if ( (byte_40FA259 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    byte_40FA259 = 1;
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
  WebViewManager_o *Instance; // x0
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_40FA25B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA25B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 UserId,
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
    sub_B170D4();
  }
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
  WebViewManager_o *Instance; // x0
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA25A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserSuperBossMaster___, *(_QWORD *)&bossId);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA25A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B170D4();
  UserSuperBossMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, eventId, bossId, 0LL);
  if ( entity )
    return entity->fields.damage;
  else
    return 0LL;
}


int32_t __fastcall CondType__GetSvtEquipFriendShip(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA280 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FA280 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__GetSvtEquipFriendShip(MasterData_WarQuestSelectionMaster, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FA24D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA24D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
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
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_40FA24A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FA24A = 1;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA24B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA24B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA24C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA24C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CondType_c *v13; // x8
  System_Int32_array **v14; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_40FA207 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA207 = 1;
  }
  v4 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v4 = CondType_TypeInfo;
  }
  if ( !v4->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v13 = CondType_TypeInfo;
    v14 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 = CondType_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v14;
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->uQuestMst, v14, v7, v8, v9, v10, v11, v12);
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
  WebViewManager_o *Instance; // x0
  TotalBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA288 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA288 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (TotalBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return TotalBoxGachaMaster__GetTotalCount(MasterData_WarQuestSelectionMaster, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_40FA278 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FA278 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getTime(0LL) >= time;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v13; // x20
  WebViewManager_o *v14; // x0
  UserQuestMaster_o *EntityFromId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  UserQuestMaster_o *v19; // x22
  unsigned __int64 v20; // x24
  int32_t v21; // w25
  int32_t v22; // w21
  int32_t v23; // w23
  int64_t UserId; // x0

  if ( (byte_40FA293 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA293 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(MasterData_WarQuestSelectionMaster, groupId, 15, 0LL);
  if ( !QuestIdListByGroupId )
    goto LABEL_24;
  v13 = QuestIdListByGroupId;
  if ( *(_QWORD *)&QuestIdListByGroupId->max_length )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      goto LABEL_24;
    EntityFromId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v14,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v18 = *(_QWORD *)&v13->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = EntityFromId;
      v20 = 0LL;
      v21 = 0;
      if ( isWin )
        v22 = 128;
      else
        v22 = 256;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v18 )
        {
          sub_B17100(EntityFromId, v16, v17);
          sub_B170A0();
        }
        v23 = v13->m_Items[v20 + 1];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v19 )
          break;
        EntityFromId = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v19, UserId, v23, 0LL);
        if ( EntityFromId )
        {
          EntityFromId = (UserQuestMaster_o *)UserQuestEntity__HasStatus((UserQuestEntity_o *)EntityFromId, v22, 0LL);
          v21 += (unsigned __int8)EntityFromId & 1;
        }
        if ( v21 >= val )
          return 1;
        LODWORD(v18) = v13->max_length;
        if ( (__int64)++v20 >= (int)v18 )
          return 0;
      }
LABEL_24:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v16; // x21
  WebViewManager_o *v17; // x0
  UserQuestMaster_o *EntityFromId; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  UserQuestMaster_o *v22; // x23
  unsigned __int64 v23; // x25
  int32_t v24; // w26
  int32_t v25; // w22
  int32_t v26; // w24
  int64_t UserId; // x0

  if ( (byte_40FA292 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_int___, *(_QWORD *)&val);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA292 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(MasterData_WarQuestSelectionMaster, groupId, 14, 0LL);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v16 = QuestIdListByGroupId;
  if ( !*(_QWORD *)&QuestIdListByGroupId->max_length )
    return 0;
  System_Array__Sort_int_(QuestIdListByGroupId, (const MethodInfo_2506964 *)Method_System_Array_Sort_int___);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
LABEL_31:
    sub_B170D4();
  EntityFromId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v17,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v21 = *(_QWORD *)&v16->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = EntityFromId;
    v23 = 0LL;
    v24 = 0;
    if ( isWin )
      v25 = 128;
    else
      v25 = 256;
    do
    {
      if ( v23 >= (unsigned int)v21 )
      {
        sub_B17100(EntityFromId, v19, v20);
        sub_B170A0();
      }
      v26 = v16->m_Items[v23 + 1];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v22 )
        goto LABEL_31;
      EntityFromId = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v22, UserId, v26, 0LL);
      if ( EntityFromId )
      {
        EntityFromId = (UserQuestMaster_o *)UserQuestEntity__HasStatus((UserQuestEntity_o *)EntityFromId, v25, 0LL);
        if ( ((unsigned __int8)EntityFromId & 1) != 0 )
          ++v24;
        else
          v24 = 0;
      }
      else
      {
        v24 = 0;
      }
      if ( isBelow )
      {
        if ( v24 > val )
          return 0;
      }
      else if ( v24 >= val )
      {
        return 1;
      }
      LODWORD(v21) = v16->max_length;
      ++v23;
    }
    while ( (__int64)v23 < (int)v21 );
  }
  return isBelow;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  System_Int32_array *v13; // x20
  WebViewManager_o *v14; // x0
  UserQuestMaster_o *EntityFromId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  UserQuestMaster_o *v19; // x22
  unsigned __int64 v20; // x24
  int32_t v21; // w25
  int32_t v22; // w21
  int32_t v23; // w23
  int64_t UserId; // x0

  if ( (byte_40FA291 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA291 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(MasterData_WarQuestSelectionMaster, groupId, 14, 0LL);
  if ( !QuestIdListByGroupId )
    goto LABEL_24;
  v13 = QuestIdListByGroupId;
  if ( *(_QWORD *)&QuestIdListByGroupId->max_length )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v14 )
      goto LABEL_24;
    EntityFromId = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v14,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v18 = *(_QWORD *)&v13->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = EntityFromId;
      v20 = 0LL;
      v21 = 0;
      if ( isWin )
        v22 = 128;
      else
        v22 = 256;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v18 )
        {
          sub_B17100(EntityFromId, v16, v17);
          sub_B170A0();
        }
        v23 = v13->m_Items[v20 + 1];
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !v19 )
          break;
        EntityFromId = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v19, UserId, v23, 0LL);
        if ( EntityFromId )
        {
          EntityFromId = (UserQuestMaster_o *)UserQuestEntity__HasStatus((UserQuestEntity_o *)EntityFromId, v22, 0LL);
          v21 += (unsigned __int8)EntityFromId & 1;
        }
        if ( v21 >= val )
          return 1;
        LODWORD(v18) = v13->max_length;
        if ( (__int64)++v20 >= (int)v18 )
          return 0;
      }
LABEL_24:
      sub_B170D4();
    }
  }
  return 0;
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_40FA28F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, value);
    byte_40FA28F = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserEventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA28E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, *(_QWORD *)&kindNum);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA28E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           MasterData_WarQuestSelectionMaster,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserEventBoardGameTokenMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA28D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA28D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventBoardGameTokenMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserEventBoardGameTokenMaster__IsHavingToken(MasterData_WarQuestSelectionMaster, tokenId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA2A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, *(_QWORD *)&giftId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA2A4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !UserBoxGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, gachaId, 0LL) )
    return 0;
  if ( !entity )
LABEL_14:
    sub_B170D4();
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_40FA285 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FA285 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_25495152(UserId, commandCodeId, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCommandCodeGet_25495152(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA286 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA286 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                    (DataManager_o *)Instance,
                                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  UserCommandCodeCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, userId, commandCodeId, 0LL);
  return entity && entity->fields.status == 2;
}


bool __fastcall CondType__IsCommonRelease(int32_t releaseId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA28A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA28A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_40FA2BB & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetCount);
    byte_40FA2BB = 1;
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
  if ( (byte_40FA2BF & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank);
    byte_40FA2BF = 1;
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
  if ( (byte_40FA2B9 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetLevel);
    byte_40FA2B9 = 1;
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
  if ( (byte_40FA2BD & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetSkillLevel);
    byte_40FA2BD = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserHeelPortraitMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *heelPortraitIds; // x21
  HeelPortraitMaster_o *v7; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA2B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FA2B7 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserHeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( UserHeelPortraitMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, eventId, 0LL) )
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
        v7 = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( v7 )
          return HeelPortraitMaster__GetCompleteNum(v7, eventId, 0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_16:
    sub_B170D4();
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
  int64_t Time_23684488; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_40FA2AA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&condNum);
    byte_40FA2AA = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v8.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_23684488 = NetworkManager__getTime_23684488(v8, 0LL);
  dateData = NetworkManager__getDateTime_23685272(Time_23684488 - 3600 * condNum, 0LL).fields.dateData;
  v9.fields.dateData = (uint64_t)&dateData;
  return ((1 << (System_DateTime__get_DayOfWeek(v9, 0LL) + 1)) & condId) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA265 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA265 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  return UserServantCollectionEntity__IsCostumeGet(entity, costumeId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v11; // x19
  QuestPhaseMaster_c *v12; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v14; // x19
  WebViewManager_o *v15; // x0
  MovieFileMerge_o *v16; // x0

  if ( (byte_40FA282 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&phase);
    sub_B16FFC(&QuestPhaseMaster_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FA282 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, phase, 0LL);
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
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v15 )
      {
        v16 = *(MovieFileMerge_o **)&v15[15].fields.m_CachedPtr;
        if ( v16 )
          return MovieFileMerge__ExistCRCCheckedMovieFile(v16, v14, 0LL);
      }
LABEL_14:
      sub_B170D4();
    }
  }
  return 0;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x20
  WebViewManager_o *Instance; // x0
  QuestDateRangeMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA283 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA283 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestDateRangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
           MasterData_WarQuestSelectionMaster,
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
  __int64 v5; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x22
  int32_t v8; // w23
  int32_t v9; // w21

  if ( (byte_40FA29E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_40FA29E = 1;
  }
  if ( !targetIds )
    sub_B170D4();
  v5 = *(_QWORD *)&targetIds->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
      {
        sub_B17100(v6, *(_QWORD *)&targetNum, method);
        sub_B170A0();
      }
      v9 = targetIds->m_Items[v7 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountEquipRarityLevelNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = targetIds->max_length;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_o *Entity; // x0

  if ( (byte_40FA238 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA238 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              condId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen(Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t Time; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA268 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA268 = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            eventId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_15:
      sub_B170D4();
    if ( Time < *(_QWORD *)&entity->fields.eventId )
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
  WebViewManager_o *Instance; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA269 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&rate);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA269 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventRaceMaster__IsReachedPointRateInTerm(
           MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA26A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&rank);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA26A = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventRaceMaster__GetGoaledTeamCount(
           MasterData_WarQuestSelectionMaster,
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
  System_Collections_Generic_List_EventMissionGroupEntity__o *EntityList; // x0
  int32_t v13; // w21
  int32_t klass_high; // w20
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA2B6 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condNum);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v10);
    byte_40FA2B6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  EntityList = EventMissionGroupMaster__GetEntityList(Master_WarQuestSelectionMaster, condId, 0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    v13 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__) )
    {
      if ( !v17.fields.current )
        sub_B170D4();
      klass_high = HIDWORD(v17.fields.current[1].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 += CondType__IsMissionAchive(klass_high, v15);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = v13 >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CondType_c *v7; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  WebViewManager_o *Instance; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA261 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA261 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return TotalEventPointMaster__GetPeriodTotalPoint(
           MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  TotalEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA260 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA260 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (TotalEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return TotalEventPointMaster__IsGroupWin(
           MasterData_WarQuestSelectionMaster,
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  CondType___c__DisplayClass114_0_o *v15; // x22
  WebViewManager_o *Instance; // x0
  EventRaceResultMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *RankDatas; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_int__o *v23; // x23
  const MethodInfo *v24; // x3
  int32_t v25; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA26F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, *(_QWORD *)&termId);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v10);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_CondType___c__DisplayClass114_0__IsEventRaceGoalScriptPlayed_b__0__, v13);
    sub_B16FFC(&CondType___c__DisplayClass114_0_TypeInfo, v14);
    byte_40FA26F = 1;
  }
  goalTime = 0LL;
  v15 = (CondType___c__DisplayClass114_0_o *)sub_B170CC(
                                               CondType___c__DisplayClass114_0_TypeInfo,
                                               *(_QWORD *)&termId,
                                               *(_QWORD *)&groupId,
                                               method,
                                               v4);
  CondType___c__DisplayClass114_0___ctor(v15, 0LL);
  if ( !v15
    || (v15->fields.groupId = groupId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  RankDatas = EventRaceResultMaster__GetRankDatas(MasterData_WarQuestSelectionMaster, eventId, termId, &goalTime, 0LL);
  v23 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v19, v20, v21, v22);
  System_Predicate_int____ctor(
    v23,
    (Il2CppObject *)v15,
    Method_CondType___c__DisplayClass114_0__IsEventRaceGoalScriptPlayed_b__0__,
    (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
  v25 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v25 < 1 )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v25, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v10; // w21
  WebViewManager_o *v11; // x0
  UserEventRaceMaster_o *v12; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA26D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA26D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_12;
    v10 = *(&entity->fields.id + 1);
  }
  else
  {
    v10 = 0;
  }
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11
    || (v12 = (UserEventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v11,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId(v12, eventId, v10, 0LL) == groupId;
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
  WebViewManager_o *Instance; // x0
  EventScriptMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v12; // x2
  int32_t flagId; // w20

  if ( (byte_40FA270 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&termId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventScriptMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA270 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventScriptMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  RaceResultEntity = EventScriptMaster__getRaceResultEntity(
                       MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA26E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flagId);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA26E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, eventId, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventEntity_o *EntityDefinitely; // x0
  int32_t flag; // w21
  WebViewManager_o *v13; // x0
  EventStatusMaster_o *v14; // x0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = flagId;
  if ( (byte_40FA27B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusMaster___, flagId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA27B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, UserId, eventId, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_16;
  flag = EntityDefinitely->fields.flag;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_16;
  v14 = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v13,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !v14 )
    goto LABEL_16;
  if ( EventStatusMaster__TryGetEntity(v14, &entity, eventId, flag, 0LL) )
  {
    if ( entity )
      return (entity->fields.status & (1 << v3)) != 0;
LABEL_16:
    sub_B170D4();
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
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA2AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventMaster___, *(_QWORD *)&bitNum);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    byte_40FA2AD = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventMaster___);
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
  if ( !entity )
LABEL_15:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  int64_t ServerTime; // x0
  int64_t v16; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v18; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x25
  __int64 v29; // x9
  int64_t v30; // x26
  int32_t Year; // w26
  int32_t Month; // w27
  int32_t Day; // w3
  uint64_t v34; // x25
  bool v35; // w20
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+8h] [xbp-78h]
  int v42; // [xsp+Ch] [xbp-74h]
  int v43; // [xsp+10h] [xbp-70h]
  System_DateTime_o dateTime; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8

  if ( (byte_40FA2A3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&overWriteTime);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&EventEntity_TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FA2A3 = 1;
  }
  dateTime.fields.dateData = 0LL;
  dateData = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServerTime = NetworkManager__getServerTime(0LL);
  if ( !list )
LABEL_48:
    sub_B170D4();
  v16 = ServerTime;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v42 = overWriteTime / 100 % 100;
  v41 = overWriteTime % 100;
  v18 = overWriteTime / 10000;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_22:
      v26 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v28 = v27;
    if ( v27 )
    {
      v29 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v29
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) != EventEntity_TypeInfo )
      {
        sub_B173C8(v27);
        goto LABEL_48;
      }
      if ( *(_DWORD *)(v27 + 24) == eventType )
      {
        v30 = *(_QWORD *)(v27 + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getDateTime_23685272(v30, 0LL).fields.dateData;
        v46.fields.dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v46, 0LL);
        v47.fields.dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v47, 0LL);
        v48.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v48, 0LL);
        v49.fields.dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_15185024(v49, Year, Month, Day, v18, v42, v41, 0LL);
        if ( *(_QWORD *)(v28 + 88) <= v16 )
        {
          v34 = dateTime.fields.dateData;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v50.fields.dateData = v34;
          if ( v16 <= NetworkManager__getTime_23684488(v50, 0LL) )
          {
            v43 = 157;
            v35 = 1;
            goto LABEL_38;
          }
        }
      }
    }
  }
  v35 = 0;
  v43 = 155;
LABEL_38:
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_42:
    v39 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v43 == 155 )
    return 0;
  return v35;
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
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCampaign; // x0
  char v11; // w22
  UserExchangeSvtMaster_o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA2C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCampaignMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v8);
    byte_40FA2C1 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  ExchangeSvtCampaign = EventCampaignMaster__GetExchangeSvtCampaign(Master_WarQuestSelectionMaster, 0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ExchangeSvtCampaign,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v11 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B170D4();
    v11 |= LODWORD(v14.fields.current[1].klass) == targetId;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (v11 & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = (UserExchangeSvtMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !v12 )
LABEL_21:
    sub_B170D4();
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(v12, targetId, 0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_40FA211 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_40FA211 = 1;
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
  int32_t Value_28461932; // w0

  if ( (byte_40FA2AB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8350/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v4);
    byte_40FA2AB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Value_28461932 = ConstantMaster__GetValue_28461932(
                     Master_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_8350/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_28461932 == targetId && Value_28461932 != 0;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA245 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA245 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, condId, 0LL) )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_13:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  EventMissionEntity_o *v12; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA243 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA243 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, condId, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    v12 = (EventMissionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    condId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !v12 )
      goto LABEL_21;
    if ( !EventMissionEntity__IsDaily(v12, 0LL) )
      goto LABEL_17;
    if ( !entity )
      goto LABEL_21;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0LL) )
    {
LABEL_17:
      if ( entity )
        return (entity->fields.missionProgressType | 1) == 5;
LABEL_21:
      sub_B170D4();
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA244 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA244 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserEventMissionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, condId, 0LL) )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_13:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_40FA242 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA242 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B170D4();
  Entity = UserEventMissionCondDetailMaster__GetEntity(MasterData_WarQuestSelectionMaster, UserId, condId, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA287 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA287 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    return !UserPresentBoxMaster__isExist(MasterData_WarQuestSelectionMaster, 11, commandCodeId, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA26B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA26B = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t Time; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA26C & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_10966/*"RACE_TARGET_GOAL_RANK"*/, v9);
    byte_40FA26C = 1;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10966/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
      sub_B170D4();
    return EventRaceMaster__GetGoaledTeamCount(
             MasterData_WarQuestSelectionMaster,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             Time,
             0LL) < Value;
  }
  return v10;
}


bool __fastcall CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_array *EventEntitiyList; // x0
  ShopEntity_array *v9; // x19
  WebViewManager_o *v10; // x0
  UserShopMaster_o *v11; // x20
  int64_t UserId; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  ShopEntity_o *v15; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA25C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA25C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  EventEntitiyList = ShopMaster__GetEventEntitiyList(MasterData_WarQuestSelectionMaster, targetId, 0LL);
  if ( !EventEntitiyList )
    goto LABEL_17;
  v9 = EventEntitiyList;
  if ( *(_QWORD *)&EventEntitiyList->max_length )
  {
    v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v10 )
    {
      v11 = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v10,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v9->max_length )
      {
        sub_B17100(UserId, v13, v14);
        sub_B170A0();
      }
      v15 = v9->m_Items[0];
      if ( v15 )
      {
        if ( v11 )
        {
          EntityDefinitely = UserShopMaster__GetEntityDefinitely(v11, UserId, v15->fields.baseShopId, 0LL);
          if ( EntityDefinitely )
            return EntityDefinitely->fields.num > 0;
        }
      }
    }
LABEL_17:
    sub_B170D4();
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
  if ( (byte_40FA250 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_40FA250 = 1;
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
bool __fastcall CondType__IsNotQuestGroupClear_25493656(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *MasterData_WarQuestSelectionMaster; // x19
  System_String_o *v10; // x0
  const MethodInfo *v11; // x4
  int32_t v12; // w19
  int32_t shortCutBannerId; // w20
  System_Int32_array *v15; // [xsp+0h] [xbp-30h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  v17 = targetId;
  if ( (byte_40FA251 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA251 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  if ( condValue <= 1 )
    v7 = 1;
  else
    v7 = condValue;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v10 = System_Int32__ToString((int32_t)&v17, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v10,
          (const MethodInfo_266F830 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA25D & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA25D = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    return !UserPresentBoxMaster__isExist(MasterData_WarQuestSelectionMaster, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  UserShopMaster_o *v10; // x20
  unsigned __int64 v11; // x22
  int32_t v12; // w21
  int64_t UserId; // x0

  if ( (byte_40FA25E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA25E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___),
        !values) )
  {
LABEL_17:
    sub_B170D4();
  }
  v9 = *(_QWORD *)&values->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = MasterData_WarQuestSelectionMaster;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v9 )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    v12 = values->m_Items[v11 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v10 )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)UserShopMaster__GetEntityDefinitely(v10, UserId, v12, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    if ( !HIDWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
      return 1;
    LODWORD(v9) = values->max_length;
    if ( (__int64)++v11 >= (int)v9 )
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
  int32_t v18; // w2
  bool v19; // w2
  int32_t v20; // w0
  int32_t v21; // w1
  const MethodInfo *v22; // x5
  int64_t v23; // x21
  bool IsPurchaseShop; // w0
  bool v25; // w2
  int32_t v26; // w0
  int32_t v27; // w1
  const MethodInfo *v28; // x5
  int64_t v29; // x21
  WebViewManager_o *v30; // x0
  UserEventMaster_o *v31; // x21
  int64_t v32; // x0
  UserEventEntity_o *EntityDefinitely; // x0
  bool v34; // cc
  WebViewManager_o *v35; // x0
  UserEventMaster_o *v36; // x21
  int64_t v37; // x0
  UserEventEntity_o *v38; // x0
  bool v39; // cc
  int32_t v40; // w0
  int32_t v41; // w1
  bool v42; // w2
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v45; // x0
  int64_t EventPointNoGroup; // x0
  int32_t ChallengeCountsFromId; // w0
  int32_t v48; // w0
  int32_t v49; // w1
  WebViewManager_o *v50; // x0
  UserEventMaster_o *v51; // x21
  int64_t v52; // x0
  UserEventEntity_o *v53; // x0
  bool v54; // w2
  bool v55; // w3
  int32_t v56; // w0
  int32_t v57; // w1
  CondType_c *v58; // x0
  bool v59; // w3
  int32_t v60; // w1
  int32_t v61; // w2
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v63; // w0
  int32_t v64; // w1
  bool v65; // w2
  CondType_c *v66; // x0
  UserQuestMaster_o *v67; // x21
  int64_t v68; // x0
  int32_t ClearCountsFromId; // w0
  WebViewManager_o *v70; // x0
  UserEventMaster_o *v71; // x21
  int64_t v72; // x0
  UserEventEntity_o *v73; // x0
  __int64 flag; // x8
  WebViewManager_o *v75; // x0
  UserEventMaster_o *v76; // x21
  int64_t v77; // x0
  UserEventEntity_o *v78; // x0
  bool v79; // zf
  CondType_c *v80; // x0
  UserQuestMaster_o *v81; // x21
  int64_t v82; // x0
  UserEventFortificationMaster_o *v83; // x0
  CondType_c *v84; // x0
  UserQuestMaster_o *v85; // x21
  int64_t v86; // x0
  int32_t v87; // w0
  WebViewManager_o *v88; // x0
  UserEventPointMaster_o *v89; // x21
  int64_t v90; // x0
  WebViewManager_o *v91; // x0
  UserEventPointMaster_o *v92; // x21
  int64_t v93; // x0
  int64_t Point; // x0
  CondType_c *v95; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t v97; // x0
  CondType_c *v98; // x0
  UserQuestMaster_o *v99; // x21
  int64_t v100; // x0
  WebViewManager_o *v101; // x0
  UserEventPointMaster_o *v102; // x21
  int64_t v103; // x0
  CondType_c *v104; // x0
  int32_t v105; // w0
  int32_t v106; // w1
  bool v107; // w2
  const MethodInfo *v108; // x5
  int64_t UserId; // x22
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA208 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FA208 = 1;
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
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v108);
      return IsQuestClear & 1;
    case 2:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_25436308(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v18 = 1;
      goto LABEL_219;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v19 = 1;
      v20 = targetId;
      v21 = condValue;
      goto LABEL_175;
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
      v25 = 1;
      v26 = targetId;
      v27 = condValue;
      goto LABEL_69;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v26 = targetId;
      v27 = condValue;
      v25 = 0;
LABEL_69:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v26, v27, v25, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v95 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v95);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v97 = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_706;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, v97, targetId, 0LL);
      goto LABEL_565;
    case 32:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = 1;
      v60 = targetId;
      v61 = condValue;
      goto LABEL_573;
    case 35:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 36:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v107 = 1;
      v105 = targetId;
      v106 = condValue;
      goto LABEL_694;
    case 37:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 40:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 42:
      v66 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v67 = CondType__GetUserQuestMaster((const MethodInfo *)v66);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v68 = NetworkManager__get_UserId(0LL);
      if ( !v67 )
        goto LABEL_706;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v67, v68, targetId, 0LL);
      goto LABEL_330;
    case 43:
      v84 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = CondType__GetUserQuestMaster((const MethodInfo *)v84);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v86 = NetworkManager__get_UserId(0LL);
      if ( !v85 )
        goto LABEL_706;
      v87 = UserQuestMaster__getChallengeCountsFromId(v85, v86, targetId, 0LL);
      goto LABEL_594;
    case 44:
      v80 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v81 = CondType__GetUserQuestMaster((const MethodInfo *)v80);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v82 = NetworkManager__get_UserId(0LL);
      if ( !v81 )
        goto LABEL_706;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v81, v82, targetId, 0LL);
LABEL_330:
      v79 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_331;
    case 45:
      v98 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v99 = CondType__GetUserQuestMaster((const MethodInfo *)v98);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v100 = NetworkManager__get_UserId(0LL);
      if ( !v99 )
        goto LABEL_706;
      v87 = UserQuestMaster__getClearCountsFromId(v99, v100, targetId, 0LL);
LABEL_594:
      v39 = v87 <= (int)condValue;
      goto LABEL_610;
    case 46:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v23 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v23, targetId, condValue, -1, 0, v22);
      return IsQuestClear & 1;
    case 47:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v29 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v29, targetId, condValue, -1, 0, v28);
      goto LABEL_699;
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
      goto LABEL_699;
    case 53:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
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
      IsQuestClear = CondType__IsQuestClear_25438860(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetId;
      v61 = condValue;
      v59 = 0;
LABEL_573:
      IsQuestClear = CondType__IsQuestGroupClear(0, v60, v61, v59, method);
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
      goto LABEL_489;
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
      goto LABEL_699;
    case 73:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 74:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v105 = targetId;
      v106 = condValue;
      v107 = 0;
LABEL_694:
      IsPurchaseShop = CondType__IsQuestClear_25438860(v105, v106, v107, (const MethodInfo *)isCollection);
      goto LABEL_699;
    case 75:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestGroupClear(0, targetId, condValue, 0, method);
      goto LABEL_699;
    case 76:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 77:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 78:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 79:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_706;
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v45 = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_706;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            MasterData_WarQuestSelectionMaster,
                            v45,
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_489;
    case 84:
      v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v101 )
        goto LABEL_706;
      v102 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v101,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v103 = NetworkManager__get_UserId(0LL);
      if ( !v102 )
        goto LABEL_706;
      Point = UserEventPointMaster__GetPoint(v102, v103, targetId / 100, targetId, 0LL);
      goto LABEL_609;
    case 85:
      v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v88 )
        goto LABEL_706;
      v89 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v88,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v90 = NetworkManager__get_UserId(0LL);
      if ( !v89 )
        goto LABEL_706;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(v89, v90, targetId, -1, 0LL);
LABEL_489:
      v34 = EventPointNoGroup < condValue;
      goto LABEL_566;
    case 86:
      v91 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v91 )
        goto LABEL_706;
      v92 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v91,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v93 = NetworkManager__get_UserId(0LL);
      if ( !v92 )
        goto LABEL_706;
      Point = UserEventPointMaster__GetEventPointTotal(v92, v93, targetId, -1, 0LL);
LABEL_609:
      v39 = Point <= condValue;
      goto LABEL_610;
    case 87:
      v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v30 )
        goto LABEL_706;
      v31 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v30,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v32 = NetworkManager__get_UserId(0LL);
      if ( !v31 )
        goto LABEL_706;
      EntityDefinitely = UserEventMaster__GetEntityDefinitely(v31, v32, targetId, 0LL);
      if ( !EntityDefinitely )
        goto LABEL_706;
      v34 = EntityDefinitely->fields.value < condValue;
      goto LABEL_566;
    case 88:
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v35 )
        goto LABEL_706;
      v36 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v35,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v37 = NetworkManager__get_UserId(0LL);
      if ( !v36 )
        goto LABEL_706;
      v38 = UserEventMaster__GetEntityDefinitely(v36, v37, targetId, 0LL);
      if ( !v38 )
        goto LABEL_706;
      v39 = v38->fields.value <= condValue;
LABEL_610:
      IsQuestClear = v39;
      return IsQuestClear & 1;
    case 89:
      v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v70 )
        goto LABEL_706;
      v71 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v70,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v72 = NetworkManager__get_UserId(0LL);
      if ( !v71 )
        goto LABEL_706;
      v73 = UserEventMaster__GetEntityDefinitely(v71, v72, targetId, 0LL);
      if ( !v73 )
        goto LABEL_706;
      flag = v73->fields.flag;
      goto LABEL_292;
    case 90:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 93:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v104 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v104);
      return IsQuestClear & 1;
    case 96:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 97:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v20 = targetId;
      v21 = condValue;
      v19 = 0;
LABEL_175:
      IsQuestClear = CondType__IsServantFriendship(v20, v21, v19, (const MethodInfo *)isCollection);
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
      goto LABEL_699;
    case 103:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetId;
      v49 = condValue;
      v18 = 0;
      goto LABEL_220;
    case 105:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v18 = 2;
LABEL_219:
      v48 = targetId;
      v49 = condValue;
LABEL_220:
      IsQuestClear = CondType__IsServantLimit_25436484(v48, v49, v18, (const MethodInfo *)isCollection);
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
      v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v75 )
        goto LABEL_706;
      v76 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v75,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v77 = NetworkManager__get_UserId(0LL);
      if ( !v76 )
        goto LABEL_706;
      v78 = UserEventMaster__GetEntityDefinitely(v76, v77, targetId, 0LL);
      if ( !v78 )
        goto LABEL_706;
      flag = v78->fields.value;
LABEL_292:
      v79 = flag == condValue;
LABEL_331:
      IsQuestClear = v79;
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
      goto LABEL_699;
    case 121:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 123:
      v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v50 )
        goto LABEL_706;
      v51 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v50,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v52 = NetworkManager__get_UserId(0LL);
      if ( !v51 )
        goto LABEL_706;
      v53 = UserEventMaster__GetEntityDefinitely(v51, v52, targetId, 0LL);
      if ( !v53 )
        goto LABEL_706;
      IsQuestClear = v53->fields.value != condValue;
      return IsQuestClear & 1;
    case 127:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenGetNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 128:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v42 = 1;
      v40 = targetId;
      v41 = condValue;
      goto LABEL_629;
    case 129:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v40 = targetId;
      v41 = condValue;
      v42 = 0;
LABEL_629:
      IsQuestClear = CondType__IsBattleLineReusltCount(v40, v41, v42, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = 1;
      v56 = targetId;
      v57 = condValue;
      goto LABEL_305;
    case 131:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v56 = targetId;
      v57 = condValue;
      v54 = 0;
LABEL_305:
      v55 = 0;
      goto LABEL_634;
    case 132:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = 1;
      v55 = 1;
      v56 = targetId;
      v57 = condValue;
      goto LABEL_634;
    case 133:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v55 = 1;
      v56 = targetId;
      v57 = condValue;
      v54 = 0;
LABEL_634:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(v56, v57, v54, v55, method);
      return IsQuestClear & 1;
    case 134:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = 1;
      v63 = targetId;
      v64 = condValue;
      goto LABEL_508;
    case 135:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v63 = targetId;
      v64 = condValue;
      v65 = 0;
LABEL_508:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v63, v64, v65, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
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
      goto LABEL_565;
    case 143:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v58 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v58);
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
      goto LABEL_699;
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
      goto LABEL_699;
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
      goto LABEL_565;
    case 162:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_706;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                Master_WarQuestSelectionMaster,
                                targetId,
                                0LL);
      goto LABEL_565;
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
      v83 = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !v83 )
LABEL_706:
        sub_B170D4();
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(v83, targetId, 0LL);
      goto LABEL_565;
    case 168:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 170:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 172:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_699;
    case 174:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_565;
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
      goto LABEL_565;
    case 179:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_699;
    case 180:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
    case 181:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
    case 182:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
    case 183:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
    case 184:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_565;
    case 185:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
LABEL_699:
      IsQuestClear = !IsPurchaseShop;
      break;
    case 187:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
LABEL_565:
      v34 = ChallengeCountsFromId < (int)condValue;
LABEL_566:
      IsQuestClear = !v34;
      break;
    case 188:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetLevel(targetId, condValue, (const MethodInfo *)condValue);
      break;
    case 189:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantMaxLimit(targetId, condValue, (const MethodInfo *)condValue);
      break;
    case 190:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetSkillLevel(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      break;
    case 191:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetFriendShipRank(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      break;
    case 192:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsExchangeSvtBuff(targetId, *(const MethodInfo **)&targetId);
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

  if ( (byte_40FA209 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    byte_40FA209 = 1;
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
        IsQuestPhaseClear = CondType__IsQuestClear_25438860(
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
    return CondType__IsQuestClear_25438860(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int128 v22; // q1
  const MethodInfo *v23; // x5
  int64_t v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]

  if ( (byte_40FA214 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FA214 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       userSvtId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
      {
        sub_B170D4();
      }
      v22 = *(_OWORD *)&Entity->fields.userId.fields.fakeValue;
      *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v26.fields.fakeValue = v22;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v25 = v26;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v25, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear(v24, condValue, -1, 0, 0, v23);
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
      result = CondType__IsServantGet_25473084(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25473244(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25473812(userSvtId, condValue, (const MethodInfo *)userSvtId);
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
bool __fastcall CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w22
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
  __int64 v27; // x1
  CondType___c__DisplayClass19_0_o *v28; // x20
  CondType_c *IsOpen; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  __int64 v32; // x3
  const MethodInfo *v33; // x4
  __int64 v34; // x8
  int32_t v35; // w19
  int64_t v36; // x2
  int32_t v37; // w0
  int32_t v38; // w1
  bool result; // w0
  System_Func_int__int__o *v40; // x0
  __int64 *v41; // x8
  unsigned __int64 v42; // x22
  int32_t v43; // w23
  signed __int64 v44; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v46; // x4
  bool v47; // w0
  CondType_CountDelegate_o *v48; // x0
  __int64 *v49; // x8
  CondType_CountDelegate_o *v50; // x21
  const MethodInfo *v51; // x2
  int32_t ClearCountsFromIds; // w0
  bool v53; // cc
  int32_t v54; // w23
  unsigned __int64 v55; // x24
  signed __int64 v56; // x25
  int32_t v57; // w22
  int32_t v58; // w19
  System_Func_int__bool__o *v59; // x0
  __int64 *v60; // x8
  System_Func_int__int__o *v61; // x21
  const MethodInfo *v62; // x3
  int32_t v63; // w20
  System_Func_TSource__bool__o *v64; // x21
  CondType_c *v65; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  CondType_c *v68; // x0
  UserQuestMaster_o *v69; // x21
  int64_t v70; // x0
  CondType_c *v71; // x0
  UserQuestMaster_o *v72; // x21
  int64_t v73; // x0
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v75; // x0
  UserQuestMaster_o *v76; // x21
  int64_t v77; // x0
  int32_t v78; // w0
  CondType_c *v79; // x0
  UserQuestMaster_o *v80; // x21
  int64_t v81; // x0
  CondType_c *v82; // x0
  UserQuestMaster_o *v83; // x21
  int64_t v84; // x0

  v5 = targetNum;
  if ( (byte_40FA212 & 1) == 0 )
  {
    sub_B16FFC(&Method_CondType_CountExchangeServantMaxLimit__, targetIds);
    sub_B16FFC(&Method_CondType_CountServantClassTotalFriendShipUp__, v8);
    sub_B16FFC(&Method_CondType_CountServantClassTotalLevelUp__, v9);
    sub_B16FFC(&Method_CondType_CountServantClassTotalLimitUp__, v10);
    sub_B16FFC(&Method_CondType_CountServantClassTotalSkillLevelUp__, v11);
    sub_B16FFC(&Method_CondType_CountServantFriendShipClassNum__, v12);
    sub_B16FFC(&Method_CondType_CountServantLevelClassNum__, v13);
    sub_B16FFC(&Method_CondType_CountServantLevelIdNum__, v14);
    sub_B16FFC(&Method_CondType_CountServantTargetSkillLvClassNum__, v15);
    sub_B16FFC(&CondType_TypeInfo, v16);
    sub_B16FFC(&CondType_CountDelegate_TypeInfo, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int____66837904, v18);
    sub_B16FFC(&Method_System_Func_int__int___ctor__, v19);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v20);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v21);
    sub_B16FFC(&System_Func_int__int__TypeInfo, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v24);
    sub_B16FFC(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v25);
    sub_B16FFC(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v26);
    sub_B16FFC(&CondType___c__DisplayClass19_0_TypeInfo, v27);
    byte_40FA212 = 1;
  }
  v28 = (CondType___c__DisplayClass19_0_o *)sub_B170CC(
                                              CondType___c__DisplayClass19_0_TypeInfo,
                                              targetIds,
                                              *(_QWORD *)&targetNum,
                                              method,
                                              v4);
  CondType___c__DisplayClass19_0___ctor(v28, 0LL);
  if ( !v28 )
LABEL_141:
    sub_B170D4();
  v28->fields.targetNum = v5;
  if ( !targetIds )
    return 0;
  v34 = *(_QWORD *)&targetIds->max_length;
  if ( !v34 )
    return 0;
  if ( (_DWORD)v34 == 1 )
  {
    v35 = targetIds->m_Items[1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v36 = v5;
    v37 = condType;
    v38 = v35;
    return CondType__IsOpen(v37, v38, v36, 0, v33);
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
        if ( (int)v34 < 1 )
        {
          v54 = 0;
        }
        else
        {
          if ( !(_DWORD)v34 )
            goto LABEL_44;
          v54 = 0;
          v55 = 0LL;
          v56 = (int)v34;
          while ( 1 )
          {
            v57 = targetIds->m_Items[v55 + 1];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsOpen = (CondType_c *)CondType__IsOpen(condType, v57, 0LL, 0, v33);
            ++v55;
            v54 += (unsigned __int8)IsOpen & 1;
            if ( (__int64)v55 >= v56 )
              break;
            if ( v55 >= targetIds->max_length )
              goto LABEL_44;
          }
          v5 = v28->fields.targetNum;
        }
        v53 = v54 < v5;
        return !v53;
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
        v65 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v65);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( !UserQuestMaster )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getClearCountsFromIds(UserQuestMaster, UserId, targetIds, 0LL);
        goto LABEL_33;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        if ( (int)v34 < 1 )
        {
          v43 = 0;
        }
        else
        {
          v42 = 0LL;
          v43 = 0;
          v44 = (int)v34;
          do
          {
            IsOpen = CondType_TypeInfo;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( v42 >= targetIds->max_length )
              goto LABEL_44;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v30);
            v47 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v42], 0LL, 0, v46);
            v43 += v47;
          }
          while ( (__int64)v42 < v44 );
          v5 = v28->fields.targetNum;
        }
        result = v43 < v5;
        break;
      case 30:
        v68 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v69 = CondType__GetUserQuestMaster((const MethodInfo *)v68);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v70 = NetworkManager__get_UserId(0LL);
        if ( !v69 )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v69, v70, targetIds, 0LL);
        goto LABEL_33;
      case 42:
        v71 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v72 = CondType__GetUserQuestMaster((const MethodInfo *)v71);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v73 = NetworkManager__get_UserId(0LL);
        if ( !v72 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v72, v73, targetIds, 0LL);
        return ChallengeCountsFromIds == v28->fields.targetNum;
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
        v77 = NetworkManager__get_UserId(0LL);
        if ( !v76 )
          goto LABEL_141;
        v78 = UserQuestMaster__getChallengeCountsFromIds(v76, v77, targetIds, 0LL);
        return v78 <= v28->fields.targetNum;
      case 44:
        v79 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v80 = CondType__GetUserQuestMaster((const MethodInfo *)v79);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v81 = NetworkManager__get_UserId(0LL);
        if ( !v80 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v80, v81, targetIds, 0LL);
        return ChallengeCountsFromIds == v28->fields.targetNum;
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
        v84 = NetworkManager__get_UserId(0LL);
        if ( !v83 )
          goto LABEL_141;
        v78 = UserQuestMaster__getClearCountsFromIds(v83, v84, targetIds, 0LL);
        return v78 <= v28->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_69;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsServantLimitClassNum(targetIds, v5, v31);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_81;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_69;
        case 180:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_81;
        case 181:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_81;
        case 182:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_81;
        case 183:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_81;
        case 184:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_81;
        case 188:
          v59 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
          v60 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_87;
        case 189:
          v40 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v30, v31, v32, v33);
          v41 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_81:
          v61 = v40;
          System_Func_int__int____ctor(v40, 0LL, *v41, (const MethodInfo_2B65E70 *)Method_System_Func_int__int___ctor__);
          v63 = v28->fields.targetNum;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v61, targetIds, v63, v62);
        case 190:
          v59 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
          v60 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_87;
        case 191:
          v59 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
          v60 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_87:
          v64 = (System_Func_TSource__bool__o *)v59;
          System_Func_int__bool____ctor(
            v59,
            (Il2CppObject *)v28,
            *v60,
            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
          return System_Linq_Enumerable__Any_int__25991232(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v64,
                   (const MethodInfo_18C9840 *)Method_System_Linq_Enumerable_Any_int____66837904);
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
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v30);
LABEL_33:
              v53 = ClearCountsFromIds < v28->fields.targetNum;
              return !v53;
            }
            goto LABEL_69;
          }
          v48 = (CondType_CountDelegate_o *)sub_B170CC(CondType_CountDelegate_TypeInfo, v30, v31, v32, v33);
          v49 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_29:
      v50 = v48;
      CondType_CountDelegate___ctor(v48, 0LL, *v49, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v50, v51);
      goto LABEL_33;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v48 = (CondType_CountDelegate_o *)sub_B170CC(CondType_CountDelegate_TypeInfo, v30, v31, v32, v33);
        v49 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_29;
      }
LABEL_69:
      if ( (_DWORD)v34 )
      {
        v58 = targetIds->m_Items[1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v37 = condType;
        v38 = v58;
        v36 = 0LL;
        return CondType__IsOpen(v37, v38, v36, 0, v33);
      }
LABEL_44:
      sub_B17100(IsOpen, v30, v31);
      sub_B170A0();
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, v5, v31);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_25469964(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_40FA213 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condValues);
    byte_40FA213 = 1;
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
bool __fastcall CondType__IsOpen_25474480(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_40FA215 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_40FA215 = 1;
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
      result = CondType__IsServantLevel_25475232(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_25475396(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_25473084(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25475640(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25473812(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_25475964(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_25476136(userId, condValue, (const MethodInfo *)userId);
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
  if ( (byte_40FA284 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21055/*"notMeets"*/, method);
    byte_40FA284 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_43743732((System_String_o *)StringLiteral_21055/*"notMeets"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v5; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA279 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40FA279 = 1;
  }
  entity = 0LL;
  if ( UserGameMaster__TryGetSelfUserGame(&entity, 0LL) )
  {
    if ( !entity )
      sub_B170D4();
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E3B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
      byte_40F6E3B = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v5->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool __fastcall CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_40FA23A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA23A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   condId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopEntity__IsCondType(Entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseQpShop_25475964(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_40FA23B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA23B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   condId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopEntity__IsCondType_34556148(Entity, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_40FA23F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_40FA23F = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_40FA23D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA23D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   condId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopEntity__IsCondType(Entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseStoneShop_25476136(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_40FA23E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA23E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   condId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return ShopEntity__IsCondType_34556148(Entity, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  WebViewManager_o *v10; // x0
  WarQuestSelectionMaster_o *v11; // x0
  __int64 v12; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  il2cpp_array_size_t v14; // w23
  ShopGroupEntity_o *v15; // x8
  WarEntity_o *Entity; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  ShopEntity_o *v19; // x21

  if ( (byte_40FA275 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA275 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(MasterData_WarQuestSelectionMaster, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v10 )
        goto LABEL_22;
      v11 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v10,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
      v12 = *(_QWORD *)&v9->max_length;
      if ( (int)v12 >= 1 )
      {
        v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)v11;
        v14 = 0;
        while ( 1 )
        {
          v15 = v9->m_Items[v14];
          if ( !v15 || !v13 )
            break;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v13,
                     v15->fields.shopId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Entity )
          {
            v19 = (ShopEntity_o *)Entity;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Entity, 0LL) && !ShopEntity__IsSoldOut(v19, 0LL) )
              goto LABEL_19;
            Entity = (WarEntity_o *)ShopEntity__IsClosed(v19, 0LL, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_19;
          }
          if ( (int)++v14 >= (int)v12 )
            goto LABEL_20;
          if ( v14 >= v9->max_length )
          {
            sub_B17100(Entity, v17, v18);
            sub_B170A0();
          }
        }
LABEL_22:
        sub_B170D4();
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
  bool v10; // w20
  AvalonSceneManager_o *v11; // x0
  bool v12; // w22
  AvalonSceneManager_o *v13; // x0
  __int64 v14; // x1
  bool v15; // w21
  TerminalPramsManager_c *v16; // x0
  bool v17; // w20
  bool v18; // w20
  BalanceConfig_c *v19; // x8
  int32_t WarId_k__BackingField; // w22
  bool v21; // w20
  TerminalPramsManager_c *v22; // x0
  char v23; // w8
  char v24; // w20
  QuestTree_o *v25; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  clsQuestCheck_o *v28; // x0

  if ( (byte_40FA262 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v6);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40FA262 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v10 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v11 )
    goto LABEL_41;
  v12 = AvalonSceneManager__checkNowScene(v11, 22, 0LL);
  v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v13 )
    goto LABEL_41;
  v15 = AvalonSceneManager__checkNowScene(v13, 72, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v14);
    byte_40F6044 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  v17 = v10 || v12;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v18 = v17 || v15;
  v19 = BalanceConfig_TypeInfo;
  WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = !v18;
  if ( WarId_k__BackingField == v19->static_fields->OrdealCallWarId )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6059 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v14);
      byte_40F6059 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v23 = !v22->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v23 = 1;
  }
  v24 = v23 & v21;
  if ( (v24 & 1) != 0 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v25 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !v25 )
      goto LABEL_41;
    QuestInfo = QuestTree__GetQuestInfo(v25, questId, 0LL);
    if ( (v24 & 1 & (QuestInfo != 0LL)) != 0 )
    {
      if ( QuestInfo )
        return QuestInfo->fields.dispType == 1;
LABEL_41:
      sub_B170D4();
    }
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v28 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v28 )
    goto LABEL_41;
  return clsQuestCheck__CheckQuestPlayableNow(v28, questId, 0LL);
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
  UserQuestEntity_o *EntityFromId; // x23
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x2

  if ( (byte_40FA21A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    byte_40FA21A = 1;
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
  Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B170D4();
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(Master_WarQuestSelectionMaster, condQuestId, 0LL)
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
  bool IsQuestClear_25438860; // w8
  bool result; // w0
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  UserQuestEntity_o *Entity; // x0
  int64_t updatedAt; // x20
  EventMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FA2AC & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40FA2AC = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_25438860 )
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
    UserId = NetworkManager__get_UserId(0LL);
    if ( !UserQuestMaster )
      goto LABEL_21;
    Entity = UserQuestMaster__GetEntity(UserQuestMaster, UserId, questId, 0LL);
    if ( !Entity )
      goto LABEL_21;
    updatedAt = Entity->fields.updatedAt;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
LABEL_21:
      sub_B170D4();
    return updatedAt < EventMaster__GetEventStartedAt(Master_WarQuestSelectionMaster, eventId, 0LL);
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
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_40FA24E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FA24E = 1;
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
    sub_B170D4();
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear_25438860(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  int64_t UserId; // x22

  if ( (byte_40FA21B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FA21B = 1;
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
  WebViewManager_o *Instance; // x0
  int64_t UserId; // x21
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  CondType_c *v13; // x0
  UserQuestMaster_o *v14; // x0
  UserQuestEntity_o *v15; // x0

  if ( (byte_40FA221 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&closeQuestid);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA221 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v11 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
    if ( !UserQuestMaster )
      goto LABEL_26;
    EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, openQuestid, 0LL);
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
  v14 = CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !v14 )
LABEL_26:
    sub_B170D4();
  v15 = UserQuestMaster__getEntityFromId(v14, UserId, closeQuestid, 0LL);
  if ( !v15 || UserQuestEntity__getClearNum(v15, 0LL) <= 0 )
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  System_Int32_array *v14; // x19
  int v15; // w22
  unsigned __int64 v16; // x23
  int32_t v17; // w20

  if ( (byte_40FA263 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&questCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA263 = 1;
  }
  if ( questCount <= 1 )
    v7 = 1;
  else
    v7 = questCount;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v13 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  v14 = QuestIdListByGroupId;
  if ( (int)v13 < 1 )
    return 0;
  v15 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)v13 )
    {
      sub_B17100(QuestIdListByGroupId, v11, v12);
      sub_B170A0();
    }
    v17 = v14->m_Items[v16 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    QuestIdListByGroupId = (System_Int32_array *)CondType__IsQuestAvailable(v17, v11);
    if ( ((unsigned __int8)QuestIdListByGroupId & 1) != 0 && ++v15 >= v7 )
      break;
    LODWORD(v13) = v14->max_length;
    if ( (__int64)++v16 >= (int)v13 )
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
  if ( (byte_40FA253 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_40FA253 = 1;
  }
  if ( condVal <= 1 )
    condVal = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= condVal;
}


bool __fastcall CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  signed __int64 v6; // x22
  CondType_c *v7; // x0
  UserQuestMaster_o *UserQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_40FA272 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FA272 = 1;
  }
  if ( !condQuestId )
    goto LABEL_20;
  v4 = *(_QWORD *)&condQuestId->max_length;
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
      UserId = NetworkManager__get_UserId(0LL);
      if ( v5 >= condQuestId->max_length )
      {
        sub_B17100(UserId, v10, v11);
        sub_B170A0();
      }
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condQuestId->m_Items[v5 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( (__int64)++v5 >= v6 )
        return 1;
    }
LABEL_20:
    sub_B170D4();
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

  if ( (byte_40FA21D & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    byte_40FA21D = 1;
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
bool __fastcall CondType__IsQuestPhaseClear_25491608(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  int64_t UserId; // x23

  if ( (byte_40FA21E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FA21E = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  WarEntity_o *v13; // x8
  unsigned __int64 v14; // x22
  bool v15; // w20
  struct System_String_o *age; // x8
  unsigned __int64 klass_low; // x9
  int32_t v18; // w19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA264 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestResetMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA264 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         targetId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v8 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
    v13 = entity;
    if ( entity )
    {
      v14 = 0LL;
      v15 = 1;
      do
      {
        age = v13->fields.age;
        if ( !age )
          break;
        klass_low = LODWORD(age[1].klass);
        if ( (__int64)v14 >= (int)klass_low )
          return 0;
        if ( v14 >= klass_low )
        {
          sub_B17100(UserQuestMaster, v10, v11);
          sub_B170A0();
        }
        v18 = *((_DWORD *)&age[1].monitor + v14);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = (UserQuestMaster_o *)CondType__IsQuestClear_25438860(v18, -1, 1, v12);
        if ( ((unsigned __int8)UserQuestMaster & 1) != 0 )
          return v15;
        v13 = entity;
        ++v14;
      }
      while ( entity );
    }
LABEL_19:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  System_Math_c *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UserServantCollectionEntity_o *v14; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w20
  il2cpp_array_size_t v17; // w21
  struct System_Int32_array *v18; // x8
  int v19; // w23
  int v20; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA271 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_B16FFC(&System_Math_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA271 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  v11 = (System_Math_c *)UserServantCollectionMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           UserId,
                           svtId,
                           0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  v14 = entity;
  if ( !entity || (costumeIds = entity->fields.costumeIds) == 0LL )
LABEL_24:
    sub_B170D4();
  max_length = costumeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = v14->fields.costumeIds;
    if ( !v18 )
      goto LABEL_24;
    if ( v17 >= v18->max_length )
    {
      sub_B17100(v11, v12, v13);
      sub_B170A0();
    }
    v11 = System_Math_TypeInfo;
    v19 = v18->m_Items[v17 + 1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v20 = v19 >= 0 ? v19 : -v19;
    if ( v20 == costumeId )
      return 1;
    if ( (int)++v17 >= max_length )
      return 0;
    v14 = entity;
    if ( !entity )
      goto LABEL_24;
  }
}


bool __fastcall CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v2; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
  v2 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v2->fields.birthDay > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IList_int__o *v9; // x20
  const MethodInfo *v10; // x4
  System_Collections_Generic_IList_int__o *v11; // x21

  if ( (byte_40FA2A5 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&routeId);
    sub_B16FFC(&int___TypeInfo, v5);
    byte_40FA2A5 = 1;
  }
  v6 = sub_B17014(int___TypeInfo, 1LL, method);
  if ( !v6 )
    goto LABEL_11;
  v9 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v6 + 32) = questId;
  v6 = sub_B17014(int___TypeInfo, 1LL, v8);
  if ( !v6 )
LABEL_11:
    sub_B170D4();
  v11 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
  {
LABEL_12:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  *(_DWORD *)(v6 + 32) = routeId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_25496856(v9, v11, 1, 0, v10);
}


bool __fastcall CondType__IsRouteSelect_25496856(
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
  WebViewManager_o *Instance; // x0
  UserQuestRouteMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_HashSet_int__o *v24; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x0
  __int64 v30; // x26
  int v31; // w22
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  int32_t v40; // w0
  System_Collections_Generic_IList_int__c *v41; // x8
  int32_t v42; // w26
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  int32_t v55; // w27
  int64_t UserId; // x1
  int v57; // w27
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  int v62; // w19
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v69; // [xsp+18h] [xbp-68h]
  _DWORD v70[2]; // [xsp+20h] [xbp-60h]
  int v71; // [xsp+28h] [xbp-58h]

  if ( (byte_40FA2A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, routeIds);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v10);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FA2A6 = 1;
  }
  v71 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (UserQuestRouteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !questIds )
    goto LABEL_90;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v69 = v29;
  if ( !v29 )
    sub_B170D4();
  v30 = v29;
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
      v35 = sub_AAFEF8(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v30, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v38 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_24;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_24:
      v39 = sub_AAFEF8(v30, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      v30 = v69;
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v30, *(_QWORD *)(v39 + 8));
    if ( !routeIds )
      sub_B170D4();
    v41 = routeIds->klass;
    v42 = v40;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v44 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v45 = (__int64)&v41->vtable[*v44].method;
    }
    else
    {
LABEL_31:
      v45 = sub_AAFEF8(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v45)(
            routeIds,
            *(_QWORD *)(v45 + 8));
    if ( !v46 )
      sub_B170D4();
    while ( 1 )
    {
      v47 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_38;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_38:
        v50 = sub_AAFEF8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v53 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_45;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_45:
        v54 = sub_AAFEF8(v46, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B170D4();
      if ( UserQuestRouteMaster__haveRouteId(MasterData_WarQuestSelectionMaster, UserId, v42, v55, 0LL) )
      {
        if ( !v24 )
          sub_B170D4();
        System_Collections_Generic_HashSet_int___Add(
          v24,
          v55,
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v70[v31] = 100;
    v57 = ++v71;
    v58 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_59;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_59:
      v61 = sub_AAFEF8(v46, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v61)(v46, *(_QWORD *)(v61 + 8));
    v30 = v69;
    v31 = 0;
    if ( v57 )
    {
      v31 = v57;
      if ( v70[v57 - 1] == 100 )
      {
        v71 = v57 - 1;
        v31 = v57 - 1;
      }
    }
  }
  v70[v31] = 120;
  v62 = ++v71;
  if ( v30 )
  {
    v63 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_73;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_73:
      v66 = sub_AAFEF8(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v30, *(_QWORD *)(v66 + 8));
  }
  if ( v62 && v70[v62 - 1] == 120 )
    v71 = v62 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v24 )
        goto LABEL_90;
      return v24->fields._count <= count;
    case 1:
      if ( !v24 )
        goto LABEL_90;
      return v24->fields._count >= count;
    case 0:
      if ( v24 )
        return v24->fields._count == count;
LABEL_90:
      sub_B170D4();
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

  if ( (byte_40FA231 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FA231 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25475640(UserId, svtId, condFriendshipRank, isAbove, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_25473244(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v15; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v16; // x0
  WebViewManager_o *v17; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v18; // x0
  __int128 v19; // q1
  int64_t v20; // x0
  int64_t v21; // x20
  __int64 v22; // x21
  __int64 v23; // x22
  const MethodInfo *v24; // x4
  int32_t v25; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-50h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FA233 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FA233 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_25;
  v16 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v15,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v16 )
    goto LABEL_25;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v16,
          &entity,
          userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v17 )
      goto LABEL_25;
    v18 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)v17,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !v18 )
      goto LABEL_25;
    if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            v18,
            &entity,
            userSvtId,
            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
      return 0;
  }
  if ( !entity )
    goto LABEL_25;
  v19 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v19;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v28 = v29;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v28, 0LL);
  if ( !entity )
LABEL_25:
    sub_B170D4();
  v21 = v20;
  v23 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v23;
  *(_QWORD *)&v31.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25475640(v21, v25, condFriendshipRank, 1, v24);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_25475640(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FA232 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FA232 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
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
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL) >= condFriendshipRank;
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
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_40FA22B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FA22B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25473084(UserId, condSvtId, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  WarEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA266 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA266 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
  {
    if ( !entity )
      goto LABEL_18;
    if ( entity->fields.status )
    {
      v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v12 )
        goto LABEL_18;
      v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v12,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !v13 )
        goto LABEL_18;
      DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        v13,
        &v15,
        eventId,
        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v15 )
      {
        if ( entity )
          return entity->fields.createdAt < *(_QWORD *)&v15->fields.eventId;
LABEL_18:
        sub_B170D4();
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGet_25473084(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA22C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condSvtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA22C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       userId,
                       condSvtId,
                       0LL);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.status == 2;
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet_25492920(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v12; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v13; // x0
  __int128 v14; // q1
  int64_t v15; // x0
  int64_t v16; // x19
  __int64 v17; // x20
  __int64 v18; // x21
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FA22D & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA22D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_23;
    v13 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   (DataManager_o *)v12,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !v13 )
      goto LABEL_23;
    if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            v13,
            &entity,
            userSvtId,
            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
      return 0;
  }
  if ( !entity )
    goto LABEL_23;
  v14 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v23 = v24;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v23, 0LL);
  if ( !entity )
LABEL_23:
    sub_B170D4();
  v16 = v15;
  v18 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25473084(v16, v20, v19);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  int64_t UserId; // x20

  if ( (byte_40FA235 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FA235 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_25473812(UserId, condGroup, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGroup_25473812(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v9; // x0
  ServantGroupMaster_o *v10; // x0
  _DWORD *EntityListById; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int v14; // w8
  _DWORD *v15; // x21
  unsigned int v16; // w22
  __int64 v17; // x8

  if ( (byte_40FA236 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&condGroup);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA236 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v10 = (ServantGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v9,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (EntityListById = ServantGroupMaster__getEntityListById(v10, condGroup, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  v14 = EntityListById[6];
  v15 = EntityListById;
  if ( v14 < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= v14 )
    {
      sub_B17100(EntityListById, v12, v13);
      sub_B170A0();
    }
    v17 = *(_QWORD *)&v15[2 * v16 + 8];
    if ( !v17 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    EntityListById = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       userId,
                       *(_DWORD *)(v17 + 20),
                       0LL);
    if ( EntityListById )
    {
      if ( EntityListById[10] == 2 )
        return 1;
    }
    v14 = v15[6];
    if ( (int)++v16 >= v14 )
      return 0;
  }
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA22E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA22E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__IsServantHaving(MasterData_WarQuestSelectionMaster, svtId, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA27C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condNum);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA27C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__IsServantHavingLimitMax(MasterData_WarQuestSelectionMaster, svtId, condNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v11; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v12; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA222 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLv);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA222 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         userSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_12;
  v12 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v11,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !v12 )
    goto LABEL_12;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         v12,
         &entity,
         userSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    if ( entity )
      return entity->fields.lv >= condLv;
LABEL_12:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_25436308(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  int64_t UserId; // x21

  if ( (byte_40FA223 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condLv);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FA223 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_25475232(UserId, svtId, condLv, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_25475232(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA224 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA224 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v14; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x0
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FA226 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FA226 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         userSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14
    || (v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v14,
                                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v15,
          &entity,
          userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v18 = 0;
    goto LABEL_15;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_23;
  v17 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v17;
  *(_QWORD *)&v21.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
LABEL_15:
  if ( checkType == 2 )
    return v18 <= condLimitCount;
  if ( checkType == 1 )
    return v18 >= condLimitCount;
  if ( checkType )
    return 0;
  return v18 == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimitClassNum(
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x22
  int32_t v8; // w23
  int32_t v9; // w21

  if ( (byte_40FA295 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_40FA295 = 1;
  }
  if ( !targetIds )
    sub_B170D4();
  v5 = *(_QWORD *)&targetIds->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
      {
        sub_B17100(v6, *(_QWORD *)&targetNum, method);
        sub_B170A0();
      }
      v9 = targetIds->m_Items[v7 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountServantLimitClassNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = targetIds->max_length;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v13; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x0
  int32_t CombineVoiceLimitCount; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA227 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FA227 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         userSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_20;
  v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v13,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !v14 )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         v14,
         &entity,
         userSvtId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_B170D4();
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
bool __fastcall CondType__IsServantLimit_25436484(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  int64_t UserId; // x22

  if ( (byte_40FA228 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condLimitCount);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40FA228 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_25475396(UserId, svtId, condLimitCount, checkType, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_25475396(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA229 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA229 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  ShopGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v11; // x20
  WebViewManager_o *v12; // x0
  WarQuestSelectionMaster_o *v13; // x0
  __int64 v14; // x23
  UserShopMaster_o *v15; // x21
  il2cpp_array_size_t v16; // w24
  int32_t v17; // w25
  ShopGroupEntity_o *v18; // x8
  int32_t shopId; // w22
  int64_t UserId; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA27A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, *(_QWORD *)&limitNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA27A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(MasterData_WarQuestSelectionMaster, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v11 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v12 )
    goto LABEL_23;
  v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v12,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v14 = *(_QWORD *)&v11->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (UserShopMaster_o *)v13;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v18 = v11->m_Items[v16];
      if ( !v18 )
        break;
      shopId = v18->fields.shopId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v15 )
        break;
      v21 = UserShopMaster__TryGetEntity(v15, &entity, UserId, shopId, 0LL);
      if ( v21 )
      {
        if ( !entity )
          break;
        v17 += entity->fields.num;
        if ( v17 >= limitNum )
          return 1;
      }
      if ( (int)++v16 >= (int)v14 )
        return 0;
      if ( v16 >= v11->max_length )
      {
        sub_B17100(v21, v22, v23);
        sub_B170A0();
      }
    }
LABEL_23:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x8
  int v10; // w22
  UserShopMaster_o *v11; // x21
  unsigned __int64 v12; // x23
  signed __int64 v13; // x24
  int64_t UserId; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FA25F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&num);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA25F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_16;
  v9 = *(_QWORD *)&values->max_length;
  v10 = 0;
  if ( v9 && (int)v9 >= 1 )
  {
    v11 = (UserShopMaster_o *)MasterData_WarQuestSelectionMaster;
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
      UserId = NetworkManager__get_UserId(0LL);
      if ( v12 >= values->max_length )
      {
        sub_B17100(UserId, v15, v16);
        sub_B170A0();
      }
      if ( !v11 )
        break;
      EntityDefinitely = UserShopMaster__GetEntityDefinitely(v11, UserId, values->m_Items[v12 + 1], 0LL);
      if ( !EntityDefinitely )
        break;
      ++v12;
      v10 += EntityDefinitely->fields.num;
      if ( (__int64)v12 >= v13 )
        return num > 0 && v10 == num;
    }
LABEL_16:
    sub_B170D4();
  }
  return num > 0 && v10 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ShopGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  WebViewManager_o *v10; // x0
  WarQuestSelectionMaster_o *v11; // x0
  __int64 v12; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  il2cpp_array_size_t v14; // w23
  ShopGroupEntity_o *v15; // x8
  WarEntity_o *Entity; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  ShopEntity_o *v19; // x21

  if ( (byte_40FA274 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA274 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (ShopGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(MasterData_WarQuestSelectionMaster, targetId, 0LL);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v9 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
LABEL_21:
    sub_B170D4();
  v11 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v10,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  v12 = *(_QWORD *)&v9->max_length;
  if ( (int)v12 < 1 )
    goto LABEL_18;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)v11;
  v14 = 0;
  while ( 1 )
  {
    v15 = v9->m_Items[v14];
    if ( !v15 || !v13 )
      goto LABEL_21;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v13,
               v15->fields.shopId,
               (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Entity )
    {
      v19 = (ShopEntity_o *)Entity;
      Entity = (WarEntity_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Entity, 0LL);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Entity = (WarEntity_o *)ShopEntity__IsSoldOut(v19, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          break;
      }
    }
    if ( (int)++v14 >= (int)v12 )
      goto LABEL_18;
    if ( v14 >= v9->max_length )
    {
      sub_B17100(Entity, v17, v18);
      sub_B170A0();
    }
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_40FA2A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FA2A7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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

  if ( (byte_40FA2AF & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    byte_40FA2AF = 1;
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

  if ( (byte_40FA2B0 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    byte_40FA2B0 = 1;
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
  WebViewManager_o *Instance; // x0
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA2AE & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, condVal);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA2AE = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      if ( UserSuperBossMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, v9, v10, 0LL) )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_18:
        sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA27F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FA27F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantMaster__GetSvtEquipFriendShip(MasterData_WarQuestSelectionMaster, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  UserServantStorageMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA281 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FA281 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip(MasterData_WarQuestSelectionMaster, 0LL) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserEventServantFatigueMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventServantFatigueMaster_o *v12; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  int64_t v17; // x22
  int32_t v18; // w26
  unsigned __int64 v19; // x27
  signed __int64 v20; // x28
  int64_t v21; // x23
  WebViewManager_o *v22; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v23; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w0
  int64_t v28; // x23
  bool isRecover; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FA273 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, *(_QWORD *)&condNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA273 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserEventServantFatigueMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  v12 = MasterData_WarQuestSelectionMaster;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 MasterData_WarQuestSelectionMaster,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v16 = *(_QWORD *)(RecoverySvtIdList + 24);
    v17 = RecoverySvtIdList;
    if ( (int)v16 < 1 )
    {
LABEL_25:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v18 = 0;
    v19 = 0LL;
    v20 = (int)v16;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v17 + 32 + 8 * v19);
      if ( v21 < 1 )
        goto LABEL_22;
      v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v22 )
        goto LABEL_28;
      v23 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                     (DataManager_o *)v22,
                                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v23 )
        goto LABEL_28;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v23,
                 v21,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        goto LABEL_28;
      v26 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = v26;
      *(_QWORD *)&v32.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v12, &recoverAt, &isRecover, eventId, v27, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v28 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v28 - RecoverySvtIdList > 0 )
          goto LABEL_22;
        ++v18;
      }
      if ( v18 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_22:
      if ( (__int64)++v19 >= v20 )
        goto LABEL_25;
      if ( v19 >= *(unsigned int *)(v17 + 24) )
      {
        sub_B17100(RecoverySvtIdList, v14, v15);
        sub_B170A0();
      }
    }
  }
  return RecoverySvtIdList;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsTargetIdsCommonCount(
        System_Func_int__int__o *countFunc,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v7; // x8
  __int64 v8; // x0
  unsigned __int64 v9; // x22
  int32_t v10; // w23

  if ( (byte_40FA2B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_int__int__Invoke__, targetIds);
    byte_40FA2B4 = 1;
  }
  if ( !targetIds )
LABEL_14:
    sub_B170D4();
  v7 = *(_QWORD *)&targetIds->max_length;
  v8 = 0LL;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        sub_B17100(v8, targetIds, *(_QWORD *)&targetNum);
        sub_B170A0();
      }
      if ( !countFunc )
        goto LABEL_14;
      v8 = System_Func_int__int___Invoke(
             countFunc,
             targetIds->m_Items[v9 + 1],
             (const MethodInfo_2B65E84 *)Method_System_Func_int__int__Invoke__);
      v10 += v8;
      if ( v10 >= targetNum )
        break;
      LODWORD(v7) = targetIds->max_length;
      if ( (__int64)++v9 >= (int)v7 )
      {
        LOBYTE(v8) = 0;
        return v8;
      }
    }
    LOBYTE(v8) = 1;
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsTotalTdLvCond(
        int32_t condType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int v10; // w8

  if ( (byte_40FA289 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA289 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v10 = limitCount - UserServantMaster__GetServantHavingTdLvCount(MasterData_WarQuestSelectionMaster, svtId, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_40FA28B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&System_Enum_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&EventStatus_Type_var, v8);
    sub_B16FFC(&EventStatus_Type_TypeInfo, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    byte_40FA28B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B170D4();
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, UserId, eventId, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_40FA28C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&System_Enum_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&UserQuestEntity_StatusKind_var, v8);
    sub_B16FFC(&UserQuestEntity_StatusKind_TypeInfo, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    byte_40FA28C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B170D4();
  EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, questId, 0LL);
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
                        && UserQuestEntity__HasStatus_21363956(v15, flag, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_40FA2A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&flagKind);
    sub_B16FFC(&System_Enum_TypeInfo, v5);
    sub_B16FFC(&UserShopFlag_FlagKind_var, v6);
    sub_B16FFC(&UserShopFlag_FlagKind_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    byte_40FA2A2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B170D4();
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(MasterData_WarQuestSelectionMaster, UserId, shopId, 0LL);
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
  WebViewManager_o *v8; // x0
  EventRewardRootComponent_o *basePanel; // x0
  __int64 v10; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w0
  __int64 v17; // x1
  int64_t v19; // x0
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40FA277 & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, *(_QWORD *)&playCount);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_40FA277 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v8 || (basePanel = (EventRewardRootComponent_o *)v8->fields.basePanel) == 0LL )
LABEL_17:
    sub_B170D4();
  v10 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v10 - 1] != EventRewardRootComponent_TypeInfo )
  {
    v19 = sub_B173C8(basePanel);
    return CondType__IsArrivalDate(v19, v20);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(basePanel, 0LL);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v14 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v16, 0LL);
  if ( !byte_40FA2CA )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v17);
    byte_40FA2CA = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA267 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&num);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA267 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  unsigned int v7; // w9

  if ( (byte_40FA294 & 1) == 0 )
  {
    sub_B16FFC(&ServantCommentManager_TypeInfo, method);
    byte_40FA294 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_B170D4();
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      sub_B17100(ClearWarIdList, v4, v5);
      sub_B170A0();
    }
    if ( ClearWarIdList->m_Items[v7 + 1] == condWarId )
      break;
    if ( (int)++v7 >= max_length )
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
  WebViewManager_o *Instance; // x0
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v21; // x19
  CondType___c_c *v22; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__167_0; // x20
  Il2CppObject *v25; // x21
  struct CondType___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  CondType___c_c *v37; // x0
  struct CondType___c_StaticFields *v38; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__167_1; // x20
  Il2CppObject *v40; // x21
  struct CondType___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  peRenderTexture_ChangeLayerObject_o *v48; // x0
  const MethodInfo *v49; // x3
  int32_t changeMaterial_high; // w19

  if ( (byte_40FA2A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_WarEntity___ctor__, v1);
    sub_B16FFC(&System_Comparison_WarEntity__TypeInfo, v2);
    sub_B16FFC(&CondType_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__Find__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__Sort__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Predicate_WarEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_WarEntity__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_CondType___c__LatestMainScenarioWarClear_b__167_0__, v11);
    sub_B16FFC(&Method_CondType___c__LatestMainScenarioWarClear_b__167_1__, v12);
    sub_B16FFC(&CondType___c_TypeInfo, v13);
    byte_40FA2A0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EntityList = WarMaster__GetEntityList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !EntityList )
    return 0;
  v21 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v22 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v22 = CondType___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__167_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__167_0;
  if ( !_9__167_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__167_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_WarEntity__TypeInfo,
                                                                            v17,
                                                                            v18,
                                                                            v19,
                                                                            v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__167_0,
      v25,
      Method_CondType___c__LatestMainScenarioWarClear_b__167_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_WarEntity___ctor__);
    v26 = CondType___c_TypeInfo->static_fields;
    v26->__9__167_0 = (struct System_Comparison_WarEntity__o *)_9__167_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__167_0,
      (System_Int32_array **)_9__167_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v21,
    (System_Comparison_T__o *)_9__167_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v37 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v37 = CondType___c_TypeInfo;
  }
  v38 = v37->static_fields;
  _9__167_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v38->__9__167_1;
  if ( !_9__167_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v38 = CondType___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__167_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_WarEntity__TypeInfo,
                                                                           v33,
                                                                           v34,
                                                                           v35,
                                                                           v36);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__167_1,
      v40,
      Method_CondType___c__LatestMainScenarioWarClear_b__167_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_WarEntity___ctor__);
    v41 = CondType___c_TypeInfo->static_fields;
    v41->__9__167_1 = (struct System_Predicate_WarEntity__o *)_9__167_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__167_1,
      (System_Int32_array **)_9__167_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v21,
          (System_Predicate_T__o *)_9__167_1,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v48 )
    return 0;
  changeMaterial_high = HIDWORD(v48[1].fields.changeMaterial);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25438860(changeMaterial_high, -1, 0, v49);
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

  if ( (byte_40FA216 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3286/*"COND_TYPE_NONE"*/, v8);
    byte_40FA216 = 1;
  }
  switch ( condType )
  {
    case 0:
      v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_3286/*"COND_TYPE_NONE"*/, textType, 0LL);
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
      if ( !byte_40F87E5 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
        byte_40F87E5 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_40FA239 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, textType);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3285/*"COND_TYPE_EVENT"*/, v8);
    byte_40FA239 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              condId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_3285/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B170D4();
  v14 = v13;
  EventName = (Il2CppObject *)EventEntity__getEventName(Entity, 0LL);
  return System_String__Format(v14, EventName, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_40FA23C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3287/*"COND_TYPE_PURCHASE_QP_SHOP"*/, v8);
    byte_40FA23C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             condId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_3287/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B170D4();
  return System_String__Format(v13, &Entity->fields.coordinate->obj, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_40FA241 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3288/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, v8);
    byte_40FA241 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             condId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_3288/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B170D4();
  return System_String__Format(v13, &Entity->fields.coordinate->obj, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  LocalizationManager_c *v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA21C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, textType);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3289/*"COND_TYPE_QUEST_CLEAR"*/, v8);
    byte_40FA21C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         condQuestId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_3289/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get(v11, 0LL);
    if ( entity )
      return System_String__Format(v12, (Il2CppObject *)entity->fields.age, 0LL);
LABEL_22:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    byte_40F87E5 = 1;
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
  WarEntity_o *QuestId; // x0
  WarEntity_o *v18; // x22
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  System_String_o *v25; // x0
  Il2CppObject *age; // x20
  System_String_o *v27; // x19
  Il2CppObject *v28; // x0
  LocalizationManager_c *v29; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-24h] BYREF

  v31 = condQuestPhase;
  if ( (byte_40FA220 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3290/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, v14);
    sub_B16FFC(&StringLiteral_3289/*"COND_TYPE_QUEST_CLEAR"*/, v15);
    byte_40FA220 = 1;
  }
  entity = 0LL;
  if ( getWarName )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    QuestId = WarMaster__getByLastQuestId(Master_WarQuestSelectionMaster, condQuestId, 0LL);
    if ( QuestId )
    {
      v18 = QuestId;
      v19 = System_String__Concat_43743732((System_String_o *)StringLiteral_3289/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get(v19, 0LL);
      return System_String__Format(v20, (Il2CppObject *)v18->fields.name, 0LL);
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
    v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !v22 )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v22,
           &entity,
           condQuestId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v24 = System_String__Concat_43743732((System_String_o *)StringLiteral_3290/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get(v24, 0LL);
      if ( entity )
      {
        age = (Il2CppObject *)entity->fields.age;
        v27 = v25;
        v28 = (Il2CppObject *)System_Int32__ToString((int32_t)&v31, 0LL);
        return System_String__Format_43739268(v27, age, v28, 0LL);
      }
LABEL_38:
      sub_B170D4();
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v23);
      byte_40F87E5 = 1;
    }
    v29 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = LocalizationManager_TypeInfo;
    }
    return v29->static_fields->unknownNameText;
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

  if ( (byte_40FA234 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, textType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3291/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, v6);
    byte_40FA234 = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3291/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  Il2CppObject *Name; // x1

  if ( (byte_40FA230 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, textType);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3292/*"COND_TYPE_SERVANT_GET"*/, v8);
    byte_40FA230 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                condSvtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = System_String__Concat_43743732((System_String_o *)StringLiteral_3292/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B170D4();
  v14 = v13;
  Name = (Il2CppObject *)ServantEntity__getName(Entity, -1, -1, 0LL);
  return System_String__Format(v14, Name, 0LL);
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

  if ( (byte_40FA237 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, textType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3293/*"COND_TYPE_SERVANT_GROUP"*/, v6);
    byte_40FA237 = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3293/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
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

  if ( (byte_40FA225 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, textType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3294/*"COND_TYPE_SERVANT_LEVEL"*/, v6);
    byte_40FA225 = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3294/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
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

  if ( (byte_40FA22A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, textType);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3295/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, v6);
    byte_40FA22A = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3295/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w19
  WebViewManager_o *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x0
  SpotPathEntity_o *v16; // x19
  int32_t name; // w20
  int32_t age_high; // w21

  if ( (byte_40FA20C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotPathMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v7);
    sub_B16FFC(&EventSpotMoveManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA20C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             questId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  bannerId = Entity->fields.bannerId;
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v14
    || (v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v14,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v15,
             bannerId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v16 = (SpotPathEntity_o *)Entity;
    age_high = HIDWORD(Entity->fields.age);
    name = (int32_t)Entity->fields.name;
    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    }
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(age_high, name, v16, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v9; // x0
  TotalEventRaidMaster_o *v10; // x0
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v13; // [xsp+8h] [xbp-28h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FA20B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA20B = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, eventId, targetId, 0LL) )
  {
    v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v9 )
      goto LABEL_15;
    v10 = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v9,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !v10 )
      goto LABEL_15;
    if ( TotalEventRaidMaster__TryGetEntity(v10, &v13, eventId, targetId, 0LL) )
    {
      if ( !v13 )
        goto LABEL_15;
      defeatedAt = v13->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  MapMaster_o *MasterData_WarQuestSelectionMaster; // x0
  MapEntity_array *EntityListByMapId; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  MapEntity_o *v16; // x21
  WebViewManager_o *v17; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x0
  System_Int64_array **Entity; // x0
  System_Int64_array **v20; // x21
  WebViewManager_o *v21; // x0
  UserEventMapMaster_o *v22; // x0

  if ( (byte_40FA2A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_long___, target);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMapMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA2A1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (MapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  EntityListByMapId = MapMaster__GetEntityListByMapId(MasterData_WarQuestSelectionMaster, mapId, 0LL);
  if ( !EntityListByMapId )
    goto LABEL_18;
  v15 = *(_QWORD *)&EntityListByMapId->max_length;
  if ( !v15 )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)v15 )
  {
    sub_B17100(EntityListByMapId, v13, v14);
    sub_B170A0();
  }
  v16 = EntityListByMapId->m_Items[0];
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_18;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v17,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v16 || !v18 )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v18,
                                    v16->fields.warId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v20 = Entity;
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21
    || (v22 = (UserEventMapMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v21,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_26577024(v22, *((_DWORD *)v20 + 24), mapId, 0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_2045640 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_158_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B170D4();
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_161_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8
  bool v3; // vf
  int32_t v4; // w8

  if ( !collection )
    sub_B170D4();
  maxLv = collection->fields.maxLv;
  v3 = __OFSUB__(maxLv, 1);
  v4 = maxLv - 1;
  if ( v4 < 0 != v3 )
    return 0;
  else
    return v4;
}


int32_t __fastcall CondType___CountServantClassTotalLimitUp_g__CountFunc_156_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B170D4();
  return collection->fields.maxLimitCount;
}


int32_t __fastcall CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_189_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  System_Int32_array *SkillLevelList; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  unsigned __int64 max_length; // x9
  System_Int32_array *v6; // x8
  __int64 v7; // x0
  unsigned __int64 v8; // x10
  int32_t *v9; // x8
  int32_t v10; // w12

  if ( !collection || (SkillLevelList = UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL )
    sub_B170D4();
  max_length = SkillLevelList->max_length;
  v6 = SkillLevelList;
  if ( (__int64)(max_length << 32) < 1 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = &v6->m_Items[1];
    do
    {
      if ( v8 >= max_length )
      {
        sub_B17100(v7, v3, v4);
        sub_B170A0();
      }
      v10 = v9[v8++];
      v7 = (unsigned int)(v7 + v10 - 1);
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v7;
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v11; // x0
  TotalEventRaidMaster_o *v12; // x0
  char v13; // w8
  TotalEventRaidEntity_o *v15; // [xsp+0h] [xbp-30h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA20D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA20D = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v13 = 0;
    return v13 & 1;
  }
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11
    || (v12 = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v11,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  if ( !TotalEventRaidMaster__TryGetEntity(v12, &v15, targetId, condValue, 0LL) )
    goto LABEL_12;
  if ( !entity || !v15 )
    goto LABEL_14;
  v13 = (entity->fields.maxHp > v15->fields.totalDamage) ^ alive ^ 1;
  return v13 & 1;
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
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidEntity_array *EventRaidEntityArray; // x21
  WebViewManager_o *v12; // x0
  WarQuestSelectionMaster_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v17; // x22
  unsigned int v18; // w23
  EventRaidEntity_o *v19; // x24
  char v20; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA20E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FA20E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 MasterData_WarQuestSelectionMaster,
                                 targetId,
                                 condValue,
                                 0LL),
        (v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v12,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_B170D4();
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v20 = 0;
  }
  else
  {
    v17 = (TotalEventRaidMaster_o *)v13;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v19 = EventRaidEntityArray->m_Items[v18];
      if ( !v19 || !v17 )
        goto LABEL_19;
      v13 = (WarQuestSelectionMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                           v17,
                                           &entity,
                                           targetId,
                                           v19->fields.day,
                                           0LL);
      if ( ((unsigned __int8)v13 & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v19->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_16;
    }
    v20 = 1;
  }
  return (v20 ^ ~alive) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t Time; // x0
  const MethodInfo *v11; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA20A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA20A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( !EventRaidMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_18:
    sub_B170D4();
  if ( Time <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v11);
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
  sub_B16F98(
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
  if ( (byte_40F8B09 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&id);
    byte_40F8B09 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v10, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0

  v3 = sub_B16FA4(result, 0LL, method);
  if ( !v3 )
    sub_B170D4();
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
        sub_B170B8(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&id, *(_QWORD *)&level);
      if ( (sub_B1702C(v23) & 1) == 0 )
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
      v25 = sub_B17024(v23);
      v26 = sub_B17428(v23);
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
            v19 = sub_AAFEF8(v22, v28, v29);
          }
          v17 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v23);
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
            v16 = sub_AAFEF8(v22, class_0, v11);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B00 & 1) == 0 )
  {
    sub_B16FFC(&CondType___c_TypeInfo, v1);
    byte_40F8B00 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CondType___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CondType___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__194_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_40F8B04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_40F8B04 = 1;
  }
  if ( !x )
    sub_B170D4();
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__194_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_40F8B05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_40F8B05 = 1;
  }
  if ( !x )
    sub_B170D4();
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestLevel; // w1

  if ( (byte_40F8B01 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_40F8B01 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestLevel = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_40727628(current, ExchangeServantHighestLevel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestSkillLevel; // w1

  if ( (byte_40F8B02 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_40F8B02 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestSkillLevel = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_40727628(current, ExchangeServantHighestSkillLevel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestFriendShipRank; // w1

  if ( (byte_40F8B03 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_40F8B03 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestFriendShipRank = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  return UnityEngine_Mathf__Max_40727628(current, ExchangeServantHighestFriendShipRank, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__167_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__167_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.lastQuestId >= 1 && WarEntity__HasFlag(ent, 128, 0LL);
}


void __fastcall CondType___c__DisplayClass114_0___ctor(
        CondType___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass114_0___IsEventRaceGoalScriptPlayed_b__0(
        CondType___c__DisplayClass114_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.groupId == x;
}


void __fastcall CondType___c__DisplayClass157_0___ctor(
        CondType___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass157_0___CountServantFriendShipClassNum_g__CountFunc_0(
        CondType___c__DisplayClass157_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B170D4();
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL) >= this->fields.friendShipRank;
}


void __fastcall CondType___c__DisplayClass188_0___ctor(
        CondType___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass188_0___CountServantTargetSkillLvClassNum_g__CountFunc_0(
        CondType___c__DisplayClass188_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  System_Int32_array *SkillLevelList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x9
  System_Int32_array *v8; // x8
  __int64 v9; // x0
  unsigned __int64 v10; // x10
  int32_t *v11; // x8
  int32_t v12; // w12

  if ( !collection || (SkillLevelList = UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL )
    sub_B170D4();
  max_length = SkillLevelList->max_length;
  v8 = SkillLevelList;
  if ( (__int64)(max_length << 32) < 1 )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = &v8->m_Items[1];
    do
    {
      if ( v10 >= max_length )
      {
        sub_B17100(v9, v5, v6);
        sub_B170A0();
      }
      v12 = v11[v10++];
      if ( v12 < this->fields.skillLv )
        v9 = (unsigned int)v9;
      else
        v9 = (unsigned int)(v9 + 1);
    }
    while ( (__int64)v10 < (int)max_length );
  }
  return v9;
}


void __fastcall CondType___c__DisplayClass194_0___ctor(
        CondType___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass194_0___CountClassBoardSquareReleased_b__0(
        CondType___c__DisplayClass194_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( (byte_40F8B06 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_40F8B06 = 1;
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

  if ( (byte_40F8B07 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_40F8B07 = 1;
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

  if ( (byte_40F8B08 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_40F8B08 = 1;
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
    sub_B170D4();
  return x->fields.questId == this->fields.condQuestId;
}