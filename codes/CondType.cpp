void __fastcall CondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct CondType_StaticFields *static_fields; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x19
  struct CondType_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B15193 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v10, v11);
    byte_4B15193 = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->uQuestMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                  v13,
                                                                  v14,
                                                                  v15);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v17 = CondType_TypeInfo->static_fields;
  v17->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v17->cachedServantEquipIdStrDic,
    (int64_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_BD3190;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  CondType___c__DisplayClass28_0_o *v30; // x19
  QuestScriptMaterialNextMaster_o *Master_object; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  QuestScriptMaterialNextMaster_o *v37; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v40; // x22
  __int64 v41; // x1
  UserQuestEntity_o *v42; // x21
  UserQuestEntity_o *IncludedGroupQuest; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  CondType___c_c *v47; // x8
  UserQuestEntity_o *v48; // x22
  System_Func_object__bool__o *_9__28_1; // x24
  Il2CppObject *v50; // x25
  struct CondType___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v63; // x25
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x21
  System_Func_object__bool__o *v67; // x20

  if ( (byte_4B150DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&condQuestId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76880416, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_UserQuestEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v22, v23);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v24, v25);
    sub_1BCA7E0(&CondType___c__DisplayClass28_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&CondType___c_TypeInfo, v28, v29);
    byte_4B150DC = 1;
  }
  v30 = (CondType___c__DisplayClass28_0_o *)sub_1BCAA2C(
                                              CondType___c__DisplayClass28_0_TypeInfo,
                                              *(_QWORD *)&condQuestId,
                                              method,
                                              v3);
  CondType___c__DisplayClass28_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_31;
  v30->fields.condQuestId = condQuestId;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v32);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0LL);
  if ( userQuestEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
    Master_object = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_object )
    {
      v37 = Master_object;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_object, v30->fields.condQuestId, 0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v37,
                                       IncludedGroups,
                                       0LL);
      v40 = QuestScriptMaterialNextMaster__GetIncludedGroups(v37, v30->fields.condQuestId, 0LL);
      v42 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v41);
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v40, 0LL);
      v47 = CondType___c_TypeInfo;
      v48 = IncludedGroupQuest;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v44);
        v47 = CondType___c_TypeInfo;
      }
      _9__28_1 = (System_Func_object__bool__o *)v47->static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47, v44);
          v47 = CondType___c_TypeInfo;
        }
        v50 = (Il2CppObject *)v47->static_fields->__9;
        _9__28_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_UserQuestEntity__bool__TypeInfo,
                                                    v44,
                                                    v45,
                                                    v46);
        System_Func_object__bool____ctor(_9__28_1, v50, Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__28_1,
          (int64_t)_9__28_1,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      if ( !System_Linq_Enumerable__All_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v42 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v37, v30->fields.condQuestId, v42, v48, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
      v59 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v42->fields.questId;
      questPhase = v42->fields.questPhase;
      v63 = (UserQuestMaster_o *)v59;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v60);
      Master_object = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0LL);
      if ( v63 )
      {
        Master_object = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                             v63,
                                                             questId,
                                                             questPhase,
                                                             (int64_t)Master_object,
                                                             0LL);
        if ( Master_object )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v42->fields.updatedAt;
          v42 = (UserQuestEntity_o *)Master_object;
          Master_object[1].klass = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v37, v30->fields.condQuestId, v42, v48, 0LL);
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Master_object, v32);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v67 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserQuestEntity__bool__TypeInfo, v34, v35, v36);
  System_Func_object__bool____ctor(
    v67,
    (Il2CppObject *)v30,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                v66,
                                (System_Func_TSource__bool__o *)v67,
                                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76880416);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__CompareQuestClearTime(
        int32_t questId,
        int64_t time,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *UserId; // x0
  __int64 v10; // x1
  int64_t v11; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v13; // x1
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  UserQuestEntity_o *v17; // x22
  bool IsQuestClear_38310172; // w8

  if ( (byte_4B15192 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, time, *(_QWORD *)&checkType);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B15192 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, time);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v11 = (int64_t)UserId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_1BCAA3C(0LL, v13);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v11, questId, 0LL);
  if ( EntityFromId )
  {
    v17 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
    IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, v16);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_38310172 )
    {
      if ( checkType == 2 )
      {
        LOBYTE(EntityFromId) = v17->fields.updatedAt <= time;
      }
      else if ( checkType == 1 )
      {
        LOBYTE(EntityFromId) = v17->fields.updatedAt >= time;
      }
      else if ( checkType )
      {
        LOBYTE(EntityFromId) = 0;
      }
      else
      {
        LOBYTE(EntityFromId) = v17->fields.updatedAt == time;
      }
    }
  }
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v10; // x21
  int32_t v11; // w22
  unsigned int v12; // w24
  UserServantCollectionMaster_c **v13; // x8
  UserServantCollectionEntity_o *v14; // x23
  int v15; // w8
  int v16; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15175 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, *(_QWORD *)&targetNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B15175 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetNum);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object
    || (Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__getCollectionList(
                                                           Master_object,
                                                           &findSum[1],
                                                           findSum,
                                                           0,
                                                           0,
                                                           0LL)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(Master_object, v8);
  }
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v10 = Master_object;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_26;
      v13 = &v10->klass + (int)v12;
      v14 = (UserServantCollectionEntity_o *)v13[4];
      if ( !v14 )
        goto LABEL_27;
      Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                         (UserServantCollectionEntity_o *)v13[4],
                                                         0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v14, 0LL);
        if ( !Master_object )
          goto LABEL_27;
        v15 = (int)Master_object->fields._MasterName_k__BackingField;
        if ( v15 >= 1 )
          break;
      }
LABEL_22:
      LODWORD(MasterName_k__BackingField) = v10->fields._MasterName_k__BackingField;
      if ( (int)++v12 >= (int)MasterName_k__BackingField )
        return v11;
    }
    v16 = 0;
    while ( v15 != v16 )
    {
      if ( *((_DWORD *)&Master_object->fields.list + v16) >= skillLv )
        ++v11;
      if ( targetNum && v11 >= targetNum )
        return v11;
      if ( v15 == ++v16 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BCAA44(Master_object, v8);
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
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
  CondType___c__DisplayClass195_0_o *v29; // x20
  Il2CppObject *Master_object; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__bool__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  CondType___c_c *v42; // x8
  System_Func_object__int__o *_9__195_1; // x20
  Il2CppObject *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct CondType___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__195_1; // x0
  CondType___c_c *v53; // x0
  Il2CppObject *v54; // x21
  struct CondType___c_StaticFields *v55; // x0

  if ( (byte_4B1517B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v13, v14);
    sub_1BCA7E0(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__, v19, v20);
    sub_1BCA7E0(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__, v21, v22);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__, v23, v24);
    sub_1BCA7E0(&CondType___c__DisplayClass195_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&CondType___c_TypeInfo, v27, v28);
    byte_4B1517B = 1;
  }
  v29 = (CondType___c__DisplayClass195_0_o *)sub_1BCAA2C(CondType___c__DisplayClass195_0_TypeInfo, method, v2, v3);
  CondType___c__DisplayClass195_0___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_22;
  v29->fields.targetId = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1BCAA3C(Master_object, v31);
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)Master_object,
                                                                          (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               Entitys_object,
                                                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v29->fields.targetId )
  {
    v37 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_UserClassBoardSquareEntity__bool__TypeInfo,
                                           v33,
                                           v34,
                                           v35);
    System_Func_object__bool____ctor(
      v37,
      (Il2CppObject *)v29,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      0LL);
    v38 = System_Linq_Enumerable__Where_object_(
            v36,
            (System_Func_TSource__bool__o *)v37,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v42 = CondType___c_TypeInfo;
    v36 = v38;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v39);
      v42 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v42->static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42, v39);
        v42 = CondType___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_UserClassBoardSquareEntity__int__TypeInfo,
                                                  v39,
                                                  v40,
                                                  v41);
      System_Func_object__int____ctor(
        _9__195_1,
        v44,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (PartyOrganizationUtility_o *)&static_fields->__9__195_1;
LABEL_20:
      sub_1BCA784(p__9__195_1, (int64_t)_9__195_1, v45, v46, v47, v48, v49, v50);
    }
  }
  else
  {
    v53 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v33);
      v53 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v53->static_fields->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53, v33);
        v53 = CondType___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v53->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_UserClassBoardSquareEntity__int__TypeInfo,
                                                  v33,
                                                  v34,
                                                  v35);
      System_Func_object__int____ctor(
        _9__195_1,
        v54,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        0LL);
      v55 = CondType___c_TypeInfo->static_fields;
      v55->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (PartyOrganizationUtility_o *)&v55->__9__195_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           v36,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t __fastcall CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
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
  UserServantCollectionEntity_array *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  UserServantCollectionEntity_array *v20; // x21
  int max_length; // w9
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x23
  int32_t v23; // w22
  int v24; // w8
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x24
  void *data; // x25
  const char *namespaze; // x26
  Il2CppObject *v30; // [xsp+0h] [xbp-70h] BYREF
  __int64 findSum; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B15178 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, countFunc, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    byte_4B15178 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
  findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, countFunc);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !Master_object )
      goto LABEL_31;
    Master_object = UserServantCollectionMaster__getCollectionList(
                      (UserServantCollectionMaster_o *)Master_object,
                      (int32_t *)&findSum + 1,
                      (int32_t *)&findSum,
                      0,
                      0,
                      0LL);
    if ( !Master_object )
      goto LABEL_31;
    v20 = Master_object;
    if ( *(_QWORD *)&Master_object->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      max_length = v20->max_length;
      if ( max_length >= 1 )
      {
        v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v23 = 0;
        v24 = 0;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)max_length )
            sub_1BCAA44(Master_object, v18);
          v25 = &v20->obj.klass + v24;
          v26 = v25[4];
          if ( !v26 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v25[4],
                                                                 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v26->_1.namespaze;
            data = v26->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
            *(_QWORD *)&v33.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v33.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                   v33,
                                                                   0LL);
            if ( !v22 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v22,
                                                                   &v30,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v30 )
                break;
              if ( LODWORD(v30[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))countFunc->fields.m_target)(
                                                                       countFunc->fields.original_method_info,
                                                                       v26,
                                                                       *(_QWORD *)&countFunc->fields.extra_arg);
                v23 += (int)Master_object;
              }
            }
          }
          v24 = findSum + 1;
          LODWORD(findSum) = v24;
          max_length = v20->max_length;
          if ( v24 >= max_length )
            return v23;
        }
LABEL_31:
        sub_1BCAA3C(Master_object, v18);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  CondType_c *v34; // x0
  int64_t lastUserId; // x22
  __int64 v36; // x1
  CondType_c *v37; // x0
  Il2CppObject *cachedServantEquipIdStrDic; // x0
  __int64 v39; // x1
  UserServantCollectionMaster_o *v40; // x20
  System_Collections_Generic_List_object__o *ServantEquipCollectionList; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v43; // x21
  int v44; // w26
  int v45; // w19
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x23
  void *v54; // x24
  Il2CppClass *v55; // x25
  __int64 v56; // x0
  ServantLimitEntity_o *v57; // x24
  __int64 v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // [xsp+0h] [xbp-B0h]
  int32_t v63; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B15163 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    byte_4B15163 = 1;
  }
  v34 = CondType_TypeInfo;
  memset(&v66, 0, sizeof(v66));
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    v34 = CondType_TypeInfo;
  }
  lastUserId = v34->static_fields->lastUserId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( lastUserId != NetworkManager__get_UserId(0LL) )
  {
    v37 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v36);
      v37 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (Il2CppObject *)v37->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_48:
      sub_1BCAA3C(cachedServantEquipIdStrDic, v36);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v40 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v36);
  if ( !v40 )
    goto LABEL_48;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v40,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0LL);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  v43 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_48;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v44 = targetId / 100;
  v45 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    ServantEquipCollectionList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v63 = 0;
  v66 = v64;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v46 )
      break;
    current = v66.fields._current;
    if ( !v66.fields._current )
      sub_1BCAA3C(v46, v47);
    if ( LODWORD(v66.fields._current[2].monitor) == 2 )
    {
      monitor = v66.fields._current[1].monitor;
      klass = v66.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
      *(_QWORD *)&v67.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v67.fields.fakeValue = klass;
      v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
      if ( !MasterData_object )
        sub_1BCAA3C(v51, (unsigned int)v51);
      v53 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v51,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v53 )
      {
        v55 = v53[1].klass;
        v54 = v53[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
        *(_QWORD *)&v68.fields.currentCryptoKey = v55;
        *(_QWORD *)&v68.fields.fakeValue = v54;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL);
        if ( !v43 )
          sub_1BCAA3C(v56, (unsigned int)v56);
        v57 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v43, v56, 0, 0LL);
        if ( v57
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v53, 0LL)
          && v57->fields.rarity == v45
          && SHIDWORD(current[2].monitor) >= v44 )
        {
          if ( !v62 )
            sub_1BCAA3C(0LL, v58);
          v59 = DataMasterBase_object__object__int___TryGetEntity(
                  v62,
                  &entity,
                  (int32_t)v53[8].monitor,
                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v59 )
            goto LABEL_42;
          if ( !entity )
            sub_1BCAA3C(v59, v60);
          if ( HIDWORD(entity[1].klass) != 3 )
LABEL_42:
            ++v63;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v63;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1517F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1517F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  UserEventRandomMissionMaster_o *v9; // x20
  int32_t v10; // w21
  unsigned __int64 v11; // x22

  if ( (byte_4B1516D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1516D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  v8 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = Master_object;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1BCAA44(Master_object, v7);
      if ( !v9 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v9,
                                                          missionIds->m_Items[v11 + 1],
                                                          0LL);
      if ( Master_object )
        v10 += HIDWORD(Master_object->fields.list);
      LODWORD(v8) = missionIds->max_length;
      if ( (__int64)++v11 >= (int)v8 )
        return v10;
    }
LABEL_16:
    sub_1BCAA3C(Master_object, v7);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__int__o *v9; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B1515D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7, v8);
    byte_4B1515D = 1;
  }
  v9 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, method, v2, v3);
  System_Func_object__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v11);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__int__o *v9; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B15160 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7, v8);
    byte_4B15160 = 1;
  }
  v9 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, method, v2, v3);
  System_Func_object__int____ctor(v9, 0LL, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v11);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__int__o *v9; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B1515B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7, v8);
    byte_4B1515B = 1;
  }
  v9 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, method, v2, v3);
  System_Func_object__int____ctor(v9, 0LL, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v11);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__int__o *v9; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B15177 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v7, v8);
    byte_4B15177 = 1;
  }
  v9 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, method, v2, v3);
  System_Func_object__int____ctor(
    v9,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  return CondType__CountCommonClassServantCollection(
           classId,
           (System_Func_UserServantCollectionEntity__int__o *)v9,
           v11);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CondType___c__DisplayClass158_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int v16; // w21
  System_Func_object__int__o *v17; // x19
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4B1515C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__, v7, v8);
    sub_1BCA7E0(&CondType___c__DisplayClass158_0_TypeInfo, v9, v10);
    byte_4B1515C = 1;
  }
  v11 = (CondType___c__DisplayClass158_0_o *)sub_1BCAA2C(CondType___c__DisplayClass158_0_TypeInfo, method, v2, v3);
  CondType___c__DisplayClass158_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  v16 = targetId / 100;
  v11->fields.friendShipRank = targetId % 100;
  v17 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, v13, v14, v15);
  System_Func_object__int____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
  return CondType__CountCommonClassServantCollection(v16, (System_Func_UserServantCollectionEntity__int__o *)v17, v19);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
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
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v18; // x1
  UserServantCollectionEntity_array *v19; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x23
  __int64 v22; // x26
  int32_t v23; // w22
  UserServantCollectionEntity_o *v24; // x24
  __int64 v25; // x24
  __int64 v26; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B1515F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&level, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B1515F = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = UserServantCollectionMaster__getCollectionList(
                 (UserServantCollectionMaster_o *)Instance,
                 &findSum[1],
                 findSum,
                 0,
                 0,
                 0LL);
    if ( !Instance )
      goto LABEL_27;
    v19 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v19->max_length;
      if ( max_length >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0LL;
        v23 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= max_length )
            sub_1BCAA44(Instance, v18);
          v24 = v19->m_Items[v22];
          if ( !v24 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v19->m_Items[v22], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && v24->fields.maxLv >= level )
          {
            v26 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
            v25 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
            *(_QWORD *)&v29.fields.currentCryptoKey = v26;
            *(_QWORD *)&v29.fields.fakeValue = v25;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v29,
                                                              0LL);
            if ( !v21 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v21,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v23;
          }
          max_length = v19->max_length;
          if ( (int)++v22 >= max_length )
            return v23;
        }
LABEL_27:
        sub_1BCAA3C(Instance, v18);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v13; // x20

  if ( (byte_4B15161 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&level, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15161 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                      (UserServantCollectionMaster_o *)MasterData_object,
                                      (int64_t)Instance,
                                      sarvantId,
                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(Instance, v10);
  }
  v13 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v13->fields.datalist) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int v18; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  __int64 v22; // x26
  int32_t v23; // w23
  int v24; // w29
  UserServantCollectionEntity_o *v25; // x20
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B1515A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B1515A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v18 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    v20 = *(_QWORD *)&CollectionList->max_length;
    if ( v20 )
    {
      if ( (int)v20 >= 1 )
      {
        v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v22 = 0LL;
        v23 = 0;
        v24 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= (unsigned int)v20 )
            sub_1BCAA44(Instance, v17);
          v25 = CollectionList->m_Items[v22];
          if ( !v25 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v22], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
            *(_QWORD *)&v30.fields.currentCryptoKey = v27;
            *(_QWORD *)&v30.fields.fakeValue = v26;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
            if ( !v21 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v21,
                         (int32_t)Instance,
                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v18 && v25->fields.maxLimitCount >= v24 )
              ++v23;
          }
          LODWORD(v20) = CollectionList->max_length;
          if ( (int)++v22 >= (int)v20 )
            return v23;
        }
