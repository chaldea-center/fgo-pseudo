void __fastcall CondType___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CondType_c *v14; // x8
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x19
  struct CondType_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CondType_c *v24; // x8

  if ( (byte_42E8FE6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v11, v12, v13);
    byte_42E8FE6 = 1;
  }
  CondType_TypeInfo->static_fields->EVENT_POINT_DEVIDER = 100;
  CondType_TypeInfo->static_fields->EVENT_RACE_DEVIDER = 100;
  v14 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->TARGET_PARAM_NUM = 2;
  static_fields = v14->static_fields;
  static_fields->uQuestMst = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->uQuestMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v17 = CondType_TypeInfo->static_fields;
  v17->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v17->cachedServantEquipIdStrDic,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = CondType_TypeInfo;
  CondType_TypeInfo->static_fields->lastUserId = -1LL;
  v24->static_fields->RAID_DAMAGE_RATE_FRACTION = 1000LL;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  CondType___c__DisplayClass28_0_o *v45; // x19
  QuestScriptMaterialNextMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v49; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v52; // x22
  UserQuestEntity_o *v53; // x21
  UserQuestEntity_o *IncludedGroupQuest; // x22
  CondType___c_c *v55; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x24
  Il2CppObject *v58; // x25
  struct CondType___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  WarQuestSelectionMaster_o *v66; // x0
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v69; // x25
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v73; // x20

  if ( (byte_42E8F36 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, condQuestId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____68845864, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_UserQuestEntity__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_UserQuestEntity__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v33, v34, v35);
    sub_B5D5C4(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v36, v37, v38);
    sub_B5D5C4(&CondType___c__DisplayClass28_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CondType___c_TypeInfo, v42, v43, v44);
    byte_42E8F36 = 1;
  }
  v45 = (CondType___c__DisplayClass28_0_o *)sub_B5D694(CondType___c__DisplayClass28_0_TypeInfo);
  CondType___c__DisplayClass28_0___ctor(v45, 0LL);
  if ( !v45 )
    goto LABEL_38;
  v45->fields.condQuestId = condQuestId;
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
    Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v49 = Master_WarQuestSelectionMaster;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                         Master_WarQuestSelectionMaster,
                         v45->fields.condQuestId,
                         0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v49,
                                       IncludedGroups,
                                       0LL);
      v52 = QuestScriptMaterialNextMaster__GetIncludedGroups(v49, v45->fields.condQuestId, 0LL);
      v53 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      }
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v52, 0LL);
      v55 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v55 = CondType___c_TypeInfo;
      }
      static_fields = v55->static_fields;
      _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v58 = (Il2CppObject *)static_fields->__9;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_1,
          v58,
          Method_CondType___c__CheckGroupMaterialQuest_b__28_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_UserQuestEntity__bool___ctor__);
        v59 = CondType___c_TypeInfo->static_fields;
        v59->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v59->__9__28_1,
          (System_Int32_array **)_9__28_1,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
      }
      if ( !System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v53 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                 v49,
                 v45->fields.condQuestId,
                 v53,
                 IncludedGroupQuest,
                 0LL);
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v66 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v53->fields.questId;
      questPhase = v53->fields.questPhase;
      v69 = (UserQuestMaster_o *)v66;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0LL);
      if ( v69 )
      {
        Master_WarQuestSelectionMaster = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                                              v69,
                                                                              questId,
                                                                              questPhase,
                                                                              (int64_t)Master_WarQuestSelectionMaster,
                                                                              0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v53->fields.updatedAt;
          v53 = (UserQuestEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster[1].klass = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(
                   v49,
                   v45->fields.condQuestId,
                   v53,
                   IncludedGroupQuest,
                   0LL);
        }
      }
    }
LABEL_38:
    sub_B5D69C(Master_WarQuestSelectionMaster, v47);
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v73 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v73,
    (Il2CppObject *)v45,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserQuestEntity__bool___ctor__);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                v72,
                                (System_Func_TSource__bool__o *)v73,
                                (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____68845864);
}


int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v12; // x21
  int32_t v13; // w22
  unsigned int v14; // w24
  UserServantCollectionMaster_c **v15; // x8
  UserServantCollectionEntity_o *v16; // x23
  int v17; // w8
  unsigned int v18; // w9
  __int64 v20; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8FCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, targetNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E8FCF = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v10);
  }
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v12 = Master_WarQuestSelectionMaster;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_27;
      v15 = &v12->klass + (int)v14;
      v16 = (UserServantCollectionEntity_o *)v15[4];
      if ( !v16 )
        goto LABEL_28;
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                          (UserServantCollectionEntity_o *)v15[4],
                                                                          0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(
                                                                            v16,
                                                                            0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_28;
        v17 = (int)Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
        if ( v17 >= 1 )
          break;
      }
LABEL_23:
      LODWORD(MasterName_k__BackingField) = v12->fields._MasterName_k__BackingField;
      if ( (int)++v14 >= (int)MasterName_k__BackingField )
        return v13;
    }
    v18 = 0;
    while ( v18 < v17 )
    {
      if ( *((_DWORD *)&Master_WarQuestSelectionMaster->fields.list + (int)v18) >= skillLv )
        ++v13;
      if ( targetNum && v13 >= targetNum )
        return v13;
      if ( (int)++v18 >= v17 )
        goto LABEL_23;
    }
LABEL_27:
    v20 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v20, 0LL);
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  CondType___c__DisplayClass195_0_o *v47; // x20
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  CondType___c_c *v53; // x8
  struct CondType___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__195_1; // x20
  Il2CppObject *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct CondType___c_StaticFields *v63; // x0
  BattleServantConfConponent_o *p__9__195_1; // x0
  CondType___c_c *v65; // x0
  struct CondType___c_StaticFields *v66; // x8
  Il2CppObject *v67; // x21
  struct CondType___c_StaticFields *v68; // x0

  if ( (byte_42E8FD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_UserClassBoardSquareEntity__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_UserClassBoardSquareEntity__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__, v32, v33, v34);
    sub_B5D5C4(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__, v35, v36, v37);
    sub_B5D5C4(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__, v38, v39, v40);
    sub_B5D5C4(&CondType___c__DisplayClass195_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CondType___c_TypeInfo, v44, v45, v46);
    byte_42E8FD6 = 1;
  }
  v47 = (CondType___c__DisplayClass195_0_o *)sub_B5D694(CondType___c__DisplayClass195_0_TypeInfo);
  CondType___c__DisplayClass195_0___ctor(v47, 0LL);
  if ( !v47 )
    goto LABEL_27;
  v47->fields.targetId = targetId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_27:
    sub_B5D69C(Master_WarQuestSelectionMaster, v49);
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           Master_WarQuestSelectionMaster,
                                                                                           (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               Entitys_WarQuestSelectionEntity,
                                                               (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v47->fields.targetId )
  {
    v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v52,
      (Il2CppObject *)v47,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_UserClassBoardSquareEntity__bool___ctor__);
    v51 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v51,
            (System_Func_TSource__bool__o *)v52,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v53 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v53 = CondType___c_TypeInfo;
    }
    static_fields = v53->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = CondType___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)static_fields->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v56,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v63 = CondType___c_TypeInfo->static_fields;
      v63->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v63->__9__195_1;
LABEL_25:
      sub_B5D560(p__9__195_1, (System_Int32_array **)_9__195_1, v57, v58, v59, v60, v61, v62);
    }
  }
  else
  {
    v65 = CondType___c_TypeInfo;
    if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v65 = CondType___c_TypeInfo;
    }
    v66 = v65->static_fields;
    _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v66->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v66 = CondType___c_TypeInfo->static_fields;
      }
      v67 = (Il2CppObject *)v66->__9;
      _9__195_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__195_1,
        v67,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        (const MethodInfo_2C2F87C *)Method_System_Func_UserClassBoardSquareEntity__int___ctor__);
      v68 = CondType___c_TypeInfo->static_fields;
      v68->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (BattleServantConfConponent_o *)&v68->__9__195_2;
      goto LABEL_25;
    }
  }
  return System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
           v51,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t __fastcall CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  UserServantCollectionMaster_o *v29; // x21
  int MasterName_k__BackingField; // w9
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x23
  int32_t v32; // w22
  int v33; // w8
  UserServantCollectionMaster_c **v34; // x8
  UserServantCollectionMaster_c *v35; // x24
  void *data; // x25
  const char *namespaze; // x26
  __int64 v39; // x0
  WarEntity_o *v40; // [xsp+8h] [xbp-68h] BYREF
  __int64 findSum; // [xsp+10h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E8FD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, (_DWORD)countFunc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int__Invoke__, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    byte_42E8FD3 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  findSum = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_35;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         classId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    v29 = Master_WarQuestSelectionMaster;
    if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      MasterName_k__BackingField = (int)v29->fields._MasterName_k__BackingField;
      if ( MasterName_k__BackingField >= 1 )
      {
        v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v32 = 0;
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= (unsigned int)MasterName_k__BackingField )
          {
            v39 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v39, 0LL);
          }
          v34 = &v29->klass + v33;
          v35 = v34[4];
          if ( !v35 )
            break;
          Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                                              (UserServantCollectionEntity_o *)v34[4],
                                                                              0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            namespaze = v35->_1.namespaze;
            data = v35->_1.byval_arg.data;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v43.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v43.fields.fakeValue = data;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                v43,
                                                                                0LL);
            if ( !v31 )
              break;
            Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                v31,
                                                                                &v40,
                                                                                (int32_t)Master_WarQuestSelectionMaster,
                                                                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !v40 )
                break;
              if ( v40->fields.startType == classId )
              {
                if ( !countFunc )
                  break;
                Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)System_Func_UserServantCollectionEntity__int___Invoke(
                                                                                    countFunc,
                                                                                    (UserServantCollectionEntity_o *)v35,
                                                                                    (const MethodInfo_2C2F890 *)Method_System_Func_UserServantCollectionEntity__int__Invoke__);
                v32 += (int)Master_WarQuestSelectionMaster;
              }
            }
          }
          v33 = findSum + 1;
          LODWORD(findSum) = v33;
          MasterName_k__BackingField = (int)v29->fields._MasterName_k__BackingField;
          if ( v33 >= MasterName_k__BackingField )
            return v32;
        }
LABEL_35:
        sub_B5D69C(Master_WarQuestSelectionMaster, v28);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  CondType_c *v50; // x0
  int64_t lastUserId; // x22
  __int64 v52; // x1
  CondType_c *v53; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *cachedServantEquipIdStrDic; // x0
  UserServantCollectionMaster_o *v55; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ServantEquipCollectionList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  ServantLimitMaster_o *v58; // x21
  Il2CppObject *current; // x27
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v62; // x0
  WarEntity_o *v63; // x23
  struct System_String_o *age; // x24
  __int64 v65; // x25
  __int64 v66; // x0
  ServantLimitEntity_o *v67; // x24
  __int64 v68; // x1
  _BOOL8 v69; // x0
  __int64 v70; // x1
  _BOOL8 v71; // x0
  __int64 v72; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // [xsp+0h] [xbp-A0h]
  int32_t v75; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+10h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+30h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_42E8FBD & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v38, v39, v40);
    sub_B5D5C4(&NetworkManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    byte_42E8FBD = 1;
  }
  entity = 0LL;
  memset(&v78, 0, sizeof(v78));
  v50 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v50 = CondType_TypeInfo;
  }
  lastUserId = v50->static_fields->lastUserId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( lastUserId != NetworkManager__get_UserId(0LL) )
  {
    v53 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v53->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_55:
      sub_B5D69C(cachedServantEquipIdStrDic, v52);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      cachedServantEquipIdStrDic,
      (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v55 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v55 )
    goto LABEL_55;
  ServantEquipCollectionList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserServantCollectionMaster__getServantEquipCollectionList(v55, CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic, 0LL);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)cachedServantEquipIdStrDic,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  v58 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)cachedServantEquipIdStrDic,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_55;
  cachedServantEquipIdStrDic = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)cachedServantEquipIdStrDic, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_55;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v74 = (DataMasterBase_WarMaster__WarEntity__int__o *)cachedServantEquipIdStrDic;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    ServantEquipCollectionList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v75 = 0;
  v78 = v76;
  while ( 1 )
  {
    v71 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v71 )
      break;
    current = v78.fields.current;
    if ( !v78.fields.current )
      sub_B5D69C(v71, v72);
    if ( LODWORD(v78.fields.current[2].monitor) == 2 )
    {
      monitor = v78.fields.current[1].monitor;
      klass = v78.fields.current[2].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v79.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v79.fields.fakeValue = klass;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(v62, (unsigned int)v62);
      v63 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              MasterData_WarQuestSelectionMaster,
              v62,
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v63 )
      {
        v65 = *(_QWORD *)&v63->fields.id;
        age = v63->fields.age;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v80.fields.currentCryptoKey = v65;
        *(_QWORD *)&v80.fields.fakeValue = age;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
        if ( !v58 )
          sub_B5D69C(v66, (unsigned int)v66);
        v67 = ServantLimitMaster__GetEntity(v58, v66, 0, 0LL);
        if ( v67
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v63, 0LL)
          && v67->fields.rarity == targetId % 100
          && SHIDWORD(current[2].monitor) >= targetId / 100 )
        {
          if ( !v74 )
            sub_B5D69C(0LL, v68);
          v69 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v74,
                  &entity,
                  (int32_t)v63[1].monitor,
                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v69 )
            goto LABEL_48;
          if ( !entity )
            sub_B5D69C(v69, v70);
          if ( *(&entity->fields.id + 1) != 3 )
LABEL_48:
            ++v75;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v75;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FDA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  UserEventRandomMissionMaster_o *v11; // x20
  int32_t v12; // w21
  unsigned __int64 v13; // x22
  __int64 v15; // x0

  if ( (byte_42E8FC7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8FC7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_18;
  v10 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = Master_WarQuestSelectionMaster;
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
      {
        v15 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v15, 0LL);
      }
      if ( !v11 )
        break;
      Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                                           v11,
                                                                           missionIds->m_Items[v13 + 1],
                                                                           0LL);
      if ( Master_WarQuestSelectionMaster )
        v12 += HIDWORD(Master_WarQuestSelectionMaster->fields.list);
      LODWORD(v10) = missionIds->max_length;
      if ( (__int64)++v13 >= (int)v10 )
        return v12;
    }
LABEL_18:
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  int v2; // w2
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E8FB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v11, v12, v13);
    byte_42E8FB7 = 1;
  }
  v14 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v14,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v14,
           v15);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  int v2; // w2
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E8FBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v11, v12, v13);
    byte_42E8FBA = 1;
  }
  v14 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v14,
    0LL,
    Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v14,
           v15);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  int v2; // w2
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E8FB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v11, v12, v13);
    byte_42E8FB5 = 1;
  }
  v14 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v14,
    0LL,
    Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v14,
           v15);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  int v2; // w2
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
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E8FD1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v11, v12, v13);
    byte_42E8FD1 = 1;
  }
  v14 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v14,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v14,
           v15);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  CondType___c__DisplayClass158_0_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v21; // x19
  const MethodInfo *v22; // x2

  if ( (byte_42E8FB6 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__, v11, v12, v13);
    sub_B5D5C4(&CondType___c__DisplayClass158_0_TypeInfo, v14, v15, v16);
    byte_42E8FB6 = 1;
  }
  v17 = (CondType___c__DisplayClass158_0_o *)sub_B5D694(CondType___c__DisplayClass158_0_TypeInfo);
  CondType___c__DisplayClass158_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v20 = targetId / 100;
  v17->fields.friendShipRank = targetId % 100;
  v21 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v20, (System_Func_UserServantCollectionEntity__int__o *)v21, v22);
}


int32_t __fastcall CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  DataManager_o *v26; // x21
  int datalist; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x23
  __int64 v29; // x26
  int32_t v30; // w22
  __int64 v31; // x24
  __int64 v32; // x24
  __int64 v33; // x25
  __int64 v35; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E8FB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, level, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E8FB9 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         classId,
         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v26 = Instance;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      datalist = (int)v26->fields.datalist;
      if ( datalist >= 1 )
      {
        v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v29 = 0LL;
        v30 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v29 >= datalist )
          {
            v35 = sub_B5D6C8(Instance);
            sub_B5D668(v35, 0LL);
          }
          v31 = *((_QWORD *)&v26->fields.lookup + v29);
          if ( !v31 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(
                                        *((UserServantCollectionEntity_o **)&v26->fields.lookup + v29),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && *(_DWORD *)(v31 + 44) >= level )
          {
            v33 = *(_QWORD *)(v31 + 24);
            v32 = *(_QWORD *)(v31 + 32);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v37.fields.currentCryptoKey = v33;
            *(_QWORD *)&v37.fields.fakeValue = v32;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
            if ( !v28 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v28,
                                          (int32_t)Instance,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == classId )
              ++v30;
          }
          datalist = (int)v26->fields.datalist;
          if ( (int)++v29 >= datalist )
            return v30;
        }