LABEL_27:
        sub_1BCAA3C(Instance, v17);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CondType___c__DisplayClass189_0_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int v16; // w21
  System_Func_object__int__o *v17; // x19
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4B15176 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_UserServantCollectionEntity__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__, v7, v8);
    sub_1BCA7E0(&CondType___c__DisplayClass189_0_TypeInfo, v9, v10);
    byte_4B15176 = 1;
  }
  v11 = (CondType___c__DisplayClass189_0_o *)sub_1BCAA2C(CondType___c__DisplayClass189_0_TypeInfo, method, v2, v3);
  CondType___c__DisplayClass189_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  v16 = targetId / 100;
  v11->fields.skillLv = targetId % 100;
  v17 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantCollectionEntity__int__TypeInfo, v13, v14, v15);
  System_Func_object__int____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
  return CondType__CountCommonClassServantCollection(v16, (System_Func_UserServantCollectionEntity__int__o *)v17, v19);
}


int32_t __fastcall CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  CondType_c *v5; // x8
  int32_t v6; // w21
  int v7; // w24
  int v8; // w22
  int32_t TARGET_PARAM_NUM; // w9

  v4 = targetParam;
  if ( (byte_4B1515E & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1BCA7E0(&CondType_TypeInfo, func, method);
    byte_4B1515E = 1;
  }
  if ( !v4 )
    goto LABEL_20;
  v5 = *(CondType_c **)&v4->max_length;
  if ( !v5 )
    return 0;
  targetParam = (System_Int32_array *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, func);
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
        sub_1BCAA44(targetParam, func);
      if ( !func )
        break;
      targetParam = (System_Int32_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))func->fields.m_target)(
                                            func->fields.original_method_info,
                                            (unsigned int)v4->m_Items[v7 + 1],
                                            (unsigned int)v4->m_Items[v7 + 2],
                                            *(_QWORD *)&func->fields.extra_arg);
      v5 = CondType_TypeInfo;
      v8 = (int)targetParam;
      if ( !CondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, func);
        v5 = CondType_TypeInfo;
      }
      v6 += v8;
      TARGET_PARAM_NUM = v5->static_fields->TARGET_PARAM_NUM;
      LODWORD(v5) = v4->max_length;
      v7 += TARGET_PARAM_NUM;
      if ( v7 >= (int)v5 )
        return v6;
    }
LABEL_20:
    sub_1BCAA3C(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v7; // x1
  int max_length; // w9
  int v9; // w10
  int32_t v10; // w8
  UserEventBoardGameTokenEntity_o *v11; // x11

  if ( (byte_4B15154 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B15154 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_40798480((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( max_length == v9 )
          sub_1BCAA44(Instance, v7);
        v11 = Instance->m_Items[v9];
        if ( !v11 )
          break;
        ++v9;
        if ( v11->fields.tokenId == tokenId )
          ++v10;
        if ( max_length == v9 )
          return v10;
      }
LABEL_19:
      sub_1BCAA3C(Instance, v7);
    }
    return 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_19;
    return Instance->max_length;
  }
}


int64_t __fastcall CondType__GetEventTotalPoint(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B15142 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15142 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           (int64_t)Instance,
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B15183 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B15183 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1517D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1517D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B15181 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B15181 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v19; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B150D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v12, v13);
    byte_4B150D3 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               targetId,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_19;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_19:
      sub_1BCAA3C(Instance, v15);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_19;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &v19, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v19 )
    goto LABEL_19;
  return v19->fields.num;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *Instance; // x0
  const MethodInfo *v10; // x1
  EventMissionMaster_o *v11; // x19
  __int64 v12; // x8
  System_Int32_array *v13; // x19
  int32_t v14; // w20
  unsigned __int64 v15; // x23
  int32_t v16; // w21

  if ( (byte_4B1510B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1510B = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v11 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
    if ( !v11
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v11, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1BCAA3C(Instance, v10);
    }
    v12 = *(_QWORD *)&Instance->max_length;
    v13 = Instance;
    if ( (int)v12 < 1 )
      return 0;
    v14 = 0;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BCAA44(Instance, v10);
      v16 = v13->m_Items[v15 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v16, v10);
      LODWORD(v12) = v13->max_length;
      ++v15;
      v14 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v15 < (int)v12 );
    return v14;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *Instance; // x0
  const MethodInfo *v10; // x1
  EventMissionMaster_o *v11; // x19
  __int64 v12; // x8
  System_Int32_array *v13; // x19
  int32_t v14; // w20
  unsigned __int64 v15; // x23
  int32_t v16; // w21

  if ( (byte_4B1510C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1510C = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v11 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
    if ( !v11
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v11, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1BCAA3C(Instance, v10);
    }
    v12 = *(_QWORD *)&Instance->max_length;
    v13 = Instance;
    if ( (int)v12 < 1 )
      return 0;
    v14 = 0;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BCAA44(Instance, v10);
      v16 = v13->m_Items[v15 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v16, v10);
      LODWORD(v12) = v13->max_length;
      ++v15;
      v14 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v15 < (int)v12 );
    return v14;
  }
}


int32_t __fastcall CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
{
  int v2; // w8

  if ( cond <= 8 )
  {
    if ( cond == 1 )
    {
      return 36;
    }
    else if ( cond == 8 )
    {
      return 38;
    }
  }
  else
  {
    v2 = cond - 26;
    if ( (unsigned int)(cond - 26) < 0x16 && ((0x30DE41u >> v2) & 1) != 0 )
      return dword_C0D230[v2];
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v20; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x3
  System_Int32_array *v29; // x24
  __int64 v30; // x8
  int32_t v31; // w21
  unsigned __int64 v32; // x25
  bool v33; // w22
  int32_t v34; // w23

  if ( (byte_4B15115 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&groupId, sameGroupQuestIds);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15115 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v20 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)sameGroupQuestIds,
          (int64_t)QuestIdListByGroupId,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (v29 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(Instance, v18);
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
        sub_1BCAA44(Instance, v18);
      v34 = v29->m_Items[v32 + 1];
      if ( v34 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
        Instance = CondType__IsQuestClear_38310172(v34, -1, v33, v28);
        if ( (Instance & 1) != 0 )
        {
          ++v31;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v20 )
            goto LABEL_26;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v20, Instance, v34, 0LL);
          if ( Instance )
          {
            Instance = UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
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
  __int64 v2; // x2

  if ( (byte_4B15119 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B15119 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getTime(0LL) >= condVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15109 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15109 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_13;
  Instance = UserEventMissionCondDetailMaster__TryGetEntity(
               (UserEventMissionCondDetailMaster_o *)MasterData_object,
               &entity,
               Instance,
               condId,
               0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Instance, v10);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15118 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    byte_4B15118 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
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
  int32_t v5; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  CondType_c *v11; // x0
  int64_t v12; // x8
  int32_t PurchaseShopCount; // w0
  bool IsPurchaseShop; // w0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  CondType_c *v19; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v5 = eventId;
  if ( (byte_4B150DA & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B150DA = 1;
  }
  v11 = CondType_TypeInfo;
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
    v11 = CondType_TypeInfo;
  }
  v11->static_fields->EventId = v5;
  if ( condType > 85 )
  {
    if ( condType > 127 )
    {
      v12 = 0LL;
      switch ( condType )
      {
        case 174:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v12;
        case 178:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( !v11->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          switch ( condType )
          {
            case 136:
              if ( !v11->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v12;
            case 139:
              if ( !v11->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
              IsPurchaseShop = CondType__TimeLimitRaidDead(v5, targetId, (const MethodInfo *)condValue);
              goto LABEL_148;
            case 141:
              if ( !v11->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( !v11->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v11);
            default:
              if ( condType != 219 )
                return v12;
              if ( !v11->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
              PurchaseShopCount = CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return PurchaseShopCount;
      }
      return v12;
    }
    switch ( condType )
    {
      case ']':
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      case '_':
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v11);
      case '\x7F':
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
    }
    return 0LL;
  }
  if ( condType <= 46 )
  {
    v12 = 1LL;
    switch ( condType )
    {
      case 0:
        return v12;
      case 1:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return (unsigned int)CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetOpenTime((const MethodInfo *)v11);
      case 22:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        IsPurchaseShop = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
        goto LABEL_148;
      case 29:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
      case 30:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
          v5 = CondType_TypeInfo->static_fields->EventId;
        }
        return CondType__GetSuperBossDamage(targetId, condValue, v5, *(const MethodInfo **)&eventId);
      case 34:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
      case 35:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        IsPurchaseShop = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
LABEL_148:
        v12 = IsPurchaseShop;
        break;
      case 40:
        if ( !v11->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        NetworkManager__get_UserId(0LL);
        v19 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
        return CondType__GetQuestClearPhaseCount((int64_t)v19, targetId, -1, 0, v18);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType == 67 )
    {
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
      return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
    }
    if ( condType == 71 )
    {
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
      return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
    }
    if ( condType != 85 )
      return 0LL;
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&targetId);
    return CondType__GetEventTotalPoint(v5, *(const MethodInfo **)&targetId);
  }
  return v12;
}


int64_t __fastcall CondType__GetProgressNumByTargetIds(
        int32_t condType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t result; // x0
  CondType___c_c *v25; // x0
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct CondType___c_StaticFields *v34; // x0
  PartyOrganizationUtility_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v36; // x0
  __int64 *v37; // x8
  CondType___c_c *v38; // x0
  Il2CppObject *v39; // x21
  struct CondType___c_StaticFields *v40; // x0
  CondType_CountDelegate_o *v41; // x20
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  CondType___c_c *v44; // x0
  Il2CppObject *v45; // x21
  struct CondType___c_StaticFields *static_fields; // x0

  if ( (byte_4B150DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType_CountServantLevelClassNum__, targetIds, method);
    sub_1BCA7E0(&Method_CondType_CountServantLevelIdNum__, v6, v7);
    sub_1BCA7E0(&CondType_TypeInfo, v8, v9);
    sub_1BCA7E0(&CondType_CountDelegate_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_int__int___, v12, v13);
    sub_1BCA7E0(&System_Func_int__int__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v16, v17);
    sub_1BCA7E0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v18, v19);
    sub_1BCA7E0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v20, v21);
    sub_1BCA7E0(&CondType___c_TypeInfo, v22, v23);
    byte_4B150DB = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v44 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds);
          v44 = CondType___c_TypeInfo;
        }
        _9__26_1 = v44->static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44, targetIds);
          v44 = CondType___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v44->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1BCAA2C(
                                                     System_Func_int__int__int__TypeInfo,
                                                     targetIds,
                                                     method,
                                                     v3);
        System_Func_int__int__int____ctor(_9__26_1, v45, Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__26_1 = _9__26_1;
        p__9__26_1 = (PartyOrganizationUtility_o *)&static_fields->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v38 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds);
          v38 = CondType___c_TypeInfo;
        }
        _9__26_1 = v38->static_fields->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38, targetIds);
          v38 = CondType___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v38->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1BCAA2C(
                                                     System_Func_int__int__int__TypeInfo,
                                                     targetIds,
                                                     method,
                                                     v3);
        System_Func_int__int__int____ctor(_9__26_1, v39, Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, 0LL);
        v40 = CondType___c_TypeInfo->static_fields;
        v40->__9__26_2 = _9__26_1;
        p__9__26_1 = (PartyOrganizationUtility_o *)&v40->__9__26_2;
      }
    }
    else
    {
      if ( condType == 158 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, targetIds);
        LODWORD(result) = CondType__CountRandomMissionClearNum(targetIds, (const MethodInfo *)targetIds);
        return (int)result;
      }
      if ( condType != 188 )
        return result;
      v25 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, targetIds);
        v25 = CondType___c_TypeInfo;
      }
      _9__26_1 = v25->static_fields->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_39;
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25, targetIds);
        v25 = CondType___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_1BCAA2C(System_Func_int__int__int__TypeInfo, targetIds, method, v3);
      System_Func_int__int__int____ctor(_9__26_1, v27, Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, 0LL);
      v34 = CondType___c_TypeInfo->static_fields;
      v34->__9__26_0 = _9__26_1;
      p__9__26_1 = (PartyOrganizationUtility_o *)&v34->__9__26_0;
    }
    sub_1BCA784(p__9__26_1, (int64_t)_9__26_1, v28, v29, v30, v31, v32, v33);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_2F1B574 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v36 = (CondType_CountDelegate_o *)sub_1BCAA2C(CondType_CountDelegate_TypeInfo, targetIds, method, v3);
    v37 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v36 = (CondType_CountDelegate_o *)sub_1BCAA2C(CondType_CountDelegate_TypeInfo, targetIds, method, v3);
    v37 = &Method_CondType_CountServantLevelIdNum__;
  }
  v41 = v36;
  CondType_CountDelegate___ctor(v36, 0LL, *v37, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v41, v43);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15103 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15103 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserShopMaster__TryGetEntity((UserShopMaster_o *)MasterData_object, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CondType_c *v13; // x0
  __int64 v14; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v17; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w25
  QuestGroupMaster_o *v20; // x20
  __int64 v21; // x8
  int64_t v22; // x20
  unsigned __int64 v23; // x26
  int32_t v24; // w21
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x22

  if ( (byte_4B1511B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1511B = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v20 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
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
            goto LABEL_27;
          challengeNum = 0;
          v23 = 0LL;
          while ( 1 )
          {
            if ( v23 >= (unsigned int)v21 )
              sub_1BCAA44(Instance, v17);
            v24 = *(_DWORD *)(v22 + 32 + 4 * v23);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                  (UserQuestMaster_o *)MasterData_object,
                                  Instance,
                                  v24,
                                  0LL);
            if ( Instance )
              challengeNum += *(_DWORD *)(Instance + 56);
            LODWORD(v21) = *(_DWORD *)(v22 + 24);
            if ( (__int64)++v23 >= (int)v21 )
              goto LABEL_28;
          }
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v17);
  }
  v13 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_31;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, Instance, condId, 0LL);
  if ( EntityFromId )
  {
    challengeNum = EntityFromId->fields.challengeNum;
    goto LABEL_28;
  }
LABEL_27:
  challengeNum = 0;
LABEL_28:
  if ( challengeNum >= condVal )
    return condVal;
  else
    return challengeNum;
}


int32_t __fastcall CondType__GetQuestClearCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w20
  int64_t Instance; // x0
  __int64 v15; // x1
  QuestGroupMaster_o *v16; // x19
  __int64 v17; // x8
  int64_t v18; // x19
  unsigned __int64 v19; // x25
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v23; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1510A & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1510A = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v16 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
      if ( v16 )
      {
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByEventId(
                              v16,
                              CondType_TypeInfo->static_fields->EventId,
                              0LL);
        if ( Instance )
        {
          v17 = *(_QWORD *)(Instance + 24);
          v18 = Instance;
          if ( (int)v17 < 1 )
            return 0;
          v13 = 0;
          v19 = 0LL;
          while ( 1 )
          {
            if ( v19 >= (unsigned int)v17 )
              sub_1BCAA44(Instance, v15);
            v20 = *(_DWORD *)(v18 + 32 + 4 * v19);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = UserQuestMaster__TryGetEntity(
                         (UserQuestMaster_o *)MasterData_object,
                         &entity,
                         Instance,
                         v20,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
              Instance = CondType__IsQuestClear_38310172(v20, -1, 0, v23);
              v13 += Instance & 1;
            }
            LODWORD(v17) = *(_DWORD *)(v18 + 24);
            if ( (__int64)++v19 >= (int)v17 )
              return v13;
          }
        }
      }
    }
    sub_1BCAA3C(Instance, v15);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_38310172(targetId, -1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CondType_c *v13; // x0
  __int64 v14; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v17; // x1
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w20
  QuestGroupMaster_o *v20; // x20
  __int64 v21; // x8
  int64_t v22; // x21
  unsigned __int64 v23; // x26
  int32_t v24; // w22
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x23

  if ( (byte_4B15112 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15112 = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v20 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
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
            goto LABEL_27;
          ClearNum = 0;
          v23 = 0LL;
          while ( 1 )
          {
            if ( v23 >= (unsigned int)v21 )
              sub_1BCAA44(Instance, v17);
            v24 = *(_DWORD *)(v22 + 32 + 4 * v23);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                  (UserQuestMaster_o *)MasterData_object,
                                  Instance,
                                  v24,
                                  0LL);
            if ( Instance )
            {
              Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += Instance;
            }
            LODWORD(v21) = *(_DWORD *)(v22 + 24);
            if ( (__int64)++v23 >= (int)v21 )
              goto LABEL_28;
          }
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v17);
  }
  v13 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_31;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, Instance, condId, 0LL);
  if ( EntityFromId )
  {
    ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0LL);
    goto LABEL_28;
  }
LABEL_27:
  ClearNum = 0;
LABEL_28:
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
  __int64 v9; // x2
  CondType_c *v10; // x0
  __int64 v11; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  int64_t v13; // x0
  __int64 v14; // x1
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B150E2 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B150E2 = 1;
  }
  v10 = CondType_TypeInfo;
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  v13 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_17;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, v13, targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    v13 = (int64_t)entity;
    if ( !entity )
      goto LABEL_17;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  v13 = (int64_t)entity;
  if ( !entity )
LABEL_17:
    sub_1BCAA3C(v13, v14);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Int32_array *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  System_Int32_array *v15; // x21
  int32_t v16; // w22
  unsigned __int64 v17; // x24
  bool v18; // w20
  int32_t v19; // w23

  if ( (byte_4B15117 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&groupId, isCheckResetFlag);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15117 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  v14 = *(_QWORD *)&Instance->max_length;
  v15 = Instance;
  if ( (int)v14 < 1 )
    return 0;
  v16 = 0;
  v17 = 0LL;
  v18 = isCheckResetFlag;
  do
  {
    if ( v17 >= (unsigned int)v14 )
      sub_1BCAA44(Instance, v12);
    v19 = v15->m_Items[v17 + 1];
    if ( v19 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
      Instance = (System_Int32_array *)CondType__IsQuestClear_38310172(v19, -1, v18, v13);
      v16 += (unsigned __int8)Instance & 1;
    }
    LODWORD(v14) = v15->max_length;
    ++v17;
  }
  while ( (__int64)v17 < (int)v14 );
  return v16;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v15; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4B1511A & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1511A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v15 = (int64_t)Instance;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
  if ( !MasterData_object )
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
             v15,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v13; // x21
  unsigned int v14; // w23
  int32_t v15; // w22
  EventRaidEntity_o *v16; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4B150D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B150D2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = (TotalEventRaidMaster_o *)Instance;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v10);
      v16 = EventRaidEntityArray->m_Items[v14];
      if ( !v16 || !v13 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v13, &entity, targetId, v16->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v16->fields.maxHp )
          ++v15;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v14 >= max_length )
        return v15;
    }
LABEL_20:
    sub_1BCAA3C(Instance, v10);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4B1516C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1516C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t __fastcall CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B150F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B150F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B15141 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B15141 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v13; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  __int64 v16; // x22
  int32_t v17; // w20
  ShopGroupEntity_o *v18; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1513A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1513A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v13 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v16 = 0LL;
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= max_length )
            sub_1BCAA44(Instance, v11);
          v18 = v13->m_Items[v16];
          if ( !v18 || !v15 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v15,
                                       &entity,
                                       v18->fields.shopId,
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = entity;
            if ( !entity )
              break;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)entity, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = entity;
              if ( !entity )
                break;
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut((ShopEntity_o *)entity, 0LL);
              v17 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v13->max_length;
          if ( (int)++v16 >= max_length )
            return v17;
        }
LABEL_22:
        sub_1BCAA3C(Instance, v11);
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

  if ( (byte_4B1511C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, *(_QWORD *)&eventId);
    byte_4B1511C = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
  result = CondType__GetSuperBossDamageValue(eventId, condId, *(const MethodInfo **)&eventId);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t __fastcall CondType__GetSuperBossDamageAll(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v14; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4B1511E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1511E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    v14 = (int64_t)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    if ( MasterData_object )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 (UserSuperBossMaster_o *)MasterData_object,
                 v14,
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
LABEL_22:
    sub_1BCAA3C(Instance, v12);
  }
  Instance = (DataManager_o *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
  if ( !MasterData_object )
    goto LABEL_22;
  result = UserSuperBossMaster__getTotalDamagePoint(
             (UserSuperBossMaster_o *)MasterData_object,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1511D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserSuperBossMaster___, *(_QWORD *)&bossId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1511D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  UserSuperBossMaster__TryGetEntity(
    (UserSuperBossMaster_o *)MasterData_object,
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15144 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15144 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B15110 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15110 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_13:
    sub_1BCAA3C(Instance, v12);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v17 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v18 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v20.fields.currentCryptoKey = v17;
    *(_QWORD *)&v20.fields.fakeValue = v18;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1510D & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B1510D = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsServantGet(condId, method);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1510E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1510E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1510F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1510F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  CondType_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CondType_c *v18; // x8
  int64_t v19; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4B150CA & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B150CA = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v1);
    v7 = CondType_TypeInfo;
  }
  if ( !v7->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v9);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v18 = CondType_TypeInfo;
    v19 = (int64_t)MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
      v18 = CondType_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->uQuestMst, v19, v12, v13, v14, v15, v16, v17);
    v7 = CondType_TypeInfo;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = CondType_TypeInfo;
  }
  return v7->static_fields->uQuestMst;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsAboveEventTradeTotalNum(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UserEventTradeMaster_o *Master_object; // x0

  if ( (byte_4B1518D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, *(_QWORD *)&condNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B1518D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condNum);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( Master_object )
  {
    Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__GetEntity(Master_object, eventId, 0LL);
    if ( Master_object )
      LODWORD(Master_object) = UserEventTradeEntity__GetTotalTradeCount((UserEventTradeEntity_o *)Master_object, 0LL);
  }
  return (int)Master_object >= condNum;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsAchieveLimitedMission(
        int32_t missionId,
        int32_t condNum,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0
  int32_t size; // w8

  if ( (byte_4B1518E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&condNum, *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1518E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__getLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0LL);
  if ( LimitedMissionList )
  {
    size = LimitedMissionList->fields._size;
    LOBYTE(LimitedMissionList) = 0;
    if ( size >= 1 && size >= condNum )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
        if ( Instance )
        {
          LODWORD(LimitedMissionList) = UserEventMissionMaster__getAchiveMissionNum(
                                          (UserEventMissionMaster_o *)Instance,
                                          missionId,
                                          0LL);
          if ( checkType == 2 )
          {
            LOBYTE(LimitedMissionList) = (int)LimitedMissionList <= condNum;
          }
          else if ( checkType == 1 )
          {
            LOBYTE(LimitedMissionList) = (int)LimitedMissionList >= condNum;
          }
          else
          {
            LOBYTE(LimitedMissionList) = (_DWORD)LimitedMissionList == condNum;
          }
          return (char)LimitedMissionList;
        }
      }
LABEL_16:
      sub_1BCAA3C(Instance, v14);
    }
  }
  return (char)LimitedMissionList;
}


bool __fastcall CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15191 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, time, method);
    byte_4B15191 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, time);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1514C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B1514C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1513C & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B1513C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getTime(0LL) >= time;
}


bool __fastcall CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1

  if ( (byte_4B15188 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3, v4);
    byte_4B15188 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v8 )
    sub_1BCAA3C(0LL, v9);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x20
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v17; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v19; // x22
  unsigned __int64 v20; // x25
  int32_t v21; // w24
  int32_t v22; // w21
  int32_t v23; // w23

  if ( (byte_4B15157 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val, isWin);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15157 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                15,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v15 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1BCAA3C(Instance, v14);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v15->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v19 = MasterData_object;
  v20 = 0LL;
  v21 = 0;
  if ( isWin )
    v22 = 128;
  else
    v22 = 256;
  do
  {
    if ( v20 >= (unsigned int)m_CancellationTokenSource )
      sub_1BCAA44(MasterData_object, v17);
    v23 = *((_DWORD *)&v15->fields._DispLog + v20);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v19 )
      goto LABEL_24;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v19, (int64_t)Instance, v23, 0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v22,
                                                 0LL);
      v21 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v21 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
    ++v20;
  }
  while ( (__int64)v20 < (int)m_CancellationTokenSource );
  return v21 >= val;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  DataManager_o *v19; // x21
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v21; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v23; // x23
  unsigned __int64 v24; // x25
  int32_t v25; // w26
  int32_t v26; // w22
  int32_t v27; // w24

  if ( (byte_4B15156 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int___, *(_QWORD *)&val, isWin);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15156 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_30;
  v19 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_2EE04D8 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1BCAA3C(Instance, v18);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v19->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v23 = MasterData_object;
    v24 = 0LL;
    v25 = 0;
    if ( isWin )
      v26 = 128;
    else
      v26 = 256;
    do
    {
      if ( v24 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(MasterData_object, v21);
      v27 = *((_DWORD *)&v19->fields._DispLog + v24);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v23 )
        goto LABEL_30;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v23, (int64_t)Instance, v27, 0LL);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v26,
                                                   0LL);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
          ++v25;
        else
          v25 = 0;
      }
      else
      {
        v25 = 0;
      }
      if ( isBelow )
      {
        if ( v25 > val )
          return 0;
      }
      else if ( v25 >= val )
      {
        return 1;
      }
      LODWORD(m_CancellationTokenSource) = v19->fields.m_CancellationTokenSource;
      ++v24;
    }
    while ( (__int64)v24 < (int)m_CancellationTokenSource );
  }
  return isBelow;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  DataManager_o *v15; // x20
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v17; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v19; // x22
  unsigned __int64 v20; // x25
  int32_t v21; // w24
  int32_t v22; // w21
  int32_t v23; // w23

  if ( (byte_4B15155 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val, isWin);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15155 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_24;
  v15 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1BCAA3C(Instance, v14);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v15->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v19 = MasterData_object;
  v20 = 0LL;
  v21 = 0;
  if ( isWin )
    v22 = 128;
  else
    v22 = 256;
  do
  {
    if ( v20 >= (unsigned int)m_CancellationTokenSource )
      sub_1BCAA44(MasterData_object, v17);
    v23 = *((_DWORD *)&v15->fields._DispLog + v20);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v19 )
      goto LABEL_24;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v19, (int64_t)Instance, v23, 0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v22,
                                                 0LL);
      v21 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v21 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
    ++v20;
  }
  while ( (__int64)v20 < (int)m_CancellationTokenSource );
  return v21 >= val;
}


bool __fastcall CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1518F & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B1518F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getTime(0LL) < time;
}


bool __fastcall CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B15190 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, time, method);
    byte_4B15190 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, time);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4B15153 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, value, method);
    byte_4B15153 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, value);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B15152 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, *(_QWORD *)&kindNum, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15152 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B15151 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B15151 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15168 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, *(_QWORD *)&giftId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15168 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_13;
  if ( !UserBoxGachaMaster__TryGetEntity(
          (UserBoxGachaMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          gachaId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Instance, v12);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsClearLatestQuestPhase(
        int32_t questId,
        int64_t phase,
        bool isEqual,
        const MethodInfo *method)
{
  int v5; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  CondType_c *v11; // x0
  int32_t QuestClearPhaseCount; // w0

  v5 = phase;
  if ( (byte_4B1518C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, phase, isEqual);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B1518C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, phase);
  NetworkManager__get_UserId(0LL);
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  QuestClearPhaseCount = CondType__GetQuestClearPhaseCount((int64_t)v11, questId, -1, 1, v10);
  if ( isEqual )
    return QuestClearPhaseCount == v5;
  else
    return QuestClearPhaseCount != v5;
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int64_t UserId; // x20

  if ( (byte_4B15149 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B15149 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsCommandCodeGet_38367504(UserId, commandCodeId, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCommandCodeGet_38367504(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1514A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B1514A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1514E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1514E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4B1517E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetCount, method);
    byte_4B1517E = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetCount);
  return CondType__CountExchangeServantMaxLimit(eventId, *(const MethodInfo **)&targetCount) >= targetCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetFriendShipRank(
        int32_t eventId,
        int32_t targetFriendShipRank,
        const MethodInfo *method)
{
  if ( (byte_4B15182 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank, method);
    byte_4B15182 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetLevel(
        int32_t eventId,
        int32_t targetLevel,
        const MethodInfo *method)
{
  if ( (byte_4B1517C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetLevel, method);
    byte_4B1517C = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetLevel);
  return CondType__GetExchangeServantHighestLevel(eventId, *(const MethodInfo **)&targetLevel) >= targetLevel;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetSkillLevel(
        int32_t eventId,
        int32_t targetSkillLevel,
        const MethodInfo *method)
{
  if ( (byte_4B15180 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetSkillLevel, method);
    byte_4B15180 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetSkillLevel);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1517A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_HeelPortraitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B1517A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)UserHeelPortraitMaster__TryGetEntity(
                                    (UserHeelPortraitMaster_o *)Master_object,
                                    &entity,
                                    eventId,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      heelPortraitIds = entity->fields.heelPortraitIds;
      if ( heelPortraitIds )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_15:
    sub_1BCAA3C(Master_object, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteUserGameCommonValue(
        int32_t no,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v14; // x1
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15189 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGameCommonMaster___, *(_QWORD *)&num, *(_QWORD *)&checkType);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B15189 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&num);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_18;
  UserId = UserGameCommonMaster__TryGetEntity((UserGameCommonMaster_o *)Master_object, &entity, UserId, no, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_12;
    }
LABEL_18:
    sub_1BCAA3C(UserId, v14);
  }
  value = 0;
LABEL_12:
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t Time_39269384; // x0
  __int64 v8; // x1
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8

  if ( (byte_4B1516E & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, *(_QWORD *)&condNum, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B1516E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condNum);
  v11.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39269384 = NetworkManager__getTime_39269384(v11, 0LL);
  dateData = NetworkManager__getDateTime_39270164(Time_39269384 - 3600 * condNum, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8);
  v12.fields._dateData = (uint64_t)&dateData;
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek(v12, 0LL) + 1)) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15128 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15128 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *EntityListFromDay; // x23
  __int64 v28; // x25
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  float v32; // s0
  int64_t v33; // x22
  CondType_c *v34; // x0
  float v35; // s1
  bool v36; // cc
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF
  int64_t maxHpSum; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B15185 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B15185 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1BCAA3C(Instance, v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    EntityListFromDay,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v28 = 0LL;
  for ( i = v39; ; v28 += (__int64)i.fields._current[1].monitor )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v29 )
      break;
    if ( !i.fields._current )
      sub_1BCAA3C(v29, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v32 = 0.0;
    if ( v28 >= 1 )
    {
      v33 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v34 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v31);
          v34 = CondType_TypeInfo;
        }
        v32 = (float)((float)v28 / (float)v33) * (float)v34->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v35 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v36 = v32 < v35;
        if ( isIncludingEquals )
          return !v36;
        return !v36;
      }
      return v32 == v35;
    }
    if ( isIncludingEquals )
      return v32 <= v35;
    else
      return v32 < v35;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v36 = v28 < num;
        if ( isIncludingEquals )
          return !v36;
        return !v36;
      }
      return v28 == num;
    }
    if ( isIncludingEquals )
      return v28 <= num;
    else
      return v28 < num;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v21; // x25
  int v22; // w28
  __int64 v23; // x27
  __int64 v24; // x26
  EventRaidEntity_o *v25; // x29
  float v26; // s0
  CondType_c *v27; // x0
  float v28; // s1
  bool v29; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B15186 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15186 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1BCAA3C(Instance, v18);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v24 = 0LL;
    v23 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v26 = 0.0;
      if ( v23 >= 1 && v24 >= 1 )
      {
        v27 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
          v27 = CondType_TypeInfo;
        }
        v26 = (float)((float)v24 / (float)v23) * (float)v27->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v28 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          v29 = v26 < v28;
          if ( isIncludingEquals )
            return !v29;
          return !v29;
        }
        return v26 == v28;
      }
      if ( isIncludingEquals )
        return v26 <= v28;
      else
        return v26 < v28;
    }
  }
  else
  {
    v21 = (TotalEventRaidMaster_o *)Instance;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)max_length )
        sub_1BCAA44(Instance, v18);
      v25 = EventRaidEntityArrayFromEventId->m_Items[v22];
      if ( !v25 || !v21 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v21, &entity, eventId, v25->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
        v23 += v25->fields.maxHp;
        v24 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v22;
    }
    while ( v22 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      v29 = v24 < num;
      if ( isIncludingEquals )
        return !v29;
      return !v29;
    }
    return v24 == num;
  }
  if ( isIncludingEquals )
    return v24 <= num;
  else
    return v24 < num;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseEntity_o *Entity; // x0
  __int64 v14; // x1
  QuestPhaseEntity_o *v15; // x19
  QuestPhaseMaster_c *v16; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v18; // x19

  if ( (byte_4B15146 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&phase, method);
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15146 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v15 = Entity;
    v16 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo, v14);
      v16 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v15, v16->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v18 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.lookup;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v18, 0LL);
      }
LABEL_13:
      sub_1BCAA3C(Instance, v12);
    }
  }
  return 0;
}


bool __fastcall CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *UserId; // x0
  __int64 v8; // x1
  int64_t v9; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v11; // x1
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  UserQuestEntity_o *v15; // x21
  __int64 v16; // x1
  bool IsQuestClear_38310172; // w8
  int64_t updatedAt; // x20
  int64_t Time_39269384; // x20
  System_DateTime_o v21; // 0:x0.8

  if ( (byte_4B1518A & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, elapsedTime, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B1518A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, elapsedTime);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v9 = (int64_t)UserId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_1BCAA3C(0LL, v11);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9, questId, 0LL);
  if ( EntityFromId )
  {
    v15 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
    IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, v14);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_38310172 )
    {
      updatedAt = v15->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
      v21.fields._dateData = NetworkManager__getServerDateTime_39270492(updatedAt, 0LL).fields._dateData;
      Time_39269384 = NetworkManager__getTime_39269384(v21, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_39269384 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B15147 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15147 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
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
  unsigned __int64 v7; // x23
  int32_t v8; // w22
  int32_t v9; // w21

  v4 = targetIds;
  if ( (byte_4B15162 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetNum, method);
    byte_4B15162 = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum);
      v6 = CondType__CountEquipRarityLevelNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = v4->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
    LOBYTE(v6) = v8 >= targetNum;
  }
  return v6;
}