LABEL_28:
        sub_B5D69C(Instance, v25);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  DataManager_o *v15; // x20

  if ( (byte_42E8FBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, level, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8FBB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B5D69C(Instance, v13);
  }
  v15 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v15->fields.masterDataBytes) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  int v25; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v27; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x22
  __int64 v29; // x26
  int32_t v30; // w23
  int v31; // w28
  UserServantCollectionEntity_o *v32; // x20
  __int64 v33; // x24
  __int64 v34; // x25
  __int64 v36; // x0
  int32_t findSum[2]; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_42E8FB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E8FB4 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_28;
  v25 = targetId / 100;
  if ( DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         targetId / 100,
         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_28;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_28;
    v27 = *(_QWORD *)&CollectionList->max_length;
    if ( v27 )
    {
      if ( (int)v27 >= 1 )
      {
        v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v29 = 0LL;
        v30 = 0;
        v31 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v29 >= (unsigned int)v27 )
          {
            v36 = sub_B5D6C8(Instance);
            sub_B5D668(v36, 0LL);
          }
          v32 = CollectionList->m_Items[v29];
          if ( !v32 )
            break;
          Instance = (DataManager_o *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v29], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
            v33 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v38.fields.currentCryptoKey = v34;
            *(_QWORD *)&v38.fields.fakeValue = v33;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v38, 0LL);
            if ( !v28 )
              break;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v28,
                                          (int32_t)Instance,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->fields.lockCountObj) == v25 && v32->fields.maxLimitCount >= v31 )
              ++v30;
          }
          LODWORD(v27) = CollectionList->max_length;
          if ( (int)++v29 >= (int)v27 )
            return v30;
        }
LABEL_28:
        sub_B5D69C(Instance, v24);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  CondType___c__DisplayClass189_0_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w20
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v21; // x19
  const MethodInfo *v22; // x2

  if ( (byte_42E8FD0 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_UserServantCollectionEntity__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_UserServantCollectionEntity__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&CondType___c__DisplayClass189_0_TypeInfo, v14, v15, v16);
    byte_42E8FD0 = 1;
  }
  v17 = (CondType___c__DisplayClass189_0_o *)sub_B5D694(CondType___c__DisplayClass189_0_TypeInfo);
  CondType___c__DisplayClass189_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v20 = targetId / 100;
  v17->fields.skillLv = targetId % 100;
  v21 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    (const MethodInfo_2C2F87C *)Method_System_Func_UserServantCollectionEntity__int___ctor__);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v20, (System_Func_UserServantCollectionEntity__int__o *)v21, v22);
}


int32_t __fastcall CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v5; // x20
  CondType_c *v6; // x8
  int32_t v7; // w21
  int v8; // w23
  int32_t TARGET_PARAM_NUM; // w9
  __int64 v11; // x0

  v5 = targetParam;
  if ( (byte_42E8FB8 & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)func, (_DWORD)method, v3);
    byte_42E8FB8 = 1;
  }
  if ( !v5 )
    goto LABEL_22;
  v6 = *(CondType_c **)&v5->max_length;
  if ( !v6 )
    return 0;
  targetParam = (System_Int32_array *)CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    targetParam = (System_Int32_array *)CondType_TypeInfo;
    v6 = *(CondType_c **)&v5->max_length;
  }
  v7 = 0;
  if ( (int)v6 % *(_DWORD *)(*(_QWORD *)&targetParam->m_Items[39] + 8LL) != 1 && (int)v6 >= 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 || v8 + 1 >= (unsigned int)v6 )
      {
        v11 = sub_B5D6C8(targetParam);
        sub_B5D668(v11, 0LL);
      }
      if ( !func )
        break;
      targetParam = (System_Int32_array *)CondType_CountDelegate__Invoke(
                                            func,
                                            v5->m_Items[v8 + 1],
                                            v5->m_Items[v8 + 2],
                                            0LL);
      v6 = CondType_TypeInfo;
      v7 += (int)targetParam;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v6 = CondType_TypeInfo;
      }
      TARGET_PARAM_NUM = v6->static_fields->TARGET_PARAM_NUM;
      LODWORD(v6) = v5->max_length;
      v8 += TARGET_PARAM_NUM;
      if ( v8 >= (int)v6 )
        return v7;
    }
LABEL_22:
    sub_B5D69C(targetParam, func);
  }
  return v7;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *Instance; // x0
  __int64 v9; // x1
  int v10; // w9
  int v11; // w10
  int32_t v12; // w8
  __int64 v13; // x11
  __int64 v15; // x0

  if ( (byte_42E8FAE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FAE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_28067076((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    v10 = *((_DWORD *)Instance + 6);
    if ( v10 >= 1 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v15 = sub_B5D6C8(Instance);
          sub_B5D668(v15, 0LL);
        }
        v13 = *((_QWORD *)Instance + v11 + 4);
        if ( !v13 )
          break;
        ++v11;
        if ( *(_DWORD *)(v13 + 28) == tokenId )
          ++v12;
        if ( v11 >= v10 )
          return v12;
      }
LABEL_19:
      sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42E8F9C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F9C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v12);
  return UserEventPointMaster__GetEventPointTotal(
           MasterData_WarQuestSelectionMaster,
           (int64_t)Instance,
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FDE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FD8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FDC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  int64_t Instance; // x0
  __int64 v24; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemEntity_o *v27; // [xsp+0h] [xbp-20h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v20, v21, v22);
    byte_42E8F2D = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               targetId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_23:
      sub_B5D69C(Instance, v24);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  Instance = UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v27, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v27 )
    goto LABEL_23;
  return v27->fields.num;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  EventMissionMaster_o *v14; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v16; // x19
  int32_t v17; // w20
  unsigned __int64 v18; // x23
  int32_t v19; // w21
  __int64 v20; // x0

  if ( (byte_42E8F65 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F65 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v14 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v14
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v14,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B5D69C(Instance, v13);
    }
    datalist = Instance->fields.datalist;
    v16 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v17 = 0;
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)datalist )
      {
        v20 = sub_B5D6C8(Instance);
        sub_B5D668(v20, 0LL);
      }
      v19 = *((_DWORD *)&v16->fields.lookup + v18);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionClear(v19, v13);
      LODWORD(datalist) = v16->fields.datalist;
      ++v18;
      v17 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v18 < (int)datalist );
    return v17;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  EventMissionMaster_o *v14; // x19
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v16; // x19
  int32_t v17; // w20
  unsigned __int64 v18; // x23
  int32_t v19; // w21
  __int64 v20; // x0

  if ( (byte_42E8F66 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F66 = 1;
  }
  if ( condId )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v14 = (EventMissionMaster_o *)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v14
      || (Instance = (DataManager_o *)EventMissionMaster__getMissionIdListByEvent(
                                        v14,
                                        CondType_TypeInfo->static_fields->EventId,
                                        0LL)) == 0LL )
    {
LABEL_25:
      sub_B5D69C(Instance, v13);
    }
    datalist = Instance->fields.datalist;
    v16 = Instance;
    if ( (int)datalist < 1 )
      return 0;
    v17 = 0;
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)datalist )
      {
        v20 = sub_B5D6C8(Instance);
        sub_B5D668(v20, 0LL);
      }
      v19 = *((_DWORD *)&v16->fields.lookup + v18);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsMissionAchive(v19, v13);
      LODWORD(datalist) = v16->fields.datalist;
      ++v18;
      v17 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v18 < (int)datalist );
    return v17;
  }
}


int32_t __fastcall CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  int v2; // w8

  if ( cond > 8 )
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_32A3B10[v2];
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t Instance; // x0
  __int64 v22; // x1
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserQuestMaster_o *v24; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3
  System_Int32_array *v33; // x24
  __int64 v34; // x8
  int32_t v35; // w21
  unsigned __int64 v36; // x25
  bool v37; // w22
  int32_t v38; // w23
  __int64 v40; // x0

  if ( (byte_42E8F6F & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, groupId, (_DWORD)sameGroupQuestIds, isCheckResetFlag);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8F6F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_WarQuestSelectionMaster)
    || (v24 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 MasterData_WarQuestSelectionMaster,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_B5D560(
          (BattleServantConfConponent_o *)sameGroupQuestIds,
          (System_Int32_array **)QuestIdListByGroupId,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (v33 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_28:
    sub_B5D69C(Instance, v22);
  }
  v34 = *(_QWORD *)&v33->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0;
    v36 = 0LL;
    v37 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
      {
        v40 = sub_B5D6C8(Instance);
        sub_B5D668(v40, 0LL);
      }
      v38 = v33->m_Items[v36 + 1];
      if ( v38 != questId )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsQuestClear_25877652(v38, -1, v37, v32);
        if ( (Instance & 1) != 0 )
        {
          ++v35;
        }
        else
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v24 )
            goto LABEL_28;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v24, Instance, v38, 0LL);
          if ( Instance )
          {
            Instance = UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
              ++v35;
          }
        }
      }
      LODWORD(v34) = v33->max_length;
      if ( (__int64)++v36 >= (int)v34 )
        return v35;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8F73 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F73 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F63 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  entity = 0LL;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
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
    sub_B5D69C(Instance, v13);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8F72 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    byte_42E8F72 = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CondType_c *v12; // x0
  struct CondType_StaticFields **p_static_fields; // x9
  int64_t v14; // x8
  int32_t Num; // w0
  bool v18; // w0
  const MethodInfo *v19; // x4
  CondType_c *v20; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F34 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, condValue, *(_QWORD *)&eventId);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E8F34 = 1;
  }
  sameGroupQuestIds = 0LL;
  v12 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v12 = CondType_TypeInfo;
  }
  p_static_fields = &v12->static_fields;
  v12->static_fields->EventId = eventId;
  if ( condType <= 71 )
  {
    if ( condType > 46 )
    {
      if ( condType == 67 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 71 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
      }
      return 0LL;
    }
    v14 = 1LL;
    switch ( condType )
    {
      case 0:
        return v14;
      case 1:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetOpenTime((const MethodInfo *)v12);
      case 22:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        v18 = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
LABEL_162:
        v14 = v18;
        break;
      case 29:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
      case 30:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          p_static_fields = &CondType_TypeInfo->static_fields;
        }
        return CondType__GetSuperBossDamage(
                 targetId,
                 condValue,
                 (*p_static_fields)->EventId,
                 *(const MethodInfo **)&eventId);
      case 34:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
      case 35:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
      case 40:
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__get_UserId(0LL);
        v20 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__GetQuestClearPhaseCount((int64_t)v20, targetId, -1, 0, v19);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType > 95 )
    {
      v14 = 0LL;
      switch ( condType )
      {
        case 174:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v14;
        case 178:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v12);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          switch ( condType )
          {
            case 136:
              if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v12);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v14;
            case 139:
              if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v12);
              v18 = CondType__TimeLimitRaidDead(eventId, targetId, (const MethodInfo *)condValue);
              goto LABEL_162;
            case 141:
              if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v12);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v12);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v12);
            default:
              if ( condType != 127 )
                return v14;
              if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v12);
              Num = CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return Num;
      }
      return v14;
    }
    if ( condType != 85 )
    {
      if ( condType == 93 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      }
      if ( condType == 95 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v12);
      }
      return 0LL;
    }
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    return CondType__GetEventTotalPoint(eventId, *(const MethodInfo **)&targetId);
  }
  return v14;
}


int64_t __fastcall CondType__GetProgressNumByTargetIds(
        int32_t condType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int64_t result; // x0
  CondType___c_c *v37; // x0
  struct CondType___c_StaticFields *v38; // x8
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct CondType___c_StaticFields *v47; // x0
  BattleServantConfConponent_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v49; // x0
  __int64 *v50; // x8
  CondType___c_c *v51; // x0
  struct CondType___c_StaticFields *v52; // x8
  Il2CppObject *v53; // x21
  struct CondType___c_StaticFields *v54; // x0
  CondType_CountDelegate_o *v55; // x20
  const MethodInfo *v56; // x2
  CondType___c_c *v57; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  Il2CppObject *v59; // x21
  struct CondType___c_StaticFields *v60; // x0

  if ( (byte_42E8F35 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType_CountServantLevelClassNum__, (_DWORD)targetIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CondType_CountServantLevelIdNum__, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CondType_CountDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Aggregate_int__int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__int__int___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__int__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v24, v25, v26);
    sub_B5D5C4(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v27, v28, v29);
    sub_B5D5C4(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v30, v31, v32);
    sub_B5D5C4(&CondType___c_TypeInfo, v33, v34, v35);
    byte_42E8F35 = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v57 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v57 = CondType___c_TypeInfo;
        }
        static_fields = v57->static_fields;
        _9__26_1 = static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          static_fields = CondType___c_TypeInfo->static_fields;
        }
        v59 = (Il2CppObject *)static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B5D694(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v59,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_1__,
          (const MethodInfo_2C37DF8 *)Method_System_Func_int__int__int___ctor__);
        v60 = CondType___c_TypeInfo->static_fields;
        v60->__9__26_1 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v60->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v51 = CondType___c_TypeInfo;
        if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v51 = CondType___c_TypeInfo;
        }
        v52 = v51->static_fields;
        _9__26_1 = v52->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_47;
        if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          v52 = CondType___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v52->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_B5D694(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(
          _9__26_1,
          v53,
          Method_CondType___c__GetProgressNumByTargetIds_b__26_2__,
          (const MethodInfo_2C37DF8 *)Method_System_Func_int__int__int___ctor__);
        v54 = CondType___c_TypeInfo->static_fields;
        v54->__9__26_2 = _9__26_1;
        p__9__26_1 = (BattleServantConfConponent_o *)&v54->__9__26_2;
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
      v37 = CondType___c_TypeInfo;
      if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v37 = CondType___c_TypeInfo;
      }
      v38 = v37->static_fields;
      _9__26_1 = v38->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_47;
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v38 = CondType___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)v38->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_B5D694(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(
        _9__26_1,
        v40,
        Method_CondType___c__GetProgressNumByTargetIds_b__26_0__,
        (const MethodInfo_2C37DF8 *)Method_System_Func_int__int__int___ctor__);
      v47 = CondType___c_TypeInfo->static_fields;
      v47->__9__26_0 = _9__26_1;
      p__9__26_1 = (BattleServantConfConponent_o *)&v47->__9__26_0;
    }
    sub_B5D560(p__9__26_1, (System_Int32_array **)_9__26_1, v41, v42, v43, v44, v45, v46);
LABEL_47:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_1C96B50 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v49 = (CondType_CountDelegate_o *)sub_B5D694(CondType_CountDelegate_TypeInfo);
    v50 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v49 = (CondType_CountDelegate_o *)sub_B5D694(CondType_CountDelegate_TypeInfo);
    v50 = &Method_CondType_CountServantLevelIdNum__;
  }
  v55 = v49;
  CondType_CountDelegate___ctor(v49, 0LL, *v50, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v55, v56);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F5D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


int32_t __fastcall CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CondType_c *v18; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v21; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w24
  QuestGroupMaster_o *v24; // x20
  __int64 v25; // x8
  int64_t v26; // x20
  unsigned __int64 v27; // x25
  int32_t v28; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v31; // x0

  if ( (byte_42E8F75 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E8F75 = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v24 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v24 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v24,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v25 = *(_QWORD *)(Instance + 24);
          v26 = Instance;
          if ( (int)v25 < 1 )
            goto LABEL_31;
          challengeNum = 0;
          v27 = 0LL;
          while ( 1 )
          {
            if ( v27 >= (unsigned int)v25 )
            {
              v31 = sub_B5D6C8(Instance);
              sub_B5D668(v31, 0LL);
            }
            v28 = *(_DWORD *)(v26 + 32 + 4 * v27);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v28, 0LL);
            if ( Instance )
              challengeNum += *(_DWORD *)(Instance + 56);
            LODWORD(v25) = *(_DWORD *)(v26 + 24);
            if ( (__int64)++v27 >= (int)v25 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B5D69C(Instance, v21);
  }
  v18 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v18);
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
  int v2; // w2
  const MethodInfo *v3; // x3
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
  int32_t v17; // w20
  int64_t Instance; // x0
  __int64 v19; // x1
  QuestGroupMaster_o *v20; // x19
  __int64 v21; // x8
  int64_t v22; // x19
  unsigned __int64 v23; // x25
  int32_t v24; // w21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v26; // x3
  __int64 v28; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8F64 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8F64 = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v20 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v20 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v20,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v21 = *(_QWORD *)(Instance + 24);
          v22 = Instance;
          if ( (int)v21 < 1 )
            return 0;
          v17 = 0;
          v23 = 0LL;
          while ( 1 )
          {
            if ( v23 >= (unsigned int)v21 )
            {
              v28 = sub_B5D6C8(Instance);
              sub_B5D668(v28, 0LL);
            }
            v24 = *(_DWORD *)(v22 + 32 + 4 * v23);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v24, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              Instance = CondType__IsQuestClear_25877652(v24, -1, 0, v26);
              v17 += Instance & 1;
            }
            LODWORD(v21) = *(_DWORD *)(v22 + 24);
            if ( (__int64)++v23 >= (int)v21 )
              return v17;
          }
        }
      }
    }
    sub_B5D69C(Instance, v19);
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(targetId, -1, 0, v3);
}