bool __fastcall CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B150FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B150FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1512C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1512C = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Instance, v11);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1512B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1512B = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_13:
      sub_1BCAA3C(Instance, v11);
    if ( (__int64)Instance < (__int64)entity[6].klass )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CondType_c *v9; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B1512D & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&rate, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1512D = 1;
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&rate);
    v9 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v9->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CondType_c *v11; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1

  if ( (byte_4B1512E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&rank, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1512E = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&rank);
    v11 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v11->static_fields->EVENT_RACE_DEVIDER;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&rank);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v15);
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
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w22
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  int32_t klass_high; // w20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B15179 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v15, v16);
    byte_4B15179 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v18);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      EntityList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v22) )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v21 )
        break;
      if ( !v25.fields._current )
        sub_1BCAA3C(v21, v22);
      klass_high = HIDWORD(v25.fields._current[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CondType_c *v9; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B15124 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15124 = 1;
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
    v9 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v9->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CondType_c *v9; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B15123 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15123 = 1;
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal);
    v9 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v9->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
  CondType___c__DisplayClass115_0_o *v19; // x22
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  System_Int32_array *RankDatas; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_int__o *v26; // x23
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  int32_t v29; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15133 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, *(_QWORD *)&termId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v9, v10);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__, v15, v16);
    sub_1BCA7E0(&CondType___c__DisplayClass115_0_TypeInfo, v17, v18);
    byte_4B15133 = 1;
  }
  goalTime = 0LL;
  v19 = (CondType___c__DisplayClass115_0_o *)sub_1BCAA2C(
                                               CondType___c__DisplayClass115_0_TypeInfo,
                                               *(_QWORD *)&termId,
                                               *(_QWORD *)&groupId,
                                               method);
  CondType___c__DisplayClass115_0___ctor(v19, 0LL);
  if ( !v19
    || (v19->fields.groupId = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v21);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v26 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v23, v24, v25);
  System_Predicate_int____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    0LL);
  v29 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v29 < 1 )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v29, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15131 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15131 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_12;
    klass_high = HIDWORD(entity[1].klass);
  }
  else
  {
    klass_high = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, klass_high, 0LL) == groupId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceRankedScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t flagId; // w20

  if ( (byte_4B15134 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&termId, *(_QWORD *)&rank);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventScriptMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15134 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v15);
  }
  return (char)RaceResultEntity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15132 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flagId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15132 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v15; // w21
  _BOOL4 v16; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = flagId;
  if ( (byte_4B1513F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusMaster___, flagId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1513F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_14;
  Instance = (int64_t)UserEventMaster__GetEntityDefinitely(
                        (UserEventMaster_o *)MasterData_object,
                        Instance,
                        eventId,
                        0LL);
  if ( !Instance )
    goto LABEL_14;
  v15 = *(_DWORD *)(Instance + 32);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v15, 0LL);
  if ( (Instance & 1) == 0 )
  {
    LOBYTE(v16) = 0;
    return v16;
  }
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v12; // x1
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15171 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventMaster___, *(_QWORD *)&bitNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B15171 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&bitNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Master_object, &entity, UserId, eventId, 0LL) )
    return 0;
  UserId = (int64_t)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(UserId, v12);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventTypeStartTimeToEndDate(
        int32_t eventType,
        int32_t overWriteTime,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *v23; // x19
  int64_t v24; // x21
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v27; // w24
  int v28; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v33; // w23
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x26
  __int64 methodPtr_low; // x9
  int64_t v41; // x27
  __int64 v42; // x1
  int32_t Year; // w27
  int32_t Month; // w28
  int32_t Day; // w3
  __int64 v46; // x1
  uint64_t v47; // x26
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  int hour; // [xsp+Ch] [xbp-74h]
  System_DateTime_o dateTime; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x0.8

  if ( (byte_4B15167 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&overWriteTime,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v5, v6);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B15167 = 1;
  }
  dateTime.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_45;
  v23 = *(System_Collections_ObjectModel_Collection_T__o **)(Instance + 32);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  Instance = NetworkManager__getServerTime(0LL);
  if ( !v23 )
LABEL_45:
    sub_1BCAA3C(Instance, v22);
  v24 = Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v23,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  hour = overWriteTime / 10000;
  v27 = overWriteTime / 100 % 100;
  v28 = overWriteTime % 100;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v33 & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_21;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_21:
      v37 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
            Enumerator,
            *(_QWORD *)(v37 + 8));
    v39 = v38;
    if ( v38 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo )
      {
        sub_1BCACFC(v38);
        goto LABEL_45;
      }
      if ( *(_DWORD *)(v38 + 24) == eventType )
      {
        v41 = *(_QWORD *)(v38 + 96);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, EventEntity_TypeInfo);
        dateData = NetworkManager__getDateTime_39270164(v41, 0LL).fields._dateData;
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v42);
        v56.fields._dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v56, 0LL);
        v57.fields._dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v57, 0LL);
        v58.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v58, 0LL);
        v59.fields._dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_63079992(v59, Year, Month, Day, hour, v27, v28, 0LL);
        if ( *(_QWORD *)(v39 + 88) <= v24 )
        {
          v47 = dateTime.fields._dateData;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46);
          v60.fields._dateData = v47;
          if ( v24 <= NetworkManager__getTime_39269384(v60, 0LL) )
            goto LABEL_37;
        }
      }
    }
  }
  v33 = 0;
LABEL_37:
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_41;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_41:
    v51 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return v33 & 1;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *ExchangeSvtCampaign; // x0
  char i; // w23
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B15184 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v14, v15);
    byte_4B15184 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_19;
  ExchangeSvtCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                       (EventCampaignMaster_o *)Master_object,
                                                                       0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    ExchangeSvtCampaign,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= LODWORD(v24.fields._current[1].klass) == targetId )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v20 )
      break;
    if ( !v24.fields._current )
      sub_1BCAA3C(v20, v21);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !Master_object )
LABEL_19:
    sub_1BCAA3C(Master_object, v17);
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(
                                  (UserExchangeSvtMaster_o *)Master_object,
                                  targetId,
                                  0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4B150D4 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, method);
    byte_4B150D4 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
  return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&condValue) >= condValue;
}


bool __fastcall CondType__IsLimitCountCondType(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 103) < 3 || (unsigned int)(condType - 150) < 3;
}


bool __fastcall CondType__IsLimitedPeriodVoiceChangeTypeOn(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t Value_39773052; // w0

  if ( (byte_4B1516F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8364/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v6, v7);
    byte_4B1516F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  Value_39773052 = ConstantMaster__GetValue_39773052(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8364/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_39773052 != 0 && Value_39773052 == targetId;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15108 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15108 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserEventMissionMaster__TryGetEntity(
               (UserEventMissionMaster_o *)MasterData_object,
               &entity,
               Instance,
               condId,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


bool __fastcall CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v18; // x1
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15106 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B15106 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_19;
  if ( UserEventMissionMaster__TryGetEntity(
         (UserEventMissionMaster_o *)MasterData_object,
         &entity,
         Instance,
         condId,
         0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          condId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_19;
    Instance = EventMissionEntity__IsDaily((EventMissionEntity_o *)Instance, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_15;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_19;
    Instance = UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
    if ( (Instance & 1) != 0 )
    {
LABEL_15:
      if ( entity )
        return (entity->fields.missionProgressType & 0xFFFFFFFE) == 4;
LABEL_19:
      sub_1BCAA3C(Instance, v15);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15107 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15107 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserEventMissionMaster__TryGetEntity(
               (UserEventMissionMaster_o *)MasterData_object,
               &entity,
               Instance,
               condId,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4B15105 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15105 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  Entity = UserEventMissionCondDetailMaster__GetEntity(
             (UserEventMissionCondDetailMaster_o *)MasterData_object,
             (int64_t)Instance,
             condId,
             0LL);
  if ( Entity )
    LOBYTE(Entity) = Entity->fields.progressNum >= condVal;
  return (char)Entity;
}


bool __fastcall CondType__IsMultiTargetParamCond(int32_t condType, const MethodInfo *method)
{
  _BOOL8 v2; // x0

  if ( (unsigned int)(condType - 148) > 0x2B )
    LOBYTE(v2) = 0;
  else
    return (0xD0000000403uLL >> ((unsigned __int8)condType + 108)) & 1;
  return v2;
}


bool __fastcall CondType__IsNotCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1514B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1514B = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v10);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  bool v10; // w22
  __int64 v11; // x1
  CondType_c *v12; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1512F & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventTerm, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1512F = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventTerm);
  v10 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v12 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
      v12 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v12->static_fields->EVENT_RACE_DEVIDER;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v15);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0LL);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
        int32_t questGroupId,
        int32_t eventTerm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  bool v14; // w21
  __int64 v15; // x1
  CondType_c *v16; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int32_t Value; // w20
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15130 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventTerm, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceMaster___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, v12, v13);
    byte_4B15130 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventTerm);
  v14 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v16 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
      v16 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v16->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11077/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_object )
LABEL_14:
      sub_1BCAA3C(Instance, v20);
    return EventRaceMaster__GetGoaledTeamCount(
             (EventRaceMaster_o *)MasterData_object,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0LL) < Value;
  }
  return v14;
}


bool __fastcall CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x19
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v15; // x8

  if ( (byte_4B1511F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1511F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v12 = Instance;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*(_DWORD *)(v12 + 24) )
        sub_1BCAA44(Instance, v11);
      v15 = *(_QWORD *)(v12 + 32);
      if ( v15 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)MasterData_object,
                                Instance,
                                *(_DWORD *)(v15 + 20),
                                0LL);
          if ( Instance )
            return *(_DWORD *)(Instance + 28) > 0;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(Instance, v11);
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
  if ( (byte_4B15113 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&condVal);
    byte_4B15113 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
  if ( v8 <= 1 )
    v8 = 1;
  return CondType__GetNotQuestGoupClearCount(
           questId,
           groupId,
           sameGroupQuestIds,
           isCheckResetFlag,
           (const MethodInfo *)isCheckResetFlag) < v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotQuestGroupClear_38366104(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t v10; // w21
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v14; // x4
  int32_t v15; // w19
  int32_t monitor; // w20
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  questId = targetId;
  if ( (byte_4B15114 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15114 = 1;
  }
  sameGroupQuestIds = 0LL;
  entity = 0LL;
  if ( condValue <= 1 )
    v10 = 1;
  else
    v10 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1BCAA3C(Instance, v12);
  if ( HIDWORD(entity[1].klass) != 26 )
    return 0;
  v15 = questId;
  monitor = (int32_t)entity[1].monitor;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
  return CondType__GetNotQuestGoupClearCount(v15, monitor, &sameGroupQuestIds, 1, v14) >= v10;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B15120 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15120 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v10);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  bool v11; // w22
  UserShopMaster_o *v12; // x20
  unsigned __int64 v13; // x23
  int32_t v14; // w21

  if ( (byte_4B15121 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15121 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_15;
  v10 = *(_QWORD *)&values->max_length;
  v11 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v12 = (UserShopMaster_o *)Instance;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
        sub_1BCAA44(Instance, v9);
      v14 = values->m_Items[v13 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v12 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v12, Instance, v14, 0LL);
      if ( !Instance )
        break;
      if ( *(_DWORD *)(Instance + 28) )
      {
        LODWORD(v10) = values->max_length;
        v11 = (__int64)++v13 < (int)v10;
        if ( (__int64)v13 < (int)v10 )
          continue;
      }
      return v11;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v9);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        bool isCollection,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
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
  char IsQuestClear; // w0
  int32_t v28; // w2
  bool v29; // w2
  int32_t v30; // w0
  int32_t v31; // w1
  __int64 v32; // x1
  const MethodInfo *v33; // x5
  int64_t UserId; // x21
  bool v35; // w2
  int32_t v36; // w0
  int32_t v37; // w1
  CondType_c *v38; // x0
  __int64 v39; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v42; // x1
  int32_t ChallengeCountsFromId; // w0
  bool v44; // w3
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w1
  int32_t v48; // w0
  bool v49; // w2
  int32_t v50; // w0
  int32_t v51; // w1
  bool IsPurchaseShop; // w0
  CondType_c *v53; // x0
  __int64 v54; // x1
  UserQuestMaster_o *v55; // x21
  int32_t ClearCountsFromId; // w0
  CondType_c *v57; // x0
  __int64 v58; // x1
  UserQuestMaster_o *v59; // x21
  int32_t v60; // w0
  CondType_c *v61; // x0
  __int64 v62; // x1
  UserQuestMaster_o *v63; // x21
  bool v64; // zf
  CondType_c *v65; // x0
  __int64 v66; // x1
  UserQuestMaster_o *v67; // x21
  bool v68; // cc
  __int64 v69; // x1
  const MethodInfo *v70; // x5
  int64_t v71; // x21
  __int64 v72; // x1
  const MethodInfo *v73; // x5
  int64_t v74; // x21
  int64_t EventPointNoGroup; // x0
  int32_t v76; // w1
  int32_t v77; // w2
  bool v78; // w3
  __int64 v79; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v81; // x1
  Il2CppObject *v82; // x21
  int64_t Point; // x0
  __int64 v84; // x1
  Il2CppObject *v85; // x21
  bool v86; // cc
  __int64 v87; // x1
  Il2CppObject *v88; // x21
  __int64 v89; // x1
  Il2CppObject *v90; // x21
  __int64 v91; // x1
  Il2CppObject *v92; // x21
  __int64 v93; // x1
  Il2CppObject *v94; // x21
  __int64 v95; // x8
  CondType_c *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x21
  __int64 v99; // x1
  Il2CppObject *v100; // x21
  bool v101; // w2
  int32_t v102; // w0
  int32_t v103; // w1
  bool v104; // w2
  int32_t v105; // w0
  int32_t v106; // w1
  bool v107; // w3
  bool v108; // w2
  int32_t v109; // w0
  int32_t v110; // w1
  CondType_c *v111; // x0
  int32_t v112; // w2
  bool v113; // w4
  int32_t v114; // w0
  int32_t v115; // w1
  bool v116; // w3
  int32_t v117; // w2
  bool v118; // w4
  int32_t v119; // w0
  int32_t v120; // w1
  bool v121; // w3
  int32_t v122; // w2
  CondType_c *v123; // x0
  BattleVoicePlayCondArgs_o *v124; // x0
  int32_t v125; // w1
  int32_t v126; // w2
  bool v127; // w3
  int32_t v128; // w2
  bool v129; // w2
  int32_t v130; // w0
  int64_t v131; // x1
  int32_t v132; // w2
  __int64 v134; // x1
  Il2CppObject *Master_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B150CB & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B150CB = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0LL;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v33);
      return IsQuestClear & 1;
    case 2:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantLevel_38307808(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v28 = 1;
      goto LABEL_321;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v29 = 1;
      v30 = targetId;
      v31 = condValue;
      goto LABEL_305;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEvent(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsArrivalDate(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsPurchaseQpShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsPurchaseStoneShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 16:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsNotQuestGroupClear(0, targetId, condValue, &sameGroupQuestIds, 1, method);
      return IsQuestClear & 1;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v35 = 1;
      v36 = targetId;
      v37 = condValue;
      goto LABEL_73;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v36 = targetId;
      v37 = condValue;
      v35 = 0;
LABEL_73:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v36, v37, v35, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v38 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v38);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_680;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, Instance, targetId, 0LL);
      goto LABEL_517;
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v44 = 1;
      v45 = targetId;
      v46 = condValue;
      goto LABEL_173;
    case 35:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v47 = 1;
      v48 = targetId;
      goto LABEL_628;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v49 = 1;
      v50 = targetId;
      v51 = condValue;
      goto LABEL_216;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 42:
      v53 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v55 = CondType__GetUserQuestMaster((const MethodInfo *)v53);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v55 )
        goto LABEL_680;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v55, Instance, targetId, 0LL);
      goto LABEL_122;
    case 43:
      v57 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v59 = CondType__GetUserQuestMaster((const MethodInfo *)v57);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v59 )
        goto LABEL_680;
      v60 = UserQuestMaster__getChallengeCountsFromId(v59, Instance, targetId, 0LL);
      goto LABEL_129;
    case 44:
      v61 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v63 = CondType__GetUserQuestMaster((const MethodInfo *)v61);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v62);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v63 )
        goto LABEL_680;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v63, Instance, targetId, 0LL);
LABEL_122:
      v64 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_677;
    case 45:
      v65 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v67 = CondType__GetUserQuestMaster((const MethodInfo *)v65);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v67 )
        goto LABEL_680;
      v60 = UserQuestMaster__getClearCountsFromId(v67, Instance, targetId, 0LL);
LABEL_129:
      v68 = v60 <= (int)condValue;
      goto LABEL_263;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      v71 = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v69);
      IsQuestClear = CondType__IsQuestPhaseClear(v71, targetId, condValue, -1, 0, v70);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      v74 = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v72);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v74, targetId, condValue, -1, 0, v73);
      goto LABEL_667;
    case 48:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventPointGroupWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 49:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 50:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestAvailable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 51:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestGroupAvailable(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 52:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 54:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 55:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 56:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantGetBeforeEventEnd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 57:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestClear_38310172(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v45 = targetId;
      v46 = condValue;
      v44 = 0;
LABEL_173:
      IsQuestClear = CondType__IsQuestGroupClear(0, v45, v46, v44, (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 59:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventGroupPointRatioInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 60:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventGroupRankInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 61:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotAllGroupGoal(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 62:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventRaceGroupTotalWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 63:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 64:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 66:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsSvtRecoverd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 67:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsShopReleased(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 68:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0LL);
      goto LABEL_256;
    case 69:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsVoicePlayCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 71:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__checkCondTypeRaidGroupAlive(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 72:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v50 = targetId;
      v51 = condValue;
      v49 = 0;
LABEL_216:
      IsPurchaseShop = CondType__IsQuestClear_38310172(v50, v51, v49, (const MethodInfo *)isCollection);
      goto LABEL_667;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v76 = targetId;
      v77 = condValue;
      v78 = 0;
      goto LABEL_583;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 80:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 81:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsPlayerGenderType(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 82:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 83:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v79);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_680;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            Instance,
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_256;
    case 84:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v82 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v81);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v82 )
        goto LABEL_680;
      Point = UserEventPointMaster__GetPoint((UserEventPointMaster_o *)v82, Instance, targetId / 100, targetId, 0LL);
      goto LABEL_262;
    case 85:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v85 )
        goto LABEL_680;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v85,
                            Instance,
                            targetId,
                            -1,
                            0LL);
LABEL_256:
      v86 = EventPointNoGroup < condValue;
      goto LABEL_518;
    case 86:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v87);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v88 )
        goto LABEL_680;
      Point = UserEventPointMaster__GetEventPointTotal((UserEventPointMaster_o *)v88, Instance, targetId, -1, 0LL);
LABEL_262:
      v68 = Point <= condValue;
LABEL_263:
      IsQuestClear = v68;
      return IsQuestClear & 1;
    case 87:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v90 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v89);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v90 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v90, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v86 = *(int *)(Instance + 28) < condValue;
      goto LABEL_518;
    case 88:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v92 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v91);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v92 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v92, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      IsQuestClear = *(int *)(Instance + 28) <= condValue;
      return IsQuestClear & 1;
    case 89:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v94 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v94 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v94, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v95 = *(int *)(Instance + 32);
      goto LABEL_676;
    case 90:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 93:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v96 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v96);
      return IsQuestClear & 1;
    case 96:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 97:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v30 = targetId;
      v31 = condValue;
      v29 = 0;
LABEL_305:
      IsQuestClear = CondType__IsServantFriendship(v30, v31, v29, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 100:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 101:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 102:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsServantLimit_38307964(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v28 = 2;
LABEL_321:
      IsQuestClear = CondType__IsServantLimit_38307964(targetId, condValue, v28, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 106:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsPlayedNotMeetsScript(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 107:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 108:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsNotCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 109:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsAllUserBoxGachaCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 110:
    case 111:
    case 112:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsTotalTdLvCond(condType, targetId, condValue, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 113:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCommonRelease(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 116:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v98 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v97);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v98 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v98, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v95 = *(int *)(Instance + 28);
      goto LABEL_676;
    case 117:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBoardGameTokenHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 118:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBoardGameTokenGroupHaving(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 119:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 120:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 123:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v100 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v99);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v100 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v100, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      IsQuestClear = *(int *)(Instance + 28) != condValue;
      return IsQuestClear & 1;
    case 127:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBoardGameTokenGetNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 128:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v101 = 1;
      v102 = targetId;
      v103 = condValue;
      goto LABEL_376;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v102 = targetId;
      v103 = condValue;
      v101 = 0;
LABEL_376:
      IsQuestClear = CondType__IsBattleLineReusltCount(v102, v103, v101, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v104 = 1;
      v105 = targetId;
      v106 = condValue;
      goto LABEL_383;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v105 = targetId;
      v106 = condValue;
      v104 = 0;
LABEL_383:
      v107 = 0;
      goto LABEL_390;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v104 = 1;
      v107 = 1;
      v105 = targetId;
      v106 = condValue;
      goto LABEL_390;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v107 = 1;
      v105 = targetId;
      v106 = condValue;
      v104 = 0;
LABEL_390:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(
                       v105,
                       v106,
                       v104,
                       v107,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 134:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v108 = 1;
      v109 = targetId;
      v110 = condValue;
      goto LABEL_397;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v109 = targetId;
      v110 = condValue;
      v108 = 0;
LABEL_397:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v109, v110, v108, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 137:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__checkRaidTimeLimitOver(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 138:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__TimeLimitRaidDead(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 140:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__RaidBattleProgressAbove(targetId, (float)condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 141:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 143:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v111 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v111);
      return IsQuestClear & 1;
    case 145:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 146:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 147:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsPurchaseValidShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 153:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventTypeStartTimeToEndDate(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 154:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 155:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 156:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsLimitedPeriodVoiceChangeTypeOn(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 157:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsStartRandomMission(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 158:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__GetRandomMissionClearNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 162:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_680;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_517;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_680;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
LABEL_517:
      v86 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_518;
    case 168:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 174:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_517;
    case 175:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsSuperBossDamageAbove(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 176:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsSuperBossDamageBellow(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 177:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventMissionGroupClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 178:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 179:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 180:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 181:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 182:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 183:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 184:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 185:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 187:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 188:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetLevel(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 189:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteExchangeServantMaxLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 190:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetSkillLevel(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 191:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetFriendShipRank(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 192:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsExchangeSvtBuff(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 193:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 1;
      goto LABEL_542;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 2;
LABEL_542:
      v113 = 1;
      v114 = targetId;
      v115 = condValue;
      v116 = 0;
      goto LABEL_564;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 1;
      goto LABEL_549;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 2;
LABEL_549:
      v118 = 1;
      v119 = targetId;
      v120 = condValue;
      v121 = 0;
      goto LABEL_579;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 1;
      goto LABEL_556;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 2;
LABEL_556:
      v116 = 1;
      v113 = 1;
      v114 = targetId;
      v115 = condValue;
      goto LABEL_564;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 2;
      goto LABEL_563;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v112 = 1;
LABEL_563:
      v116 = 1;
      v114 = targetId;
      v115 = condValue;
      v113 = 0;
LABEL_564:
      IsQuestClear = CondType__IsDeadRaidDay(v114, v115, v112, v116, v113, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 1;
      goto LABEL_571;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 2;
LABEL_571:
      v121 = 1;
      v118 = 1;
      v119 = targetId;
      v120 = condValue;
      goto LABEL_579;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 2;
      goto LABEL_578;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v117 = 1;
LABEL_578:
      v121 = 1;
      v119 = targetId;
      v120 = condValue;
      v118 = 0;
LABEL_579:
      IsQuestClear = CondType__IsDeadRaidGroup(v119, v120, v117, v121, v118, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v78 = 1;
      v76 = targetId;
      v77 = condValue;
LABEL_583:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v76, v77, v78, (const MethodInfo *)battleCondArgs);
      goto LABEL_667;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v122 = 1;
      goto LABEL_590;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v122 = 2;
LABEL_590:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v122, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v123 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = ((_DWORD)condValue == 0) ^ CondType__IsAuthTDAccelerate((const MethodInfo *)v123);
      return IsQuestClear & 1;
    case 209:
      if ( !battleCondArgs )
        goto LABEL_663;
      v124 = battleCondArgs;
      v125 = targetId;
      v126 = condValue;
      v127 = 0;
      goto LABEL_598;
    case 210:
      if ( !battleCondArgs )
        goto LABEL_663;
      v127 = 1;
      v124 = battleCondArgs;
      v125 = targetId;
      v126 = condValue;
LABEL_598:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v124, v125, v126, v127, 0LL);
      return IsQuestClear & 1;
    case 211:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v128 = 1;
      goto LABEL_608;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v128 = 2;
LABEL_608:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(
                       targetId,
                       condValue,
                       v128,
                       (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 214:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 215:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 216:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, 0LL, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v129 = 1;
      v130 = targetId;
      v131 = condValue;
      goto LABEL_624;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v130 = targetId;
      v131 = condValue;
      v129 = 0;
LABEL_624:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v130, v131, v129, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v48 = targetId;
      v47 = condValue;
LABEL_628:
      IsQuestClear = CondType__IsPurchaseShop(v48, v47, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 220:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsAboveEventTradeTotalNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 221:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v132 = 2;
      goto LABEL_638;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      v132 = 1;
LABEL_638:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v132, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 229:
      Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_680;
      IsQuestClear = *(_DWORD *)(Instance + 172) < (int)condValue;
      return IsQuestClear & 1;
    case 230:
      Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_680;
      v86 = *(_DWORD *)(Instance + 172) < (int)condValue;
LABEL_518:
      IsQuestClear = !v86;
      return IsQuestClear & 1;
    case 231:
      if ( !battleCondArgs )
        goto LABEL_663;
      IsQuestClear = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 232:
      if ( !battleCondArgs )
        goto LABEL_663;
      IsQuestClear = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 233:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsBeforeQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 234:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear = CondType__IsAfterQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 235:
      if ( !battleCondArgs )
        goto LABEL_663;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                         battleCondArgs,
                         targetId,
                         0LL);
      goto LABEL_667;
    case 236:
      if ( battleCondArgs )
      {
        IsPurchaseShop = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0LL);
LABEL_667:
        IsQuestClear = !IsPurchaseShop;
      }
      else
      {
LABEL_663:
        IsQuestClear = 0;
      }
      return IsQuestClear & 1;
    case 237:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&targetId);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v134);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !Master_object
        || (Instance = (int64_t)UserEventMaster__GetEntityDefinitely(
                                  (UserEventMaster_o *)Master_object,
                                  Instance,
                                  targetId,
                                  0LL)) == 0 )
      {
LABEL_680:
        sub_1BCAA3C(Instance, v42);
      }
      v95 = *(int *)(Instance + 48);
LABEL_676:
      v64 = v95 == condValue;
LABEL_677:
      IsQuestClear = v64;
      return IsQuestClear & 1;
    default:
      return IsQuestClear & 1;
  }
}


bool __fastcall CondType__IsOpenBattlePoint(
        int32_t condType,
        int32_t targetId,
        int32_t condValue,
        BattleServantData_o *battleServantData,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0

  if ( !battleServantData )
    goto LABEL_6;
  BattlePointData = BattleServantData__GetBattlePointData(battleServantData, targetId, 0LL);
  if ( BattlePointData )
  {
    if ( condType == 226 )
    {
      LOBYTE(BattlePointData) = BattlePointData->fields.value <= condValue;
      return (char)BattlePointData;
    }
    if ( condType == 225 )
    {
      LOBYTE(BattlePointData) = BattlePointData->fields.value >= condValue;
      return (char)BattlePointData;
    }
LABEL_6:
    LOBYTE(BattlePointData) = 0;
  }
  return (char)BattlePointData;
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
  __int64 v12; // x2
  bool IsQuestClear_38310172; // w0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  int64_t v17; // x23
  __int64 v18; // x1
  const MethodInfo *v19; // x5
  int64_t UserId; // x23

  if ( (byte_4B150CC & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, condValue);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B150CC = 1;
  }
  if ( condType <= 36 )
  {
    if ( condType != 1 )
    {
      if ( condType != 36 )
      {
LABEL_13:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
        return CondType__IsOpen(condType, targetId, condValue, 0, 0LL, method);
      }
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
      IsQuestClear_38310172 = CondType__IsQuestClear_38310172(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_38310172;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
    return CondType__IsQuestClear_38310172(
             targetId,
             beforeClearQuestId,
             isCheckResetFlag,
             *(const MethodInfo **)&beforeClearQuestId);
  }
  else
  {
    if ( condType != 46 )
    {
      if ( condType != 47 )
      {
        if ( condType == 113 )
          return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
                   targetId,
                   beforeClearQuestId,
                   isCheckResetFlag,
                   0LL);
        goto LABEL_13;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
      IsQuestClear_38310172 = CondType__IsQuestPhaseClear(
                                UserId,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                v19);
      return !IsQuestClear_38310172;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&targetId);
    v17 = NetworkManager__get_UserId(0LL);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
    return CondType__IsQuestPhaseClear(v17, targetId, condValue, beforeClearQuestId, isCheckResetFlag, v16);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  bool v15; // w0
  int32_t v16; // w2
  bool result; // w0
  int32_t v18; // w2
  int64_t v19; // x0
  int32_t v20; // w1
  int64_t v21; // x0
  int32_t v22; // w1
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  Il2CppObject v25; // q1
  __int64 v26; // x1
  const MethodInfo *v27; // x5
  int64_t v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]

  if ( (byte_4B150D7 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, userSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B150D7 = 1;
  }
  if ( condType <= 38 )
  {
    v15 = 1;
    switch ( condType )
    {
      case 0:
        return v15;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
        {
          sub_1BCAA3C(Instance, v24);
        }
        v25 = Instance[4];
        *(Il2CppObject *)&v30.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v30.fields.fakeValue = v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
        v29 = v30;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v26);
        return CondType__IsQuestClear(v28, condValue, -1, 0, 0, v27);
      case 6:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsServantLevel(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 7:
        goto LABEL_20;
      case 8:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsServantGet_38347292(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsServantFriendship_38347448(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsServantGroup_38347984(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 11:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
        break;
      case 14:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsPurchaseQpShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 15:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsPurchaseStoneShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 38:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
        break;
      default:
        return 0;
    }
  }
  else
  {
    v15 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
          v19 = userSvtId;
          v20 = condValue;
          v16 = 0;
          return CondType__IsServantLimit(v19, v20, v16, method);
        case 'h':
LABEL_20:
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
          v16 = 1;
          goto LABEL_23;
        case 'i':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
          v16 = 2;
LABEL_23:
          v19 = userSvtId;
          v20 = condValue;
          return CondType__IsServantLimit(v19, v20, v16, method);
      }
      return v15;
    }
    if ( condType == 150 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      v21 = userSvtId;
      v22 = condValue;
      v18 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        v18 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v15;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
        v18 = 2;
      }
      v21 = userSvtId;
      v22 = condValue;
    }
    return CondType__IsServantLimitImage(v21, v22, v18, method);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Instance; // x0
  __int64 v19; // x1
  EventRaidMaster_o *v20; // x25
  __int64 v21; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x22
  __int64 v24; // x1
  Il2CppObject *v25; // x19
  int max_length; // w8
  CondType_c **v27; // x29
  int32_t v28; // w19
  int64_t v29; // x26
  unsigned int v30; // w20
  int32_t v31; // w21
  Il2CppClass **v32; // x8
  Il2CppClass *v33; // x27
  EventRaidMaster_o *v34; // x22
  __int64 v35; // x8
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  int64_t v38; // x27
  __int64 v39; // x25
  int v40; // w8
  int32_t v41; // w28
  int32_t v42; // w28
  int32_t ValueInt; // w0
  __int64 v44; // x1
  const MethodInfo *v45; // x4
  CondType_c *v46; // x8
  CondType_c **v47; // x24
  int32_t v48; // w29
  int32_t v50; // [xsp+8h] [xbp-88h]
  int32_t v51; // [xsp+Ch] [xbp-84h]
  QuestReleaseMaster_o *v52; // [xsp+10h] [xbp-80h]
  Il2CppObject *v53; // [xsp+18h] [xbp-78h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B15187 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TotalEventRaidMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B15187 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_48;
  v50 = num;
  v51 = checkType;
  v20 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  Instance = NetworkManager__getTime(0LL);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_48:
    sub_1BCAA3C(Instance, v19);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v52 = (QuestReleaseMaster_o *)v25;
    v27 = &CondType_TypeInfo;
    v28 = eventId;
    v29 = Instance;
    v30 = 0;
    v31 = 0;
    v53 = Master_object;
    while ( 1 )
    {
      if ( v30 >= max_length )
        goto LABEL_49;
      v32 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v30;
      v33 = v32[4];
      if ( !v33 )
        goto LABEL_48;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v32[4], v29, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_48;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     v28,
                     HIDWORD(v33->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v34 = v20;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v20, v28, HIDWORD(v33->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_48;
          v35 = *(_QWORD *)(Instance + 24);
          if ( v35 )
          {
            if ( !(_DWORD)v35 )
              goto LABEL_49;
            if ( !v52 )
              goto LABEL_48;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v52, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_48;
            v37 = *(_QWORD *)(Instance + 24);
            v38 = Instance;
            if ( v37 )
            {
              if ( (int)v37 >= 1 )
              {
                v39 = 0LL;
                while ( (unsigned int)v39 < (unsigned int)v37 )
                {
                  Instance = *(_QWORD *)(v38 + 32 + 8 * v39);
                  if ( !Instance )
                    goto LABEL_48;
                  v40 = *(_DWORD *)(Instance + 20);
                  if ( v40 == 32 )
                  {
                    v42 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    v46 = *v27;
                    v47 = v27;
                    v48 = ValueInt;
                    if ( !v46->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(v46, v44);
                    Instance = CondType__IsQuestGroupClear(0, v42, v48, 0, v45);
                    v27 = v47;
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  else if ( v40 == 1 )
                  {
                    v41 = *(_DWORD *)(Instance + 24);
                    if ( !(*v27)->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(*v27, v19);
                    Instance = CondType__IsQuestClear_38310172(v41, -1, 0, v36);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  LODWORD(v37) = *(_DWORD *)(v38 + 24);
                  if ( (int)++v39 >= (int)v37 )
                    goto LABEL_37;
                }
LABEL_49:
                sub_1BCAA44(Instance, v19);
              }
            }
          }
LABEL_37:
          ++v31;
LABEL_38:
          v20 = v34;
          v28 = eventId;
          Master_object = v53;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_42;
    }
  }
  v31 = 0;
LABEL_42:
  if ( v51 == 2 )
    return v31 <= v50;
  if ( v51 == 1 )
    return v31 >= v50;
  return v31 == v50;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  int32_t v4; // w22
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  CondType___c__DisplayClass19_0_o *v43; // x20
  int64_t IsOpen; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  __int64 v47; // x3
  const MethodInfo *v48; // x5
  __int64 v49; // x8
  int32_t v50; // w19
  int64_t v51; // x2
  int32_t v52; // w0
  int32_t v53; // w1
  bool result; // w0
  System_Func_int__int__o *v55; // x0
  __int64 *v56; // x8
  unsigned __int64 v57; // x22
  int32_t v58; // w23
  __int64 v59; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v61; // x5
  bool v62; // w0
  CondType_CountDelegate_o *v63; // x0
  __int64 *v64; // x8
  CondType_CountDelegate_o *v65; // x21
  __int64 v66; // x1
  const MethodInfo *v67; // x2
  int32_t ClearCountsFromIds; // w0
  bool v69; // cc
  int32_t v70; // w23
  __int64 v71; // x24
  __int64 v72; // x25
  int32_t v73; // w22
  int32_t v74; // w19
  System_Func_int__bool__o *v75; // x0
  __int64 *v76; // x8
  System_Func_int__int__o *v77; // x21
  __int64 v78; // x1
  const MethodInfo *v79; // x3
  int32_t v80; // w20
  System_Func_TSource__bool__o *v81; // x21
  CondType_c *v82; // x0
  __int64 v83; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v85; // x0
  __int64 v86; // x1
  UserQuestMaster_o *v87; // x21
  CondType_c *v88; // x0
  __int64 v89; // x1
  UserQuestMaster_o *v90; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v92; // x0
  __int64 v93; // x1
  UserQuestMaster_o *v94; // x21
  int32_t v95; // w0
  CondType_c *v96; // x0
  __int64 v97; // x1
  UserQuestMaster_o *v98; // x21
  CondType_c *v99; // x0
  __int64 v100; // x1
  UserQuestMaster_o *v101; // x21

  v4 = targetNum;
  if ( (byte_4B150D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CondType_CountExchangeServantMaxLimit__, targetIds, *(_QWORD *)&targetNum);
    sub_1BCA7E0(&Method_CondType_CountServantClassTotalFriendShipUp__, v7, v8);
    sub_1BCA7E0(&Method_CondType_CountServantClassTotalLevelUp__, v9, v10);
    sub_1BCA7E0(&Method_CondType_CountServantClassTotalLimitUp__, v11, v12);
    sub_1BCA7E0(&Method_CondType_CountServantClassTotalSkillLevelUp__, v13, v14);
    sub_1BCA7E0(&Method_CondType_CountServantFriendShipClassNum__, v15, v16);
    sub_1BCA7E0(&Method_CondType_CountServantLevelClassNum__, v17, v18);
    sub_1BCA7E0(&Method_CondType_CountServantLevelIdNum__, v19, v20);
    sub_1BCA7E0(&Method_CondType_CountServantTargetSkillLvClassNum__, v21, v22);
    sub_1BCA7E0(&CondType_TypeInfo, v23, v24);
    sub_1BCA7E0(&CondType_CountDelegate_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int____76878416, v27, v28);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v35, v36);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v37, v38);
    sub_1BCA7E0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v39, v40);
    sub_1BCA7E0(&CondType___c__DisplayClass19_0_TypeInfo, v41, v42);
    byte_4B150D5 = 1;
  }
  v43 = (CondType___c__DisplayClass19_0_o *)sub_1BCAA2C(
                                              CondType___c__DisplayClass19_0_TypeInfo,
                                              targetIds,
                                              *(_QWORD *)&targetNum,
                                              method);
  CondType___c__DisplayClass19_0___ctor(v43, 0LL);
  if ( !v43 )
LABEL_120:
    sub_1BCAA3C(IsOpen, v45);
  v43->fields.targetNum = v4;
  if ( !targetIds )
    return 0;
  v49 = *(_QWORD *)&targetIds->max_length;
  if ( !v49 )
    return 0;
  if ( (_DWORD)v49 == 1 )
  {
    v50 = targetIds->m_Items[1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
    v51 = v4;
    v52 = condType;
    v53 = v50;
    return CondType__IsOpen(v52, v53, v51, 0, 0LL, v48);
  }
  if ( condType <= 136 )
  {
    if ( condType <= 1 )
    {
      if ( !condType )
        return 1;
      if ( condType == 1 )
      {
LABEL_33:
        if ( (int)v49 < 1 )
        {
          v70 = 0;
        }
        else
        {
          if ( !(unsigned int)*(_QWORD *)&targetIds->max_length )
            goto LABEL_40;
          v70 = 0;
          v71 = 0LL;
          v72 = (unsigned int)*(_QWORD *)&targetIds->max_length - 1LL;
          while ( 1 )
          {
            v73 = targetIds->m_Items[v71 + 1];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
            IsOpen = CondType__IsOpen(condType, v73, 0LL, 0, 0LL, v48);
            v70 += IsOpen & 1;
            if ( v72 == v71 )
              break;
            if ( ++v71 >= (unsigned __int64)targetIds->max_length )
              goto LABEL_40;
          }
          v4 = v43->fields.targetNum;
        }
        v69 = v70 < v4;
        return !v69;
      }
      goto LABEL_62;
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
        goto LABEL_33;
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
        goto LABEL_62;
      case 25:
        v82 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v82);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v83);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !UserQuestMaster )
          goto LABEL_120;
        ClearCountsFromIds = UserQuestMaster__getClearCountsFromIds(UserQuestMaster, IsOpen, targetIds, 0LL);
        goto LABEL_30;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        if ( (int)v49 < 1 )
        {
          v58 = 0;
        }
        else
        {
          v57 = 0LL;
          v58 = 0;
          v59 = (unsigned int)*(_QWORD *)&targetIds->max_length;
          do
          {
            IsOpen = (int64_t)CondType_TypeInfo;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
            if ( v57 >= targetIds->max_length )
              goto LABEL_40;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v45);
            v62 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v57], 0LL, 0, 0LL, v61);
            v58 += v62;
          }
          while ( v59 != v57 );
          v4 = v43->fields.targetNum;
        }
        result = v58 < v4;
        break;
      case 30:
        v85 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v87 = CondType__GetUserQuestMaster((const MethodInfo *)v85);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v86);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v87 )
          goto LABEL_120;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v87, IsOpen, targetIds, 0LL);
        goto LABEL_30;
      case 42:
        v88 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v90 = CondType__GetUserQuestMaster((const MethodInfo *)v88);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v89);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v90 )
          goto LABEL_120;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v90, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v43->fields.targetNum;
      case 43:
        v92 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v94 = CondType__GetUserQuestMaster((const MethodInfo *)v92);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v94 )
          goto LABEL_120;
        v95 = UserQuestMaster__getChallengeCountsFromIds(v94, IsOpen, targetIds, 0LL);
        return v95 <= v43->fields.targetNum;
      case 44:
        v96 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v98 = CondType__GetUserQuestMaster((const MethodInfo *)v96);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v97);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v98 )
          goto LABEL_120;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v98, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v43->fields.targetNum;
      case 45:
        v99 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v101 = CondType__GetUserQuestMaster((const MethodInfo *)v99);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v100);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v101 )
          goto LABEL_120;
        v95 = UserQuestMaster__getClearCountsFromIds(v101, IsOpen, targetIds, 0LL);
        return v95 <= v43->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_62;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        return CondType__IsServantLimitClassNum(targetIds, v4, v46);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v75 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v45, v46, v47);
          v76 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v55 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v45, v46, v47);
          v56 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v77 = v55;
          System_Func_int__int____ctor(v55, 0LL, *v56, 0LL);
          v80 = v43->fields.targetNum;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v78);
          return CondType__IsTargetIdsCommonCount(v77, targetIds, v80, v79);
        case 190:
          v75 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v45, v46, v47);
          v76 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v75 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v45, v46, v47);
          v76 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v81 = (System_Func_TSource__bool__o *)v75;
          System_Func_int__bool____ctor(v75, (Il2CppObject *)v43, *v76, 0LL);
          return System_Linq_Enumerable__Any_int__49415144(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v81,
                   (const MethodInfo_2F203E8 *)Method_System_Linq_Enumerable_Any_int____76878416);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v45);
LABEL_30:
              v69 = ClearCountsFromIds < v43->fields.targetNum;
              return !v69;
            }
            goto LABEL_62;
          }
          v63 = (CondType_CountDelegate_o *)sub_1BCAA2C(CondType_CountDelegate_TypeInfo, v45, v46, v47);
          v64 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_27:
      v65 = v63;
      CondType_CountDelegate___ctor(v63, 0LL, *v64, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v66);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v65, v67);
      goto LABEL_30;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v63 = (CondType_CountDelegate_o *)sub_1BCAA2C(CondType_CountDelegate_TypeInfo, v45, v46, v47);
        v64 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_27;
      }