int32_t __fastcall CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CondType_c *v18; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v21; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w20
  QuestGroupMaster_o *v24; // x20
  __int64 v25; // x8
  int64_t v26; // x21
  unsigned __int64 v27; // x25
  int32_t v28; // w22
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v31; // x0

  if ( (byte_42E8F6C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E8F6C = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v24 = (QuestGroupMaster_o *)Instance;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v24 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v24,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v25 = *(_QWORD *)(Instance + 24);
          v26 = Instance;
          if ( (int)v25 < 1 )
            goto LABEL_31;
          ClearNum = 0;
          v27 = 0LL;
          while ( 1 )
          {
            if ( v27 >= (unsigned int)v25 )
            {
              v31 = sub_B5D6C8(Instance);
              sub_B5D668(v31, 0LL);
            }
            v28 = *(_DWORD *)(v26 + 32 + 4 * v27);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, Instance, v28, 0LL);
            if ( Instance )
            {
              Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += Instance;
            }
            LODWORD(v25) = *(_DWORD *)(v26 + 24);
            if ( (__int64)++v27 >= (int)v25 )
              goto LABEL_32;
          }
        }
      }
    }
LABEL_35:
    sub_B5D69C(Instance, v21);
  }
  v18 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v18);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  int64_t v13; // x0
  __int64 v14; // x1
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F3C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, beforeClearQuestId, isCheckResetFlag);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E8F3C = 1;
  }
  entity = 0LL;
  v11 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v13 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_19;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, v13, targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    v13 = (int64_t)entity;
    if ( !entity )
      goto LABEL_19;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  v13 = (int64_t)entity;
  if ( !entity )
LABEL_19:
    sub_B5D69C(v13, v14);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v17; // x20
  int32_t v18; // w22
  unsigned __int64 v19; // x24
  bool v20; // w21
  int32_t v21; // w23
  __int64 v23; // x0

  if ( (byte_42E8F71 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, groupId, isCheckResetFlag, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8F71 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  datalist = Instance->fields.datalist;
  v17 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v18 = 0;
  v19 = 0LL;
  v20 = isCheckResetFlag;
  do
  {
    if ( v19 >= (unsigned int)datalist )
    {
      v23 = sub_B5D6C8(Instance);
      sub_B5D668(v23, 0LL);
    }
    v21 = *((_DWORD *)&v17->fields.lookup + v19);
    if ( v21 != questId )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsQuestClear_25877652(v21, -1, v20, v15);
      v18 += (unsigned __int8)Instance & 1;
    }
    LODWORD(datalist) = v17->fields.datalist;
    ++v19;
  }
  while ( (__int64)v19 < (int)datalist );
  return v18;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v18; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_42E8F74 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F74 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v18 = (int64_t)Instance;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
    sub_B5D69C(Instance, v16);
  Entity = UserEventRaidMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             v18,
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
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v16; // x21
  unsigned int v17; // w23
  int32_t v18; // w22
  EventRaidEntity_o *v19; // x24
  __int64 v21; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = condValue;
  if ( (byte_42E8F2C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F2C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v4, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = (TotalEventRaidMaster_o *)Instance;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v21 = sub_B5D6C8(Instance);
        sub_B5D668(v21, 0LL);
      }
      v19 = EventRaidEntityArray->m_Items[v17];
      if ( !v19 || !v16 )
        break;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v16, &entity, targetId, v19->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v19->fields.maxHp )
          ++v18;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        return v18;
    }
LABEL_20:
    sub_B5D69C(Instance, v13);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_42E8FC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8FC6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t __fastcall CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8F4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8F4C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8F9B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8F9B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v17; // x19
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  __int64 v20; // x22
  int32_t v21; // w20
  ShopGroupEntity_o *v22; // x8
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8F94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F94 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v17 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v17->max_length;
      if ( max_length >= 1 )
      {
        v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v20 = 0LL;
        v21 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v20 >= max_length )
          {
            v24 = sub_B5D6C8(Instance);
            sub_B5D668(v24, 0LL);
          }
          v22 = v17->m_Items[v20];
          if ( !v22 || !v19 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        v19,
                                        &entity,
                                        v22->fields.shopId,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v21 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v17->max_length;
          if ( (int)++v20 >= max_length )
            return v21;
        }
LABEL_22:
        sub_B5D69C(Instance, v15);
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

  if ( (byte_42E8F76 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, eventId, method);
    byte_42E8F76 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v18; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_42E8F78 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F78 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    v18 = (int64_t)Instance;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_WarQuestSelectionMaster )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v18,
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
    sub_B5D69C(Instance, v16);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserSuperBossMaster___, bossId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F77 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B5D69C(Instance, v13);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E8F9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E8F9E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL);
}


int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42E8F6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F6A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_15:
    sub_B5D69C(Instance, v16);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v19 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v20 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v19;
    *(_QWORD *)&v22.fields.fakeValue = v20;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8F67 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F67 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


int32_t __fastcall CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_42E8F68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F68 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_42E8F69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F69 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Instance, v13);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  CondType_c *v10; // x0
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CondType_c *v20; // x8
  System_Int32_array **v21; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_42E8F24 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E8F24 = 1;
  }
  v10 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v10 = CondType_TypeInfo;
  }
  if ( !v10->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v20 = CondType_TypeInfo;
    v21 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v20 = CondType_TypeInfo;
    }
    static_fields = v20->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v21;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->uQuestMst, v21, v14, v15, v16, v17, v18, v19);
    v10 = CondType_TypeInfo;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = CondType_TypeInfo;
  }
  return v10->static_fields->uQuestMst;
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E8FA6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8FA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8F96 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F96 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_42E8FE3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4, v5, v6);
    byte_42E8FE3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v9 )
    sub_B5D69C(0LL, v10);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v9, 0LL);
}


bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  DataManager_o *v18; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v21; // x22
  unsigned __int64 v22; // x24
  int32_t v23; // w25
  int32_t v24; // w21
  int32_t v25; // w23
  __int64 v27; // x0

  if ( (byte_42E8FB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, val, isWin, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E8FB1 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                15,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v18 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v18->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v21 = MasterData_WarQuestSelectionMaster;
      v22 = 0LL;
      v23 = 0;
      if ( isWin )
        v24 = 128;
      else
        v24 = 256;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)datalist )
        {
          v27 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
          sub_B5D668(v27, 0LL);
        }
        v25 = *((_DWORD *)&v18->fields.lookup + v22);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v21 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v21,
                                                                    (int64_t)Instance,
                                                                    v25,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v24,
                                                                      0LL);
          v23 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v23 >= val )
          return 1;
        LODWORD(datalist) = v18->fields.datalist;
        if ( (__int64)++v22 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B5D69C(Instance, v17);
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
  bool v5; // w19
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x21
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v26; // x23
  unsigned __int64 v27; // x25
  int32_t v28; // w26
  int32_t v29; // w22
  int32_t v30; // w24
  __int64 v32; // x0

  v5 = isBelow;
  if ( (byte_42E8FB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int___, val, isWin, isBelow);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8FB0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_31;
  v23 = Instance;
  if ( !Instance->fields.datalist )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_1AC82C0 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B5D69C(Instance, v22);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  datalist = v23->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v26 = MasterData_WarQuestSelectionMaster;
    v27 = 0LL;
    v28 = 0;
    if ( isWin )
      v29 = 128;
    else
      v29 = 256;
    do
    {
      if ( v27 >= (unsigned int)datalist )
      {
        v32 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
        sub_B5D668(v32, 0LL);
      }
      v30 = *((_DWORD *)&v23->fields.lookup + v27);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v26 )
        goto LABEL_31;
      MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                  v26,
                                                                  (int64_t)Instance,
                                                                  v30,
                                                                  0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                    (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                    v29,
                                                                    0LL);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
          ++v28;
        else
          v28 = 0;
      }
      else
      {
        v28 = 0;
      }
      if ( v5 )
      {
        if ( v28 > val )
          return 0;
      }
      else if ( v28 >= val )
      {
        return 1;
      }
      LODWORD(datalist) = v23->fields.datalist;
      ++v27;
    }
    while ( (__int64)v27 < (int)datalist );
  }
  return v5;
}


bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  DataManager_o *v18; // x20
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct DataMasterBase_array *datalist; // x8
  UserQuestMaster_o *v21; // x22
  unsigned __int64 v22; // x24
  int32_t v23; // w25
  int32_t v24; // w21
  int32_t v25; // w23
  __int64 v27; // x0

  if ( (byte_42E8FAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, val, isWin, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E8FAF = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v18 = Instance;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    datalist = v18->fields.datalist;
    if ( (int)datalist >= 1 )
    {
      v21 = MasterData_WarQuestSelectionMaster;
      v22 = 0LL;
      v23 = 0;
      if ( isWin )
        v24 = 128;
      else
        v24 = 256;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)datalist )
        {
          v27 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
          sub_B5D668(v27, 0LL);
        }
        v25 = *((_DWORD *)&v18->fields.lookup + v22);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
        if ( !v21 )
          break;
        MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                                    v21,
                                                                    (int64_t)Instance,
                                                                    v25,
                                                                    0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                                      (UserQuestEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                      v24,
                                                                      0LL);
          v23 += (unsigned __int8)MasterData_WarQuestSelectionMaster & 1;
        }
        if ( v23 >= val )
          return 1;
        LODWORD(datalist) = v18->fields.datalist;
        if ( (__int64)++v22 >= (int)datalist )
          return 0;
      }
LABEL_24:
      sub_B5D69C(Instance, v17);
    }
  }
  return 0;
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8FAD & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, value, (_DWORD)method, v3);
    byte_42E8FAD = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E8FAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, kindNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8FAC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FAB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0LL);
}


bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8FC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, giftId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8FC2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
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
    sub_B5D69C(Instance, v16);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2
  int64_t UserId; // x20

  if ( (byte_42E8FA3 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8FA3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_25937492(UserId, commandCodeId, v8);
}


bool __fastcall CondType__IsCommandCodeGet_25937492(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8FA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8FA4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8FA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8FA8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8FD9 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetCount, (_DWORD)method, v3);
    byte_42E8FD9 = 1;
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
  __int64 v3; // x3

  if ( (byte_42E8FDD & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetFriendShipRank, (_DWORD)method, v3);
    byte_42E8FDD = 1;
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
  __int64 v3; // x3

  if ( (byte_42E8FD7 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetLevel, (_DWORD)method, v3);
    byte_42E8FD7 = 1;
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
  __int64 v3; // x3

  if ( (byte_42E8FDB & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetSkillLevel, (_DWORD)method, v3);
    byte_42E8FDB = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8FD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_HeelPortraitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E8FD5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_WarQuestSelectionMaster )
          return HeelPortraitMaster__GetCompleteNum(
                   (HeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                   eventId,
                   0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_16:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return 0;
}


bool __fastcall CondType__IsCompleteUserGameCommonValue(
        int32_t no,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v15; // x1
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8FE4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGameCommonMaster___, num, checkType, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    byte_42E8FE4 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGameCommonMaster___);
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
    sub_B5D69C(UserId, v15);
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
  __int64 v3; // x3
  int64_t Time_26076684; // x0
  uint64_t dateData; // [xsp+8h] [xbp-18h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_42E8FC8 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, condNum, (_DWORD)method, v3);
    byte_42E8FC8 = 1;
  }
  dateData = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v9.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Time_26076684 = NetworkManager__getTime_26076684(v9, 0LL);
  dateData = NetworkManager__getDateTime_26077468(Time_26076684 - 3600 * condNum, 0LL).fields.dateData;
  v10.fields.dateData = (uint64_t)&dateData;
  return ((1 << (System_DateTime__get_DayOfWeek(v10, 0LL) + 1)) & condId) != 0;
}


bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, costumeId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F82 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B5D69C(Instance, v13);
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
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_TotalEventRaidEntity__o *EntityListFromDay; // x23
  __int64 v35; // x24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  float v38; // s0
  int64_t v39; // x22
  CondType_c *v40; // x0
  float v41; // s1
  bool v42; // cc
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  int64_t maxHpSum; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_42E8FE0 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, num, checkType, isRate);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E8FE0 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = TotalEventRaidMaster__TryGetEntityListFromDay(
                              (TotalEventRaidMaster_o *)Instance,
                              day,
                              &maxHpSum,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_B5D69C(Instance, v33);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromDay,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v35 = 0LL;
  for ( i = v45; ; v35 += (__int64)i.fields.current[1].monitor )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v36 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v36, v37);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v38 = 0.0;
    if ( v35 >= 1 )
    {
      v39 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v40 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v40 = CondType_TypeInfo;
        }
        v38 = (float)((float)v35 / (float)v39) * (float)v40->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v41 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v42 = v38 < v41;
        if ( isIncludingEquals )
          return !v42;
        return !v42;
      }
      return v38 == v41;
    }
    if ( isIncludingEquals )
      return v38 <= v41;
    else
      return v38 < v41;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v42 = v35 < num;
        if ( isIncludingEquals )
          return !v42;
        return !v42;
      }
      return v35 == num;
    }
    if ( isIncludingEquals )
      return v35 <= num;
    else
      return v35 < num;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v23; // x25
  int v24; // w28
  __int64 v25; // x27
  __int64 v26; // x26
  EventRaidEntity_o *v27; // x19
  float v28; // s0
  CondType_c *v29; // x0
  float v30; // s1
  bool v31; // cc
  bool v34; // cc
  __int64 v35; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8FE1 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, num, checkType, isRate);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E8FE1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_52:
    sub_B5D69C(Instance, v20);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v26 = 0LL;
    v25 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v28 = 0.0;
      if ( v25 >= 1 && v26 >= 1 )
      {
        v29 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v29 = CondType_TypeInfo;
        }
        v28 = (float)((float)v26 / (float)v25) * (float)v29->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v30 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          if ( isIncludingEquals )
          {
            v31 = v28 < v30;
            return !v31;
          }
          v34 = v28 <= v30;
          return !v34;
        }
        return v28 == v30;
      }
      if ( isIncludingEquals )
        return v28 <= v30;
      else
        return v28 < v30;
    }
  }
  else
  {
    v23 = (TotalEventRaidMaster_o *)Instance;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)max_length )
      {
        v35 = sub_B5D6C8(Instance);
        sub_B5D668(v35, 0LL);
      }
      v27 = EventRaidEntityArrayFromEventId->m_Items[v24];
      if ( !v27 || !v23 )
        goto LABEL_52;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v23, &entity, eventId, v27->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_52;
        v25 += v27->fields.maxHp;
        v26 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v24;
    }
    while ( v24 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      if ( isIncludingEquals )
      {
        v31 = v26 < num;
        return !v31;
      }
      v34 = v26 <= num;
      return !v34;
    }
    return v26 == num;
  }
  if ( isIncludingEquals )
    return v26 <= num;
  else
    return v26 < num;
}


bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v18; // x19
  QuestPhaseMaster_c *v19; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v21; // x19

  if ( (byte_42E8FA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, phase, (_DWORD)method, v3);
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42E8FA0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v18 = Entity;
    v19 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v19 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v18, v19->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v21 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[11].fields.context;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v21, 0LL);
      }
LABEL_14:
      sub_B5D69C(Instance, v16);
    }
  }
  return 0;
}


bool __fastcall CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *UserId; // x0
  int64_t v10; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v12; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v14; // x3
  UserQuestEntity_o *v15; // x21
  bool IsQuestClear_25877652; // w8
  int64_t updatedAt; // x20
  int64_t Time_26076684; // x20
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_42E8FE5 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, elapsedTime, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E8FE5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v10 = (int64_t)UserId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_B5D69C(0LL, v12);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v10, questId, 0LL);
  if ( EntityFromId )
  {
    v15 = EntityFromId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25877652 = CondType__IsQuestClear_25877652(questId, -1, 0, v14);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_25877652 )
    {
      updatedAt = v15->fields.updatedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v20.fields.dateData = NetworkManager__getServerDateTime_26077756(updatedAt, 0LL).fields.dateData;
      Time_26076684 = NetworkManager__getTime_26076684(v20, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_26076684 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Time; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E8FA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8FA1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  System_Int32_array *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  unsigned __int64 v8; // x22
  int32_t v9; // w23
  int32_t v10; // w21
  __int64 v11; // x0

  v5 = targetIds;
  if ( (byte_42E8FBC & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B5D5C4(&CondType_TypeInfo, targetNum, (_DWORD)method, v3);
    byte_42E8FBC = 1;
  }
  if ( !v5 )
    sub_B5D69C(targetIds, *(_QWORD *)&targetNum);
  v6 = *(_QWORD *)&v5->max_length;
  v7 = 0LL;
  if ( v6 && (int)v6 >= 1 )
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v11 = sub_B5D6C8(v7);
        sub_B5D668(v11, 0LL);
      }
      v10 = v5->m_Items[v8 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType__CountEquipRarityLevelNum(v10, *(const MethodInfo **)&targetNum);
      v9 += v7;
      if ( v9 >= targetNum )
        break;
      LODWORD(v6) = v5->max_length;
      if ( (__int64)++v8 >= (int)v6 )
      {
        LOBYTE(v7) = 0;
        return v7;
      }
    }
    LOBYTE(v7) = 1;
  }
  return v7;
}


bool __fastcall CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  EventEntity_o *Entity; // x0

  if ( (byte_42E8F55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F55 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen(Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F86 = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_B5D69C(Instance, v15);
  return entity->fields.targetId <= (__int64)Instance && (__int64)Instance <= *(_QWORD *)&entity->fields.eventId;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F85 = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_15:
      sub_B5D69C(Instance, v15);
    if ( (__int64)Instance < *(_QWORD *)&entity->fields.eventId )
      return 0;
  }
  return 1;
}


bool __fastcall CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CondType_c *v12; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E8F87 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, rate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F87 = 1;
  }
  v12 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v12 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v12->static_fields->EVENT_RACE_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CondType_c *v15; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1

  if ( (byte_42E8F88 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, rank, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F88 = 1;
  }
  v15 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v15 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v15->static_fields->EVENT_RACE_DEVIDER;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v19);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  EventMissionGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionGroupEntity__o *EntityList; // x0
  int32_t i; // w21
  int32_t klass_high; // w20
  const MethodInfo *v29; // x1
  _BOOL8 v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8FD4 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v21, v22, v23);
    byte_42E8FD4 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v25);
  EntityList = EventMissionGroupMaster__GetEntityList(Master_WarQuestSelectionMaster, condId, 0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v29) )
    {
      v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v30 )
        break;
      if ( !v32.fields.current )
        sub_B5D69C(v30, v29);
      klass_high = HIDWORD(v32.fields.current[1].klass);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CondType_c *v12; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E8F7E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F7E = 1;
  }
  v12 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v12 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v12->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CondType_c *v12; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E8F7D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F7D = 1;
  }
  v12 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v12 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v12->static_fields->EVENT_POINT_DEVIDER;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
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
  CondType___c__DisplayClass115_0_o *v28; // x22
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, termId, groupId, method);
    sub_B5D5C4(&CondType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__, v22, v23, v24);
    sub_B5D5C4(&CondType___c__DisplayClass115_0_TypeInfo, v25, v26, v27);
    byte_42E8F8D = 1;
  }
  goalTime = 0LL;
  v28 = (CondType___c__DisplayClass115_0_o *)sub_B5D694(CondType___c__DisplayClass115_0_TypeInfo);
  CondType___c__DisplayClass115_0___ctor(v28, 0LL);
  if ( !v28
    || (v28->fields.groupId = groupId,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v30);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v32 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v32,
    (Il2CppObject *)v28,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
  v34 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v34 < 1 )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v34, v33);
  }
}


bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F8B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_12;
    v17 = *(&entity->fields.id + 1);
  }
  else
  {
    v17 = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_B5D69C(Instance, v16);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, v17, 0LL) == groupId;
}


bool __fastcall CondType__IsEventRaceRankedScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v16; // x2
  int32_t flagId; // w20

  if ( (byte_42E8F8E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, termId, rank, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventScriptMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8F8E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
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
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v16);
  }
  return (char)RaceResultEntity;
}


bool __fastcall CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, flagId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F8C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
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
    sub_B5D69C(Instance, v13);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w19
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Instance; // x0
  __int64 v16; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t v18; // w21
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = flagId;
  if ( (byte_42E8F99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventStatusMaster___, (_BYTE)flagId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F99 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
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
  v18 = *(_DWORD *)(Instance + 32);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v18, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return (entity->fields.status & (1 << v4)) != 0;
LABEL_16:
    sub_B5D69C(Instance, v16);
  }
  return 0;
}


bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UserEventMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8FCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventMaster___, bitNum, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E8FCB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventMaster___);
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
    sub_B5D69C(UserId, v14);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0LL);
}


bool __fastcall CondType__IsEventTypeStartTimeToEndDate(
        int32_t eventType,
        int32_t overWriteTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *lookup; // x19
  int64_t v30; // x21
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v34; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x25
  __int64 v45; // x9
  int64_t v46; // x26
  int32_t Year; // w26
  int32_t Month; // w27
  int32_t Day; // w3
  uint64_t v50; // x25
  bool v51; // w20
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  int v57; // [xsp+8h] [xbp-78h]
  int v58; // [xsp+Ch] [xbp-74h]
  int v59; // [xsp+10h] [xbp-70h]
  System_DateTime_o dateTime; // [xsp+20h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-58h] BYREF
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x0.8
  System_DateTime_o v64; // 0:x0.8
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8

  if ( (byte_42E8FC1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      overWriteTime,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v6, v7, v8);
    sub_B5D5C4(&EventEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E8FC1 = 1;
  }
  dateTime.fields.dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
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
    sub_B5D69C(Instance, v28);
  v30 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 lookup,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v31);
  v58 = overWriteTime / 100 % 100;
  v57 = overWriteTime % 100;
  v34 = overWriteTime / 10000;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_22:
      v42 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v44 = v43;
    if ( v43 )
    {
      v45 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v45
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v45 - 8) != EventEntity_TypeInfo )
      {
        Instance = (DataManager_o *)sub_B5D990(v43);
        goto LABEL_48;
      }
      if ( *(_DWORD *)(v43 + 24) == eventType )
      {
        v46 = *(_QWORD *)(v43 + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getDateTime_26077468(v46, 0LL).fields.dateData;
        v62.fields.dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v62, 0LL);
        v63.fields.dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v63, 0LL);
        v64.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v64, 0LL);
        v65.fields.dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_15565368(v65, Year, Month, Day, v34, v58, v57, 0LL);
        if ( *(_QWORD *)(v44 + 88) <= v30 )
        {
          v50 = dateTime.fields.dateData;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v66.fields.dateData = v50;
          if ( v30 <= NetworkManager__getTime_26076684(v66, 0LL) )
          {
            v59 = 157;
            v51 = 1;
            goto LABEL_38;
          }
        }
      }
    }
  }
  v51 = 0;
  v59 = 155;
LABEL_38:
  v52 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_42:
    v55 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  if ( v59 == 155 )
    return 0;
  return v51;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *ExchangeSvtCampaign; // x0
  char i; // w22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8FDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v20, v21, v22);
    byte_42E8FDF = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  ExchangeSvtCampaign = EventCampaignMaster__GetExchangeSvtCampaign(Master_WarQuestSelectionMaster, 0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ExchangeSvtCampaign,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= LODWORD(v30.fields.current[1].klass) == targetId )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v27 )
      break;
    if ( !v30.fields.current )
      sub_B5D69C(v27, v28);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(
                                  (UserExchangeSvtMaster_o *)Master_WarQuestSelectionMaster,
                                  targetId,
                                  0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8F2E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, (_DWORD)method, v3);
    byte_42E8F2E = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  int32_t Value_28723684; // w0

  if ( (byte_42E8FC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8463/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v8, v9, v10);
    byte_42E8FC9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  Value_28723684 = ConstantMaster__GetValue_28723684(
                     Master_WarQuestSelectionMaster,
                     (System_String_o *)StringLiteral_8463/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_28723684 == targetId && Value_28723684 != 0;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F62 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


bool __fastcall CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
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
  int64_t Instance; // x0
  __int64 v21; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8F60 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                          condId,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
      sub_B5D69C(Instance, v21);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F61 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserEventMissionCondDetailMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_42E8F5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F5F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               Instance,
                                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_11:
    sub_B5D69C(Instance, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E8FA5 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8FA5 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0LL);
  }
}


bool __fastcall CondType__IsNotEventRaceQuestOrNotAllGroupGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  bool v13; // w22
  CondType_c *v14; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F89 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventTerm, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8F89 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v13 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v4) )
  {
    v14 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v14 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v14->static_fields->EVENT_RACE_DEVIDER;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v17);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0LL);
  }
  return v13;
}


bool __fastcall CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x5
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
  bool v19; // w21
  CondType_c *v20; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int32_t Value; // w20
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  EventRaceMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F8A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventTerm, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceMaster___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, v16, v17, v18);
    byte_42E8F8A = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v19 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v4) )
  {
    v20 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v20 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v20->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11135/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (EventRaceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_17:
      sub_B5D69C(Instance, v24);
    return EventRaceMaster__GetGoaledTeamCount(
             MasterData_WarQuestSelectionMaster,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0LL) < Value;
  }
  return v19;
}


bool __fastcall CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  int64_t Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x19
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v18; // x8
  __int64 v20; // x0

  if ( (byte_42E8F79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F79 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_17;
  v16 = Instance;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*(_DWORD *)(v16 + 24) )
      {
        v20 = sub_B5D6C8(Instance);
        sub_B5D668(v20, 0LL);
      }
      v18 = *(_QWORD *)(v16 + 32);
      if ( v18 )
      {
        if ( MasterData_WarQuestSelectionMaster )
        {
          Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                Instance,
                                *(_DWORD *)(v18 + 20),
                                0LL);
          if ( Instance )
            return *(_DWORD *)(Instance + 28) > 0;
        }
      }
    }
LABEL_17:
    sub_B5D69C(Instance, v15);
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
  int v8; // w23

  v8 = condVal;
  if ( (byte_42E8F6D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, groupId, condVal, sameGroupQuestIds);
    byte_42E8F6D = 1;
  }
  if ( v8 <= 1 )
    v8 = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(
           questId,
           groupId,
           sameGroupQuestIds,
           isCheckResetFlag,
           (const MethodInfo *)isCheckResetFlag) < v8;
}


bool __fastcall CondType__IsNotQuestGroupClear_25935996(int32_t targetId, int32_t condValue, const MethodInfo *method)
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
  int32_t v14; // w21
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *MasterData_WarQuestSelectionMaster; // x19
  const MethodInfo *v18; // x4
  int32_t v19; // w19
  int32_t shortCutBannerId; // w20
  System_Int32_array *v22; // [xsp+0h] [xbp-30h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-14h] BYREF

  v24 = targetId;
  if ( (byte_42E8F6E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F6E = 1;
  }
  entity = 0LL;
  v22 = 0LL;
  if ( condValue <= 1 )
    v14 = 1;
  else
    v14 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                MasterData_WarQuestSelectionMaster,
                                &entity,
                                (System_String_o *)Instance,
                                (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B5D69C(Instance, v16);
  if ( entity->fields.questId != 26 )
    return 0;
  v19 = v24;
  shortCutBannerId = entity->fields.shortCutBannerId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v19, shortCutBannerId, &v22, 1, v18) >= v14;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E8F7A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F7A = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v13);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  UserShopMaster_o *v14; // x20
  unsigned __int64 v15; // x22
  int32_t v16; // w21
  __int64 v18; // x0

  if ( (byte_42E8F7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F7B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___),
        !values) )
  {
LABEL_17:
    sub_B5D69C(Instance, v12);
  }
  v13 = *(_QWORD *)&values->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (UserShopMaster_o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v13 )
    {
      v18 = sub_B5D6C8(Instance);
      sub_B5D668(v18, 0LL);
    }
    v16 = values->m_Items[v15 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v14 )
      goto LABEL_17;
    Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v14, Instance, v16, 0LL);
    if ( !Instance )
      goto LABEL_17;
    if ( !*(_DWORD *)(Instance + 28) )
      return 1;
    LODWORD(v13) = values->max_length;
    if ( (__int64)++v15 >= (int)v13 )
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  char IsQuestClear; // w0
  int32_t v32; // w2
  bool v33; // w2
  int32_t v34; // w0
  int32_t v35; // w1
  bool v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  CondType_c *v39; // x0
  UserQuestMaster_o *v40; // x21
  int64_t Instance; // x0
  __int64 v42; // x1
  int32_t ClearCountsFromId; // w0
  CondType_c *v44; // x0
  UserQuestMaster_o *v45; // x21
  bool v46; // zf
  bool IsPurchaseShop; // w0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t EventPointNoGroup; // x0
  bool v50; // w2
  int32_t v51; // w0
  int32_t v52; // w1
  UserEventPointMaster_o *v53; // x21
  int64_t Point; // x0
  UserEventMaster_o *v55; // x21
  bool v56; // cc
  UserEventMaster_o *v57; // x21
  bool v58; // cc
  bool v59; // w2
  int32_t v60; // w0
  int32_t v61; // w1
  bool v62; // w2
  int32_t v63; // w0
  int32_t v64; // w1
  bool v65; // w2
  int32_t v66; // w0
  int32_t v67; // w1
  UserEventPointMaster_o *v68; // x21
  int32_t v69; // w0
  int32_t v70; // w1
  bool v71; // w2
  int32_t ChallengeCountsFromId; // w0
  UserEventPointMaster_o *v73; // x21
  bool v74; // w3
  CondType_c *v75; // x0
  UserQuestMaster_o *v76; // x21
  int32_t v77; // w0
  int32_t v78; // w2
  UserEventMaster_o *v79; // x21
  __int64 v80; // x8
  CondType_c *v81; // x0
  int32_t v82; // w2
  bool v83; // w3
  bool v84; // w4
  int32_t v85; // w0
  int32_t v86; // w1
  bool v87; // w3
  bool v88; // w4
  int32_t v89; // w0
  int32_t v90; // w1
  int32_t v91; // w2
  int32_t v92; // w2
  int32_t v93; // w0
  int32_t v94; // w1
  int32_t v95; // w0
  int32_t v96; // w1
  bool v97; // w3
  int32_t v98; // w1
  int32_t v99; // w2
  CondType_c *v100; // x0
  const MethodInfo *v101; // x5
  int64_t v102; // x21
  const MethodInfo *v103; // x5
  int64_t v104; // x21
  UserEventMaster_o *v105; // x21
  UserEventMaster_o *v106; // x21
  CondType_c *v107; // x0
  CondType_c *v108; // x0
  UserQuestMaster_o *v109; // x21
  const MethodInfo *v110; // x5
  int64_t UserId; // x22
  CondType_c *v112; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F25 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, condValue, isCollection);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    byte_42E8F25 = 1;
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
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v110);
      return IsQuestClear & 1;
    case 2:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_25875100(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v32 = 1;
      goto LABEL_731;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v33 = 1;
      v34 = targetId;
      v35 = condValue;
      goto LABEL_129;
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
      v50 = 1;
      v51 = targetId;
      v52 = condValue;
      goto LABEL_109;
    case 28:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v51 = targetId;
      v52 = condValue;
      v50 = 0;
LABEL_109:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v51, v52, v50, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v112 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v112);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_807;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, Instance, targetId, 0LL);
      goto LABEL_789;
    case 32:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v36 = 1;
      v37 = targetId;
      v38 = condValue;
      goto LABEL_761;
    case 35:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 36:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v62 = 1;
      v63 = targetId;
      v64 = condValue;
      goto LABEL_580;
    case 37:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 38:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 40:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 42:
      v39 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v40 = CondType__GetUserQuestMaster((const MethodInfo *)v39);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v40 )
        goto LABEL_807;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v40, Instance, targetId, 0LL);
      goto LABEL_52;
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
        goto LABEL_807;
      v77 = UserQuestMaster__getChallengeCountsFromId(v76, Instance, targetId, 0LL);
      goto LABEL_745;
    case 44:
      v44 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v45 = CondType__GetUserQuestMaster((const MethodInfo *)v44);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v45 )
        goto LABEL_807;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v45, Instance, targetId, 0LL);
LABEL_52:
      v46 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_679;
    case 45:
      v108 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v109 = CondType__GetUserQuestMaster((const MethodInfo *)v108);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v109 )
        goto LABEL_807;
      v77 = UserQuestMaster__getClearCountsFromId(v109, Instance, targetId, 0LL);