LABEL_62:
      if ( (_DWORD)v49 )
      {
        v74 = targetIds->m_Items[1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        v52 = condType;
        v53 = v74;
        v51 = 0LL;
        return CondType__IsOpen(v52, v53, v51, 0, 0LL, v48);
      }
LABEL_40:
      sub_1BCAA44(IsOpen, v45);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
    return CondType__IsEquipRarityLevelNum(targetIds, v4, v46);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_38344416(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4B150D6 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condValues, *(_QWORD *)&condNum);
    byte_4B150D6 = 1;
  }
  if ( condType <= 35 )
  {
    if ( !condType )
      return 1;
    if ( condType != 35 )
      return 0;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues);
    return CondType__IsShopPurchase(condValues, condNum, *(const MethodInfo **)&condNum);
  }
  else
  {
    if ( condType != 37 )
    {
      if ( condType == 65 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues);
        return CondType__IsQuestNotClearAndCond(condValues, (const MethodInfo *)condValues);
      }
      return 0;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condValues);
    return CondType__IsNotShopPurchase(condValues, (const MethodInfo *)condValues);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_38348640(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4B150D8 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, userId);
    byte_4B150D8 = 1;
  }
  result = 1;
  switch ( condType )
  {
    case 0:
      return result;
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsQuestClear(userId, condValue, -1, 0, 0, v5);
      break;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsServantLevel_38349264(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsServantLimit_38349424(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsServantGet_38347292(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsServantFriendship_38349664(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsServantGroup_38347984(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsPurchaseQpShop_38349968(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__IsPurchaseStoneShop_38350136(userId, condValue, (const MethodInfo *)userId);
      break;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
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
  __int64 v2; // x2
  System_String_o *v3; // x0
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = notMeetsScriptId;
  if ( (byte_4B15148 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22385/*"notMeets"*/, method, v2);
    byte_4B15148 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v6, 0LL);
  v4 = System_String__Concat_62401220((System_String_o *)StringLiteral_22385/*"notMeets"*/, v3, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v4, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 SelfUserGame; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v8; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1513D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1513D = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1BCAA3C(SelfUserGame, v5);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    if ( !byte_4B13812 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
      byte_4B13812 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
      v8 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v8->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool __fastcall CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B150FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B150FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseQpShop_38349968(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B150FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B150FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return ShopEntity__IsCondType_40625800((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4B15102 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, method);
    byte_4B15102 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
  if ( v3 <= 1 )
    v3 = 1;
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B15100 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15100 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseStoneShop_38350136(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B15101 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15101 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  return ShopEntity__IsCondType_40625800((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v13; // x19
  __int64 v14; // x8
  int v15; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  int v17; // w23
  ShopGroupEntity_o *v18; // x8
  ShopEntity_o *v19; // x21

  if ( (byte_4B15139 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15139 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v13 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
      v14 = *(_QWORD *)&v13->max_length;
      v15 = v14 - 1;
      if ( (int)v14 >= 1 )
      {
        v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v17 = 0;
        while ( 1 )
        {
          v18 = v13->m_Items[v17];
          if ( !v18 || !v16 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v16,
                       v18->fields.shopId,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v19 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v19, 0LL) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v19, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v15 == v17 )
            goto LABEL_20;
          if ( ++v17 >= v13->max_length )
            sub_1BCAA44(Instance, v11);
        }
LABEL_22:
        sub_1BCAA3C(Instance, v11);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1
  bool v14; // w20
  bool v15; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  bool v18; // w22
  TerminalPramsManager_c *v19; // x0
  bool v20; // w21
  BalanceConfig_c *v21; // x8
  bool v22; // w21
  int32_t WarId_k__BackingField; // w24
  TerminalPramsManager_c *v24; // x0
  char v25; // w8
  char v26; // w20

  if ( (byte_4B15125 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B15125 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v14 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v15 = AvalonSceneManager__checkNowScene(Instance, 22, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v18 = AvalonSceneManager__checkNowScene(Instance, 72, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B12DC6 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  v20 = v14 || v15;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v21 = BalanceConfig_TypeInfo;
  v22 = v20 || v18;
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( WarId_k__BackingField == v21->static_fields->OrdealCallWarId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_4B13013 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
      byte_4B13013 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v24 = TerminalPramsManager_TypeInfo;
    }
    v25 = !v24->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v25 = 1;
  }
  v26 = !v22 & v25;
  if ( (v26 & 1) != 0 )
  {
    Instance = (AvalonSceneManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (AvalonSceneManager_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
    if ( (v26 & 1 & (Instance != 0LL)) != 0 )
    {
      if ( Instance )
        return LODWORD(Instance->fields.targetRoot) == 1;
LABEL_30:
      sub_1BCAA3C(Instance, v13);
    }
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  CondType_c *v15; // x0
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  UserQuestEntity_o *EntityFromId; // x23
  __int64 v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4B150DD & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condQuestId, *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    byte_4B150DD = 1;
  }
  v15 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestId);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v15);
  if ( !UserQuestMaster )
    goto LABEL_19;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1BCAA3C(UserQuestMaster, v17);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL)
    && isCollection )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v20);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, v21);
  }
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0LL) )
    return 0;
  else
    return (beforeClearQuestId < 1 || beforeClearQuestId != condQuestId) & (UserQuestEntity__getClearNum(
                                                                              EntityFromId,
                                                                              0LL) > 0);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  bool IsQuestClear_38310172; // w8
  bool result; // w0
  CondType_c *v15; // x0
  __int64 v16; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *UserId; // x0
  __int64 v19; // x1
  int64_t klass; // x20

  if ( (byte_4B15170 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    byte_4B15170 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&eventId);
  IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_38310172 )
  {
    v15 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v15);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
    UserId = (EventMaster_o *)NetworkManager__get_UserId(0LL);
    if ( !UserQuestMaster )
      goto LABEL_17;
    UserId = (EventMaster_o *)UserQuestMaster__GetEntity(UserQuestMaster, (int64_t)UserId, questId, 0LL);
    if ( !UserId )
      goto LABEL_17;
    klass = (int64_t)UserId[1].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    UserId = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
LABEL_17:
      sub_1BCAA3C(UserId, v19);
    return klass < EventMaster__GetEventStartedAt(UserId, eventId, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CondType_c *v7; // x0
  __int64 v8; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t UserId; // x0
  __int64 v11; // x1
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4B15111 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condVal, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B15111 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condVal);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    sub_1BCAA3C(UserId, v11);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear_38310172(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  int64_t UserId; // x22

  if ( (byte_4B150DE & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B150DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  return CondType__IsQuestClear(UserId, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t UserId; // x21
  CondType_c *v17; // x0
  CondType_c *v18; // x0
  UserQuestEntity_o *v19; // x0

  if ( (byte_4B150E4 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&closeQuestid, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B150E4 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v17 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v17);
    if ( !Instance )
      goto LABEL_23;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, openQuestid, 0LL);
    if ( !EntityFromId )
      return (char)EntityFromId;
    if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) < 1 )
      goto LABEL_22;
  }
  if ( closeQuestid < 1 )
  {
LABEL_5:
    LOBYTE(EntityFromId) = 1;
    return (char)EntityFromId;
  }
  v18 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v18);
  if ( !Instance )
LABEL_23:
    sub_1BCAA3C(Instance, v13);
  v19 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, closeQuestid, 0LL);
  if ( !v19 || UserQuestEntity__getClearNum(v19, 0LL) <= 0 )
    goto LABEL_5;
LABEL_22:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w21
  System_Int32_array *Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x8
  System_Int32_array *v13; // x19
  bool v14; // w25
  int v15; // w22
  unsigned __int64 v16; // x23
  int32_t v17; // w20

  if ( (byte_4B15126 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&questCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15126 = 1;
  }
  if ( questCount <= 1 )
    v9 = 1;
  else
    v9 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  v12 = *(_QWORD *)&Instance->max_length;
  v13 = Instance;
  v14 = (int)v12 > 0;
  if ( (int)v12 >= 1 )
  {
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v12 )
        sub_1BCAA44(Instance, v11);
      v17 = v13->m_Items[v16 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v17, v11);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v15 >= v9 )
        break;
      LODWORD(v12) = v13->max_length;
      v14 = (__int64)++v16 < (int)v12;
    }
    while ( (__int64)v16 < (int)v12 );
  }
  return v14;
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
  if ( (byte_4B15116 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&condVal);
    byte_4B15116 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&groupId);
  if ( v6 <= 1 )
    v6 = 1;
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= v6;
}


bool __fastcall CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  __int64 v8; // x22
  CondType_c *v9; // x0
  __int64 v10; // x1
  UserQuestMaster_o *UserQuestMaster; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v3 = condQuestId;
  if ( (byte_4B15136 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    condQuestId = (System_Int32_array *)sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B15136 = 1;
  }
  if ( !v3 )
    goto LABEL_18;
  v6 = *(_QWORD *)&v3->max_length;
  if ( !v6 )
    return 0;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&v3->max_length;
    while ( 1 )
    {
      v9 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      condQuestId = (System_Int32_array *)NetworkManager__get_UserId(0LL);
      if ( v7 >= v3->max_length )
        sub_1BCAA44(condQuestId, method);
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, (int64_t)condQuestId, v3->m_Items[v7 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( v8 == ++v7 )
        return 1;
    }
LABEL_18:
    sub_1BCAA3C(condQuestId, method);
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
  bool v12; // w3

  if ( (byte_4B150E0 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condQuestId, *(_QWORD *)&condQuestPhase);
    byte_4B150E0 = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestId);
  v12 = isCheckResetFlag;
  if ( condQuestPhase <= 0 )
    return CondType__IsQuestClear(userId, condQuestId, beforeClearQuestId, v12, 0, method);
  else
    return CondType__GetQuestClearPhaseCount(
             (int64_t)v11,
             condQuestId,
             beforeClearQuestId,
             v12,
             (const MethodInfo *)isCheckResetFlag) >= condQuestPhase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestPhaseClear_38364228(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  int64_t UserId; // x23

  if ( (byte_4B150E1 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase, *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B150E1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condQuestPhase);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
  return CondType__IsQuestPhaseClear(UserId, condQuestId, condQuestPhase, beforeClearQuestId, isCheckResetFlag, v12);
}


bool __fastcall CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  CondType_c *v13; // x0
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x8
  signed __int64 v16; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v18; // x9
  bool v19; // w19
  int32_t v20; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15127 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestResetMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15127 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v13 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v13);
    v15 = entity;
    if ( entity )
    {
      v16 = 0LL;
      do
      {
        monitor = v15[1].monitor;
        if ( !monitor )
          break;
        v18 = (unsigned int)monitor[6];
        v19 = v16 < (int)v18;
        if ( v16 >= (int)v18 )
          return v19;
        if ( v16 >= v18 )
          sub_1BCAA44(Instance, v11);
        v20 = monitor[v16 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
        Instance = (DataManager_o *)CondType__IsQuestClear_38310172(v20, -1, 1, v14);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v19;
        v15 = entity;
        ++v16;
      }
      while ( entity );
    }
LABEL_17:
    sub_1BCAA3C(Instance, v11);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *v15; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v18; // w20
  il2cpp_array_size_t v19; // w21
  struct System_Int32_array *v20; // x8
  int v21; // w23
  int v22; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15135 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId, method);
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15135 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_22;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               Instance,
               svtId,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    v15 = entity;
    if ( !entity )
      goto LABEL_22;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_22;
    max_length = costumeIds->max_length;
    v18 = max_length - 1;
    if ( max_length >= 1 )
    {
      v19 = 0;
      do
      {
        v20 = v15->fields.costumeIds;
        if ( !v20 )
          break;
        if ( v19 >= v20->max_length )
          sub_1BCAA44(Instance, v12);
        v21 = v20->m_Items[v19 + 1];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
        if ( v21 >= 0 )
          v22 = v21;
        else
          v22 = -v21;
        Instance = v22 == costumeId;
        if ( v22 == costumeId || v18 == v19 )
          return Instance;
        v15 = entity;
        ++v19;
      }
      while ( entity );
LABEL_22:
      sub_1BCAA3C(Instance, v12);
    }
  }
  LOBYTE(Instance) = 0;
  return Instance;
}


bool __fastcall CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  UserGameEntity_o *v3; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BCAA3C(0LL, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v3->fields.birthDay > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IList_int__o *v9; // x20
  const MethodInfo *v10; // x4
  System_Collections_Generic_IList_int__o *v11; // x21

  if ( (byte_4B15169 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&routeId, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    byte_4B15169 = 1;
  }
  v7 = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_10;
  v9 = (System_Collections_Generic_IList_int__o *)v7;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v7 + 32) = questId;
  v7 = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v7 )
LABEL_10:
    sub_1BCAA3C(v7, v8);
  v11 = (System_Collections_Generic_IList_int__o *)v7;
  if ( !*(_DWORD *)(v7 + 24) )
LABEL_11:
    sub_1BCAA44(v7, v8);
  *(_DWORD *)(v7 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8);
  return CondType__IsRouteSelect_38369088(v9, v11, 1, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsRouteSelect_38369088(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_HashSet_int__o *v33; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x22
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_IList_int__c *v51; // x8
  int32_t v52; // w26
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x25
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w27
  int64_t UserId; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v70; // x1
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  System_Collections_Generic_IList_int__o *v81; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1516A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, routeIds, *(_QWORD *)&count);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B1516A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v33 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_HashSet_int____ctor(
    v33,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_73;
  klass = questIds->klass;
  v81 = routeIds;
  v35 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v40 = v38;
  while ( 1 )
  {
    if ( !v40 )
      sub_1BCAA3C(v38, v39);
    v41 = *(_QWORD *)v40;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_17;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_17:
      v44 = sub_1C1C7C0(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v40;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v47 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_24;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_24:
      v48 = sub_1C1C7C0(v40, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
    if ( !v81 )
      sub_1BCAA3C(v49, v50);
    v51 = v81->klass;
    v52 = v49;
    v53 = *(unsigned __int16 *)(&v81->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v81->klass->_2.bitflags2 + 3) )
    {
      v54 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v54 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_31;
      }
      v55 = (__int64)&v51->vtable[*v54].method;
    }
    else
    {
LABEL_31:
      v55 = sub_1C1C7C0(v81, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v55)(v81, *(_QWORD *)(v55 + 8));
    if ( !v57 )
      sub_1BCAA3C(0LL, v56);
    while ( 1 )
    {
      v58 = *(_QWORD *)v57;
      v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
      {
        v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_38;
        }
        v61 = v58 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_38:
        v61 = sub_1C1C7C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
        break;
      v62 = *(_QWORD *)v57;
      v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
      {
        v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v64 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v63;
          v64 += 4;
          if ( !v63 )
            goto LABEL_45;
        }
        v65 = v62 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_45:
        v65 = sub_1C1C7C0(v57, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        sub_1BCAA3C(UserId, UserId);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      UserId,
                      v52,
                      v67,
                      0LL);
      if ( haveRouteId )
      {
        if ( !v33 )
          sub_1BCAA3C(haveRouteId, v70);
        System_Collections_Generic_HashSet_int___Add(
          v33,
          v67,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v71 = *(_QWORD *)v57;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_57;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_57:
      v74 = sub_1C1C7C0(v57, System_IDisposable_TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v57, *(_QWORD *)(v74 + 8));
  }
  v75 = *(_QWORD *)v40;
  v76 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
  {
    v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_67;
    }
    v78 = v75 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_67:
    v78 = sub_1C1C7C0(v40, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v40, *(_QWORD *)(v78 + 8));
  if ( !v33 )
LABEL_73:
    sub_1BCAA3C(Instance, v28);
  return v33->fields._count == count;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship(
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int64_t UserId; // x22

  if ( (byte_4B150F4 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank, isAbove);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B150F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condFriendshipRank);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  return CondType__IsServantFriendship_38349664(UserId, svtId, condFriendshipRank, isAbove, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_38347448(
        int64_t userSvtId,
        int32_t condFriendshipRank,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  __int64 v22; // x1
  Il2CppObject v23; // q1
  int64_t v24; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  int32_t v29; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B150F6 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B150F6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_22;
  v23 = entity[4];
  *(Il2CppObject *)&v33.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v33.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
  v32 = v33;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v32, 0LL);
  if ( !entity )
LABEL_22:
    sub_1BCAA3C(Instance, v22);
  v24 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
  return CondType__IsServantFriendship_38349664(v24, v29, condFriendshipRank, 1, v28);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_38349664(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x21
  __int64 v19; // x20
  __int64 v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B150F5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantCollectionMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&condFriendshipRank);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B150F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v14);
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
      v17 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v18 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v22.fields.currentCryptoKey = v17;
      *(_QWORD *)&v22.fields.fakeValue = v18;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v19 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v20 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v23.fields.currentCryptoKey = v19;
    *(_QWORD *)&v23.fields.fakeValue = v20;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int64_t UserId; // x20

  if ( (byte_4B150EE & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B150EE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsServantGet_38347292(UserId, condSvtId, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v18; // [xsp+8h] [xbp-38h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B15129 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15129 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               Instance,
               svtId,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    if ( entity->fields.status )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   &v18,
                   eventId,
                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v18 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v18[6].klass;
LABEL_17:
        sub_1BCAA3C(Instance, v14);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGet_38347292(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B150EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condSvtId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B150EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
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


bool __fastcall CondType__IsServantGet_38365408(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t Instance; // x0
  __int64 v19; // x1
  Il2CppObject v20; // q1
  int64_t v21; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-50h]
  Il2CppObject *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B150F0 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B150F0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_20;
  v20 = entity[4];
  *(Il2CppObject *)&v30.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v30.fields.fakeValue = v20;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
  v29 = v30;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
  if ( !entity )
LABEL_20:
    sub_1BCAA3C(Instance, v19);
  v21 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
  *(_QWORD *)&v32.fields.currentCryptoKey = klass;
  *(_QWORD *)&v32.fields.fakeValue = monitor;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v24);
  return CondType__IsServantGet_38347292(v21, v26, v25);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int64_t UserId; // x20

  if ( (byte_4B150F8 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B150F8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsServantGroup_38347984(UserId, condGroup, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGroup_38347984(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  int v12; // w8
  void *v13; // x21
  bool v14; // w22
  int v15; // w23
  __int64 v16; // x8

  if ( (byte_4B150F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&condGroup, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B150F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  v14 = v12 > 0;
  if ( v12 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BCAA44(Instance, v10);
      v16 = *((_QWORD *)v13 + v15 + 4);
      if ( !v16 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v16 + 20),
                   0LL);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v12 = *((_DWORD *)v13 + 6);
        v14 = ++v15 < v12;
        if ( v15 < v12 )
          continue;
      }
      return v14;
    }
LABEL_16:
    sub_1BCAA3C(Instance, v10);
  }
  return v14;
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B150F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B150F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B15140 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condNum, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15140 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B150E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLv, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B150E5 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_38307808(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  int64_t UserId; // x21

  if ( (byte_4B150E6 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condLv, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B150E6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLv);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
  return CondType__IsServantLevel_38349264(UserId, svtId, condLv, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_38349264(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B150E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId, *(_QWORD *)&condLv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B150E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v21; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B150E9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      *(_QWORD *)&condLimitCount,
      *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B150E9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v18);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v21 = 0;
    goto LABEL_14;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_22;
  klass = entity[6].klass;
  monitor = entity[6].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v24.fields.currentCryptoKey = klass;
  *(_QWORD *)&v24.fields.fakeValue = monitor;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
LABEL_14:
  if ( checkType == 2 )
    return v21 <= condLimitCount;
  if ( checkType == 1 )
    return v21 >= condLimitCount;
  if ( checkType )
    return 0;
  return v21 == condLimitCount;
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
  unsigned __int64 v7; // x23
  int32_t v8; // w22
  int32_t v9; // w21

  v4 = targetIds;
  if ( (byte_4B15159 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetNum, method);
    byte_4B15159 = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCAA44(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetNum);
      v6 = CondType__CountServantLimitClassNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(v5) = v4->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
    LOBYTE(v6) = v8 >= targetNum;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B150EA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      *(_QWORD *)&condLimitCount,
      *(_QWORD *)&checkType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B150EA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_1BCAA3C(Instance, v16);
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
bool __fastcall CondType__IsServantLimit_38307964(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int64_t UserId; // x22

  if ( (byte_4B150EB & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condLimitCount, *(_QWORD *)&checkType);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B150EB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&condLimitCount);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  return CondType__IsServantLimit_38349424(UserId, svtId, condLimitCount, checkType, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_38349424(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B150EC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantCollectionMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&condLimitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B150EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t Instance; // x0
  __int64 v12; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v14; // x20
  __int64 v15; // x8
  int v16; // w23
  UserShopMaster_o *v17; // x21
  int v18; // w24
  int32_t v19; // w25
  ShopGroupEntity_o *v20; // x8
  int32_t shopId; // w22
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1513E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, *(_QWORD *)&limitNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1513E = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v14 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v15 = *(_QWORD *)&v14->max_length;
  v16 = v15 - 1;
  if ( (int)v15 >= 1 )
  {
    v17 = (UserShopMaster_o *)Instance;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = v14->m_Items[v18];
      if ( !v20 )
        break;
      shopId = v20->fields.shopId;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v17 )
        break;
      Instance = UserShopMaster__TryGetEntity(v17, &entity, Instance, shopId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v19 += entity->fields.num;
        if ( v19 >= limitNum )
          return 1;
      }
      if ( v16 == v18 )
        return 0;
      if ( ++v18 >= v14->max_length )
        sub_1BCAA44(Instance, v12);
    }
LABEL_22:
    sub_1BCAA3C(Instance, v12);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  int v12; // w22
  UserShopMaster_o *v13; // x21
  unsigned __int64 v14; // x23
  __int64 v15; // x24

  if ( (byte_4B15122 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15122 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_15;
  v11 = *(_QWORD *)&values->max_length;
  v12 = 0;
  if ( v11 && (int)v11 >= 1 )
  {
    v13 = (UserShopMaster_o *)Instance;
    v14 = 0LL;
    v12 = 0;
    v15 = (unsigned int)*(_QWORD *)&values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v14 >= values->max_length )
        sub_1BCAA44(Instance, v10);
      if ( !v13 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v13, Instance, values->m_Items[v14 + 1], 0LL);
      if ( !Instance )
        break;
      ++v14;
      v12 += *(_DWORD *)(Instance + 28);
      if ( v15 == v14 )
        return num > 0 && v12 == num;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v10);
  }
  return num > 0 && v12 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v13; // x19
  __int64 v14; // x8
  int v15; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20
  int v17; // w23
  ShopGroupEntity_o *v18; // x8
  ShopEntity_o *v19; // x21

  if ( (byte_4B15138 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopGroupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15138 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v13 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1BCAA3C(Instance, v11);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  v14 = *(_QWORD *)&v13->max_length;
  v15 = v14 - 1;
  if ( (int)v14 < 1 )
    goto LABEL_18;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = 0;
  while ( 1 )
  {
    v18 = v13->m_Items[v17];
    if ( !v18 || !v16 )
      goto LABEL_21;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v16,
                 v18->fields.shopId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v19 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v19, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v15 == v17 )
      goto LABEL_18;
    if ( ++v17 >= v13->max_length )
      sub_1BCAA44(Instance, v11);
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4B1516B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1516B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0LL);
  return (char)MissionEntity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsStartingMember(
        int32_t targetSvtId,
        int32_t targetLimitCount,
        BattleData_o *battleData,
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
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *player_datalist; // x21
  int *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v26; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v28; // w24
  int32_t v29; // w22
  int v30; // w25
  void *monitor; // x20
  Il2CppClass *klass; // x23
  __int64 v33; // x1
  Il2CppObject *Master_object; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  UserServantEntity_array *v36; // x21
  BalanceConfig_c *v37; // x0
  unsigned __int64 v39; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v41; // x8
  __int64 v42; // x22
  __int64 v43; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B1518B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&targetLimitCount, battleData);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserDeckMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v19, v20);
    byte_4B1518B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetLimitCount);
  Item = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( battleData )
    {
      player_datalist = (System_Collections_Generic_List_object__o *)battleData->fields.player_datalist;
      if ( player_datalist )
      {
        p_size = &player_datalist->fields._size;
        size = player_datalist->fields._size;
        v26 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
          v26 = BalanceConfig_TypeInfo;
        }
        static_fields = v26->static_fields;
        if ( size >= static_fields->DeckMainMemberMax )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26, v22);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          p_size = &static_fields->DeckMainMemberMax;
        }
        v28 = *p_size;
        if ( *p_size >= 1 )
        {
          v29 = 0;
          v30 = targetLimitCount - (targetLimitCount < 11);
          while ( 1 )
          {
            if ( System_Collections_Generic_List_object___get_Item(
                   player_datalist,
                   v29,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v29,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
              *(_QWORD *)&v44.fields.currentCryptoKey = klass;
              *(_QWORD *)&v44.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v44, 0LL) == targetSvtId )
              {
                if ( (v30 & 0x80000000) != 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v29,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_54;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0LL) == v30 )
                  return 1;
              }
            }
            if ( v28 == ++v29 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_54:
    sub_1BCAA3C(Item, v22);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v33);
  Item = (Il2CppObject *)TutorialFlag__Get_38402052(126, 0LL);
  if ( !Master_object )
    goto LABEL_54;
  if ( ((unsigned __int8)Item & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)Master_object,
                                            0LL);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)Master_object,
                                            0LL);
  v36 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v37 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
      v37 = BalanceConfig_TypeInfo;
    }
    if ( v37->static_fields->DeckMainMemberMax <= (signed int)v36->max_length )
    {
      v39 = 0LL;
      m_Items = v36->m_Items;
      while ( 1 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37, v22);
          v37 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v39 >= v37->static_fields->DeckMainMemberMax )
          break;
        if ( v39 >= v36->max_length )
          goto LABEL_55;
        v41 = m_Items[v39];
        if ( v41 )
        {
          v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
          *(_QWORD *)&v45.fields.currentCryptoKey = v43;
          *(_QWORD *)&v45.fields.fakeValue = v42;
          v37 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
          if ( (_DWORD)v37 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v39 >= v36->max_length )
LABEL_55:
              sub_1BCAA44(v37, v22);
            Item = (Il2CppObject *)m_Items[v39];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0LL) == targetLimitCount - 1 )
              return 1;
          }
        }
        v37 = BalanceConfig_TypeInfo;
        ++v39;
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

  if ( (byte_4B15173 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    byte_4B15173 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
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

  if ( (byte_4B15174 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    byte_4B15174 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
      return CondType__GetSuperBossDamageValue(v6, v7, method) <= condVal;
    }
  }
  return result;
}


bool __fastcall CondType__IsSuperBossValueEqual(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  bool result; // w0
  int v12; // w21
  int v13; // w20
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15172 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, condVal, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15172 = 1;
  }
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condVal);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v12 = condId / 100;
    v13 = condId % 100;
    if ( v13 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_16;
      Instance = UserSuperBossMaster__TryGetEntity(
                   (UserSuperBossMaster_o *)MasterData_object,
                   &entity,
                   Instance,
                   v12,
                   v13,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_16:
        sub_1BCAA3C(Instance, v15);
      }
      return 0;
    }
  }
  return result;
}


bool __fastcall CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15143 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15143 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15145 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15145 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0LL) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  UserEventServantFatigueMaster_o *v17; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v19; // x1
  int64_t v20; // x22
  int32_t v21; // w26
  __int64 v22; // x27
  __int64 v23; // x28
  int64_t v24; // x23
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v27; // w0
  int64_t v28; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B15137 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, *(_QWORD *)&condNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B15137 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(Instance, v16);
  }
  v17 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v20 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_23:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v21 = 0;
    v22 = 0LL;
    v23 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v24 = *(_QWORD *)(v20 + 32 + 8 * v22);
      if ( v24 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v24,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v32.fields.currentCryptoKey = klass;
      *(_QWORD *)&v32.fields.fakeValue = monitor;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v17, &recoverAt, &isRecover, eventId, v27, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v28 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v28 - RecoverySvtIdList > 0 )
          goto LABEL_20;
        ++v21;
      }
      if ( v21 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_20:
      if ( v23 == v22 )
        goto LABEL_23;
      if ( ++v22 >= (unsigned __int64)*(unsigned int *)(v20 + 24) )
        sub_1BCAA44(RecoverySvtIdList, v19);
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
  __int64 v4; // x8
  System_Func_int__int__o *v6; // x21
  unsigned __int64 v8; // x23
  int32_t v9; // w22

  if ( !targetIds )
LABEL_12:
    sub_1BCAA3C(countFunc, targetIds);
  v4 = *(_QWORD *)&targetIds->max_length;
  v6 = countFunc;
  countFunc = 0LL;
  if ( v4 && (int)v4 >= 1 )
  {
    v8 = 0LL;
    v9 = 0;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BCAA44(countFunc, targetIds);
      if ( !v6 )
        goto LABEL_12;
      countFunc = (System_Func_int__int__o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, const MethodInfo *))v6->fields.m_target)(
                                               v6->fields.original_method_info,
                                               (unsigned int)targetIds->m_Items[v8 + 1],
                                               *(_QWORD *)&v6->fields.extra_arg,
                                               method);
      v9 += (int)countFunc;
      if ( v9 >= targetNum )
        break;
      LODWORD(v4) = targetIds->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
    LOBYTE(countFunc) = v9 >= targetNum;
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
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int v11; // w8

  if ( (byte_4B1514D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1514D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v11 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0LL);
  switch ( condType )
  {
    case 'p':
      return v11 >= 0;
    case 'o':
      return v11 < 1;
    case 'n':
      return v11 == 0;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  __int64 v22; // x1
  UserEventEntity_o *v23; // x20
  intptr_t v24; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  if ( (byte_4B1514F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flag, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&EventStatus_Type_var, v11, v12);
    sub_1BCA7E0(&EventStatus_Type_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Type_TypeInfo, v15, v16);
    byte_4B1514F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1BCAA3C(Instance, v18);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v23 = EntityDefinitely;
    v24 = (int)EventStatus_Type_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
    v30.fields.value = v24;
    TypeFromHandle = System_Type__GetTypeFromHandle(v30, 0LL);
    v29 = flag;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v29);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v26);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v27, 0LL)
                            && UserEventEntity__getEventFlag(v23, flag, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  __int64 v22; // x1
  UserQuestEntity_o *v23; // x20
  intptr_t v24; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  if ( (byte_4B15150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&flag, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&UserQuestEntity_StatusKind_var, v11, v12);
    sub_1BCA7E0(&UserQuestEntity_StatusKind_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Type_TypeInfo, v15, v16);
    byte_4B15150 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1BCAA3C(Instance, v18);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   (int64_t)Instance,
                   questId,
                   0LL);
  if ( EntityFromId )
  {
    v23 = EntityFromId;
    v24 = (int)UserQuestEntity_StatusKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
    v30.fields.value = v24;
    TypeFromHandle = System_Type__GetTypeFromHandle(v30, 0LL);
    v29 = flag;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v29);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v26);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v27, 0LL)
                        && UserQuestEntity__HasStatus_40879968(v23, flag, 0LL);
  }
  return (unsigned __int8)EntityFromId & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  __int64 v22; // x1
  UserShopEntity_o *v23; // x20
  intptr_t v24; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  if ( (byte_4B15166 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&flagKind, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v5, v6);
    sub_1BCA7E0(&UserShopFlag_FlagKind_var, v7, v8);
    sub_1BCA7E0(&UserShopFlag_FlagKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&System_Type_TypeInfo, v15, v16);
    byte_4B15166 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1BCAA3C(Instance, v18);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v23 = EntityDefinitely;
    v24 = (int)UserShopFlag_FlagKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
    v30.fields.value = v24;
    TypeFromHandle = System_Type__GetTypeFromHandle(v30, 0LL);
    v29 = flagKind;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v29);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v26);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v27, 0LL)
                            && UserShopEntity__CheckFlagKind(v23, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 methodPtr_low; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  __int64 v13; // x1
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t v18; // w0
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v22; // x0
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B1513B & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, *(_QWORD *)&playCount, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    byte_4B1513B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_16:
    sub_1BCAA3C(Instance, v10);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1BCACFC(Instance);
    return CondType__IsArrivalDate(v22, v23);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0LL);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v16 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v24.fields.currentCryptoKey = v16;
  *(_QWORD *)&v24.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v18, 0LL);
  if ( !byte_4B13958 )
  {
    sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v19, v20);
    byte_4B13958 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1512A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&num, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1512A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *ClearWarIdList; // x0
  __int64 v5; // x1
  int max_length; // w8
  int i; // w9

  if ( (byte_4B15158 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, method, v2);
    byte_4B15158 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, method);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_1BCAA3C(0LL, v5);
  max_length = ClearWarIdList->max_length;
  if ( max_length < 1 )
  {
    i = 0;
  }
  else
  {
    for ( i = 0; i != max_length; ++i )
    {
      if ( max_length == i )
        sub_1BCAA44(ClearWarIdList, v5);
      if ( ClearWarIdList->m_Items[i + 1] == condWarId )
        break;
    }
  }
  return i < max_length;
}


int32_t __fastcall CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x19
  CondType___c_c *v30; // x0
  System_Comparison_T__o *_9__168_0; // x20
  Il2CppObject *v32; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  CondType___c_c *v43; // x0
  System_Predicate_object__o *_9__168_1; // x20
  Il2CppObject *v45; // x21
  struct CondType___c_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  int32_t klass_high; // w19

  if ( (byte_4B15164 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_WarEntity__TypeInfo, v1, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__Find__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__Sort__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Predicate_WarEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, v17, v18);
    sub_1BCA7E0(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, v19, v20);
    sub_1BCA7E0(&CondType___c_TypeInfo, v21, v22);
    byte_4B15164 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v24);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
  if ( !EntityList )
    return 0;
  v29 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v30 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v26);
    v30 = CondType___c_TypeInfo;
  }
  _9__168_0 = (System_Comparison_T__o *)v30->static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v26);
      v30 = CondType___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__168_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_WarEntity__TypeInfo, v26, v27, v28);
    System_Comparison_object____ctor(_9__168_0, v32, Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__168_0,
      (int64_t)_9__168_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v29,
    _9__168_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v43 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo, v40);
    v43 = CondType___c_TypeInfo;
  }
  _9__168_1 = (System_Predicate_object__o *)v43->static_fields->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v40);
      v43 = CondType___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__168_1 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarEntity__TypeInfo, v40, v41, v42);
    System_Predicate_object____ctor(_9__168_1, v45, Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, 0LL);
    v46 = CondType___c_TypeInfo->static_fields;
    v46->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v46->__9__168_1, (int64_t)_9__168_1, v47, v48, v49, v50, v51, v52);
  }
  v53 = System_Collections_Generic_List_object___Find(
          v29,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v53 )
    return 0;
  klass_high = HIDWORD(v53[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v54);
  return CondType__IsQuestClear_38310172(klass_high, -1, 0, v55);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  System_String_o *v12; // x19
  System_String_o *result; // x0
  LocalizationManager_c *v14; // x0

  if ( (byte_4B150D9 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, textType);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3824/*"COND_TYPE_NONE"*/, v9, v10);
    byte_4B150D9 = 1;
  }
  switch ( condType )
  {
    case 0:
      v12 = System_String__Concat_62401220((System_String_o *)StringLiteral_3824/*"COND_TYPE_NONE"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
      result = LocalizationManager__Get(v12, 0LL);
      break;
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextQuestClear(condValue, textType, (const MethodInfo *)textType);
      break;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextServantLevel(condValue, textType, (const MethodInfo *)textType);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextServantLimit(condValue, textType, (const MethodInfo *)textType);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextServantGet(condValue, textType, (const MethodInfo *)textType);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextServantFriendship(condValue, textType, (const MethodInfo *)textType);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextServantGroup(condValue, textType, (const MethodInfo *)textType);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextEvent(condValue, textType, (const MethodInfo *)textType);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextPurchaseQpShop(condValue, textType, (const MethodInfo *)textType);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condValue);
      result = CondType__OpenConditionTextPurchaseStoneShop(condValue, textType, (const MethodInfo *)textType);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
      if ( !byte_4B1194D )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&condValue, textType);
        byte_4B1194D = 1;
      }
      v14 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
        v14 = LocalizationManager_TypeInfo;
      }
      result = v14->static_fields->unknownNameText;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  __int64 v16; // x1
  System_String_o *v17; // x19
  System_String_o *v18; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4B150FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, textType, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_3823/*"COND_TYPE_EVENT"*/, v11, v12);
    byte_4B150FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v17 = System_String__Concat_62401220((System_String_o *)StringLiteral_3823/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  Instance = (DataManager_o *)LocalizationManager__Get(v17, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCAA3C(Instance, v14);
  v18 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0LL);
  return System_String__Format(v18, EventName, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  __int64 v16; // x1
  System_String_o *v17; // x19

  if ( (byte_4B150FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, textType, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_3825/*"COND_TYPE_PURCHASE_QP_SHOP"*/, v11, v12);
    byte_4B150FF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v17 = System_String__Concat_62401220((System_String_o *)StringLiteral_3825/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  Instance = (DataManager_o *)LocalizationManager__Get(v17, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCAA3C(Instance, v14);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  __int64 v16; // x1
  System_String_o *v17; // x19

  if ( (byte_4B15104 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, textType, method);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_3826/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, v11, v12);
    byte_4B15104 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v17 = System_String__Concat_62401220((System_String_o *)StringLiteral_3826/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  Instance = (DataManager_o *)LocalizationManager__Get(v17, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCAA3C(Instance, v14);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_String_o *v18; // x19
  LocalizationManager_c *v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B150DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, textType, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3827/*"COND_TYPE_QUEST_CLEAR"*/, v11, v12);
    byte_4B150DF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, textType);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v18 = System_String__Concat_62401220((System_String_o *)StringLiteral_3827/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    Master_object = LocalizationManager__Get(v18, 0LL);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
LABEL_18:
    sub_1BCAA3C(Master_object, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    byte_4B1194D = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v20 = LocalizationManager_TypeInfo;
  }
  return v20->static_fields->unknownNameText;
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
  WarMaster_o *Master_object; // x0
  __int64 v24; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v26; // x22
  __int64 v27; // x1
  System_String_o *v28; // x19
  System_String_o *v29; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  System_String_o *v34; // x19
  Il2CppObject *monitor; // x20
  System_String_o *v36; // x19
  Il2CppObject *v37; // x0
  LocalizationManager_c *v38; // x0
  Il2CppObject *v39; // [xsp+0h] [xbp-40h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  v40 = condQuestPhase;
  if ( (byte_4B150E3 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase, textType);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3828/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3827/*"COND_TYPE_QUEST_CLEAR"*/, v21, v22);
    byte_4B150E3 = 1;
  }
  v39 = 0LL;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condQuestPhase);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0LL);
    if ( QuestId )
    {
      v26 = QuestId;
      v28 = System_String__Concat_62401220((System_String_o *)StringLiteral_3827/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
      v29 = LocalizationManager__Get(v28, 0LL);
      return System_String__Format(v29, (Il2CppObject *)v26->fields.name, 0LL);
    }
  }
  if ( condQuestPhase <= 0 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    return CondType__OpenConditionTextQuestClear(condQuestId, textType, (const MethodInfo *)textType);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condQuestPhase);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v39,
           condQuestId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v34 = System_String__Concat_62401220((System_String_o *)StringLiteral_3828/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v34, 0LL);
      if ( v39 )
      {
        monitor = (Il2CppObject *)v39[1].monitor;
        v36 = (System_String_o *)Master_object;
        v37 = (Il2CppObject *)System_Int32__ToString((int32_t)&v40, 0LL);
        return System_String__Format_62415592(v36, monitor, v37, 0LL);
      }
LABEL_31:
      sub_1BCAA3C(Master_object, v24);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
      byte_4B1194D = 1;
    }
    v38 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
      v38 = LocalizationManager_TypeInfo;
    }
    return v38->static_fields->unknownNameText;
  }
}