LABEL_745:
      v58 = v77 <= (int)condValue;
      goto LABEL_746;
    case 46:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v104 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v104, targetId, condValue, -1, 0, v103);
      return IsQuestClear & 1;
    case 47:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v102 = NetworkManager__get_UserId(0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v102, targetId, condValue, -1, 0, v101);
      goto LABEL_805;
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
      goto LABEL_805;
    case 53:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
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
      IsQuestClear = CondType__IsQuestClear_25877652(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v37 = targetId;
      v38 = condValue;
      v36 = 0;
LABEL_761:
      IsQuestClear = CondType__IsQuestGroupClear(0, v37, v38, v36, method);
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
      goto LABEL_642;
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
      goto LABEL_805;
    case 73:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 74:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v63 = targetId;
      v64 = condValue;
      v62 = 0;
LABEL_580:
      IsPurchaseShop = CondType__IsQuestClear_25877652(v63, v64, v62, (const MethodInfo *)isCollection);
      goto LABEL_805;
    case 75:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v98 = targetId;
      v99 = condValue;
      v97 = 0;
      goto LABEL_585;
    case 76:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 77:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 78:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 79:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_807;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_642;
    case 84:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v53 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v53 )
        goto LABEL_807;
      Point = UserEventPointMaster__GetPoint(v53, Instance, targetId / 100, targetId, 0LL);
      goto LABEL_254;
    case 85:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v68 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v68 )
        goto LABEL_807;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(v68, Instance, targetId, -1, 0LL);
LABEL_642:
      v56 = EventPointNoGroup < condValue;
      goto LABEL_790;
    case 86:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v73 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v73 )
        goto LABEL_807;
      Point = UserEventPointMaster__GetEventPointTotal(v73, Instance, targetId, -1, 0LL);
LABEL_254:
      v58 = Point <= condValue;
      goto LABEL_746;
    case 87:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v55 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v55 )
        goto LABEL_807;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v55, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_807;
      v56 = *(int *)(Instance + 28) < condValue;
      goto LABEL_790;
    case 88:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v57 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v57 )
        goto LABEL_807;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v57, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_807;
      v58 = *(int *)(Instance + 28) <= condValue;
LABEL_746:
      IsQuestClear = v58;
      return IsQuestClear & 1;
    case 89:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v106 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v106 )
        goto LABEL_807;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v106, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_807;
      v80 = *(int *)(Instance + 32);
      goto LABEL_678;
    case 90:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 93:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v107 = CondType_TypeInfo;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v107);
      return IsQuestClear & 1;
    case 96:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 97:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v34 = targetId;
      v35 = condValue;
      v33 = 0;
LABEL_129:
      IsQuestClear = CondType__IsServantFriendship(v34, v35, v33, (const MethodInfo *)isCollection);
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
      goto LABEL_805;
    case 103:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = targetId;
      v96 = condValue;
      v32 = 0;
      goto LABEL_732;
    case 105:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v32 = 2;
LABEL_731:
      v95 = targetId;
      v96 = condValue;
LABEL_732:
      IsQuestClear = CondType__IsServantLimit_25875276(v95, v96, v32, (const MethodInfo *)isCollection);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v79 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v79 )
        goto LABEL_807;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v79, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_807;
      v80 = *(int *)(Instance + 28);
LABEL_678:
      v46 = v80 == condValue;
LABEL_679:
      IsQuestClear = v46;
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
      goto LABEL_805;
    case 121:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 123:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_807;
      v105 = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v105 )
        goto LABEL_807;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely(v105, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_807;
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
      v71 = 1;
      v69 = targetId;
      v70 = condValue;
      goto LABEL_618;
    case 129:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v69 = targetId;
      v70 = condValue;
      v71 = 0;
LABEL_618:
      IsQuestClear = CondType__IsBattleLineReusltCount(v69, v70, v71, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = 1;
      v60 = targetId;
      v61 = condValue;
      goto LABEL_259;
    case 131:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetId;
      v61 = condValue;
      v59 = 0;
LABEL_259:
      v74 = 0;
      goto LABEL_702;
    case 132:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = 1;
      v74 = 1;
      v60 = targetId;
      v61 = condValue;
      goto LABEL_702;
    case 133:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v74 = 1;
      v60 = targetId;
      v61 = condValue;
      v59 = 0;
LABEL_702:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(v60, v61, v59, v74, method);
      return IsQuestClear & 1;
    case 134:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = 1;
      v66 = targetId;
      v67 = condValue;
      goto LABEL_452;
    case 135:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 = targetId;
      v67 = condValue;
      v65 = 0;
LABEL_452:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v66, v67, v65, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
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
      goto LABEL_789;
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
      goto LABEL_805;
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
      goto LABEL_805;
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
      goto LABEL_789;
    case 162:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_807;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_789;
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
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
LABEL_807:
        sub_B5D69C(Instance, v42);
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_789;
    case 168:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 170:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 172:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_805;
    case 174:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_789;
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
      goto LABEL_789;
    case 179:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 180:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
    case 181:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
    case 182:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
    case 183:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
    case 184:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_789;
    case 185:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_805;
    case 187:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
LABEL_789:
      v56 = ChallengeCountsFromId < (int)condValue;
LABEL_790:
      IsQuestClear = !v56;
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
      v78 = 1;
      goto LABEL_570;
    case 194:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = 2;
LABEL_570:
      v84 = 1;
      v85 = targetId;
      v86 = condValue;
      v83 = 0;
      goto LABEL_571;
    case 195:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 1;
      goto LABEL_485;
    case 196:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 2;
LABEL_485:
      v88 = 1;
      v89 = targetId;
      v90 = condValue;
      v87 = 0;
      goto LABEL_496;
    case 197:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = 1;
      goto LABEL_388;
    case 198:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = 2;
LABEL_388:
      v83 = 1;
      v84 = 1;
      v85 = targetId;
      v86 = condValue;
      goto LABEL_571;
    case 199:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = 2;
      goto LABEL_490;
    case 200:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = 1;
LABEL_490:
      v83 = 1;
      v85 = targetId;
      v86 = condValue;
      v84 = 0;
LABEL_571:
      IsQuestClear = CondType__IsDeadRaidDay(v85, v86, v78, v83, v84, v5);
      return IsQuestClear & 1;
    case 201:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 1;
      goto LABEL_393;
    case 202:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 2;
LABEL_393:
      v87 = 1;
      v88 = 1;
      v89 = targetId;
      v90 = condValue;
      goto LABEL_496;
    case 203:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 2;
      goto LABEL_495;
    case 204:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = 1;
LABEL_495:
      v87 = 1;
      v89 = targetId;
      v90 = condValue;
      v88 = 0;
LABEL_496:
      IsQuestClear = CondType__IsDeadRaidGroup(v89, v90, v82, v87, v88, v5);
      return IsQuestClear & 1;
    case 205:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v97 = 1;
      v98 = targetId;
      v99 = condValue;
LABEL_585:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v98, v99, v97, method);
      goto LABEL_805;
    case 206:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v91 = 1;
      goto LABEL_505;
    case 207:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v91 = 2;
LABEL_505:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v91, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v100 = CondType_TypeInfo;
      if ( (_DWORD)condValue )
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsQuestClear = CondType__IsAuthTDAccelerate((const MethodInfo *)v100);
      }
      else
      {
        if ( (WORD1(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        }
        IsPurchaseShop = CondType__IsAuthTDAccelerate((const MethodInfo *)v100);
LABEL_805:
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
      v92 = 1;
      goto LABEL_410;
    case 213:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v92 = 2;
LABEL_410:
      v93 = targetId;
      v94 = condValue;
      goto LABEL_415;
    case 214:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = targetId;
      v94 = condValue;
      v92 = 0;
LABEL_415:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(v93, v94, v92, (const MethodInfo *)isCollection);
      break;
    case 215:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  bool IsQuestPhaseClear; // w0
  const MethodInfo *v16; // x5
  int64_t v17; // x23
  const MethodInfo *v18; // x5
  int64_t UserId; // x23

  if ( (byte_42E8F26 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, condValue, *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    byte_42E8F26 = 1;
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
                              v18);
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
    v17 = NetworkManager__get_UserId(0LL);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v17, targetId, condValue, beforeClearQuestId, isCheckResetFlag, v16);
  }
  else
  {
    if ( condType != 1 )
    {
      if ( condType == 36 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsQuestPhaseClear = CondType__IsQuestClear_25877652(
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
    return CondType__IsQuestClear_25877652(
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
  bool v19; // w0
  bool result; // w0
  int32_t v21; // w2
  int32_t v22; // w2
  int64_t v23; // x0
  int32_t v24; // w1
  int64_t v25; // x0
  int32_t v26; // w1
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  __int128 v29; // q1
  const MethodInfo *v30; // x5
  int64_t v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-40h]

  if ( (byte_42E8F31 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, userSvtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E8F31 = 1;
  }
  if ( condType > 38 )
  {
    v19 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v23 = userSvtId;
          v24 = condValue;
          v21 = 0;
          return CondType__IsServantLimit(v23, v24, v21, method);
        case 'h':
LABEL_22:
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v21 = 1;
LABEL_26:
          v23 = userSvtId;
          v24 = condValue;
          return CondType__IsServantLimit(v23, v24, v21, method);
        case 'i':
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v21 = 2;
          goto LABEL_26;
      }
      return v19;
    }
    if ( condType == 150 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v25 = userSvtId;
      v26 = condValue;
      v22 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v19;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v22 = 2;
      }
      v25 = userSvtId;
      v26 = condValue;
    }
    return CondType__IsServantLimitImage(v25, v26, v22, method);
  }
  v19 = 1;
  switch ( condType )
  {
    case 0:
      return v19;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
        || (Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                          userSvtId,
                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
      {
        sub_B5D69C(Instance, v28);
      }
      v29 = *(_OWORD *)&Instance->fields.lastFrameTime;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&Instance->fields.saveNameList;
      *(_OWORD *)&v33.fields.fakeValue = v29;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v32 = v33;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v32, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear(v31, condValue, -1, 0, 0, v30);
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
      result = CondType__IsServantGet_25915424(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25915584(userSvtId, condValue, (const MethodInfo *)userSvtId);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25916152(userSvtId, condValue, (const MethodInfo *)userSvtId);
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
  int64_t Instance; // x0
  __int64 v26; // x1
  EventRaidMaster_o *v27; // x19
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  TotalEventRaidMaster_o *Master_WarQuestSelectionMaster; // x21
  WarQuestSelectionMaster_o *v30; // x24
  int max_length; // w8
  int64_t v32; // x20
  unsigned int v33; // w22
  int32_t v34; // w26
  Il2CppClass **v35; // x8
  Il2CppClass *v36; // x27
  EventRaidMaster_o *v37; // x21
  int32_t v38; // w24
  __int64 v39; // x8
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  int64_t v42; // x27
  __int64 v43; // x25
  int v44; // w8
  int32_t v45; // w19
  int32_t v46; // w28
  const MethodInfo *v47; // x4
  int32_t ValueInt; // w19
  __int64 v50; // x0
  int32_t v51; // [xsp+8h] [xbp-78h]
  int32_t v52; // [xsp+Ch] [xbp-74h]
  QuestReleaseMaster_o *v53; // [xsp+10h] [xbp-70h]
  TotalEventRaidMaster_o *v54; // [xsp+18h] [xbp-68h]
  int64_t time; // [xsp+20h] [xbp-60h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E8FE2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, num, checkType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_TotalEventRaidMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&NetworkManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42E8FE2 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_52;
  v27 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  time = Instance;
  if ( !EventRaidEntityArrayFromEventId )
LABEL_52:
    sub_B5D69C(Instance, v26);
  v51 = checkType;
  v52 = num;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v32 = Instance;
    v33 = 0;
    v34 = 0;
    v53 = (QuestReleaseMaster_o *)v30;
    v54 = Master_WarQuestSelectionMaster;
    while ( 1 )
    {
      if ( v33 >= max_length )
        goto LABEL_53;
      v35 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v33;
      v36 = v35[4];
      if ( !v36 )
        goto LABEL_52;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v35[4], v32, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_52;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     eventId,
                     HIDWORD(v36->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v37 = v27;
          v38 = eventId;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v27, eventId, HIDWORD(v36->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_52;
          v39 = *(_QWORD *)(Instance + 24);
          if ( v39 )
          {
            if ( !(_DWORD)v39 )
              goto LABEL_53;
            if ( !v53 )
              goto LABEL_52;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v53, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_52;
            v41 = *(_QWORD *)(Instance + 24);
            v42 = Instance;
            if ( v41 )
            {
              if ( (int)v41 >= 1 )
              {
                v43 = 0LL;
                while ( (unsigned int)v43 < (unsigned int)v41 )
                {
                  Instance = *(_QWORD *)(v42 + 32 + 8 * v43);
                  if ( !Instance )
                    goto LABEL_52;
                  v44 = *(_DWORD *)(Instance + 20);
                  if ( v44 == 32 )
                  {
                    v46 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestGroupClear(0, v46, ValueInt, 0, v47);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  else if ( v44 == 1 )
                  {
                    v45 = *(_DWORD *)(Instance + 24);
                    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CondType_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    }
                    Instance = CondType__IsQuestClear_25877652(v45, -1, 0, v40);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_42;
                  }
                  LODWORD(v41) = *(_DWORD *)(v42 + 24);
                  if ( (int)++v43 >= (int)v41 )
                    goto LABEL_41;
                }
LABEL_53:
                v50 = sub_B5D6C8(Instance);
                sub_B5D668(v50, 0LL);
              }
            }
          }
LABEL_41:
          ++v34;
LABEL_42:
          v27 = v37;
          Master_WarQuestSelectionMaster = v54;
          v32 = time;
          eventId = v38;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_46;
    }
  }
  v34 = 0;
LABEL_46:
  if ( v51 == 2 )
    return v34 <= v52;
  if ( v51 == 1 )
    return v34 >= v52;
  return v34 == v52;
}


bool __fastcall CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  int32_t v4; // w22
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  CondType___c__DisplayClass19_0_o *v67; // x20
  int64_t IsOpen; // x0
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x4
  __int64 v72; // x8
  int32_t v73; // w19
  int64_t v74; // x2
  int32_t v75; // w0
  int32_t v76; // w1
  bool result; // w0
  System_Func_int__int__o *v78; // x0
  __int64 *v79; // x8
  unsigned __int64 v80; // x22
  int32_t v81; // w23
  signed __int64 v82; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v84; // x4
  bool v85; // w0
  CondType_CountDelegate_o *v86; // x0
  __int64 *v87; // x8
  CondType_CountDelegate_o *v88; // x21
  const MethodInfo *v89; // x2
  int32_t ClearCountsFromIds; // w0
  bool v91; // cc
  int32_t v92; // w23
  unsigned __int64 v93; // x24
  signed __int64 v94; // x25
  int32_t v95; // w22
  __int64 v96; // x0
  int32_t v97; // w19
  System_Func_int__bool__o *v98; // x0
  __int64 *v99; // x8
  System_Func_int__int__o *v100; // x21
  const MethodInfo *v101; // x3
  int32_t v102; // w20
  System_Func_TSource__bool__o *v103; // x21
  CondType_c *v104; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v106; // x0
  UserQuestMaster_o *v107; // x21
  CondType_c *v108; // x0
  UserQuestMaster_o *v109; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v111; // x0
  UserQuestMaster_o *v112; // x21
  int32_t v113; // w0
  CondType_c *v114; // x0
  UserQuestMaster_o *v115; // x21
  CondType_c *v116; // x0
  UserQuestMaster_o *v117; // x21

  v4 = targetNum;
  if ( (byte_42E8F2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CondType_CountExchangeServantMaxLimit__, (_DWORD)targetIds, targetNum, method);
    sub_B5D5C4(&Method_CondType_CountServantClassTotalFriendShipUp__, v7, v8, v9);
    sub_B5D5C4(&Method_CondType_CountServantClassTotalLevelUp__, v10, v11, v12);
    sub_B5D5C4(&Method_CondType_CountServantClassTotalLimitUp__, v13, v14, v15);
    sub_B5D5C4(&Method_CondType_CountServantClassTotalSkillLevelUp__, v16, v17, v18);
    sub_B5D5C4(&Method_CondType_CountServantFriendShipClassNum__, v19, v20, v21);
    sub_B5D5C4(&Method_CondType_CountServantLevelClassNum__, v22, v23, v24);
    sub_B5D5C4(&Method_CondType_CountServantLevelIdNum__, v25, v26, v27);
    sub_B5D5C4(&Method_CondType_CountServantTargetSkillLvClassNum__, v28, v29, v30);
    sub_B5D5C4(&CondType_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CondType_CountDelegate_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_int____68844208, v37, v38, v39);
    sub_B5D5C4(&Method_System_Func_int__int___ctor__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v43, v44, v45);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&System_Func_int__int__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&NetworkManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v55, v56, v57);
    sub_B5D5C4(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v58, v59, v60);
    sub_B5D5C4(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v61, v62, v63);
    sub_B5D5C4(&CondType___c__DisplayClass19_0_TypeInfo, v64, v65, v66);
    byte_42E8F2F = 1;
  }
  v67 = (CondType___c__DisplayClass19_0_o *)sub_B5D694(CondType___c__DisplayClass19_0_TypeInfo);
  CondType___c__DisplayClass19_0___ctor(v67, 0LL);
  if ( !v67 )
LABEL_141:
    sub_B5D69C(IsOpen, v69);
  v67->fields.targetNum = v4;
  if ( !targetIds )
    return 0;
  v72 = *(_QWORD *)&targetIds->max_length;
  if ( !v72 )
    return 0;
  if ( (_DWORD)v72 == 1 )
  {
    v73 = targetIds->m_Items[1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v74 = v4;
    v75 = condType;
    v76 = v73;
    return CondType__IsOpen(v75, v76, v74, 0, v71);
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
        if ( (int)v72 < 1 )
        {
          v92 = 0;
        }
        else
        {
          if ( !(_DWORD)v72 )
            goto LABEL_44;
          v92 = 0;
          v93 = 0LL;
          v94 = (int)v72;
          while ( 1 )
          {
            v95 = targetIds->m_Items[v93 + 1];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsOpen = CondType__IsOpen(condType, v95, 0LL, 0, v71);
            ++v93;
            v92 += IsOpen & 1;
            if ( (__int64)v93 >= v94 )
              break;
            if ( v93 >= targetIds->max_length )
              goto LABEL_44;
          }
          v4 = v67->fields.targetNum;
        }
        v91 = v92 < v4;
        return !v91;
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
        v104 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v104);
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
        if ( (int)v72 < 1 )
        {
          v81 = 0;
        }
        else
        {
          v80 = 0LL;
          v81 = 0;
          v82 = (int)v72;
          do
          {
            IsOpen = (int64_t)CondType_TypeInfo;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( v80 >= targetIds->max_length )
              goto LABEL_44;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v69);
            v85 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v80], 0LL, 0, v84);
            v81 += v85;
          }
          while ( (__int64)v80 < v82 );
          v4 = v67->fields.targetNum;
        }
        result = v81 < v4;
        break;
      case 30:
        v106 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v107 = CondType__GetUserQuestMaster((const MethodInfo *)v106);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v107 )
          goto LABEL_141;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v107, IsOpen, targetIds, 0LL);
        goto LABEL_33;
      case 42:
        v108 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v109 = CondType__GetUserQuestMaster((const MethodInfo *)v108);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v109 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v109, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v67->fields.targetNum;
      case 43:
        v111 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v112 = CondType__GetUserQuestMaster((const MethodInfo *)v111);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v112 )
          goto LABEL_141;
        v113 = UserQuestMaster__getChallengeCountsFromIds(v112, IsOpen, targetIds, 0LL);
        return v113 <= v67->fields.targetNum;
      case 44:
        v114 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v115 = CondType__GetUserQuestMaster((const MethodInfo *)v114);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v115 )
          goto LABEL_141;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v115, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v67->fields.targetNum;
      case 45:
        v116 = CondType_TypeInfo;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v117 = CondType__GetUserQuestMaster((const MethodInfo *)v116);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v117 )
          goto LABEL_141;
        v113 = UserQuestMaster__getClearCountsFromIds(v117, IsOpen, targetIds, 0LL);
        return v113 <= v67->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_69;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsServantLimitClassNum(targetIds, v4, v70);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_81;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_69;
        case 180:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_81;
        case 181:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_81;
        case 182:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_81;
        case 183:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_81;
        case 184:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_81;
        case 188:
          v98 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          v99 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_87;
        case 189:
          v78 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
          v79 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_81:
          v100 = v78;
          System_Func_int__int____ctor(v78, 0LL, *v79, (const MethodInfo_2C29044 *)Method_System_Func_int__int___ctor__);
          v102 = v67->fields.targetNum;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v100, targetIds, v102, v101);
        case 190:
          v98 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          v99 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_87;
        case 191:
          v98 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
          v99 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_87:
          v103 = (System_Func_TSource__bool__o *)v98;
          System_Func_int__bool____ctor(
            v98,
            (Il2CppObject *)v67,
            *v99,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
          return System_Linq_Enumerable__Any_int__29992412(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v103,
                   (const MethodInfo_1C9A5DC *)Method_System_Linq_Enumerable_Any_int____68844208);
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
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v69);
LABEL_33:
              v91 = ClearCountsFromIds < v67->fields.targetNum;
              return !v91;
            }
            goto LABEL_69;
          }
          v86 = (CondType_CountDelegate_o *)sub_B5D694(CondType_CountDelegate_TypeInfo);
          v87 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_29:
      v88 = v86;
      CondType_CountDelegate___ctor(v86, 0LL, *v87, 0LL);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v88, v89);
      goto LABEL_33;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v86 = (CondType_CountDelegate_o *)sub_B5D694(CondType_CountDelegate_TypeInfo);
        v87 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_29;
      }