System_String_o *__fastcall CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B150F7 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, textType, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3829/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, v7, v8);
    byte_4B150F7 = 1;
  }
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_3829/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v11 = LocalizationManager__Get(v10, 0LL);
  v14 = condFriendshipRank;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format(v11, v12, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  __int64 v16; // x1
  System_String_o *v17; // x19
  System_String_o *v18; // x19
  Il2CppObject *Name; // x1

  if ( (byte_4B150F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, textType, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_3830/*"COND_TYPE_SERVANT_GET"*/, v11, v12);
    byte_4B150F3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v17 = System_String__Concat_62401220((System_String_o *)StringLiteral_3830/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  Instance = (DataManager_o *)LocalizationManager__Get(v17, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCAA3C(Instance, v14);
  v18 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0LL);
  return System_String__Format(v18, Name, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B150FA & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, textType, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3831/*"COND_TYPE_SERVANT_GROUP"*/, v7, v8);
    byte_4B150FA = 1;
  }
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_3831/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v11 = LocalizationManager__Get(v10, 0LL);
  v14 = condGroup;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format(v11, v12, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B150E8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, textType, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3832/*"COND_TYPE_SERVANT_LEVEL"*/, v7, v8);
    byte_4B150E8 = 1;
  }
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_3832/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v11 = LocalizationManager__Get(v10, 0LL);
  v14 = condLv;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format(v11, v12, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B150ED & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, textType, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3833/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, v7, v8);
    byte_4B150ED = 1;
  }
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_3833/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v11 = LocalizationManager__Get(v10, 0LL);
  v14 = condLimitCount;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format(v11, v12, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  __int64 v20; // x1
  SpotPathEntity_o *v21; // x19
  int32_t v22; // w20
  int32_t monitor_high; // w21

  if ( (byte_4B150CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, method, v3);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotPathMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&EventSpotMoveManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B150CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v17);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v21 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v22 = (int32_t)Entity[2].klass;
    if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo, v20);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v22, v21, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v13; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B150CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&targetId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B150CE = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                                 (TotalEventRaidMaster_o *)Instance,
                                 &v13,
                                 eventId,
                                 targetId,
                                 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_15;
      defeatedAt = v13->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_1BCAA3C(Instance, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MapEntity_array *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  MapEntity_o *v18; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v20; // x21

  if ( (byte_4B15165 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_long___, target, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMapMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B15165 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v17 = *(_QWORD *)&Instance->max_length;
  if ( !v17 )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)v17 )
    sub_1BCAA44(Instance, v16);
  v18 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v18 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v18->fields.warId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v20 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v16);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_40814760(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v20 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_300EAB0 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1BCAA3C(0LL, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_162_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1BCAA3C(0LL, method);
  maxLv = collection->fields.maxLv;
  if ( maxLv <= 0 )
    return 0;
  else
    return maxLv - 1;
}


int32_t __fastcall CondType___CountServantClassTotalLimitUp_g__CountFunc_157_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1BCAA3C(0LL, method);
  return collection->fields.maxLimitCount;
}