LABEL_69:
      if ( (_DWORD)v72 )
      {
        v97 = targetIds->m_Items[1];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v75 = condType;
        v76 = v97;
        v74 = 0LL;
        return CondType__IsOpen(v75, v76, v74, 0, v71);
      }
LABEL_44:
      v96 = sub_B5D6C8(IsOpen);
      sub_B5D668(v96, 0LL);
    }
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, v4, v70);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_25912304(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_42E8F30 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)condValues, condNum, method);
    byte_42E8F30 = 1;
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
bool __fastcall CondType__IsOpen_25916820(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_42E8F32 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, userId, *(_QWORD *)&svtId);
    byte_42E8F32 = 1;
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
      result = CondType__IsServantLevel_25917572(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_25917736(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_25915424(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_25917980(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_25916152(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_25918304(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_25918476(userId, condValue, (const MethodInfo *)userId);
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
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = notMeetsScriptId;
  if ( (byte_42E8FA2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21421/*"notMeets"*/, (_DWORD)method, v2, v3);
    byte_42E8FA2 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_44577788((System_String_o *)StringLiteral_21421/*"notMeets"*/, v4, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v5, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 SelfUserGame; // x0
  __int64 v6; // x1
  int v7; // w2
  __int64 v8; // x3
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v10; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F97 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8F97 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_B5D69C(SelfUserGame, v6);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CD9 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
      byte_42E5CD9 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v10->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool __fastcall CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E8F57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F57 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseQpShop_25918304(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E8F58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, condId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F58 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return ShopEntity__IsCondType_35101016((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w20

  v4 = condValue;
  if ( (byte_42E8F5C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, (_DWORD)method, v3);
    byte_42E8F5C = 1;
  }
  if ( v4 <= 1 )
    v4 = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v4;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E8F5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8F5A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseStoneShop_25918476(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1

  if ( (byte_42E8F5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, condId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F5B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      condId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  return ShopEntity__IsCondType_35101016((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v17; // x19
  __int64 v18; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  il2cpp_array_size_t v20; // w23
  ShopGroupEntity_o *v21; // x8
  ShopEntity_o *v22; // x21
  __int64 v23; // x0

  if ( (byte_42E8F93 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F93 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v17 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
      v18 = *(_QWORD *)&v17->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v20 = 0;
        while ( 1 )
        {
          v21 = v17->m_Items[v20];
          if ( !v21 || !v19 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v19,
                                        v21->fields.shopId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v22 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v22, 0LL) )
              goto LABEL_19;
            Instance = (DataManager_o *)ShopEntity__IsClosed(v22, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( (int)++v20 >= (int)v18 )
            goto LABEL_20;
          if ( v20 >= v17->max_length )
          {
            v23 = sub_B5D6C8(Instance);
            sub_B5D668(v23, 0LL);
          }
        }
LABEL_22:
        sub_B5D69C(Instance, v15);
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
  int v2; // w2
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v24; // x1
  bool v25; // w20
  bool v26; // w22
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  bool v30; // w21
  TerminalPramsManager_c *v31; // x0
  bool v32; // w20
  bool v33; // w20
  BalanceConfig_c *v34; // x8
  int32_t WarId_k__BackingField; // w22
  bool v36; // w20
  TerminalPramsManager_c *v37; // x0
  char v38; // w8
  char v39; // w20

  if ( (byte_42E8F7F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E8F7F = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v25 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v26 = AvalonSceneManager__checkNowScene(Instance, 22, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v30 = AvalonSceneManager__checkNowScene(Instance, 72, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
    byte_42E4B20 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  v32 = v25 || v26;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v33 = v32 || v30;
  v34 = BalanceConfig_TypeInfo;
  WarId_k__BackingField = v31->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  v36 = !v33;
  if ( WarId_k__BackingField == v34->static_fields->OrdealCallWarId )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B35 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
      byte_42E4B35 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    v38 = !v37->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v38 = 1;
  }
  v39 = v38 & v36;
  if ( (v39 & 1) != 0 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    Instance = (AvalonSceneManager_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
    if ( (v39 & 1 & (Instance != 0LL)) != 0 )
    {
      if ( Instance )
        return LODWORD(Instance->fields.scenestack) == 1;
LABEL_41:
      sub_B5D69C(Instance, v24);
    }
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CondType_c *v17; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v19; // x1
  UserQuestEntity_o *EntityFromId; // x23
  const MethodInfo *v21; // x2

  if ( (byte_42E8F37 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condQuestId, beforeClearQuestId, isCheckResetFlag);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    byte_42E8F37 = 1;
  }
  v17 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v17);
  if ( !UserQuestMaster )
    goto LABEL_22;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_22:
    sub_B5D69C(UserQuestMaster, v19);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL)
    && isCollection )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, v21);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool IsQuestClear_25877652; // w8
  bool result; // w0
  CondType_c *v17; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *UserId; // x0
  __int64 v20; // x1
  int64_t klass; // x20

  if ( (byte_42E8FCA & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    byte_42E8FCA = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25877652 = CondType__IsQuestClear_25877652(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_25877652 )
  {
    v17 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v17);
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
    UserId = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
LABEL_21:
      sub_B5D69C(UserId, v20);
    return klass < EventMaster__GetEventStartedAt(UserId, eventId, 0LL);
  }
  return result;
}


bool __fastcall CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CondType_c *v9; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  __int64 v12; // x1
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_42E8F6B & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E8F6B = 1;
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
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    sub_B5D69C(UserId, v12);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestClear_25877652(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x5
  int64_t UserId; // x22

  if ( (byte_42E8F38 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, beforeClearQuestId, isCheckResetFlag, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E8F38 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear(UserId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v10);
}


bool __fastcall CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  int64_t UserId; // x21
  CondType_c *v19; // x0
  CondType_c *v20; // x0
  UserQuestEntity_o *v21; // x0

  if ( (byte_42E8F3E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, closeQuestid, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F3E = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v19 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v19);
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
  v20 = CondType_TypeInfo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v20);
  if ( !Instance )
LABEL_26:
    sub_B5D69C(Instance, v17);
  v21 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, closeQuestid, 0LL);
  if ( !v21 || UserQuestEntity__getClearNum(v21, 0LL) <= 0 )
    goto LABEL_5;
LABEL_25:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t v12; // w21
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v16; // x19
  int v17; // w22
  unsigned __int64 v18; // x23
  int32_t v19; // w20
  __int64 v21; // x0

  if ( (byte_42E8F80 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, questCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F80 = 1;
  }
  if ( questCount <= 1 )
    v12 = 1;
  else
    v12 = questCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                      (QuestGroupMaster_o *)Instance,
                                      groupId,
                                      2,
                                      0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  datalist = Instance->fields.datalist;
  v16 = Instance;
  if ( (int)datalist < 1 )
    return 0;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)datalist )
    {
      v21 = sub_B5D6C8(Instance);
      sub_B5D668(v21, 0LL);
    }
    v19 = *((_DWORD *)&v16->fields.lookup + v18);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__IsQuestAvailable(v19, v14);
    if ( ((unsigned __int8)Instance & 1) != 0 && ++v17 >= v12 )
      break;
    LODWORD(datalist) = v16->fields.datalist;
    if ( (__int64)++v18 >= (int)datalist )
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
  int v6; // w22

  v6 = condVal;
  if ( (byte_42E8F70 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, groupId, condVal, isCheckResetFlag);
    byte_42E8F70 = 1;
  }
  if ( v6 <= 1 )
    v6 = 1;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= v6;
}


bool __fastcall CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  signed __int64 v10; // x22
  CondType_c *v11; // x0
  UserQuestMaster_o *UserQuestMaster; // x20
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v15; // x0

  v4 = condQuestId;
  if ( (byte_42E8F90 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    condQuestId = (System_Int32_array *)sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8F90 = 1;
  }
  if ( !v4 )
    goto LABEL_20;
  v8 = *(_QWORD *)&v4->max_length;
  if ( !v8 )
    return 0;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    v10 = (int)v8;
    while ( 1 )
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
      condQuestId = (System_Int32_array *)NetworkManager__get_UserId(0LL);
      if ( v9 >= v4->max_length )
      {
        v15 = sub_B5D6C8(condQuestId);
        sub_B5D668(v15, 0LL);
      }
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, (int64_t)condQuestId, v4->m_Items[v9 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( (__int64)++v9 >= v10 )
        return 1;
    }
LABEL_20:
    sub_B5D69C(condQuestId, method);
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

  if ( (byte_42E8F3A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condQuestId, condQuestPhase, *(_QWORD *)&beforeClearQuestId);
    byte_42E8F3A = 1;
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
bool __fastcall CondType__IsQuestPhaseClear_25933948(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x5
  int64_t UserId; // x23

  if ( (byte_42E8F3B & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condQuestPhase, beforeClearQuestId, isCheckResetFlag);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E8F3B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, condQuestId, condQuestPhase, beforeClearQuestId, isCheckResetFlag, v12);
}


bool __fastcall CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  CondType_c *v16; // x0
  const MethodInfo *v17; // x3
  WarEntity_o *v18; // x8
  unsigned __int64 v19; // x22
  bool v20; // w20
  struct System_String_o *age; // x8
  unsigned __int64 klass_low; // x9
  int32_t v23; // w19
  __int64 v25; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F81 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestResetMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F81 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v16 = CondType_TypeInfo;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v16);
    v18 = entity;
    if ( entity )
    {
      v19 = 0LL;
      v20 = 1;
      do
      {
        age = v18->fields.age;
        if ( !age )
          break;
        klass_low = LODWORD(age[1].klass);
        if ( (__int64)v19 >= (int)klass_low )
          return 0;
        if ( v19 >= klass_low )
        {
          v25 = sub_B5D6C8(Instance);
          sub_B5D668(v25, 0LL);
        }
        v23 = *((_DWORD *)&age[1].monitor + v19);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_25877652(v23, -1, 1, v17);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v20;
        v18 = entity;
        ++v19;
      }
      while ( entity );
    }
LABEL_19:
    sub_B5D69C(Instance, v15);
  }
  return 0;
}


bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Instance; // x0
  __int64 v16; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *v18; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w20
  il2cpp_array_size_t v21; // w21
  struct System_Int32_array *v22; // x8
  int v23; // w23
  int v24; // w8
  __int64 v26; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, costumeId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Math_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F8F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v18 = entity;
  if ( !entity || (costumeIds = entity->fields.costumeIds) == 0LL )
LABEL_24:
    sub_B5D69C(Instance, v16);
  max_length = costumeIds->max_length;
  if ( max_length < 1 )
    return 0;
  v21 = 0;
  while ( 1 )
  {
    v22 = v18->fields.costumeIds;
    if ( !v22 )
      goto LABEL_24;
    if ( v21 >= v22->max_length )
    {
      v26 = sub_B5D6C8(Instance);
      sub_B5D668(v26, 0LL);
    }
    Instance = (int64_t)System_Math_TypeInfo;
    v23 = v22->m_Items[v21 + 1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = v23 >= 0 ? v23 : -v23;
    if ( v24 == costumeId )
      return 1;
    if ( (int)++v21 >= max_length )
      return 0;
    v18 = entity;
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
    sub_B5D69C(0LL, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v3->fields.birthDay > 0;
}


bool __fastcall CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IList_int__o *v11; // x20
  const MethodInfo *v12; // x4
  System_Collections_Generic_IList_int__o *v13; // x21
  __int64 v15; // x0

  if ( (byte_42E8FC3 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, routeId, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    byte_42E8FC3 = 1;
  }
  v9 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_11;
  v11 = (System_Collections_Generic_IList_int__o *)v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v9 + 32) = questId;
  v9 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v9 )
LABEL_11:
    sub_B5D69C(v9, v10);
  v13 = (System_Collections_Generic_IList_int__o *)v9;
  if ( !*(_DWORD *)(v9 + 24) )
  {
LABEL_12:
    v15 = sub_B5D6C8(v9);
    sub_B5D668(v15, 0LL);
  }
  *(_DWORD *)(v9 + 32) = routeId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_25939196(v11, v13, 1, 0, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsRouteSelect_25939196(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 v39; // x1
  UserQuestRouteMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_HashSet_int__o *v41; // x21
  __int64 v42; // x3
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  __int64 v50; // x26
  int v51; // w22
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x3
  System_Collections_Generic_IList_int__c *v64; // x8
  int32_t v65; // w26
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x3
  __int64 v71; // x25
  __int64 v72; // x8
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x3
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  int32_t v81; // w27
  int64_t UserId; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v84; // x1
  int v85; // w27
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  int v90; // w19
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  __int64 v97; // [xsp+18h] [xbp-68h]
  _DWORD v98[2]; // [xsp+20h] [xbp-60h]
  int v99; // [xsp+28h] [xbp-58h]

  if ( (byte_42E8FC4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserQuestRouteMaster___,
      (_DWORD)routeIds,
      count,
      *(_QWORD *)&checkType);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NetworkManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    byte_42E8FC4 = 1;
  }
  v99 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (UserQuestRouteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v41 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v41,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !questIds )
    goto LABEL_90;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v44;
      p_offset += 4;
      if ( v44 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AF54C0(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v42);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v97 = v47;
  if ( !v47 )
    sub_B5D69C(0LL, v48);
  v50 = v47;
  v51 = 0;
  while ( 1 )
  {
    v52 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_17;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_17:
      v55 = sub_AF54C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v50, *(_QWORD *)(v55 + 8));
    if ( (Instance & 1) == 0 )
      break;
    v57 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_24;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_24:
      v60 = sub_AF54C0(v50, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v56);
      v50 = v97;
    }
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v50, *(_QWORD *)(v60 + 8));
    if ( !routeIds )
      sub_B5D69C(v61, v62);
    v64 = routeIds->klass;
    v65 = v61;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v66 = 0LL;
      v67 = &v64->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v67 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v66;
        v67 += 4;
        if ( v66 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_31;
      }
      v68 = (__int64)&v64->vtable[*v67].method;
    }
    else
    {
LABEL_31:
      v68 = sub_AF54C0(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v63);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v68)(
            routeIds,
            *(_QWORD *)(v68 + 8));
    if ( !v71 )
      sub_B5D69C(0LL, v69);
    while ( 1 )
    {
      v72 = *(_QWORD *)v71;
      if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
      {
        v73 = 0LL;
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v73;
          v74 += 4;
          if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
            goto LABEL_38;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_38:
        v75 = sub_AF54C0(v71, System_Collections_IEnumerator_TypeInfo, 0LL, v70);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8)) & 1) == 0 )
        break;
      v77 = *(_QWORD *)v71;
      if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
      {
        v78 = 0LL;
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v79 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v78;
          v79 += 4;
          if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
            goto LABEL_45;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_45:
        v80 = sub_AF54C0(v71, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v76);
      }
      v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v71, *(_QWORD *)(v80 + 8));
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(UserId, UserId);
      haveRouteId = UserQuestRouteMaster__haveRouteId(MasterData_WarQuestSelectionMaster, UserId, v65, v81, 0LL);
      if ( haveRouteId )
      {
        if ( !v41 )
          sub_B5D69C(haveRouteId, v84);
        System_Collections_Generic_HashSet_int___Add(
          v41,
          v81,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v98[v51] = 100;
    v85 = ++v99;
    v86 = *(_QWORD *)v71;
    if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
    {
      v87 = 0LL;
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
      {
        ++v87;
        v88 += 4;
        if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
          goto LABEL_59;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_59:
      v89 = sub_AF54C0(v71, System_IDisposable_TypeInfo, 0LL, v76);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v89)(v71, *(_QWORD *)(v89 + 8));
    v50 = v97;
    v51 = 0;
    if ( v85 )
    {
      v51 = v85;
      if ( v98[v85 - 1] == 100 )
      {
        v99 = v85 - 1;
        v51 = v85 - 1;
      }
    }
  }
  v98[v51] = 120;
  v90 = ++v99;
  if ( v50 )
  {
    v91 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v92 = 0LL;
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
      {
        ++v92;
        v93 += 4;
        if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_73;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_73:
      v94 = sub_AF54C0(v50, System_IDisposable_TypeInfo, 0LL, v56);
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v50, *(_QWORD *)(v94 + 8));
  }
  if ( v90 && v98[v90 - 1] == 120 )
    v99 = v90 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v41 )
        goto LABEL_90;
      return v41->fields._count <= count;
    case 1:
      if ( !v41 )
        goto LABEL_90;
      return v41->fields._count >= count;
    case 0:
      if ( v41 )
        return v41->fields._count == count;
LABEL_90:
      sub_B5D69C(Instance, v39);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x4
  int64_t UserId; // x22

  if ( (byte_42E8F4E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condFriendshipRank, isAbove, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E8F4E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25917980(UserId, svtId, condFriendshipRank, isAbove, v10);
}


bool __fastcall CondType__IsServantFriendship_25915584(
        int64_t userSvtId,
        int32_t condFriendshipRank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int64_t Instance; // x0
  __int64 v31; // x1
  __int128 v32; // q1
  int64_t v33; // x20
  __int64 v34; // x21
  __int64 v35; // x22
  const MethodInfo *v36; // x4
  int32_t v37; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-50h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E8F50 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condFriendshipRank, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    byte_42E8F50 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_25;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_25;
  v32 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v32;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v40 = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v40, 0LL);
  if ( !entity )
LABEL_25:
    sub_B5D69C(Instance, v31);
  v33 = Instance;
  v35 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v35;
  *(_QWORD *)&v43.fields.fakeValue = v34;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_25917980(v33, v37, condFriendshipRank, 1, v36);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_25917980(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v18; // x20
  __int64 v19; // x21
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42E8F4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, svtId, condFriendshipRank, isAbove);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F4F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
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
      v18 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v19 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = v18;
      *(_QWORD *)&v23.fields.fakeValue = v19;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v20 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v21 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v20;
    *(_QWORD *)&v24.fields.fakeValue = v21;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2
  int64_t UserId; // x20

  if ( (byte_42E8F48 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8F48 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25915424(UserId, condSvtId, v8);
}


bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int64_t Instance; // x0
  __int64 v19; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *v22; // [xsp+0h] [xbp-30h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E8F83 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_18;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   &v22,
                   eventId,
                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v22 )
      {
        if ( entity )
          return entity->fields.createdAt < *(_QWORD *)&v22->fields.eventId;
LABEL_18:
        sub_B5D69C(Instance, v19);
      }
    }
  }
  return 0;
}


bool __fastcall CondType__IsServantGet_25915424(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_42E8F49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, condSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8F49 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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


bool __fastcall CondType__IsServantGet_25935260(int64_t userSvtId, const MethodInfo *method)
{
  int v2; // w2
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
  int64_t Instance; // x0
  __int64 v27; // x1
  __int128 v28; // q1
  int64_t v29; // x19
  __int64 v30; // x20
  __int64 v31; // x21
  const MethodInfo *v32; // x2
  int32_t v33; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-40h]
  UserServantEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E8F4A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E8F4A = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_23;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_23;
  v28 = *(_OWORD *)&entity->fields.userId.fields.fakeValue;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&entity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v28;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v36 = v37;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v36, 0LL);
  if ( !entity )
LABEL_23:
    sub_B5D69C(Instance, v27);
  v29 = Instance;
  v31 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v31;
  *(_QWORD *)&v39.fields.fakeValue = v30;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_25915424(v29, v33, v32);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x2
  int64_t UserId; // x20

  if ( (byte_42E8F52 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E8F52 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_25916152(UserId, condGroup, v8);
}


bool __fastcall CondType__IsServantGroup_25916152(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w22
  __int64 v18; // x8
  __int64 v20; // x0

  if ( (byte_42E8F53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantGroupMaster___, condGroup, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F53 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(Instance, v13);
  }
  v15 = *((_DWORD *)Instance + 6);
  v16 = Instance;
  if ( v15 < 1 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= v15 )
    {
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    v18 = *((_QWORD *)v16 + (int)v17 + 4);
    if ( !v18 || !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Instance = UserServantCollectionMaster__GetEntityDefinitely(
                 MasterData_WarQuestSelectionMaster,
                 userId,
                 *(_DWORD *)(v18 + 20),
                 0LL);
    if ( Instance )
    {
      if ( *((_DWORD *)Instance + 10) == 2 )
        return 1;
    }
    v15 = *((_DWORD *)v16 + 6);
    if ( (int)++v17 >= v15 )
      return 0;
  }
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8F4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E8F4B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E8F9A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, condNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E8F9A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0LL);
}


bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, condLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E8F3F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return entity->fields.lv >= condLv;
LABEL_12:
    sub_B5D69C(Instance, v19);
  }
  return 0;
}


bool __fastcall CondType__IsServantLevel_25875100(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x3
  int64_t UserId; // x21

  if ( (byte_42E8F40 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condLv, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E8F40 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_25917572(UserId, svtId, condLv, v9);
}


bool __fastcall CondType__IsServantLevel_25917572(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_42E8F41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, svtId, condLv, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E8F41 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E8F43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, condLimitCount, checkType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E8F43 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Instance, v23);
  }
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userSvtId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v26 = 0;
    goto LABEL_15;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_23;
  v25 = *(_QWORD *)&entity->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&entity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v25;
  *(_QWORD *)&v29.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
LABEL_15:
  if ( checkType == 2 )
    return v26 <= condLimitCount;
  if ( checkType == 1 )
    return v26 >= condLimitCount;
  if ( checkType )
    return 0;
  return v26 == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimitClassNum(
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  unsigned __int64 v8; // x22
  int32_t v9; // w23
  int32_t v10; // w21
  __int64 v11; // x0

  v5 = targetIds;
  if ( (byte_42E8FB3 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_B5D5C4(&CondType_TypeInfo, targetNum, (_DWORD)method, v3);
    byte_42E8FB3 = 1;
  }
  if ( !v5 )
    sub_B5D69C(targetIds, *(_QWORD *)&targetNum);
  v6 = *(_QWORD *)&v5->max_length;
  v7 = 0LL;
  if ( v6 && (int)v6 >= 1 )
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v11 = sub_B5D6C8(v7);
        sub_B5D668(v11, 0LL);
      }
      v10 = v5->m_Items[v8 + 1];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType__CountServantLimitClassNum(v10, *(const MethodInfo **)&targetNum);
      v9 += v7;
      if ( v9 >= targetNum )
        break;
      LODWORD(v6) = v5->max_length;
      if ( (__int64)++v8 >= (int)v6 )
      {
        LOBYTE(v7) = 0;
        return v7;
      }
    }
    LOBYTE(v7) = 1;
  }
  return v7;
}


bool __fastcall CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t CombineVoiceLimitCount; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, condLimitCount, checkType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E8F44 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_B5D69C(Instance, v20);
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


bool __fastcall CondType__IsServantLimit_25875276(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x4
  int64_t UserId; // x22

  if ( (byte_42E8F45 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condLimitCount, checkType, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E8F45 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_25917736(UserId, svtId, condLimitCount, checkType, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_25917736(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_42E8F46 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantCollectionMaster___,
      svtId,
      condLimitCount,
      *(_QWORD *)&checkType);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F46 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t Instance; // x0
  __int64 v16; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v18; // x20
  __int64 v19; // x23
  UserShopMaster_o *v20; // x21
  il2cpp_array_size_t v21; // w24
  int32_t v22; // w25
  ShopGroupEntity_o *v23; // x8
  int32_t shopId; // w22
  __int64 v25; // x0
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8F98 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, limitNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F98 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_23;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v18 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  v19 = *(_QWORD *)&v18->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = (UserShopMaster_o *)Instance;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = v18->m_Items[v21];
      if ( !v23 )
        break;
      shopId = v23->fields.shopId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v20 )
        break;
      Instance = UserShopMaster__TryGetEntity(v20, &entity, Instance, shopId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v22 += entity->fields.num;
        if ( v22 >= limitNum )
          return 1;
      }
      if ( (int)++v21 >= (int)v19 )
        return 0;
      if ( v21 >= v18->max_length )
      {
        v25 = sub_B5D6C8(Instance);
        sub_B5D668(v25, 0LL);
      }
    }
LABEL_23:
    sub_B5D69C(Instance, v16);
  }
  return 0;
}


bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  int v15; // w22
  UserShopMaster_o *v16; // x21
  unsigned __int64 v17; // x23
  signed __int64 v18; // x24
  __int64 v20; // x0

  if ( (byte_42E8F7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F7C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_16;
  v14 = *(_QWORD *)&values->max_length;
  v15 = 0;
  if ( v14 && (int)v14 >= 1 )
  {
    v16 = (UserShopMaster_o *)Instance;
    v17 = 0LL;
    v15 = 0;
    v18 = (int)v14;
    while ( 1 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( v17 >= values->max_length )
      {
        v20 = sub_B5D6C8(Instance);
        sub_B5D668(v20, 0LL);
      }
      if ( !v16 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v16, Instance, values->m_Items[v17 + 1], 0LL);
      if ( !Instance )
        break;
      ++v17;
      v15 += *(_DWORD *)(Instance + 28);
      if ( (__int64)v17 >= v18 )
        return num > 0 && v15 == num;
    }
LABEL_16:
    sub_B5D69C(Instance, v13);
  }
  return num > 0 && v15 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  int v2; // w2
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v17; // x19
  __int64 v18; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x20
  il2cpp_array_size_t v20; // w23
  ShopGroupEntity_o *v21; // x8
  ShopEntity_o *v22; // x21
  __int64 v23; // x0

  if ( (byte_42E8F92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopGroupMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E8F92 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v17 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_B5D69C(Instance, v15);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  v18 = *(_QWORD *)&v17->max_length;
  if ( (int)v18 < 1 )
    goto LABEL_18;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v20 = 0;
  while ( 1 )
  {
    v21 = v17->m_Items[v20];
    if ( !v21 || !v19 )
      goto LABEL_21;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v19,
                                  v21->fields.shopId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v22 = (ShopEntity_o *)Instance;
      Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)ShopEntity__IsSoldOut(v22, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( (int)++v20 >= (int)v18 )
      goto LABEL_18;
    if ( v20 >= v17->max_length )
    {
      v23 = sub_B5D6C8(Instance);
      sub_B5D668(v23, 0LL);
    }
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserEventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_42E8FC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E8FC5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(Master_WarQuestSelectionMaster, missionId, 0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}


bool __fastcall CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  bool result; // w0
  int v7; // w21
  int v8; // w20

  if ( (byte_42E8FCD & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    byte_42E8FCD = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v7 = condId / 100;
    v8 = condId % 100;
    if ( v8 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__GetSuperBossDamageValue(v7, v8, method) >= condVal;
    }
  }
  return result;
}


bool __fastcall CondType__IsSuperBossDamageBellow(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  bool result; // w0
  int v7; // w21
  int v8; // w20

  if ( (byte_42E8FCE & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    byte_42E8FCE = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v7 = condId / 100;
    v8 = condId % 100;
    if ( v8 )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__GetSuperBossDamageValue(v7, v8, method) <= condVal;
    }
  }
  return result;
}


bool __fastcall CondType__IsSuperBossValueEqual(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool result; // w0
  int v16; // w20
  int v17; // w21
  int64_t Instance; // x0
  __int64 v19; // x1
  UserSuperBossMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8FCC & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8FCC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v16 = condId / 100;
    v17 = condId % 100;
    if ( v17 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_18;
      MasterData_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_18;
      Instance = UserSuperBossMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v16, v17, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_18:
        sub_B5D69C(Instance, v19);
      }
      return 0;
    }
  }
  return result;
}


bool __fastcall CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E8F9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E8F9D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E8F9F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E8F9F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  UserEventServantFatigueMaster_o *v23; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v25; // x8
  int64_t v26; // x22
  int32_t v27; // w26
  unsigned __int64 v28; // x27
  signed __int64 v29; // x28
  int64_t v30; // x23
  __int64 v31; // x23
  Il2CppObject *lockCountObj; // x24
  int32_t v33; // w0
  int64_t v34; // x23
  __int64 v35; // x0
  bool isRecover; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E8F91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, condNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8F91 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(Instance, v22);
  }
  v23 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v25 = *(_QWORD *)(RecoverySvtIdList + 24);
    v26 = RecoverySvtIdList;
    if ( (int)v25 < 1 )
    {
LABEL_25:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v27 = 0;
    v28 = 0LL;
    v29 = (int)v25;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v26 + 32 + 8 * v28);
      if ( v30 < 1 )
        goto LABEL_22;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    v30,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_28;
      lockCountObj = Instance->fields.lockCountObj;
      v31 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = lockCountObj;
      *(_QWORD *)&v39.fields.fakeValue = v31;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v23, &recoverAt, &isRecover, eventId, v33, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v34 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v34 - RecoverySvtIdList > 0 )
          goto LABEL_22;
        ++v27;
      }
      if ( v27 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_22:
      if ( (__int64)++v28 >= v29 )
        goto LABEL_25;
      if ( v28 >= *(unsigned int *)(v26 + 24) )
      {
        v35 = sub_B5D6C8(RecoverySvtIdList);
        sub_B5D668(v35, 0LL);
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
  if ( (byte_42E8FD2 & 1) == 0 )
  {
    countFunc = (System_Func_int__int__o *)sub_B5D5C4(
                                             &Method_System_Func_int__int__Invoke__,
                                             (_DWORD)targetIds,
                                             targetNum,
                                             method);
    byte_42E8FD2 = 1;
  }
  if ( !targetIds )
LABEL_14:
    sub_B5D69C(countFunc, targetIds);
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
        v10 = sub_B5D6C8(countFunc);
        sub_B5D668(v10, 0LL);
      }
      if ( !v6 )
        goto LABEL_14;
      countFunc = (System_Func_int__int__o *)System_Func_int__int___Invoke(
                                               v6,
                                               targetIds->m_Items[v8 + 1],
                                               (const MethodInfo_2C29058 *)Method_System_Func_int__int__Invoke__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int v12; // w8

  if ( (byte_42E8FA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, svtId, limitCount, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E8FA7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  v12 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0LL);
  switch ( condType )
  {
    case 'p':
      return v12 >= 0;
    case 'o':
      return v12 < 1;
    case 'n':
      return v12 == 0;
  }
  return 0;
}


bool __fastcall CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v28; // x20
  intptr_t v29; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v31; // x22
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  if ( (byte_42E8FA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&EventStatus_Type_var, v15, v16, v17);
    sub_B5D5C4(&EventStatus_Type_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Type_TypeInfo, v21, v22, v23);
    byte_42E8FA9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B5D69C(Instance, v25);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v28 = EntityDefinitely;
    v29 = (int)EventStatus_Type_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v34.fields.value = v29;
    TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
    v33 = flag;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v33);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v31, 0LL)
                            && UserEventEntity__getEventFlag(v28, flag, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v28; // x20
  intptr_t v29; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v31; // x22
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  if ( (byte_42E8FAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&UserQuestEntity_StatusKind_var, v15, v16, v17);
    sub_B5D5C4(&UserQuestEntity_StatusKind_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Type_TypeInfo, v21, v22, v23);
    byte_42E8FAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B5D69C(Instance, v25);
  EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, (int64_t)Instance, questId, 0LL);
  if ( EntityFromId )
  {
    v28 = EntityFromId;
    v29 = (int)UserQuestEntity_StatusKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v34.fields.value = v29;
    TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
    v33 = flag;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v33);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v31, 0LL)
                        && UserQuestEntity__HasStatus_21757804(v28, flag, 0LL);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool __fastcall CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v28; // x20
  intptr_t v29; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v31; // x22
  int32_t v33; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  if ( (byte_42E8FC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, flagKind, (_DWORD)method, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UserShopFlag_FlagKind_var, v9, v10, v11);
    sub_B5D5C4(&UserShopFlag_FlagKind_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&System_Type_TypeInfo, v21, v22, v23);
    byte_42E8FC0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_19:
    sub_B5D69C(Instance, v25);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v28 = EntityDefinitely;
    v29 = (int)UserShopFlag_FlagKind_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v34.fields.value = v29;
    TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
    v33 = flagKind;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v33);
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v31, 0LL)
                            && UserShopEntity__CheckFlagKind(v28, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w0
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int64_t v25; // x0
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_42E8F95 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, playCount, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10, v11);
    byte_42E8F95 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_17:
    sub_B5D69C(Instance, v13);
  v14 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[v14 - 1] != EventRewardRootComponent_TypeInfo )
  {
    v25 = sub_B5D990(Instance);
    return CondType__IsArrivalDate(v25, v26);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0LL);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v18 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v20, 0LL);
  if ( !byte_42E8FE9 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, v21, v22, v23);
    byte_42E8FE9 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, num, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F84 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B5D69C(Instance, v13);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *ClearWarIdList; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w9
  __int64 v10; // x0

  if ( (byte_42E8FB2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8FB2 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_B5D69C(0LL, v6);
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
    {
      v10 = sub_B5D6C8(ClearWarIdList);
      sub_B5D668(v10, 0LL);
    }
    if ( ClearWarIdList->m_Items[v8 + 1] == condWarId )
      break;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  return 1;
}


int32_t __fastcall CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  DataManager_o *Instance; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v43; // x19
  CondType___c_c *v44; // x0
  struct CondType___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__168_0; // x20
  Il2CppObject *v47; // x21
  struct CondType___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CondType___c_c *v55; // x0
  struct CondType___c_StaticFields *v56; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__168_1; // x20
  Il2CppObject *v58; // x21
  struct CondType___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  peRenderTexture_ChangeLayerObject_o *v66; // x0
  const MethodInfo *v67; // x3
  int32_t changeMaterial_high; // w19

  if ( (byte_42E8FBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_WarEntity___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Comparison_WarEntity__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&CondType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__Find__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__Sort__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Predicate_WarEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Predicate_WarEntity__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, v31, v32, v33);
    sub_B5D5C4(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, v34, v35, v36);
    sub_B5D5C4(&CondType___c_TypeInfo, v37, v38, v39);
    byte_42E8FBE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v41);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
  if ( !EntityList )
    return 0;
  v43 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v44 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v44 = CondType___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = CondType___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__168_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__168_0,
      v47,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_WarEntity___ctor__);
    v48 = CondType___c_TypeInfo->static_fields;
    v48->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__168_0,
      (System_Int32_array **)_9__168_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v43,
    (System_Comparison_T__o *)_9__168_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v55 = CondType___c_TypeInfo;
  if ( (BYTE3(CondType___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v55 = CondType___c_TypeInfo;
  }
  v56 = v55->static_fields;
  _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v56->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v56 = CondType___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__168_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__168_1,
      v58,
      Method_CondType___c__LatestMainScenarioWarClear_b__168_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_WarEntity___ctor__);
    v59 = CondType___c_TypeInfo->static_fields;
    v59->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__168_1,
      (System_Int32_array **)_9__168_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  v66 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v43,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v66 )
    return 0;
  changeMaterial_high = HIDWORD(v66[1].fields.changeMaterial);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(changeMaterial_high, -1, 0, v67);
}


System_String_o *__fastcall CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_o *v13; // x19
  System_String_o *result; // x0
  LocalizationManager_c *v15; // x0

  if ( (byte_42E8F33 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, (_DWORD)textType, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_3361/*"COND_TYPE_NONE"*/, v10, v11, v12);
    byte_42E8F33 = 1;
  }
  switch ( condType )
  {
    case 0:
      v13 = System_String__Concat_44577788((System_String_o *)StringLiteral_3361/*"COND_TYPE_NONE"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      result = LocalizationManager__Get(v13, 0LL);
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
      if ( !byte_42E6772 )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, condValue, (_DWORD)textType, method);
        byte_42E6772 = 1;
      }
      v15 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager_TypeInfo;
      }
      result = v15->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *__fastcall CondType__OpenConditionTextEvent(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  EventEntity_o *Entity; // x20
  System_String_o *v21; // x19
  System_String_o *v22; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_42E8F56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3360/*"COND_TYPE_EVENT"*/, v15, v16, v17);
    byte_42E8F56 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              condId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v21 = System_String__Concat_44577788((System_String_o *)StringLiteral_3360/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v21, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B5D69C(Instance, v19);
  v22 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName(Entity, 0LL);
  return System_String__Format(v22, EventName, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v21; // x19

  if ( (byte_42E8F59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3362/*"COND_TYPE_PURCHASE_QP_SHOP"*/, v15, v16, v17);
    byte_42E8F59 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v21 = System_String__Concat_44577788((System_String_o *)StringLiteral_3362/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v21, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B5D69C(Instance, v19);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  WarEntity_o *Entity; // x20
  System_String_o *v21; // x19

  if ( (byte_42E8F5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3363/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, v15, v16, v17);
    byte_42E8F5E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             condId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v21 = System_String__Concat_44577788((System_String_o *)StringLiteral_3363/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v21, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B5D69C(Instance, v19);
  return System_String__Format((System_String_o *)Instance, &Entity->fields.coordinate->obj, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *v23; // x19
  LocalizationManager_c *v25; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3364/*"COND_TYPE_QUEST_CLEAR"*/, v15, v16, v17);
    byte_42E8F39 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
         &entity,
         condQuestId,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v23 = System_String__Concat_44577788((System_String_o *)StringLiteral_3364/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = LocalizationManager__Get(v23, 0LL);
    if ( entity )
      return System_String__Format(Master_WarQuestSelectionMaster, (Il2CppObject *)entity->fields.age, 0LL);
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    byte_42E6772 = 1;
  }
  v25 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager_TypeInfo;
  }
  return v25->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WarMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v33; // x22
  System_String_o *v34; // x19
  System_String_o *v35; // x0
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_String_o *v40; // x19
  Il2CppObject *age; // x20
  System_String_o *v42; // x19
  Il2CppObject *v43; // x0
  LocalizationManager_c *v44; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t v46; // [xsp+1Ch] [xbp-24h] BYREF

  v46 = condQuestPhase;
  if ( (byte_42E8F3D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condQuestPhase, (_DWORD)textType, getWarName);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3365/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3364/*"COND_TYPE_QUEST_CLEAR"*/, v27, v28, v29);
    byte_42E8F3D = 1;
  }
  entity = 0LL;
  if ( getWarName )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    QuestId = WarMaster__getByLastQuestId(Master_WarQuestSelectionMaster, condQuestId, 0LL);
    if ( QuestId )
    {
      v33 = QuestId;
      v34 = System_String__Concat_44577788((System_String_o *)StringLiteral_3364/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get(v34, 0LL);
      return System_String__Format(v35, (Il2CppObject *)v33->fields.name, 0LL);
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
    Master_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           condQuestId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v40 = System_String__Concat_44577788((System_String_o *)StringLiteral_3365/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (WarMaster_o *)LocalizationManager__Get(v40, 0LL);
      if ( entity )
      {
        age = (Il2CppObject *)entity->fields.age;
        v42 = (System_String_o *)Master_WarQuestSelectionMaster;
        v43 = (Il2CppObject *)System_Int32__ToString((int32_t)&v46, 0LL);
        return System_String__Format_44573324(v42, age, v43, 0LL);
      }
LABEL_38:
      sub_B5D69C(Master_WarQuestSelectionMaster, v31);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v38, v39);
      byte_42E6772 = 1;
    }
    v44 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = LocalizationManager_TypeInfo;
    }
    return v44->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F51 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3366/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, v9, v10, v11);
    byte_42E8F51 = 1;
  }
  v12 = System_String__Concat_44577788((System_String_o *)StringLiteral_3366/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v16 = condFriendshipRank;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format(v13, v14, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  ServantEntity_o *Entity; // x20
  System_String_o *v21; // x19
  System_String_o *v22; // x19
  Il2CppObject *Name; // x1

  if ( (byte_42E8F4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3367/*"COND_TYPE_SERVANT_GET"*/, v15, v16, v17);
    byte_42E8F4D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                condSvtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v21 = System_String__Concat_44577788((System_String_o *)StringLiteral_3367/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get(v21, 0LL);
  if ( !Entity )
LABEL_10:
    sub_B5D69C(Instance, v19);
  v22 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName(Entity, -1, -1, 0LL);
  return System_String__Format(v22, Name, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F54 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3368/*"COND_TYPE_SERVANT_GROUP"*/, v9, v10, v11);
    byte_42E8F54 = 1;
  }
  v12 = System_String__Concat_44577788((System_String_o *)StringLiteral_3368/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v16 = condGroup;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format(v13, v14, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F42 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3369/*"COND_TYPE_SERVANT_LEVEL"*/, v9, v10, v11);
    byte_42E8F42 = 1;
  }
  v12 = System_String__Concat_44577788((System_String_o *)StringLiteral_3369/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v16 = condLv;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format(v13, v14, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *v12; // x20
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8F47 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)textType, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3370/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, v9, v10, v11);
    byte_42E8F47 = 1;
  }
  v12 = System_String__Concat_44577788((System_String_o *)StringLiteral_3370/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get(v12, 0LL);
  v16 = condLimitCount;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  return System_String__Format(v13, v14, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
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
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w19
  SpotPathEntity_o *v26; // x19
  int32_t name; // w20
  int32_t age_high; // w21

  if ( (byte_42E8F29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotPathMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&EventSpotMoveManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E8F29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             questId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  bannerId = Entity->fields.bannerId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v23);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             bannerId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v26 = (SpotPathEntity_o *)Entity;
    age_high = HIDWORD(Entity->fields.age);
    name = (int32_t)Entity->fields.name;
    if ( (BYTE3(EventSpotMoveManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    }
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(age_high, name, v26, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v16; // [xsp+8h] [xbp-28h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E8F28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, targetId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8F28 = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                  (TotalEventRaidMaster_o *)Instance,
                                  &v16,
                                  eventId,
                                  targetId,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_15;
      defeatedAt = v16->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v26; // x21
  __int64 v27; // x0

  if ( (byte_42E8FBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_long___, target, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMapMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42E8FBF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapMaster___);
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
    v27 = sub_B5D6C8(Instance);
    sub_B5D668(v27, 0LL);
  }
  lookup = Instance->fields.lookup;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !lookup || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    HIDWORD(lookup->fields.buckets),
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v26 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Instance, v22);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_22454016(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v26 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_1FC184C *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(collection, method);
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
        v8 = sub_B5D6C8(v4);
        sub_B5D668(v8, 0LL);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  char v15; // w8
  TotalEventRaidEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8F2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue, alive, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8F2A = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v15 = 0;
    return v15 & 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v14);
  }
  Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(
                                (TotalEventRaidMaster_o *)Instance,
                                &v17,
                                targetId,
                                condValue,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v17 )
    goto LABEL_14;
  v15 = (entity->fields.maxHp > v17->fields.totalDamage) ^ alive ^ 1;
  return v15 & 1;
}


bool __fastcall CondType__checkCondTypeRaidGroupAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v17; // x22
  unsigned int v18; // w23
  EventRaidEntity_o *v19; // x24
  char v20; // w8
  __int64 v22; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8F2B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue, alive, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E8F2B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_B5D69C(Instance, v14);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v20 = 0;
  }
  else
  {
    v17 = (TotalEventRaidMaster_o *)Instance;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v22 = sub_B5D6C8(Instance);
        sub_B5D668(v22, 0LL);
      }
      v19 = EventRaidEntityArray->m_Items[v18];
      if ( !v19 || !v17 )
        goto LABEL_19;
      Instance = (DataManager_o *)TotalEventRaidMaster__TryGetEntity(v17, &entity, targetId, v19->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
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


bool __fastcall CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8F27 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, condValue, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8F27 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
    sub_B5D69C(Instance, v16);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v17);
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
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42E6D3E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, id, level, callback);
    byte_42E6D3E = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B5D568(this, v10, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B5D56C(result, 0LL, method);
  if ( !v3 )
    sub_B5D69C(0LL, v4);
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
        sub_B5D680(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&id, *(_QWORD *)&level);
      if ( (sub_B5D5F4(v24) & 1) == 0 )
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
      v26 = sub_B5D5EC(v24);
      v27 = sub_B5D9F0(v24);
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
            v20 = sub_AF54C0(v23, v30, v31, v28);
          }
          v18 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v24);
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
            v17 = sub_AF54C0(v23, class_0, v11, v13);
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

  if ( (byte_42E6D35 & 1) == 0 )
  {
    sub_B5D5C4(&CondType___c_TypeInfo, v1, v2, v3);
    byte_42E6D35 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CondType___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CondType___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6D39 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6D39 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6D3A & 1) == 0 )
  {
    this = (CondType___c_o *)sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6D3A = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestLevel; // w1

  if ( (byte_42E6D36 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, current, targetId, method);
    byte_42E6D36 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestLevel = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_41629432(current, ExchangeServantHighestLevel, 0LL);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestSkillLevel; // w1

  if ( (byte_42E6D37 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, current, targetId, method);
    byte_42E6D37 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestSkillLevel = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  return UnityEngine_Mathf__Max_41629432(current, ExchangeServantHighestSkillLevel, 0LL);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t ExchangeServantHighestFriendShipRank; // w1

  if ( (byte_42E6D38 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, current, targetId, method);
    byte_42E6D38 = 1;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  ExchangeServantHighestFriendShipRank = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  return UnityEngine_Mathf__Max_41629432(current, ExchangeServantHighestFriendShipRank, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__168_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, collection);
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
        v10 = sub_B5D6C8(v6);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int32_t targetNum; // w20

  if ( (byte_42E6D3B & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42E6D3B = 1;
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
  __int64 v3; // x3
  int32_t targetNum; // w20

  if ( (byte_42E6D3C & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42E6D3C = 1;
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
  __int64 v3; // x3
  int32_t targetNum; // w20

  if ( (byte_42E6D3D & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42E6D3D = 1;
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
    sub_B5D69C(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}