int32_t __fastcall CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_190_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  __int64 currentCryptoKey; // x9
  UserServantCollectionEntity_o *v3; // x8
  __int64 v4; // x0
  __int64 v5; // x10
  int32_t *p_fakeValue; // x8
  int v7; // t1

  if ( !collection
    || (collection = (UserServantCollectionEntity_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL )
  {
    sub_1BCAA3C(collection, method);
  }
  currentCryptoKey = (unsigned int)collection->fields.svtId.fields.currentCryptoKey;
  v3 = collection;
  if ( currentCryptoKey << 32 < 1 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = (int)currentCryptoKey;
    p_fakeValue = &v3->fields.svtId.fields.fakeValue;
    do
    {
      if ( !currentCryptoKey )
        sub_1BCAA44(v4, method);
      v7 = *p_fakeValue++;
      --v5;
      --currentCryptoKey;
      v4 = (unsigned int)(v4 + v7 - 1);
    }
    while ( v5 );
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  char v13; // w8
  TotalEventRaidEntity_o *v15; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B150D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue, alive);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B150D0 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v13 = 0;
    return v13 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(Instance, v12);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v15,
                               targetId,
                               condValue,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v15 )
    goto LABEL_14;
  v13 = (entity->fields.maxHp <= v15->fields.totalDamage) ^ alive;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v15; // x22
  unsigned int v16; // w23
  EventRaidEntity_o *v17; // x24
  char v18; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B150D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue, alive);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B150D1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1BCAA3C(Instance, v12);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v18 = 0;
  }
  else
  {
    v15 = (TotalEventRaidMaster_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BCAA44(Instance, v12);
      v17 = EventRaidEntityArray->m_Items[v16];
      if ( !v17 || !v15 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v15, &entity, targetId, v17->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v17->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_16;
    }
    v18 = 1;
  }
  return (v18 ^ ~alive) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B150CD & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&condValue, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B150CD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_1BCAA3C(Instance, v12);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CondType_CountDelegate___ctor(
        CondType_CountDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C478;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C418;
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
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v11 = level;
  v12 = id;
  if ( (byte_4B15195 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&level);
    byte_4B15195 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v10, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1BCA798(result, 0LL, method) )
    sub_1BCAA3C(0LL, v3);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


int32_t __fastcall CondType_CountDelegate__Invoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
           this->fields.original_method_info,
           id,
           level,
           *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CondType___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15196 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType___c_TypeInfo, v1, v2);
    byte_4B15196 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CondType___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)CondType___c_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1519A & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, x, method);
    byte_4B1519A = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1519B & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, x, method);
    byte_4B1519B = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4B15197 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
    byte_4B15197 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current);
  result = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4B15198 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
    byte_4B15198 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current);
  result = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4B15199 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&current, *(_QWORD *)&targetId);
    byte_4B15199 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&current);
  result = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__168_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 klass_low; // x9
  CondType___c__DisplayClass189_0_o *v5; // x8
  __int64 v6; // x0
  __int64 v7; // x10
  void **p_monitor; // x8
  int32_t v9; // t1

  if ( !collection
    || (v3 = this,
        (this = (CondType___c__DisplayClass189_0_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, collection);
  }
  klass_low = LODWORD(this[1].klass);
  v5 = this;
  if ( klass_low << 32 < 1 )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    v6 = 0LL;
    v7 = (int)klass_low;
    p_monitor = &v5[1].monitor;
    do
    {
      if ( !klass_low )
        sub_1BCAA44(v6, collection);
      v9 = *(_DWORD *)p_monitor;
      p_monitor = (void **)((char *)p_monitor + 4);
      --v7;
      --klass_low;
      if ( v9 < v3->fields.skillLv )
        v6 = (unsigned int)v6;
      else
        v6 = (unsigned int)(v6 + 1);
    }
    while ( v7 );
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
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B1519C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B1519C = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4B1519D & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B1519D = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4B1519E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B1519E = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&targetId);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}