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
  __int64 v9; // x1
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v11; // x19
  struct CondType_StaticFields *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C20ED5 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v9);
    byte_4C20ED5 = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->uQuestMst, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v12 = CondType_TypeInfo->static_fields;
  v12->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v11;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v12->cachedServantEquipIdStrDic,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_C0DEF0;
}


void __fastcall CondType___ctor(CondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserQuestEntity_o *__fastcall CondType__CheckGroupMaterialQuest(
        UserQuestEntity_o *userQuestEntity,
        int32_t condQuestId,
        bool isCheckResetFlag,
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
  CondType___c__DisplayClass28_0_o *v22; // x19
  int64_t Master_object; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v26; // x25
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x22
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v29; // x21
  UserQuestEntity_o *v30; // x23
  UserQuestEntity_o *IncludedGroupQuest; // x0
  CondType___c_c *v32; // x8
  UserQuestEntity_o *v33; // x21
  System_Func_object__bool__o *_9__28_1; // x24
  Il2CppObject *v35; // x26
  struct CondType___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  QuestScriptMaterialNextMaster_o *v43; // x8
  Il2CppObject *v44; // x0
  int32_t questPhase; // w24
  int32_t questId; // w26
  UserQuestMaster_o *v47; // x27
  int64_t updatedAt; // x8
  QuestScriptMaterialNextMaster_o *v49; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x22
  System_Func_object__bool__o *v51; // x20
  CondType___c_c *v53; // x0
  System_Func_object__bool__o *_9__28_2; // x23
  Il2CppObject *v55; // x25
  struct CondType___c_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int clearNum; // w8
  CondType___c_c *v64; // x0
  struct CondType___c_StaticFields *v65; // x8
  System_Func_object__bool__o *_9__28_3; // x20
  Il2CppObject *v67; // x25
  struct CondType___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppObject *v75; // x24
  struct CondType___c_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7

  if ( (byte_4C20E1C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&condQuestId);
    sub_1C3B764(&Method_DataManager_GetMaster_UserQuestMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____77947216, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v11);
    sub_1C3B764(&System_Func_UserQuestEntity__bool__TypeInfo, v12);
    sub_1C3B764(&MaterialGroupClearHistoryManager_TypeInfo, v13);
    sub_1C3B764(&NetworkManager_TypeInfo, v14);
    sub_1C3B764(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v15);
    sub_1C3B764(&Method_CondType___c__CheckGroupMaterialQuest_b__28_2__, v16);
    sub_1C3B764(&Method_CondType___c__CheckGroupMaterialQuest_b__28_3__, v17);
    sub_1C3B764(&Method_CondType___c__CheckGroupMaterialQuest_b__28_4__, v18);
    sub_1C3B764(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v19);
    sub_1C3B764(&CondType___c__DisplayClass28_0_TypeInfo, v20);
    sub_1C3B764(&CondType___c_TypeInfo, v21);
    byte_4C20E1C = 1;
  }
  v22 = (CondType___c__DisplayClass28_0_o *)sub_1C3B9B0(CondType___c__DisplayClass28_0_TypeInfo);
  CondType___c__DisplayClass28_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_70;
  v22->fields.condQuestId = condQuestId;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0LL);
  if ( userQuestEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( !Master_object )
      goto LABEL_70;
    v26 = (QuestScriptMaterialNextMaster_o *)Master_object;
    IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                       (QuestScriptMaterialNextMaster_o *)Master_object,
                       v22->fields.condQuestId,
                       0LL);
    SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                     v26,
                                     IncludedGroups,
                                     0LL);
    v29 = QuestScriptMaterialNextMaster__GetIncludedGroups(v26, v22->fields.condQuestId, 0LL);
    v30 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (const MethodInfo_3013368 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v29, 0LL);
    v32 = CondType___c_TypeInfo;
    v33 = IncludedGroupQuest;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v32 = CondType___c_TypeInfo;
    }
    _9__28_1 = (System_Func_object__bool__o *)v32->static_fields->__9__28_1;
    if ( !_9__28_1 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = CondType___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v32->static_fields->__9;
      _9__28_1 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserQuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_1, v35, Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, 0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__28_1,
        (int64_t)_9__28_1,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    Master_object = System_Linq_Enumerable__All_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                      (System_Func_TSource__bool__o *)_9__28_1,
                      (const MethodInfo_2FFA7D0 *)Method_System_Linq_Enumerable_All_UserQuestEntity___);
    if ( (Master_object & 1) != 0 )
      v43 = 0LL;
    else
      v43 = v26;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_66;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v44 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v30->fields.questId;
      questPhase = v30->fields.questPhase;
      v47 = (UserQuestMaster_o *)v44;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__getTime(0LL);
      if ( !v47 )
        goto LABEL_70;
      Master_object = (int64_t)UserQuestMaster__CreateQuestClearDummyData(v47, questId, questPhase, Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_70;
      updatedAt = v30->fields.updatedAt;
      v49 = v26;
      v30 = (UserQuestEntity_o *)Master_object;
      *(_QWORD *)(Master_object + 72) = updatedAt;
LABEL_47:
      clearNum = v30->fields.clearNum;
      if ( clearNum <= 0 )
        v26 = v49;
      else
        v26 = 0LL;
      if ( clearNum > 0 )
      {
LABEL_67:
        if ( v49 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v49, v22->fields.condQuestId, v30, v33, 0LL);
LABEL_70:
        sub_1C3B9C0(Master_object, v24);
      }
      v64 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v64 = CondType___c_TypeInfo;
      }
      v65 = v64->static_fields;
      if ( isCheckResetFlag )
      {
        _9__28_3 = (System_Func_object__bool__o *)v65->__9__28_3;
        if ( !_9__28_3 )
        {
          if ( !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            v64 = CondType___c_TypeInfo;
          }
          v67 = (Il2CppObject *)v64->static_fields->__9;
          _9__28_3 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__28_3, v67, Method_CondType___c__CheckGroupMaterialQuest_b__28_3__, 0LL);
          v68 = CondType___c_TypeInfo->static_fields;
          v68->__9__28_3 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_3;
          sub_1C3B708((PartyOrganizationUtility_o *)&v68->__9__28_3, (int64_t)_9__28_3, v69, v70, v71, v72, v73, v74);
        }
        v26 = v49;
      }
      else
      {
        _9__28_3 = (System_Func_object__bool__o *)v65->__9__28_4;
        if ( !_9__28_3 )
        {
          if ( !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            v64 = CondType___c_TypeInfo;
          }
          v75 = (Il2CppObject *)v64->static_fields->__9;
          _9__28_3 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__28_3, v75, Method_CondType___c__CheckGroupMaterialQuest_b__28_4__, 0LL);
          v76 = CondType___c_TypeInfo->static_fields;
          v76->__9__28_4 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_3;
          sub_1C3B708((PartyOrganizationUtility_o *)&v76->__9__28_4, (int64_t)_9__28_3, v77, v78, v79, v80, v81, v82);
        }
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50415372(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__28_3,
                                 (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____77947216);
      if ( Master_object )
        v30 = (UserQuestEntity_o *)Master_object;
LABEL_66:
      v49 = v26;
      goto LABEL_67;
    }
    if ( isCheckResetFlag )
      v49 = v43;
    else
      v49 = 0LL;
    if ( isCheckResetFlag )
    {
      if ( !v30 )
      {
        v49 = v43;
        if ( v43 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v49, v22->fields.condQuestId, v30, v33, 0LL);
        goto LABEL_70;
      }
      Master_object = UserQuestEntity__IsResetStatus(v30, 0LL);
      if ( (Master_object & 1) == 0 )
        goto LABEL_47;
      v53 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v53 = CondType___c_TypeInfo;
      }
      _9__28_2 = (System_Func_object__bool__o *)v53->static_fields->__9__28_2;
      if ( !_9__28_2 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = CondType___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v53->static_fields->__9;
        _9__28_2 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__28_2, v55, Method_CondType___c__CheckGroupMaterialQuest_b__28_2__, 0LL);
        v56 = CondType___c_TypeInfo->static_fields;
        v56->__9__28_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_2;
        sub_1C3B708((PartyOrganizationUtility_o *)&v56->__9__28_2, (int64_t)_9__28_2, v57, v58, v59, v60, v61, v62);
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50415372(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__28_2,
                                 (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____77947216);
      v30 = (UserQuestEntity_o *)Master_object;
    }
    else
    {
      v49 = v26;
    }
    if ( !v30 )
      goto LABEL_67;
    goto LABEL_47;
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v51 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v51,
    (Il2CppObject *)v22,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50415372(
                                v50,
                                (System_Func_TSource__bool__o *)v51,
                                (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____77947216);
}


bool __fastcall CondType__CompareQuestClearTime(
        int32_t questId,
        int64_t time,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x0
  int64_t v9; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v11; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v13; // x3
  UserQuestEntity_o *v14; // x22
  bool IsQuestClear_39011304; // w8

  if ( (byte_4C20ED2 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, time);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C20ED2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, time);
    byte_4C1C955 = 1;
  }
  v8 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v9 = *((_QWORD *)v8[2].virtualMethodPointer + 8);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(v8);
  if ( !UserQuestMaster )
    sub_1C3B9C0(0LL, v11);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9, questId, 0LL);
  if ( EntityFromId )
  {
    v14 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_39011304 = CondType__IsQuestClear_39011304(questId, -1, 0, v13);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_39011304 )
    {
      if ( checkType == 2 )
      {
        LOBYTE(EntityFromId) = v14->fields.updatedAt <= time;
      }
      else if ( checkType == 1 )
      {
        LOBYTE(EntityFromId) = v14->fields.updatedAt >= time;
      }
      else if ( checkType )
      {
        LOBYTE(EntityFromId) = 0;
      }
      else
      {
        LOBYTE(EntityFromId) = v14->fields.updatedAt == time;
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
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v9; // x21
  int32_t v10; // w22
  unsigned int v11; // w24
  UserServantCollectionMaster_c **v12; // x8
  UserServantCollectionEntity_o *v13; // x23
  int v14; // w8
  int v15; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20EB5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, *(_QWORD *)&targetNum);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C20EB5 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_1C3B9C0(Master_object, v7);
  }
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v9 = Master_object;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_26;
      v12 = &v9->klass + (int)v11;
      v13 = (UserServantCollectionEntity_o *)v12[4];
      if ( !v13 )
        goto LABEL_27;
      Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                         (UserServantCollectionEntity_o *)v12[4],
                                                         0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v13, 0LL);
        if ( !Master_object )
          goto LABEL_27;
        v14 = (int)Master_object->fields._MasterName_k__BackingField;
        if ( v14 >= 1 )
          break;
      }
LABEL_22:
      LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
      if ( (int)++v11 >= (int)MasterName_k__BackingField )
        return v10;
    }
    v15 = 0;
    while ( v14 != v15 )
    {
      if ( *(&Master_object->fields.revision + v15) >= skillLv )
        ++v10;
      if ( targetNum && v10 >= targetNum )
        return v10;
      if ( v14 == ++v15 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C3B9C8(Master_object, v7);
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
  CondType___c__DisplayClass195_0_o *v15; // x20
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x19
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  CondType___c_c *v24; // x8
  System_Func_object__int__o *_9__195_1; // x20
  Il2CppObject *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct CondType___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__195_1; // x0
  CondType___c_c *v35; // x0
  Il2CppObject *v36; // x21
  struct CondType___c_StaticFields *v37; // x0

  if ( (byte_4C20EBB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntitys_UserClassBoardSquareEntity___,
      v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v7);
    sub_1C3B764(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v8);
    sub_1C3B764(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v9);
    sub_1C3B764(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__, v10);
    sub_1C3B764(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__, v11);
    sub_1C3B764(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__, v12);
    sub_1C3B764(&CondType___c__DisplayClass195_0_TypeInfo, v13);
    sub_1C3B764(&CondType___c_TypeInfo, v14);
    byte_4C20EBB = 1;
  }
  v15 = (CondType___c__DisplayClass195_0_o *)sub_1C3B9B0(CondType___c__DisplayClass195_0_TypeInfo);
  CondType___c__DisplayClass195_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_22;
  v15->fields.targetId = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1C3B9C0(Master_object, v17);
  v18 = Master_object;
  v19 = sub_1C3B898(Master_object->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntitys_UserClassBoardSquareEntity___
                                                 + 40)
                                               + 1].methodPtr);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v19 + 8))(
                                                               v18,
                                                               v19);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               v20,
                                                               (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v15->fields.targetId )
  {
    v22 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v15,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      0LL);
    v23 = System_Linq_Enumerable__Where_object_(
            v21,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v24 = CondType___c_TypeInfo;
    v21 = v23;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v24 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v24->static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = CondType___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__195_1,
        v26,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (PartyOrganizationUtility_o *)&static_fields->__9__195_1;
LABEL_20:
      sub_1C3B708(p__9__195_1, (int64_t)_9__195_1, v27, v28, v29, v30, v31, v32);
    }
  }
  else
  {
    v35 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v35 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v35->static_fields->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = CondType___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v35->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__195_1,
        v36,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        0LL);
      v37 = CondType___c_TypeInfo->static_fields;
      v37->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (PartyOrganizationUtility_o *)&v37->__9__195_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           v21,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_3029848 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
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
  UserServantCollectionEntity_array *Master_object; // x0
  __int64 v12; // x1
  UserServantCollectionEntity_array *v13; // x21
  int max_length; // w9
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  int32_t v16; // w22
  int v17; // w8
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x24
  void *data; // x25
  const char *namespaze; // x26
  Il2CppObject *v23; // [xsp+0h] [xbp-70h] BYREF
  __int64 findSum; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C20EB8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantClassMaster___, countFunc);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4C20EB8 = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    v13 = Master_object;
    if ( *(_QWORD *)&Master_object->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v16 = 0;
        v17 = 0;
        while ( 1 )
        {
          if ( v17 >= (unsigned int)max_length )
            sub_1C3B9C8(Master_object, v12);
          v18 = &v13->obj.klass + v17;
          v19 = v18[4];
          if ( !v19 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v18[4],
                                                                 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v19->_1.namespaze;
            data = v19->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v26.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v26.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                                   v26,
                                                                   0LL);
            if ( !v15 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v15,
                                                                   &v23,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v23 )
                break;
              if ( LODWORD(v23[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))countFunc->fields.m_target)(
                                                                       countFunc->fields.original_method_info,
                                                                       v19,
                                                                       *(_QWORD *)&countFunc->fields.extra_arg);
                v16 += (int)Master_object;
              }
            }
          }
          v17 = findSum + 1;
          LODWORD(findSum) = v17;
          max_length = v13->max_length;
          if ( v17 >= max_length )
            return v16;
        }
LABEL_31:
        sub_1C3B9C0(Master_object, v12);
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
  int64_t lastUserId; // x23
  NetworkManager_c *v20; // x0
  CondType_c *v21; // x0
  Il2CppObject *cachedServantEquipIdStrDic; // x0
  __int64 v23; // x1
  NetworkManager_c *v24; // x0
  UserServantCollectionMaster_o *v25; // x20
  System_Collections_Generic_List_object__o *ServantEquipCollectionList; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v28; // x21
  int v29; // w26
  int v30; // w19
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v36; // x0
  Il2CppObject *v37; // x23
  void *v38; // x24
  Il2CppClass *v39; // x25
  __int64 v40; // x0
  ServantLimitEntity_o *v41; // x24
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // [xsp+0h] [xbp-B0h]
  int32_t v47; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C20EA3 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_CombineMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4C20EA3 = 1;
  }
  v18 = CondType_TypeInfo;
  memset(&v50, 0, sizeof(v50));
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v18 = CondType_TypeInfo;
  }
  lastUserId = v18->static_fields->lastUserId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v20 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v20 = NetworkManager_TypeInfo;
  }
  if ( lastUserId != v20->static_fields->userIdNumber )
  {
    v21 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (Il2CppObject *)v21->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_56:
      sub_1C3B9C0(cachedServantEquipIdStrDic, method);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_32F4D24 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v23);
      byte_4C1C955 = 1;
    }
    v24 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v24 = NetworkManager_TypeInfo;
    }
    CondType_TypeInfo->static_fields->lastUserId = v24->static_fields->userIdNumber;
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_56;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v25 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v25 )
    goto LABEL_56;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v25,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0LL);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_56;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_56;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_56;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v29 = targetId / 100;
  v30 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    ServantEquipCollectionList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v47 = 0;
  v50 = v48;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1C3B9C0(v31, v32);
    if ( LODWORD(v50.fields._current[2].monitor) == 2 )
    {
      monitor = v50.fields._current[1].monitor;
      klass = v50.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v51.fields.fakeValue = klass;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v51, 0LL);
      if ( !MasterData_object )
        sub_1C3B9C0(v36, (unsigned int)v36);
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v36,
              (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v37 )
      {
        v39 = v37[1].klass;
        v38 = v37[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v39;
        *(_QWORD *)&v52.fields.fakeValue = v38;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v52, 0LL);
        if ( !v28 )
          sub_1C3B9C0(v40, (unsigned int)v40);
        v41 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v40, 0, 0LL);
        if ( v41
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v37, 0LL)
          && v41->fields.rarity == v30
          && SHIDWORD(current[2].monitor) >= v29 )
        {
          if ( !v46 )
            sub_1C3B9C0(0LL, v42);
          v43 = DataMasterBase_object__object__int___TryGetEntity(
                  v46,
                  &entity,
                  (int32_t)v37[8].monitor,
                  (const MethodInfo_329AE94 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v43 )
            goto LABEL_50;
          if ( !entity )
            sub_1C3B9C0(v43, v44);
          if ( HIDWORD(entity[1].klass) != 3 )
LABEL_50:
            ++v47;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v47;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20EBF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20EBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  UserEventRandomMissionMaster_o *v7; // x20
  int32_t v8; // w21
  unsigned __int64 v9; // x22

  if ( (byte_4C20EAD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C20EAD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  v6 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = Master_object;
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
        sub_1C3B9C8(Master_object, v5);
      if ( !v7 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v7,
                                                          missionIds->m_Items[v9 + 1],
                                                          0LL);
      if ( Master_object )
        v8 += *(&Master_object->fields.revision + 1);
      LODWORD(v6) = missionIds->max_length;
      if ( (__int64)++v9 >= (int)v6 )
        return v8;
    }
LABEL_16:
    sub_1C3B9C0(Master_object, v5);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_object__int__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C20E9D & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__, method);
    sub_1C3B764(&CondType_TypeInfo, v3);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4C20E9D = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v5,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v5, v6);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_object__int__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C20EA0 & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, method);
    sub_1C3B764(&CondType_TypeInfo, v3);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4C20EA0 = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v5, 0LL, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v5, v6);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_object__int__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C20E9B & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, method);
    sub_1C3B764(&CondType_TypeInfo, v3);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4C20E9B = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v5, 0LL, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v5, v6);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_object__int__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C20EB7 & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__, method);
    sub_1C3B764(&CondType_TypeInfo, v3);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4C20EB7 = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v5,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v5, v6);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CondType___c__DisplayClass158_0_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // w21
  System_Func_object__int__o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4C20E9C & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v3);
    sub_1C3B764(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__, v4);
    sub_1C3B764(&CondType___c__DisplayClass158_0_TypeInfo, v5);
    byte_4C20E9C = 1;
  }
  v6 = (CondType___c__DisplayClass158_0_o *)sub_1C3B9B0(CondType___c__DisplayClass158_0_TypeInfo);
  CondType___c__DisplayClass158_0___ctor(v6, 0LL);
  if ( !v6 )
    sub_1C3B9C0(v7, v8);
  v9 = targetId / 100;
  v6->fields.friendShipRank = targetId % 100;
  v10 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v9, (System_Func_UserServantCollectionEntity__int__o *)v10, v11);
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
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionEntity_array *v13; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x26
  int32_t v17; // w22
  UserServantCollectionEntity_o *v18; // x24
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C20E9F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&level);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C20E9F = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v13 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v16 = 0LL;
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= max_length )
            sub_1C3B9C8(Instance, v12);
          v18 = v13->m_Items[v16];
          if ( !v18 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v13->m_Items[v16], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && v18->fields.maxLv >= level )
          {
            v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v20;
            *(_QWORD *)&v23.fields.fakeValue = v19;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                              v23,
                                                              0LL);
            if ( !v15 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v15,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v17;
          }
          max_length = v13->max_length;
          if ( (int)++v16 >= max_length )
            return v17;
        }
LABEL_27:
        sub_1C3B9C0(Instance, v12);
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
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v10; // x20

  if ( (byte_4C20EA1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&level);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20EA1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                      (UserServantCollectionMaster_o *)MasterData_object,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      sarvantId,
                                      0LL)) == 0LL )
  {
LABEL_15:
    sub_1C3B9C0(Instance, v8);
  }
  v10 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v10->fields.datalist) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int v11; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x26
  int32_t v16; // w23
  int v17; // w29
  UserServantCollectionEntity_o *v18; // x20
  __int64 v19; // x24
  __int64 v20; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C20E9A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E9A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v11 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    v13 = *(_QWORD *)&CollectionList->max_length;
    if ( v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v15 = 0LL;
        v16 = 0;
        v17 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v15 >= (unsigned int)v13 )
            sub_1C3B9C8(Instance, v10);
          v18 = CollectionList->m_Items[v15];
          if ( !v18 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v15], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v20;
            *(_QWORD *)&v23.fields.fakeValue = v19;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v23, 0LL);
            if ( !v14 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v14,
                         (int32_t)Instance,
                         (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v11 && v18->fields.maxLimitCount >= v17 )
              ++v16;
          }
          LODWORD(v13) = CollectionList->max_length;
          if ( (int)++v15 >= (int)v13 )
            return v16;
        }
LABEL_27:
        sub_1C3B9C0(Instance, v10);
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
  CondType___c__DisplayClass189_0_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // w21
  System_Func_object__int__o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4C20EB6 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&System_Func_UserServantCollectionEntity__int__TypeInfo, v3);
    sub_1C3B764(&Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__, v4);
    sub_1C3B764(&CondType___c__DisplayClass189_0_TypeInfo, v5);
    byte_4C20EB6 = 1;
  }
  v6 = (CondType___c__DisplayClass189_0_o *)sub_1C3B9B0(CondType___c__DisplayClass189_0_TypeInfo);
  CondType___c__DisplayClass189_0___ctor(v6, 0LL);
  if ( !v6 )
    sub_1C3B9C0(v7, v8);
  v9 = targetId / 100;
  v6->fields.skillLv = targetId % 100;
  v10 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v9, (System_Func_UserServantCollectionEntity__int__o *)v10, v11);
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
  if ( (byte_4C20E9E & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1C3B764(&CondType_TypeInfo, func);
    byte_4C20E9E = 1;
  }
  if ( !v4 )
    goto LABEL_20;
  v5 = *(CondType_c **)&v4->max_length;
  if ( !v5 )
    return 0;
  targetParam = (System_Int32_array *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
        sub_1C3B9C8(targetParam, func);
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
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
    sub_1C3B9C0(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v5; // x1
  int max_length; // w9
  int v7; // w10
  int32_t v8; // w8
  UserEventBoardGameTokenEntity_o *v9; // x11

  if ( (byte_4C20E94 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E94 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_41538728((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( max_length == v7 )
          sub_1C3B9C8(Instance, v5);
        v9 = Instance->m_Items[v7];
        if ( !v9 )
          break;
        ++v7;
        if ( v9->fields.tokenId == tokenId )
          ++v8;
        if ( max_length == v7 )
          return v8;
      }
LABEL_19:
      sub_1C3B9C0(Instance, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C20E82 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E82 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C3B9C0(Instance, v6);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20EC3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20EC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20EBD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20EBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20EC1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20EC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C20E13 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonTemplate_BattleItemData__get_Instance__, v7);
    byte_4C20E13 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                targetId,
                                (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_23:
      sub_1C3B9C0(Instance, v9);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_23;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &v12,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v12 )
    goto LABEL_23;
  return v12->fields.num;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *Instance; // x0
  const MethodInfo *v7; // x1
  EventMissionMaster_o *v8; // x19
  __int64 v9; // x8
  System_Int32_array *v10; // x19
  int32_t v11; // w20
  unsigned __int64 v12; // x23
  int32_t v13; // w21

  if ( (byte_4C20E4B & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E4B = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1C3B9C0(Instance, v7);
    }
    v9 = *(_QWORD *)&Instance->max_length;
    v10 = Instance;
    if ( (int)v9 < 1 )
      return 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v9 )
        sub_1C3B9C8(Instance, v7);
      v13 = v10->m_Items[v12 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v13, v7);
      LODWORD(v9) = v10->max_length;
      ++v12;
      v11 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v12 < (int)v9 );
    return v11;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *Instance; // x0
  const MethodInfo *v7; // x1
  EventMissionMaster_o *v8; // x19
  __int64 v9; // x8
  System_Int32_array *v10; // x19
  int32_t v11; // w20
  unsigned __int64 v12; // x23
  int32_t v13; // w21

  if ( (byte_4C20E4C & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E4C = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1C3B9C0(Instance, v7);
    }
    v9 = *(_QWORD *)&Instance->max_length;
    v10 = Instance;
    if ( (int)v9 < 1 )
      return 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v9 )
        sub_1C3B9C8(Instance, v7);
      v13 = v10->m_Items[v12 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v13, v7);
      LODWORD(v9) = v10->max_length;
      ++v12;
      v11 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v12 < (int)v9 );
    return v11;
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
      return dword_C48560[v2];
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v16; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x25
  __int64 v26; // x8
  int32_t v27; // w21
  unsigned __int64 v28; // x26
  bool v29; // w23
  int32_t v30; // w24

  if ( (byte_4C20E55 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C20E55 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v16 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)sameGroupQuestIds,
          (int64_t)QuestIdListByGroupId,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        (v25 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_30:
    sub_1C3B9C0(Instance, v14);
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
        sub_1C3B9C8(Instance, v14);
      v30 = v25->m_Items[v28 + 1];
      if ( v30 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_39011304(v30, -1, v29, v24);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v27;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C1C955 )
          {
            sub_1C3B764(&NetworkManager_TypeInfo, v14);
            byte_4C1C955 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v16 )
            goto LABEL_30;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        v16,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v30,
                                        0LL);
          if ( Instance )
          {
            Instance = (DataManager_o *)UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
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
  if ( (byte_4C20E59 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C20E59 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) >= condVal;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E49 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E49 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                (UserEventMissionCondDetailMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_18:
    sub_1C3B9C0(Instance, v8);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C20E58 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v1);
    byte_4C20E58 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  CondType_c *v10; // x0
  int64_t v11; // x8
  int32_t PurchaseShopCount; // w0
  bool IsPurchaseShop; // w0
  CondType_c *v16; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v5 = eventId;
  if ( (byte_4C20E1A & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C20E1A = 1;
  }
  v10 = CondType_TypeInfo;
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v10 = CondType_TypeInfo;
  }
  v10->static_fields->EventId = v5;
  if ( condType > 85 )
  {
    if ( condType > 127 )
    {
      v11 = 0LL;
      switch ( condType )
      {
        case 174:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v11;
        case 178:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          switch ( condType )
          {
            case 136:
              if ( !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v11;
            case 139:
              if ( !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              IsPurchaseShop = CondType__TimeLimitRaidDead(v5, targetId, (const MethodInfo *)condValue);
              goto LABEL_148;
            case 141:
              if ( !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v10);
            default:
              if ( condType != 219 )
                return v11;
              if ( !v10->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v10);
              PurchaseShopCount = CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return PurchaseShopCount;
      }
      return v11;
    }
    switch ( condType )
    {
      case ']':
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
      case '_':
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtEquipFriendShip((const MethodInfo *)v10);
      case '\x7F':
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
    }
    return 0LL;
  }
  if ( condType <= 46 )
  {
    v11 = 1LL;
    switch ( condType )
    {
      case 0:
        return v11;
      case 1:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
      case 2:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
      case 6:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
      case 7:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
      case 8:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return (unsigned int)CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
      case 9:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
      case 12:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetOpenTime((const MethodInfo *)v10);
      case 22:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      case 23:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
      case 24:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
      case 25:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      case 26:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
      case 28:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        IsPurchaseShop = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
        goto LABEL_148;
      case 29:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
      case 30:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
      case 32:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
      case 33:
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v5 = CondType_TypeInfo->static_fields->EventId;
        }
        return CondType__GetSuperBossDamage(targetId, condValue, v5, *(const MethodInfo **)&eventId);
      case 34:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
      case 35:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        IsPurchaseShop = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
LABEL_148:
        v11 = IsPurchaseShop;
        break;
      case 40:
        if ( !v10->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v10);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
          byte_4C1C955 = 1;
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v16 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__GetQuestClearPhaseCount((int64_t)v16, targetId, -1, 0, method);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType == 67 )
    {
      if ( !v10->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v10);
      return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
    }
    if ( condType == 71 )
    {
      if ( !v10->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v10);
      return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
    }
    if ( condType != 85 )
      return 0LL;
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    return CondType__GetEventTotalPoint(v5, *(const MethodInfo **)&targetId);
  }
  return v11;
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
  int64_t result; // x0
  CondType___c_c *v15; // x0
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct CondType___c_StaticFields *v24; // x0
  PartyOrganizationUtility_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v26; // x0
  __int64 *v27; // x8
  CondType___c_c *v28; // x0
  Il2CppObject *v29; // x21
  struct CondType___c_StaticFields *v30; // x0
  CondType_CountDelegate_o *v31; // x20
  const MethodInfo *v32; // x2
  CondType___c_c *v33; // x0
  Il2CppObject *v34; // x21
  struct CondType___c_StaticFields *static_fields; // x0

  if ( (byte_4C20E1B & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType_CountServantLevelClassNum__, targetIds);
    sub_1C3B764(&Method_CondType_CountServantLevelIdNum__, v5);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&CondType_CountDelegate_TypeInfo, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_Aggregate_int__int___, v8);
    sub_1C3B764(&System_Func_int__int__int__TypeInfo, v9);
    sub_1C3B764(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v10);
    sub_1C3B764(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v11);
    sub_1C3B764(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v12);
    sub_1C3B764(&CondType___c_TypeInfo, v13);
    byte_4C20E1B = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v33 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v33 = CondType___c_TypeInfo;
        }
        _9__26_1 = v33->static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = CondType___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v33->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1C3B9B0(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v34, Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__26_1 = _9__26_1;
        p__9__26_1 = (PartyOrganizationUtility_o *)&static_fields->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v28 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v28 = CondType___c_TypeInfo;
        }
        _9__26_1 = v28->static_fields->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = CondType___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v28->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1C3B9B0(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v29, Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, 0LL);
        v30 = CondType___c_TypeInfo->static_fields;
        v30->__9__26_2 = _9__26_1;
        p__9__26_1 = (PartyOrganizationUtility_o *)&v30->__9__26_2;
      }
    }
    else
    {
      if ( condType == 158 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        LODWORD(result) = CondType__CountRandomMissionClearNum(targetIds, (const MethodInfo *)targetIds);
        return (int)result;
      }
      if ( condType != 188 )
        return result;
      v15 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v15 = CondType___c_TypeInfo;
      }
      _9__26_1 = v15->static_fields->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_39;
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CondType___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_1C3B9B0(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__26_1, v17, Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, 0LL);
      v24 = CondType___c_TypeInfo->static_fields;
      v24->__9__26_0 = _9__26_1;
      p__9__26_1 = (PartyOrganizationUtility_o *)&v24->__9__26_0;
    }
    sub_1C3B708(p__9__26_1, (int64_t)_9__26_1, v18, v19, v20, v21, v22, v23);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_2FF8930 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v26 = (CondType_CountDelegate_o *)sub_1C3B9B0(CondType_CountDelegate_TypeInfo);
    v27 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v26 = (CondType_CountDelegate_o *)sub_1C3B9B0(CondType_CountDelegate_TypeInfo);
    v27 = &Method_CondType_CountServantLevelIdNum__;
  }
  v31 = v26;
  CondType_CountDelegate___ctor(v26, 0LL, *v27, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v31, v32);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E43 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E43 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                (UserShopMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_15:
    sub_1C3B9C0(Instance, v6);
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
  __int64 v10; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w25
  QuestGroupMaster_o *v15; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v17; // x21
  unsigned __int64 v18; // x26
  int32_t v19; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t v22; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C20E5B & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E5B = 1;
  }
  v22 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v15 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v15 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v15,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0LL);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v17 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          challengeNum = 0;
          v18 = 0LL;
          while ( 1 )
          {
            if ( v18 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3B9C8(Instance, v10);
            v19 = *((_DWORD *)&v17->fields._DispLog + v18);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C1C955 )
            {
              sub_1C3B764(&NetworkManager_TypeInfo, v10);
              byte_4C1C955 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                          (UserQuestMaster_o *)MasterData_object,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v19,
                                          0LL);
            if ( Instance )
              challengeNum += LODWORD(Instance->fields.masterDataBytes);
            LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
            if ( (__int64)++v18 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C3B9C0(Instance, v10);
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    goto LABEL_39;
  EntityFromId = UserQuestMaster__getEntityFromId(
                   UserQuestMaster,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   condId,
                   0LL);
  if ( EntityFromId )
  {
    challengeNum = EntityFromId->fields.challengeNum;
    goto LABEL_36;
  }
LABEL_35:
  challengeNum = 0;
LABEL_36:
  if ( challengeNum >= v22 )
    return v22;
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  QuestGroupMaster_o *v11; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x19
  unsigned __int64 v14; // x26
  int32_t v15; // w22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v17; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C20E4A & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E4A = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v11 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v11,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0LL);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v13 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            return 0;
          v8 = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3B9C8(Instance, v10);
            v15 = *((_DWORD *)&v13->fields._DispLog + v14);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C1C955 )
            {
              sub_1C3B764(&NetworkManager_TypeInfo, v10);
              byte_4C1C955 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__TryGetEntity(
                                          (UserQuestMaster_o *)MasterData_object,
                                          &entity,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v15,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Instance = (DataManager_o *)CondType__IsQuestClear_39011304(v15, -1, 0, v17);
              v8 += (unsigned __int8)Instance & 1;
            }
            LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
            if ( (__int64)++v14 >= (int)m_CancellationTokenSource )
              return v8;
          }
        }
      }
    }
    sub_1C3B9C0(Instance, v10);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39011304(targetId, -1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CondType_c *v9; // x0
  __int64 v10; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w21
  QuestGroupMaster_o *v15; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v17; // x22
  unsigned __int64 v18; // x26
  int32_t v19; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t v22; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C20E52 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E52 = 1;
  }
  v22 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v15 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v15 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v15,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0LL);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v17 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          ClearNum = 0;
          v18 = 0LL;
          while ( 1 )
          {
            if ( v18 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3B9C8(Instance, v10);
            v19 = *((_DWORD *)&v17->fields._DispLog + v18);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C1C955 )
            {
              sub_1C3B764(&NetworkManager_TypeInfo, v10);
              byte_4C1C955 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                          (UserQuestMaster_o *)MasterData_object,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v19,
                                          0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += (int)Instance;
            }
            LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
            if ( (__int64)++v18 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C3B9C0(Instance, v10);
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    goto LABEL_39;
  EntityFromId = UserQuestMaster__getEntityFromId(
                   UserQuestMaster,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   condId,
                   0LL);
  if ( EntityFromId )
  {
    ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0LL);
    goto LABEL_36;
  }
LABEL_35:
  ClearNum = 0;
LABEL_36:
  if ( ClearNum >= v22 )
    return v22;
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
  __int64 v10; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  _QWORD *p_image; // x0
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E22 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20E22 = 1;
  }
  v9 = CondType_TypeInfo;
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C1C955 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !UserQuestMaster )
    goto LABEL_21;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, *(_QWORD *)(p_image[23] + 64LL), targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    p_image = &entity->klass;
    if ( !entity )
      goto LABEL_21;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  p_image = &entity->klass;
  if ( !entity )
LABEL_21:
    sub_1C3B9C0(p_image, v10);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *CacheByTypeGroup; // x0
  int32_t v18; // w21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  int32_t klass; // w22
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  System_Int32_array *v25; // x22
  unsigned __int64 v26; // x24
  int32_t v27; // w23
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C20E57 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4C20E57 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || !MasterData_object )
    goto LABEL_30;
  if ( BYTE1(Instance->m_Items[11]) )
  {
    CacheByTypeGroup = (System_Collections_Generic_List_object__o *)QuestGroupMaster__GetCacheByTypeGroup(
                                                                      (QuestGroupMaster_o *)MasterData_object,
                                                                      groupId,
                                                                      2,
                                                                      0LL);
    if ( CacheByTypeGroup )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v29,
        CacheByTypeGroup,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
      v18 = 0;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v29,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
        if ( !v19 )
          break;
        if ( !v29.fields._current )
          sub_1C3B9C0(v19, v20);
        klass = (int32_t)v29.fields._current[1].klass;
        if ( klass != questId )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v18 += CondType__IsQuestClear_39011304(klass, -1, isCheckResetFlag, v21);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
      return v18;
    }
    return 0;
  }
  Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)MasterData_object, groupId, 2, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1C3B9C0(Instance, v15);
  v24 = *(_QWORD *)&Instance->max_length;
  v25 = Instance;
  if ( (int)v24 < 1 )
    return 0;
  v18 = 0;
  v26 = 0LL;
  do
  {
    if ( v26 >= (unsigned int)v24 )
      sub_1C3B9C8(Instance, v15);
    v27 = v25->m_Items[v26 + 1];
    if ( v27 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestClear_39011304(v27, -1, isCheckResetFlag, v23);
      v18 += (unsigned __int8)Instance & 1;
    }
    LODWORD(v24) = v25->max_length;
    ++v26;
  }
  while ( (__int64)v26 < (int)v24 );
  return v18;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v11; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4C20E5A & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E5A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
LABEL_19:
    sub_1C3B9C0(Instance, v9);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v11; // x21
  unsigned int v12; // w23
  int32_t v13; // w22
  EventRaidEntity_o *v14; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4C20E12 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E12 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
        sub_1C3B9C8(Instance, v8);
      v14 = EventRaidEntityArray->m_Items[v12];
      if ( !v14 || !v11 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v11, &entity, targetId, v14->fields.day, 0LL);
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
    sub_1C3B9C0(Instance, v8);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C20EAC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C20EAC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v5);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20E32 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20E81 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E81 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x22
  int32_t v13; // w20
  ShopGroupEntity_o *v14; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E7A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E7A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v9->max_length;
      if ( max_length >= 1 )
      {
        v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v12 = 0LL;
        v13 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v12 >= max_length )
            sub_1C3B9C8(Instance, v7);
          v14 = v9->m_Items[v12];
          if ( !v14 || !v11 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v11,
                                       &entity,
                                       v14->fields.shopId,
                                       (const MethodInfo_329AE94 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v13 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v9->max_length;
          if ( (int)++v12 >= max_length )
            return v13;
        }
LABEL_22:
        sub_1C3B9C0(Instance, v7);
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

  if ( (byte_4C20E5C & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    byte_4C20E5C = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x21
  int64_t v11; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4C20E5E & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E5E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v9);
      byte_4C1C955 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_object )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 (UserSuperBossMaster_o *)MasterData_object,
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
LABEL_26:
    sub_1C3B9C0(Instance, v9);
  }
  Instance = (DataManager_o *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
    goto LABEL_26;
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
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E5D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserSuperBossMaster___, *(_QWORD *)&bossId);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E5D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_15:
    sub_1C3B9C0(Instance, v8);
  UserSuperBossMaster__TryGetEntity(
    (UserSuperBossMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C20E84 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C20E84 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v4);
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C20E50 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E50 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_17:
    sub_1C3B9C0(Instance, v9);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v12;
    *(_QWORD *)&v15.fields.fakeValue = v13;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v15, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4C20E4D & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    byte_4C20E4D = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C20E4E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E4E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C20E4F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E4F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  CondType_c *v14; // x8
  int64_t v15; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4C20E0A & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, v1);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E0A = 1;
  }
  v4 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v4 = CondType_TypeInfo;
  }
  if ( !v4->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v14 = CondType_TypeInfo;
    v15 = (int64_t)MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v14 = CondType_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v15;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->uQuestMst, v15, v8, v9, v10, v11, v12, v13);
    v4 = CondType_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = CondType_TypeInfo;
  }
  return v4->static_fields->uQuestMst;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsAboveEventTradeTotalNum(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  UserEventTradeMaster_o *Master_object; // x0

  if ( (byte_4C20ECD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventTradeMaster___, *(_QWORD *)&condNum);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C20ECD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0
  int32_t size; // w8

  if ( (byte_4C20ECE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&condNum);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20ECE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__getLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0LL);
  if ( LimitedMissionList )
  {
    size = LimitedMissionList->fields._size;
    LOBYTE(LimitedMissionList) = 0;
    if ( size >= 1 && size >= condNum )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_1C3B9C0(Instance, v11);
    }
  }
  return (char)LimitedMissionList;
}


bool __fastcall CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C20ED1 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, time);
    byte_4C20ED1 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E8C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C20E7C & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C20E7C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) >= time;
}


bool __fastcall CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1

  if ( (byte_4C20EC8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    byte_4C20EC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    sub_1C3B9C0(0LL, v6);
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
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v15; // x21
  unsigned __int64 v16; // x26
  int32_t v17; // w25
  int32_t v18; // w23
  int32_t v19; // w24

  if ( (byte_4C20E97 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E97 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                15,
                                0LL);
  if ( !Instance )
    goto LABEL_28;
  v12 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C3B9C0(Instance, v11);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v15 = MasterData_object;
  v16 = 0LL;
  v17 = 0;
  if ( isWin )
    v18 = 128;
  else
    v18 = 256;
  do
  {
    if ( v16 >= (unsigned int)m_CancellationTokenSource )
      sub_1C3B9C8(MasterData_object, v11);
    v19 = *((_DWORD *)&v12->fields._DispLog + v16);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v11);
      byte_4C1C955 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v15 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v15,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v19,
                                               0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v18,
                                                 0LL);
      v17 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v17 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    ++v16;
  }
  while ( (__int64)v16 < (int)m_CancellationTokenSource );
  return v17 >= val;
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
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v18; // x22
  unsigned __int64 v19; // x26
  int32_t v20; // w27
  int32_t v21; // w24
  int32_t v22; // w25

  if ( (byte_4C20E96 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Sort_int___, *(_QWORD *)&val);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C20E96 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_34;
  v15 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_2FBD554 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_34:
    sub_1C3B9C0(Instance, v14);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v15->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v18 = MasterData_object;
    v19 = 0LL;
    v20 = 0;
    if ( isWin )
      v21 = 128;
    else
      v21 = 256;
    do
    {
      if ( v19 >= (unsigned int)m_CancellationTokenSource )
        sub_1C3B9C8(MasterData_object, v14);
      v22 = *((_DWORD *)&v15->fields._DispLog + v19);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v14);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_34;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                 v18,
                                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                                 v22,
                                                 0LL);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v21,
                                                   0LL);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
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
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      ++v19;
    }
    while ( (__int64)v19 < (int)m_CancellationTokenSource );
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
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v15; // x21
  unsigned __int64 v16; // x26
  int32_t v17; // w25
  int32_t v18; // w23
  int32_t v19; // w24

  if ( (byte_4C20E95 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E95 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_28;
  v12 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C3B9C0(Instance, v11);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v15 = MasterData_object;
  v16 = 0LL;
  v17 = 0;
  if ( isWin )
    v18 = 128;
  else
    v18 = 256;
  do
  {
    if ( v16 >= (unsigned int)m_CancellationTokenSource )
      sub_1C3B9C8(MasterData_object, v11);
    v19 = *((_DWORD *)&v12->fields._DispLog + v16);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v11);
      byte_4C1C955 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v15 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v15,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v19,
                                               0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v18,
                                                 0LL);
      v17 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v17 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    ++v16;
  }
  while ( (__int64)v16 < (int)m_CancellationTokenSource );
  return v17 >= val;
}


bool __fastcall CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C20ECF & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C20ECF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) < time;
}


bool __fastcall CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C20ED0 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, time);
    byte_4C20ED0 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4C20E93 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, value);
    byte_4C20E93 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E92 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, *(_QWORD *)&kindNum);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20E91 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
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
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20EA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, *(_QWORD *)&giftId);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20EA8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  if ( !UserBoxGachaMaster__TryGetEntity(
          (UserBoxGachaMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          gachaId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_18:
    sub_1C3B9C0(Instance, v9);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsClearLatestQuestPhase(
        int32_t questId,
        int64_t phase,
        bool isEqual,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v6; // w20
  __int64 v8; // x1
  CondType_c *v9; // x0
  int32_t QuestClearPhaseCount; // w0

  v6 = phase;
  if ( (byte_4C20ECC & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, phase);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20ECC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, phase);
    byte_4C1C955 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  QuestClearPhaseCount = CondType__GetQuestClearPhaseCount((int64_t)v9, questId, -1, 1, v4);
  if ( isEqual )
    return QuestClearPhaseCount == v6;
  else
    return QuestClearPhaseCount != v6;
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C20E89 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    byte_4C20E89 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_39073372(userIdNumber, commandCodeId, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCommandCodeGet_39073372(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E8A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&commandCodeId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E8A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20E8E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E8E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4C20EBE & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetCount);
    byte_4C20EBE = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountExchangeServantMaxLimit(eventId, *(const MethodInfo **)&targetCount) >= targetCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetFriendShipRank(
        int32_t eventId,
        int32_t targetFriendShipRank,
        const MethodInfo *method)
{
  if ( (byte_4C20EC2 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank);
    byte_4C20EC2 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetLevel(
        int32_t eventId,
        int32_t targetLevel,
        const MethodInfo *method)
{
  if ( (byte_4C20EBC & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetLevel);
    byte_4C20EBC = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestLevel(eventId, *(const MethodInfo **)&targetLevel) >= targetLevel;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantTargetSkillLevel(
        int32_t eventId,
        int32_t targetSkillLevel,
        const MethodInfo *method)
{
  if ( (byte_4C20EC0 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetSkillLevel);
    byte_4C20EC0 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20EBA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    byte_4C20EBA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_15:
    sub_1C3B9C0(Master_object, v6);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteHighestWaveValue(
        int32_t questId,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  System_Collections_ICollection_o *List; // x22
  CondType___c_c *v16; // x0
  System_Func_object__bool__o *_9__222_0; // x23
  Il2CppObject *v18; // x24
  struct CondType___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t ReachedWave; // w0

  if ( (byte_4C20ED3 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_QuestPhaseEntity___, *(_QWORD *)&num);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&System_Func_QuestPhaseEntity__bool__TypeInfo, v10);
    sub_1C3B764(&Method_CondType___c__IsCompleteHighestWaveValue_b__222_0__, v11);
    sub_1C3B764(&CondType___c_TypeInfo, v12);
    byte_4C20ED3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  List = (System_Collections_ICollection_o *)QuestPhaseMaster__getList(
                                               (QuestPhaseMaster_o *)Master_object,
                                               questId,
                                               0LL);
  if ( BasicHelper__IsNullOrEmpty(List, 0LL) )
    return 0;
  v16 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v16 = CondType___c_TypeInfo;
  }
  _9__222_0 = (System_Func_object__bool__o *)v16->static_fields->__9__222_0;
  if ( !_9__222_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CondType___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__222_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__222_0, v18, Method_CondType___c__IsCompleteHighestWaveValue_b__222_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__222_0 = (struct System_Func_QuestPhaseEntity__bool__o *)_9__222_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__222_0,
      (int64_t)_9__222_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !BasicHelper__Any_object__50179104(
          (System_Object_array *)List,
          (System_Func_T__bool__o *)_9__222_0,
          (const MethodInfo_2FDAC20 *)Method_BasicHelper_Any_QuestPhaseEntity___) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1C3B9C0(Master_object, v14);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)Master_object, questId, 0LL);
  if ( checkType == 1 )
    return ReachedWave >= num;
  else
    return checkType == 2 && ReachedWave <= num;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteUserGameCommonValue(
        int32_t no,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v11; // x0
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20EC9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserGameCommonMaster___, *(_QWORD *)&num);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20EC9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_21;
  v11 = (NetworkManager_c *)UserGameCommonMaster__TryGetEntity(
                              (UserGameCommonMaster_o *)Master_object,
                              &entity,
                              v11->static_fields->userIdNumber,
                              no,
                              0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_16;
    }
LABEL_21:
    sub_1C3B9C0(v11, v9);
  }
  value = 0;
LABEL_16:
  if ( checkType == 2 )
    return value <= num;
  if ( checkType == 1 )
    return value >= num;
  return value == num;
}


bool __fastcall CondType__IsCompleteUserLevelValue(int32_t num, int32_t checkType, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    lv = SelfUserGame->fields.lv;
  else
    lv = 0;
  if ( checkType == 2 )
    return lv <= num;
  if ( checkType == 1 )
    return lv >= num;
  if ( checkType )
    return 0;
  return lv == num;
}


bool __fastcall CondType__IsConst(int32_t condType, const MethodInfo *method)
{
  return condType == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  int64_t Time_39986252; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_4C20EAE & 1) == 0 )
  {
    sub_1C3B764(&System_DateTime_TypeInfo, *(_QWORD *)&condNum);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C20EAE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39986252 = NetworkManager__getTime_39986252(v9, 0LL);
  dateData = NetworkManager__getDateTime_39987032(Time_39986252 - 3600 * condNum, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek(v10, 0LL) + 1)) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E68 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E68 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *EntityListFromDay; // x23
  __int64 v21; // x25
  _BOOL8 v22; // x0
  __int64 v23; // x1
  float v24; // s0
  int64_t v25; // x22
  CondType_c *v26; // x0
  float v27; // s1
  bool v28; // cc
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF
  int64_t maxHpSum; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C20EC5 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4C20EC5 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1C3B9C0(Instance, v19);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    EntityListFromDay,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v21 = 0LL;
  for ( i = v31; ; v21 += (__int64)i.fields._current[1].monitor )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !i.fields._current )
      sub_1C3B9C0(v22, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v24 = 0.0;
    if ( v21 >= 1 )
    {
      v25 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v26 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v18; // x25
  int v19; // w28
  __int64 v20; // x27
  __int64 v21; // x26
  EventRaidEntity_o *v22; // x29
  float v23; // s0
  CondType_c *v24; // x0
  float v25; // s1
  bool v26; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C20EC6 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C20EC6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1C3B9C0(Instance, v15);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v21 = 0LL;
    v20 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v23 = 0.0;
      if ( v20 >= 1 && v21 >= 1 )
      {
        v24 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v24 = CondType_TypeInfo;
        }
        v23 = (float)((float)v21 / (float)v20) * (float)v24->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v25 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          v26 = v23 < v25;
          if ( isIncludingEquals )
            return !v26;
          return !v26;
        }
        return v23 == v25;
      }
      if ( isIncludingEquals )
        return v23 <= v25;
      else
        return v23 < v25;
    }
  }
  else
  {
    v18 = (TotalEventRaidMaster_o *)Instance;
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C3B9C8(Instance, v15);
      v22 = EventRaidEntityArrayFromEventId->m_Items[v19];
      if ( !v22 || !v18 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v18, &entity, eventId, v22->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
        v20 += v22->fields.maxHp;
        v21 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v19;
    }
    while ( v19 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      v26 = v21 < num;
      if ( isIncludingEquals )
        return !v26;
      return !v26;
    }
    return v21 == num;
  }
  if ( isIncludingEquals )
    return v21 <= num;
  else
    return v21 < num;
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

  if ( (byte_4C20E86 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&phase);
    sub_1C3B764(&QuestPhaseMaster_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E86 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v11 = Entity;
    v12 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v12 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v11, v12->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v14 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.lookup;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v14, 0LL);
      }
LABEL_13:
      sub_1C3B9C0(Instance, v9);
    }
  }
  return 0;
}


bool __fastcall CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  int64_t v7; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v9; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v11; // x3
  UserQuestEntity_o *v12; // x21
  bool IsQuestClear_39011304; // w8
  int64_t updatedAt; // x20
  int64_t Time_39986252; // x20
  System_DateTime_o v17; // 0:x0.8

  if ( (byte_4C20ECA & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, elapsedTime);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C20ECA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, elapsedTime);
    byte_4C1C955 = 1;
  }
  v6 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v7 = *((_QWORD *)v6[2].virtualMethodPointer + 8);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(v6);
  if ( !UserQuestMaster )
    sub_1C3B9C0(0LL, v9);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v7, questId, 0LL);
  if ( EntityFromId )
  {
    v12 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_39011304 = CondType__IsQuestClear_39011304(questId, -1, 0, v11);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_39011304 )
    {
      updatedAt = v12->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v17.fields._dateData = NetworkManager__getServerDateTime_39987360(updatedAt, 0LL).fields._dateData;
      Time_39986252 = NetworkManager__getTime_39986252(v17, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_39986252 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E87 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E87 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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
  if ( (byte_4C20EA2 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_4C20EA2 = 1;
  }
  if ( !v4 )
    sub_1C3B9C0(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1C3B9C8(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4C20E3B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C20E6C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E6C = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1C3B9C0(Instance, v7);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C20E6B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E6B = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_13:
      sub_1C3B9C0(Instance, v7);
    if ( (__int64)Instance < (__int64)entity[6].klass )
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4C20E6D & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&rate);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E6D = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4C20E6E & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&rank);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E6E = 1;
  }
  v8 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v8 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v8->static_fields->EVENT_RACE_DEVIDER;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v12);
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
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w22
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  int32_t klass_high; // w20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C20EB9 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condNum);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v10);
    byte_4C20EB9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v12);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      EntityList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v16) )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v15 )
        break;
      if ( !v19.fields._current )
        sub_1C3B9C0(v15, v16);
      klass_high = HIDWORD(v19.fields._current[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4C20E64 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E64 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4C20E63 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E63 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v10);
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
  CondType___c__DisplayClass115_0_o *v13; // x22
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v17; // x23
  const MethodInfo *v18; // x3
  int32_t v19; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E73 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_FindIndex_int___, *(_QWORD *)&termId);
    sub_1C3B764(&CondType_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v8);
    sub_1C3B764(&System_Predicate_int__TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__, v11);
    sub_1C3B764(&CondType___c__DisplayClass115_0_TypeInfo, v12);
    byte_4C20E73 = 1;
  }
  goalTime = 0LL;
  v13 = (CondType___c__DisplayClass115_0_o *)sub_1C3B9B0(CondType___c__DisplayClass115_0_TypeInfo);
  CondType___c__DisplayClass115_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.groupId = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v15);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v17 = (System_Predicate_int__o *)sub_1C3B9B0(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    0LL);
  v19 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_30ED01C *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v19 < 1 )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v19, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E71 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&groupId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E71 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_1C3B9C0(Instance, v9);
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
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v12; // x2
  int32_t flagId; // w20

  if ( (byte_4C20E74 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&termId);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventScriptMaster___, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E74 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v10);
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
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E72 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flagId);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E72 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_17;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_17:
    sub_1C3B9C0(Instance, v8);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v11; // w21
  _BOOL4 v12; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flagId;
  if ( (byte_4C20E7F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventStatusMaster___, flagId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E7F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_18;
  Instance = UserEventMaster__GetEntityDefinitely(
               (UserEventMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               eventId,
               0LL);
  if ( !Instance )
    goto LABEL_18;
  v11 = *((_DWORD *)Instance + 8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v11, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    LOBYTE(v12) = 0;
    return v12;
  }
  if ( !entity )
LABEL_18:
    sub_1C3B9C0(Instance, v9);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20EB1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventMaster___, *(_QWORD *)&bitNum);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C20EB1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C1C955 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_17;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)Master_object,
          &entity,
          *(_QWORD *)(p_image[23] + 64LL),
          eventId,
          0LL) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
LABEL_17:
    sub_1C3B9C0(p_image, v7);
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
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  int64_t v16; // x21
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v19; // w24
  int v20; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v25; // w23
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x26
  int64_t v32; // x27
  int32_t Year; // w27
  int32_t Month; // w28
  int32_t Day; // w3
  uint64_t v36; // x26
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int hour; // [xsp+Ch] [xbp-74h]
  System_DateTime_o dateTime; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v45; // 0:x0.8
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8

  if ( (byte_4C20EA7 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__,
      *(_QWORD *)&overWriteTime);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__, v6);
    sub_1C3B764(&System_DateTime_TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C20EA7 = 1;
  }
  dateTime.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_42;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getServerTime(0LL);
  if ( !datalist )
LABEL_42:
    sub_1C3B9C0(Instance, v14);
  v16 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v17);
  hour = overWriteTime / 10000;
  v19 = overWriteTime / 100 % 100;
  v20 = overWriteTime % 100;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v25 & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_21:
      v29 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( v30 && *(_DWORD *)(v30 + 24) == eventType )
    {
      v32 = *(_QWORD *)(v30 + 96);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_39987032(v32, 0LL).fields._dateData;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v45.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v45, 0LL);
      v46.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v46, 0LL);
      v47.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v47, 0LL);
      v48.fields._dateData = (uint64_t)&dateTime;
      System_DateTime___ctor_64047384(v48, Year, Month, Day, hour, v19, v20, 0LL);
      if ( *(_QWORD *)(v31 + 88) <= v16 )
      {
        v36 = dateTime.fields._dateData;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v49.fields._dateData = v36;
        if ( v16 <= NetworkManager__getTime_39986252(v49, 0LL) )
          goto LABEL_35;
      }
    }
  }
  v25 = 0;
LABEL_35:
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_39;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_39:
    v40 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return v25 & 1;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
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
  CondType___c__DisplayClass204_0_o *v12; // x19
  void *Master_object; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_T__o *ExchangeSvtCampaign; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x20

  if ( (byte_4C20EC4 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_EventCampaignEntity___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&System_Func_EventCampaignEntity__bool__TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, v8);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1C3B764(&Method_CondType___c__DisplayClass204_0__IsExchangeSvtBuff_b__0__, v10);
    sub_1C3B764(&CondType___c__DisplayClass204_0_TypeInfo, v11);
    byte_4C20EC4 = 1;
  }
  v12 = (CondType___c__DisplayClass204_0_o *)sub_1C3B9B0(CondType___c__DisplayClass204_0_TypeInfo);
  CondType___c__DisplayClass204_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.targetId = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ExchangeSvtCampaign = (System_Collections_Generic_List_T__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                  (EventCampaignMaster_o *)Master_object,
                                                                  0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExchangeSvtCampaign, 0LL) )
  {
    v16 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v12,
      Method_CondType___c__DisplayClass204_0__IsExchangeSvtBuff_b__0__,
      0LL);
    if ( BasicHelper__Any_object_(
           ExchangeSvtCampaign,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_EventCampaignEntity___) )
    {
      goto LABEL_23;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_20;
  if ( !v17 )
    goto LABEL_20;
  Master_object = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)v17, 0, *((_QWORD *)Master_object + 13), 0LL);
  if ( !Master_object )
    goto LABEL_20;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Master_object,
         v12->fields.targetId,
         (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
LABEL_23:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Master_object )
      return UserExchangeSvtMaster__GetExchangeSvtId(
               (UserExchangeSvtMaster_o *)Master_object,
               v12->fields.targetId,
               0LL) != 0;
LABEL_20:
    sub_1C3B9C0(Master_object, v14);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4C20E14 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4C20E14 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t Value_40490984; // w0

  if ( (byte_4C20EAF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_8410/*"MAX_STONE"*/, v4);
    byte_4C20EAF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v6);
  Value_40490984 = ConstantMaster__GetValue_40490984(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8410/*"MAX_STONE"*/,
                     0,
                     0LL);
  return Value_40490984 != 0 && Value_40490984 == targetId;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E48 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E48 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_15:
    sub_1C3B9C0(Instance, v6);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E46 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMissionMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E46 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  if ( UserEventMissionMaster__TryGetEntity(
         (UserEventMissionMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         condId,
         0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  condId,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)EventMissionEntity__IsDaily((EventMissionEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_19;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    Instance = (DataManager_o *)UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
LABEL_19:
      if ( entity )
        return (entity->fields.missionProgressType & 0xFFFFFFFE) == 4;
LABEL_22:
      sub_1C3B9C0(Instance, v9);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E47 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E47 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                (UserEventMissionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                condId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_15:
    sub_1C3B9C0(Instance, v6);
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
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4C20E45 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E45 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_14:
    sub_1C3B9C0(Instance, v8);
  Entity = UserEventMissionCondDetailMaster__GetEntity(
             (UserEventMissionCondDetailMaster_o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E8B & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E8B = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1C3B9C0(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E6F & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E6F = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v8 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v9 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v9 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v9->static_fields->EVENT_RACE_DEVIDER;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_1C3B9C0(Instance, v12);
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
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E70 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_11169/*"SAVEKEY_LastPlayBgmName"*/, v9);
    byte_4C20E70 = 1;
  }
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v10 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v11 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v11 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v11->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_11169/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_object )
LABEL_14:
      sub_1C3B9C0(Instance, v15);
    return EventRaceMaster__GetGoaledTeamCount(
             (EventRaceMaster_o *)MasterData_object,
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x19
  Il2CppObject *MasterData_object; // x20
  __int64 v10; // x8

  if ( (byte_4C20E5F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E5F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v8 = Instance;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v7);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1C3B9C8(Instance, v7);
      v10 = *(_QWORD *)&v8->fields._DispLog;
      if ( v10 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v10 + 20),
                                        0LL);
          if ( Instance )
            return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
        }
      }
    }
LABEL_20:
    sub_1C3B9C0(Instance, v7);
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
  if ( (byte_4C20E53 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4C20E53 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( condVal <= 1 )
    condVal = 1;
  return CondType__GetNotQuestGoupClearCount(
           questId,
           groupId,
           sameGroupQuestIds,
           isCheckResetFlag,
           (const MethodInfo *)isCheckResetFlag) < condVal;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotQuestGroupClear_39071916(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v11; // x4
  int32_t v12; // w19
  int32_t monitor; // w20
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  questId = targetId;
  if ( (byte_4C20E54 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E54 = 1;
  }
  sameGroupQuestIds = 0LL;
  entity = 0LL;
  if ( condValue <= 1 )
    v7 = 1;
  else
    v7 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_329F94C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Instance, v9);
  if ( HIDWORD(entity[1].klass) != 26 )
    return 0;
  v12 = questId;
  monitor = (int32_t)entity[1].monitor;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v12, monitor, &sameGroupQuestIds, 1, v11) >= v7;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E60 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E60 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1C3B9C0(Instance, v7);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  bool v8; // w23
  UserShopMaster_o *v9; // x20
  unsigned __int64 v10; // x24
  int32_t v11; // w22

  if ( (byte_4C20E61 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E61 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  v7 = *(_QWORD *)&values->max_length;
  v8 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    v9 = (UserShopMaster_o *)Instance;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1C3B9C8(Instance, v6);
      v11 = values->m_Items[v10 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v6);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v9 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v9,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v11,
                                    0LL);
      if ( !Instance )
        break;
      if ( HIDWORD(Instance->fields.m_CancellationTokenSource) )
      {
        LODWORD(v7) = values->max_length;
        v8 = (__int64)++v10 < (int)v7;
        if ( (__int64)v10 < (int)v7 )
          continue;
      }
      return v8;
    }
LABEL_19:
    sub_1C3B9C0(Instance, v6);
  }
  return v8;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  char IsQuestClear; // w0
  int32_t v21; // w2
  bool v22; // w2
  int32_t v23; // w0
  int32_t v24; // w1
  NetworkManager_c *v25; // x0
  int64_t userIdNumber; // x22
  bool v27; // w2
  int32_t v28; // w0
  int32_t v29; // w1
  CondType_c *v30; // x0
  __int64 v31; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  DataManager_o *Instance; // x0
  int32_t ChallengeCountsFromId; // w0
  bool v35; // w3
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w1
  int32_t v39; // w0
  bool IsQuestClear_39011304; // w0
  CondType_c *v41; // x0
  UserQuestMaster_o *v42; // x21
  int32_t ClearCountsFromId; // w0
  CondType_c *v44; // x0
  UserQuestMaster_o *v45; // x21
  int32_t v46; // w0
  CondType_c *v47; // x0
  UserQuestMaster_o *v48; // x21
  bool v49; // zf
  CondType_c *v50; // x0
  UserQuestMaster_o *v51; // x21
  bool v52; // cc
  NetworkManager_c *v53; // x0
  int64_t v54; // x21
  NetworkManager_c *v55; // x0
  int64_t v56; // x21
  int64_t EventPointNoGroup; // x0
  int32_t v58; // w1
  int32_t v59; // w2
  bool v60; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v62; // x21
  int64_t Point; // x0
  Il2CppObject *v64; // x21
  bool v65; // cc
  Il2CppObject *v66; // x21
  Il2CppObject *v67; // x21
  Il2CppObject *v68; // x21
  Il2CppObject *v69; // x21
  __int64 m_CancellationTokenSource_high; // x8
  CondType_c *v71; // x0
  Il2CppObject *v72; // x21
  Il2CppObject *v73; // x21
  bool v74; // w2
  int32_t v75; // w0
  int32_t v76; // w1
  bool v77; // w2
  int32_t v78; // w0
  int32_t v79; // w1
  bool v80; // w3
  bool v81; // w2
  int32_t v82; // w0
  int32_t v83; // w1
  CondType_c *v84; // x0
  int32_t v85; // w2
  bool v86; // w4
  int32_t v87; // w0
  int32_t v88; // w1
  bool v89; // w3
  int32_t v90; // w2
  bool v91; // w4
  int32_t v92; // w0
  int32_t v93; // w1
  bool v94; // w3
  int32_t v95; // w2
  CondType_c *v96; // x0
  BattleVoicePlayCondArgs_o *v97; // x0
  int32_t v98; // w1
  int32_t v99; // w2
  bool v100; // w3
  int32_t v101; // w2
  bool v102; // w2
  int32_t v103; // w0
  int64_t v104; // x1
  int32_t v105; // w2
  Il2CppObject *Master_object; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8
  UserGameEntity_o *v109; // x0
  int32_t v110; // w8
  UserGameEntity_o *v111; // x0
  int32_t v112; // w8
  int32_t v113; // w2
  int64_t v115; // [xsp+0h] [xbp-50h] BYREF
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C20E0B & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventPointMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v16);
    sub_1C3B764(&DataManager_TypeInfo, v17);
    sub_1C3B764(&NetworkManager_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4C20E0B = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0LL;
  v115 = 0LL;
  startedAt = 0LL;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4C1C955 = 1;
      }
      v25 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v25 = NetworkManager_TypeInfo;
      }
      userIdNumber = v25->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClear(userIdNumber, targetId, condValue, 1, isCollection, method);
      return IsQuestClear & 1;
    case 2:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_39008508(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 1;
      goto LABEL_377;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v22 = 1;
      v23 = targetId;
      v24 = condValue;
      goto LABEL_361;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEvent(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsArrivalDate(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseQpShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseStoneShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 16:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotQuestGroupClear(0, targetId, condValue, &sameGroupQuestIds, 1, method);
      return IsQuestClear & 1;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = 1;
      v28 = targetId;
      v29 = condValue;
      goto LABEL_77;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v28 = targetId;
      v29 = condValue;
      v27 = 0;
LABEL_77:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v28, v29, v27, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v30 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v30);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !UserQuestMaster )
        goto LABEL_786;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                                UserQuestMaster,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
      goto LABEL_581;
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v35 = 1;
      v36 = targetId;
      v37 = condValue;
      goto LABEL_205;
    case 35:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = 1;
      v39 = targetId;
      goto LABEL_692;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestClear_39011304(targetId, condValue, 1, (const MethodInfo *)isCollection);
      goto LABEL_775;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 42:
      v41 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v42 = CondType__GetUserQuestMaster((const MethodInfo *)v41);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v42 )
        goto LABEL_786;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                            v42,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0LL);
      goto LABEL_142;
    case 43:
      v44 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v45 = CondType__GetUserQuestMaster((const MethodInfo *)v44);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v45 )
        goto LABEL_786;
      v46 = UserQuestMaster__getChallengeCountsFromId(
              v45,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0LL);
      goto LABEL_153;
    case 44:
      v47 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = CondType__GetUserQuestMaster((const MethodInfo *)v47);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v48 )
        goto LABEL_786;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(
                            v48,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0LL);
LABEL_142:
      v49 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_743;
    case 45:
      v50 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v51 = CondType__GetUserQuestMaster((const MethodInfo *)v50);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_786;
      v46 = UserQuestMaster__getClearCountsFromId(
              v51,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0LL);
LABEL_153:
      v52 = v46 <= (int)condValue;
      goto LABEL_781;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4C1C955 = 1;
      }
      v53 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v53 = NetworkManager_TypeInfo;
      }
      v54 = v53->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v54, targetId, condValue, -1, 0, method);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4C1C955 = 1;
      }
      v55 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v55 = NetworkManager_TypeInfo;
      }
      v56 = v55->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestPhaseClear(v56, targetId, condValue, -1, 0, method);
      goto LABEL_775;
    case 48:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventPointGroupWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 49:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 50:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestAvailable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 51:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestGroupAvailable(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 52:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 54:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 55:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 56:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGetBeforeEventEnd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 57:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClear_39011304(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v36 = targetId;
      v37 = condValue;
      v35 = 0;
LABEL_205:
      IsQuestClear = CondType__IsQuestGroupClear(0, v36, v37, v35, (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 59:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventGroupPointRatioInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 60:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventGroupRankInTerm(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 61:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotAllGroupGoal(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 62:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventRaceGroupTotalWin(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 63:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 64:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 66:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtRecoverd(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 67:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsShopReleased(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 68:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0LL);
      goto LABEL_299;
    case 69:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsVoicePlayCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 71:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__checkCondTypeRaidGroupAlive(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 72:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestClear_39011304(targetId, condValue, 0, (const MethodInfo *)isCollection);
      goto LABEL_775;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v58 = targetId;
      v59 = condValue;
      v60 = 0;
      goto LABEL_647;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 80:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 81:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPlayerGenderType(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 82:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 83:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_786;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_299;
    case 84:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v62 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v62 )
        goto LABEL_786;
      Point = UserEventPointMaster__GetPoint(
                (UserEventPointMaster_o *)v62,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId / 100,
                targetId,
                0LL);
      goto LABEL_309;
    case 85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v64 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v64 )
        goto LABEL_786;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v64,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            -1,
                            0LL);
LABEL_299:
      v65 = EventPointNoGroup < condValue;
      goto LABEL_582;
    case 86:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v66 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v66 )
        goto LABEL_786;
      Point = UserEventPointMaster__GetEventPointTotal(
                (UserEventPointMaster_o *)v66,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId,
                -1,
                0LL);
LABEL_309:
      v52 = Point <= condValue;
      goto LABEL_781;
    case 87:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v67 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v67 )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v67,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      v65 = SHIDWORD(Instance->fields.m_CancellationTokenSource) < condValue;
      goto LABEL_582;
    case 88:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v68 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v68 )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v68,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      v52 = SHIDWORD(Instance->fields.m_CancellationTokenSource) <= condValue;
      goto LABEL_781;
    case 89:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v69 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v69 )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v69,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      m_CancellationTokenSource_high = *(int *)&Instance->fields._DispLog;
      goto LABEL_742;
    case 90:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 93:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v71 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v71);
      return IsQuestClear & 1;
    case 96:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 97:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v23 = targetId;
      v24 = condValue;
      v22 = 0;
LABEL_361:
      IsQuestClear = CondType__IsServantFriendship(v23, v24, v22, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 100:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 101:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 102:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLimit_39008712(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 2;
LABEL_377:
      IsQuestClear = CondType__IsServantLimit_39008712(targetId, condValue, v21, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 106:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPlayedNotMeetsScript(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 107:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 108:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotCommandCodeGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 109:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAllUserBoxGachaCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 110:
    case 111:
    case 112:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsTotalTdLvCond(condType, targetId, condValue, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 113:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCommonRelease(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 116:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v72 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v72 )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v72,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_742;
    case 117:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 118:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenGroupHaving(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 119:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 120:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 123:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_786;
      v73 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v73 )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v73,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      IsQuestClear = SHIDWORD(Instance->fields.m_CancellationTokenSource) != condValue;
      return IsQuestClear & 1;
    case 127:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoardGameTokenGetNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 128:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v74 = 1;
      v75 = targetId;
      v76 = condValue;
      goto LABEL_440;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v75 = targetId;
      v76 = condValue;
      v74 = 0;
LABEL_440:
      IsQuestClear = CondType__IsBattleLineReusltCount(v75, v76, v74, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v77 = 1;
      v78 = targetId;
      v79 = condValue;
      goto LABEL_447;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = targetId;
      v79 = condValue;
      v77 = 0;
LABEL_447:
      v80 = 0;
      goto LABEL_454;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v77 = 1;
      v80 = 1;
      v78 = targetId;
      v79 = condValue;
      goto LABEL_454;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 1;
      v78 = targetId;
      v79 = condValue;
      v77 = 0;
LABEL_454:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(
                       v78,
                       v79,
                       v77,
                       v80,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 134:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v81 = 1;
      v82 = targetId;
      v83 = condValue;
      goto LABEL_461;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v82 = targetId;
      v83 = condValue;
      v81 = 0;
LABEL_461:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v82, v83, v81, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 137:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__checkRaidTimeLimitOver(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 138:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__TimeLimitRaidDead(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 140:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__RaidBattleProgressAbove(targetId, (float)condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 141:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 143:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v84 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v84);
      return IsQuestClear & 1;
    case 145:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 146:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 147:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsPurchaseValidShop(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 153:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTypeStartTimeToEndDate(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 154:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 155:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 156:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsLimitedPeriodVoiceChangeTypeOn(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 157:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsStartRandomMission(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 158:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__GetRandomMissionClearNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 162:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_786;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_581;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_786;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
LABEL_581:
      v65 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_582;
    case 168:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 174:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_581;
    case 175:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossDamageAbove(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 176:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossDamageBellow(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 177:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventMissionGroupClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 178:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 179:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 180:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 181:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 182:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 183:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 184:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 185:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_775;
    case 187:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_581;
    case 188:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetLevel(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 189:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantMaxLimit(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 190:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetSkillLevel(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 191:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteExchangeServantTargetFriendShipRank(
                       targetId,
                       condValue,
                       (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 192:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsExchangeSvtBuff(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 193:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
      goto LABEL_606;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
LABEL_606:
      v86 = 1;
      v87 = targetId;
      v88 = condValue;
      v89 = 0;
      goto LABEL_628;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 1;
      goto LABEL_613;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 2;
LABEL_613:
      v91 = 1;
      v92 = targetId;
      v93 = condValue;
      v94 = 0;
      goto LABEL_643;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
      goto LABEL_620;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
LABEL_620:
      v89 = 1;
      v86 = 1;
      v87 = targetId;
      v88 = condValue;
      goto LABEL_628;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
      goto LABEL_627;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
LABEL_627:
      v89 = 1;
      v87 = targetId;
      v88 = condValue;
      v86 = 0;
LABEL_628:
      IsQuestClear = CondType__IsDeadRaidDay(v87, v88, v85, v89, v86, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 1;
      goto LABEL_635;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 2;
LABEL_635:
      v94 = 1;
      v91 = 1;
      v92 = targetId;
      v93 = condValue;
      goto LABEL_643;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 2;
      goto LABEL_642;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 1;
LABEL_642:
      v94 = 1;
      v92 = targetId;
      v93 = condValue;
      v91 = 0;
LABEL_643:
      IsQuestClear = CondType__IsDeadRaidGroup(v92, v93, v90, v94, v91, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = 1;
      v58 = targetId;
      v59 = condValue;
LABEL_647:
      IsQuestClear_39011304 = CondType__IsQuestGroupClear(0, v58, v59, v60, (const MethodInfo *)battleCondArgs);
      goto LABEL_775;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = 1;
      goto LABEL_654;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = 2;
LABEL_654:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v95, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v96 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = ((_DWORD)condValue == 0) ^ CondType__IsAuthTDAccelerate((const MethodInfo *)v96);
      return IsQuestClear & 1;
    case 209:
      if ( !battleCondArgs )
        goto LABEL_727;
      v97 = battleCondArgs;
      v98 = targetId;
      v99 = condValue;
      v100 = 0;
      goto LABEL_662;
    case 210:
      if ( !battleCondArgs )
        goto LABEL_727;
      v100 = 1;
      v97 = battleCondArgs;
      v98 = targetId;
      v99 = condValue;
LABEL_662:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v97, v98, v99, v100, 0LL);
      return IsQuestClear & 1;
    case 211:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v101 = 1;
      goto LABEL_672;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v101 = 2;
LABEL_672:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(
                       targetId,
                       condValue,
                       v101,
                       (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 214:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 215:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 216:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, 0LL, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v102 = 1;
      v103 = targetId;
      v104 = condValue;
      goto LABEL_688;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v103 = targetId;
      v104 = condValue;
      v102 = 0;
LABEL_688:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v103, v104, v102, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = targetId;
      v38 = condValue;
LABEL_692:
      IsQuestClear = CondType__IsPurchaseShop(v39, v38, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 220:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAboveEventTradeTotalNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 221:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v105 = 2;
      goto LABEL_702;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v105 = 1;
LABEL_702:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v105, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 229:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_786;
      IsQuestClear = *((_DWORD *)&Instance[1].fields.UnityEngine_Behaviour_Fields + 1) < (int)condValue;
      return IsQuestClear & 1;
    case 230:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_786;
      v65 = *((_DWORD *)&Instance[1].fields.UnityEngine_Behaviour_Fields + 1) < (int)condValue;
      goto LABEL_582;
    case 231:
      if ( !battleCondArgs )
        goto LABEL_727;
      IsQuestClear = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 232:
      if ( !battleCondArgs )
        goto LABEL_727;
      IsQuestClear = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 233:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBeforeQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 234:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAfterQuestClearTime(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 235:
      if ( !battleCondArgs )
        goto LABEL_727;
      IsQuestClear_39011304 = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                                battleCondArgs,
                                targetId,
                                0LL);
      goto LABEL_775;
    case 236:
      if ( battleCondArgs )
      {
        IsQuestClear_39011304 = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0LL);
LABEL_775:
        IsQuestClear = !IsQuestClear_39011304;
      }
      else
      {
LABEL_727:
        IsQuestClear = 0;
      }
      return IsQuestClear & 1;
    case 237:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_775;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v31);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_786;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_786;
      m_CancellationTokenSource_high = SLODWORD(Instance->fields.lookup);
LABEL_742:
      v49 = m_CancellationTokenSource_high == condValue;
LABEL_743:
      IsQuestClear = v49;
      return IsQuestClear & 1;
    case 241:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
LABEL_786:
        sub_1C3B9C0(Instance, v31);
      IsQuestClear = UserImagePartsGroupMaster__ContainsImagePartsGroupIdx(
                       (UserImagePartsGroupMaster_o *)Instance,
                       targetId,
                       condValue,
                       0LL);
      return IsQuestClear & 1;
    case 242:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
        lv = SelfUserGame->fields.lv;
      else
        lv = 0;
      v65 = lv < targetId;
LABEL_582:
      IsQuestClear = !v65;
      return IsQuestClear & 1;
    case 243:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v109 = UserGameMaster__getSelfUserGame(0LL);
      if ( v109 )
        v110 = v109->fields.lv;
      else
        v110 = 0;
      v52 = v110 <= targetId;
LABEL_781:
      IsQuestClear = v52;
      return IsQuestClear & 1;
    case 244:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v111 = UserGameMaster__getSelfUserGame(0LL);
      if ( v111 )
        v112 = v111->fields.lv;
      else
        v112 = 0;
      IsQuestClear = v112 == targetId;
      return IsQuestClear & 1;
    case 245:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v113 = 1;
      goto LABEL_768;
    case 246:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v113 = 2;
LABEL_768:
      IsQuestClear = CondType__IsCompleteHighestWaveValue(targetId, condValue, v113, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 247:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsValidPrivilege(
                       targetId,
                       condValue,
                       &startedAt,
                       &v115,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 248:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsValidPrivilege(
                                targetId,
                                condValue,
                                &v115,
                                &startedAt,
                                (const MethodInfo *)battleCondArgs);
      goto LABEL_775;
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
  bool IsQuestClear_39011304; // w0
  NetworkManager_c *v14; // x0
  int64_t v15; // x23
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C20E0C & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    byte_4C20E0C = 1;
  }
  if ( condType <= 36 )
  {
    if ( condType != 1 )
    {
      if ( condType != 36 )
      {
LABEL_13:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsOpen(condType, targetId, condValue, 0, 0LL, method);
      }
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestClear_39011304(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_39011304;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_39011304(
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
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4C1C955 = 1;
      }
      v16 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v16 = NetworkManager_TypeInfo;
      }
      userIdNumber = v16->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_39011304 = CondType__IsQuestPhaseClear(
                                userIdNumber,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                method);
      return !IsQuestClear_39011304;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      byte_4C1C955 = 1;
    }
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    v15 = v14->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v15, targetId, condValue, beforeClearQuestId, isCheckResetFlag, method);
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
  int32_t v12; // w2
  bool result; // w0
  int32_t v14; // w2
  int64_t v15; // x0
  int32_t v16; // w1
  int64_t v17; // x0
  int32_t v18; // w1
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject v21; // q1
  const MethodInfo *v22; // x5
  int64_t v23; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-50h]

  if ( (byte_4C20E17 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C20E17 = 1;
  }
  if ( condType <= 38 )
  {
    v11 = 1;
    switch ( condType )
    {
      case 0:
        return v11;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
        {
          sub_1C3B9C0(Instance, v20);
        }
        v21 = Instance[4];
        *(Il2CppObject *)&v25.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v25.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v24, 0LL);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsQuestClear(v23, condValue, -1, 0, 0, v22);
      case 6:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantLevel(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 7:
        goto LABEL_20;
      case 8:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGet_39051188(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantFriendship_39051344(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGroup_39051880(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 11:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
        break;
      case 14:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsPurchaseQpShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 15:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsPurchaseStoneShop(condValue, *(const MethodInfo **)&condValue);
        break;
      case 38:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsNotServantGet(condValue, *(const MethodInfo **)&condValue);
        break;
      default:
        return 0;
    }
  }
  else
  {
    v11 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v15 = userSvtId;
          v16 = condValue;
          v12 = 0;
          return CondType__IsServantLimit(v15, v16, v12, method);
        case 'h':
LABEL_20:
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v12 = 1;
          goto LABEL_23;
        case 'i':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v12 = 2;
LABEL_23:
          v15 = userSvtId;
          v16 = condValue;
          return CondType__IsServantLimit(v15, v16, v12, method);
      }
      return v11;
    }
    if ( condType == 150 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v17 = userSvtId;
      v18 = condValue;
      v14 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v14 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v11;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v14 = 2;
      }
      v17 = userSvtId;
      v18 = condValue;
    }
    return CondType__IsServantLimitImage(v17, v18, v14, method);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Instance; // x0
  __int64 v13; // x1
  EventRaidMaster_o *v14; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x22
  Il2CppObject *v17; // x19
  int max_length; // w8
  CondType_c **v19; // x29
  int32_t v20; // w19
  int64_t v21; // x26
  unsigned int v22; // w20
  int32_t v23; // w21
  Il2CppClass **v24; // x8
  Il2CppClass *v25; // x27
  EventRaidMaster_o *v26; // x22
  __int64 v27; // x8
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  int64_t v30; // x27
  __int64 v31; // x25
  int v32; // w8
  int32_t v33; // w28
  int32_t v34; // w28
  int32_t ValueInt; // w0
  const MethodInfo *v36; // x4
  CondType_c *v37; // x8
  CondType_c **v38; // x24
  int32_t v39; // w29
  int32_t v41; // [xsp+8h] [xbp-88h]
  int32_t v42; // [xsp+Ch] [xbp-84h]
  QuestReleaseMaster_o *v43; // [xsp+10h] [xbp-80h]
  Il2CppObject *v44; // [xsp+18h] [xbp-78h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C20EC7 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_TotalEventRaidMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4C20EC7 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_48;
  v41 = num;
  v42 = checkType;
  v14 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_48:
    sub_1C3B9C0(Instance, v13);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v43 = (QuestReleaseMaster_o *)v17;
    v19 = &CondType_TypeInfo;
    v20 = eventId;
    v21 = Instance;
    v22 = 0;
    v23 = 0;
    v44 = Master_object;
    while ( 1 )
    {
      if ( v22 >= max_length )
        goto LABEL_49;
      v24 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v22;
      v25 = v24[4];
      if ( !v25 )
        goto LABEL_48;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v24[4], v21, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_48;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     v20,
                     HIDWORD(v25->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v26 = v14;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v14, v20, HIDWORD(v25->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_48;
          v27 = *(_QWORD *)(Instance + 24);
          if ( v27 )
          {
            if ( !(_DWORD)v27 )
              goto LABEL_49;
            if ( !v43 )
              goto LABEL_48;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v43, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_48;
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
                    goto LABEL_48;
                  v32 = *(_DWORD *)(Instance + 20);
                  if ( v32 == 32 )
                  {
                    v34 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    v37 = *v19;
                    v38 = v19;
                    v39 = ValueInt;
                    if ( !v37->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(v37);
                    Instance = CondType__IsQuestGroupClear(0, v34, v39, 0, v36);
                    v19 = v38;
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  else if ( v32 == 1 )
                  {
                    v33 = *(_DWORD *)(Instance + 24);
                    if ( !(*v19)->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(*v19);
                    Instance = CondType__IsQuestClear_39011304(v33, -1, 0, v28);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  LODWORD(v29) = *(_DWORD *)(v30 + 24);
                  if ( (int)++v31 >= (int)v29 )
                    goto LABEL_37;
                }
LABEL_49:
                sub_1C3B9C8(Instance, v13);
              }
            }
          }
LABEL_37:
          ++v23;
LABEL_38:
          v14 = v26;
          v20 = eventId;
          Master_object = v44;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_42;
    }
  }
  v23 = 0;
LABEL_42:
  if ( v42 == 2 )
    return v23 <= v41;
  if ( v42 == 1 )
    return v23 >= v41;
  return v23 == v41;
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
  CondType___c__DisplayClass19_0_o *v25; // x20
  void *IsOpen; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x5
  __int64 v30; // x8
  int32_t v31; // w19
  int64_t v32; // x2
  int32_t v33; // w0
  int32_t v34; // w1
  bool result; // w0
  System_Func_int__int__o *v36; // x0
  __int64 *v37; // x8
  unsigned __int64 v38; // x22
  int32_t v39; // w23
  __int64 v40; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v42; // x5
  bool v43; // w0
  CondType_CountDelegate_o *v44; // x0
  __int64 *v45; // x8
  CondType_CountDelegate_o *v46; // x21
  const MethodInfo *v47; // x2
  int32_t ClearCountsFromIds; // w0
  bool v49; // cc
  int32_t v50; // w23
  __int64 v51; // x24
  __int64 v52; // x25
  int32_t v53; // w22
  int32_t v54; // w19
  System_Func_int__bool__o *v55; // x0
  __int64 *v56; // x8
  System_Func_int__int__o *v57; // x21
  const MethodInfo *v58; // x3
  int32_t v59; // w20
  System_Func_TSource__bool__o *v60; // x21
  CondType_c *v61; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v63; // x0
  UserQuestMaster_o *v64; // x21
  CondType_c *v65; // x0
  UserQuestMaster_o *v66; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v68; // x0
  UserQuestMaster_o *v69; // x21
  int32_t v70; // w0
  CondType_c *v71; // x0
  UserQuestMaster_o *v72; // x21
  CondType_c *v73; // x0
  UserQuestMaster_o *v74; // x21

  if ( (byte_4C20E15 & 1) == 0 )
  {
    sub_1C3B764(&Method_CondType_CountExchangeServantMaxLimit__, targetIds);
    sub_1C3B764(&Method_CondType_CountServantClassTotalFriendShipUp__, v7);
    sub_1C3B764(&Method_CondType_CountServantClassTotalLevelUp__, v8);
    sub_1C3B764(&Method_CondType_CountServantClassTotalLimitUp__, v9);
    sub_1C3B764(&Method_CondType_CountServantClassTotalSkillLevelUp__, v10);
    sub_1C3B764(&Method_CondType_CountServantFriendShipClassNum__, v11);
    sub_1C3B764(&Method_CondType_CountServantLevelClassNum__, v12);
    sub_1C3B764(&Method_CondType_CountServantLevelIdNum__, v13);
    sub_1C3B764(&Method_CondType_CountServantTargetSkillLvClassNum__, v14);
    sub_1C3B764(&CondType_TypeInfo, v15);
    sub_1C3B764(&CondType_CountDelegate_TypeInfo, v16);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_int____77944944, v17);
    sub_1C3B764(&System_Func_int__int__TypeInfo, v18);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v19);
    sub_1C3B764(&NetworkManager_TypeInfo, v20);
    sub_1C3B764(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v21);
    sub_1C3B764(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v22);
    sub_1C3B764(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v23);
    sub_1C3B764(&CondType___c__DisplayClass19_0_TypeInfo, v24);
    byte_4C20E15 = 1;
  }
  v25 = (CondType___c__DisplayClass19_0_o *)sub_1C3B9B0(CondType___c__DisplayClass19_0_TypeInfo);
  CondType___c__DisplayClass19_0___ctor(v25, 0LL);
  if ( !v25 )
LABEL_144:
    sub_1C3B9C0(IsOpen, v27);
  v25->fields.targetNum = targetNum;
  if ( !targetIds )
    return 0;
  v30 = *(_QWORD *)&targetIds->max_length;
  if ( !v30 )
    return 0;
  if ( (_DWORD)v30 == 1 )
  {
    v31 = targetIds->m_Items[1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v32 = targetNum;
    v33 = condType;
    v34 = v31;
    return CondType__IsOpen(v33, v34, v32, 0, 0LL, v29);
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
        if ( (int)v30 < 1 )
        {
          v50 = 0;
        }
        else
        {
          if ( !(unsigned int)*(_QWORD *)&targetIds->max_length )
            goto LABEL_40;
          v50 = 0;
          v51 = 0LL;
          v52 = (unsigned int)*(_QWORD *)&targetIds->max_length - 1LL;
          while ( 1 )
          {
            v53 = targetIds->m_Items[v51 + 1];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsOpen = (void *)CondType__IsOpen(condType, v53, 0LL, 0, 0LL, v29);
            v50 += (unsigned __int8)IsOpen & 1;
            if ( v52 == v51 )
              break;
            if ( ++v51 >= (unsigned __int64)targetIds->max_length )
              goto LABEL_40;
          }
          targetNum = v25->fields.targetNum;
        }
        v49 = v50 < targetNum;
        return !v49;
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
        v61 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v61);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !UserQuestMaster )
          goto LABEL_144;
        ClearCountsFromIds = UserQuestMaster__getClearCountsFromIds(
                               UserQuestMaster,
                               *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                               targetIds,
                               0LL);
        goto LABEL_30;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        if ( (int)v30 < 1 )
        {
          v39 = 0;
        }
        else
        {
          v38 = 0LL;
          v39 = 0;
          v40 = (unsigned int)*(_QWORD *)&targetIds->max_length;
          do
          {
            IsOpen = CondType_TypeInfo;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( v38 >= targetIds->max_length )
              goto LABEL_40;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v27);
            v43 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v38], 0LL, 0, 0LL, v42);
            v39 += v43;
          }
          while ( v40 != v38 );
          targetNum = v25->fields.targetNum;
        }
        result = v39 < targetNum;
        break;
      case 30:
        v63 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v64 = CondType__GetUserQuestMaster((const MethodInfo *)v63);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v64 )
          goto LABEL_144;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                               v64,
                               *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                               targetIds,
                               0LL);
        goto LABEL_30;
      case 42:
        v65 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v66 = CondType__GetUserQuestMaster((const MethodInfo *)v65);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v66 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                                   v66,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0LL);
        return ChallengeCountsFromIds == v25->fields.targetNum;
      case 43:
        v68 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v69 = CondType__GetUserQuestMaster((const MethodInfo *)v68);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v69 )
          goto LABEL_144;
        v70 = UserQuestMaster__getChallengeCountsFromIds(
                v69,
                *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                targetIds,
                0LL);
        return v70 <= v25->fields.targetNum;
      case 44:
        v71 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v72 = CondType__GetUserQuestMaster((const MethodInfo *)v71);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v72 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(
                                   v72,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0LL);
        return ChallengeCountsFromIds == v25->fields.targetNum;
      case 45:
        v73 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v74 = CondType__GetUserQuestMaster((const MethodInfo *)v73);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v27);
          byte_4C1C955 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v74 )
          goto LABEL_144;
        v70 = UserQuestMaster__getClearCountsFromIds(v74, *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL), targetIds, 0LL);
        return v70 <= v25->fields.targetNum;
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_62;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsServantLimitClassNum(targetIds, targetNum, v28);
    }
  }
  else
  {
    if ( condType > 148 )
    {
      switch ( condType )
      {
        case 178:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v55 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
          v56 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v36 = (System_Func_int__int__o *)sub_1C3B9B0(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v57 = v36;
          System_Func_int__int____ctor(v36, 0LL, *v37, 0LL);
          v59 = v25->fields.targetNum;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v57, targetIds, v59, v58);
        case 190:
          v55 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
          v56 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v55 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
          v56 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v60 = (System_Func_TSource__bool__o *)v55;
          System_Func_int__bool____ctor(v55, (Il2CppObject *)v25, *v56, 0LL);
          return System_Linq_Enumerable__Any_int__50321316(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v60,
                   (const MethodInfo_2FFD7A4 *)Method_System_Linq_Enumerable_Any_int____77944944);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v27);
LABEL_30:
              v49 = ClearCountsFromIds < v25->fields.targetNum;
              return !v49;
            }
            goto LABEL_62;
          }
          v44 = (CondType_CountDelegate_o *)sub_1C3B9B0(CondType_CountDelegate_TypeInfo);
          v45 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_27:
      v46 = v44;
      CondType_CountDelegate___ctor(v44, 0LL, *v45, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v46, v47);
      goto LABEL_30;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v44 = (CondType_CountDelegate_o *)sub_1C3B9B0(CondType_CountDelegate_TypeInfo);
        v45 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_27;
      }
LABEL_62:
      if ( (_DWORD)v30 )
      {
        v54 = targetIds->m_Items[1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v33 = condType;
        v34 = v54;
        v32 = 0LL;
        return CondType__IsOpen(v33, v34, v32, 0, 0LL, v29);
      }
LABEL_40:
      sub_1C3B9C8(IsOpen, v27);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v28);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_39048152(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4C20E16 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condValues);
    byte_4C20E16 = 1;
  }
  if ( condType <= 35 )
  {
    if ( !condType )
      return 1;
    if ( condType != 35 )
      return 0;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsShopPurchase(condValues, condNum, *(const MethodInfo **)&condNum);
  }
  else
  {
    if ( condType != 37 )
    {
      if ( condType == 65 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsQuestNotClearAndCond(condValues, (const MethodInfo *)condValues);
      }
      return 0;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsNotShopPurchase(condValues, (const MethodInfo *)condValues);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_39052536(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4C20E18 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4C20E18 = 1;
  }
  result = 1;
  switch ( condType )
  {
    case 0:
      return result;
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsQuestClear(userId, condValue, -1, 0, 0, v5);
      break;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLevel_39053160(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_39053320(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_39051188(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_39053560(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_39051880(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_39053864(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_39054032(userId, condValue, (const MethodInfo *)userId);
      break;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
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
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = notMeetsScriptId;
  if ( (byte_4C20E88 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22602/*"revivalUp"*/, method);
    byte_4C20E88 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63368612((System_String_o *)StringLiteral_22602/*"revivalUp"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E7D & 1) == 0 )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, method);
    byte_4C20E7D = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1C3B9C0(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1F4ED )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
      byte_4C1F4ED = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C20E3D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseQpShop_39053864(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C20E3E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v8);
  }
  return ShopEntity__IsCondType_41361536((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4C20E42 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4C20E42 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( v3 <= 1 )
    v3 = 1;
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C20E40 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C20E40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseStoneShop_39054032(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C20E41 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v8);
  }
  return ShopEntity__IsCondType_41361536((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  __int64 v10; // x8
  int v11; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  int v13; // w23
  ShopGroupEntity_o *v14; // x8
  ShopEntity_o *v15; // x21

  if ( (byte_4C20E79 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
      v10 = *(_QWORD *)&v9->max_length;
      v11 = v10 - 1;
      if ( (int)v10 >= 1 )
      {
        v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v13 = 0;
        while ( 1 )
        {
          v14 = v9->m_Items[v13];
          if ( !v14 || !v12 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v12,
                       v14->fields.shopId,
                       (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v15 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v15, 0LL) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v15, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v11 == v13 )
            goto LABEL_20;
          if ( ++v13 >= v9->max_length )
            sub_1C3B9C8(Instance, v7);
        }
LABEL_22:
        sub_1C3B9C0(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  BalanceConfig_c *v11; // x8
  int32_t WarId_k__BackingField; // w21
  TerminalPramsManager_c *v13; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0

  if ( (byte_4C20E65 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    byte_4C20E65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 22, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EA88 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
          byte_4C1EA88 = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        v11 = BalanceConfig_TypeInfo;
        WarId_k__BackingField = v10->static_fields->_WarId_k__BackingField;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        if ( WarId_k__BackingField != v11->static_fields->OrdealCallWarId )
          goto LABEL_25;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1ECC9 )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v9);
          byte_4C1ECC9 = 1;
        }
        v13 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        if ( !v13->static_fields->_IsPhaseClear_k__BackingField )
        {
LABEL_25:
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !Instance )
            goto LABEL_30;
          QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
          if ( QuestInfo )
            return QuestInfo->fields.dispType == 1;
        }
      }
    }
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1C3B9C0(Instance, v8);
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
  UserQuestEntity_o *EntityFromId; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4C20E1D & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    byte_4C20E1D = 1;
  }
  v13 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v13);
  if ( !UserQuestMaster )
    goto LABEL_19;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( !isCollection )
    goto LABEL_14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1C3B9C0(UserQuestMaster, v15);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL) )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, isCheckResetFlag, v17);
  }
LABEL_14:
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
  __int64 v7; // x1
  __int64 v8; // x1
  bool IsQuestClear_39011304; // w8
  bool result; // w0
  CondType_c *v11; // x0
  __int64 v12; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *Entity; // x0
  int64_t klass; // x20

  if ( (byte_4C20EB0 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20EB0 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_39011304 = CondType__IsQuestClear_39011304(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_39011304 )
  {
    v11 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v12);
      byte_4C1C955 = 1;
    }
    Entity = (EventMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Entity = (EventMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !UserQuestMaster )
      goto LABEL_21;
    Entity = (EventMaster_o *)UserQuestMaster__GetEntity(
                                UserQuestMaster,
                                (int64_t)Entity[2].fields.list[1].monitor,
                                questId,
                                0LL);
    if ( !Entity )
      goto LABEL_21;
    klass = (int64_t)Entity[1].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Entity = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Entity )
LABEL_21:
      sub_1C3B9C0(Entity, v12);
    return klass < EventMaster__GetEventStartedAt(Entity, eventId, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  __int64 v5; // x1
  CondType_c *v6; // x0
  __int64 v7; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  NetworkManager_c *v9; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4C20E51 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C20E51 = 1;
  }
  v6 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C1C955 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    sub_1C3B9C0(v9, v7);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9->static_fields->userIdNumber, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear_39011304(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C20E1E & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20E1E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4C1C955 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear(userIdNumber, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v4);
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
  __int64 v11; // x1
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x21
  CondType_c *v14; // x0
  CondType_c *v15; // x0
  UserQuestEntity_o *v16; // x0

  if ( (byte_4C20E24 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&closeQuestid);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E24 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    byte_4C1C955 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v12 = NetworkManager_TypeInfo;
  }
  userIdNumber = v12->static_fields->userIdNumber;
  if ( openQuestid >= 1 )
  {
    v14 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v14);
    if ( !Instance )
      goto LABEL_27;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, openQuestid, 0LL);
    if ( !EntityFromId )
      return (char)EntityFromId;
    if ( UserQuestEntity__getClearNum(EntityFromId, 0LL) < 1 )
      goto LABEL_26;
  }
  if ( closeQuestid < 1 )
  {
LABEL_5:
    LOBYTE(EntityFromId) = 1;
    return (char)EntityFromId;
  }
  v15 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v15);
  if ( !Instance )
LABEL_27:
    sub_1C3B9C0(Instance, v10);
  v16 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, closeQuestid, 0LL);
  if ( !v16 || UserQuestEntity__getClearNum(v16, 0LL) <= 0 )
    goto LABEL_5;
LABEL_26:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w21
  System_Int32_array *Instance; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x8
  System_Int32_array *v11; // x19
  bool v12; // w25
  int v13; // w22
  unsigned __int64 v14; // x23
  int32_t v15; // w20

  if ( (byte_4C20E66 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&questCount);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E66 = 1;
  }
  if ( questCount <= 1 )
    v7 = 1;
  else
    v7 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
  }
  v10 = *(_QWORD *)&Instance->max_length;
  v11 = Instance;
  v12 = (int)v10 > 0;
  if ( (int)v10 >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v10 )
        sub_1C3B9C8(Instance, v9);
      v15 = v11->m_Items[v14 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v15, v9);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v13 >= v7 )
        break;
      LODWORD(v10) = v11->max_length;
      v12 = (__int64)++v14 < (int)v10;
    }
    while ( (__int64)v14 < (int)v10 );
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4C20E56 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4C20E56 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( condVal <= 1 )
    condVal = 1;
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= condVal;
}


bool __fastcall CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  bool v5; // w20
  unsigned __int64 v6; // x23
  __int64 v7; // x24
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  UserQuestEntity_o *EntityFromId; // x0

  v2 = condQuestId;
  if ( (byte_4C20E76 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    condQuestId = (System_Int32_array *)sub_1C3B764(&NetworkManager_TypeInfo, v3);
    byte_4C20E76 = 1;
  }
  if ( !v2 )
LABEL_23:
    sub_1C3B9C0(condQuestId, method);
  v4 = *(_QWORD *)&v2->max_length;
  if ( !v4 )
    return 0;
  v5 = 1;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    v7 = (unsigned int)*(_QWORD *)&v2->max_length;
    do
    {
      v8 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, method);
        byte_4C1C955 = 1;
      }
      condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      }
      if ( v6 >= v2->max_length )
        sub_1C3B9C8(condQuestId, method);
      if ( !UserQuestMaster )
        goto LABEL_23;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       UserQuestMaster,
                       *(_QWORD *)(*(_QWORD *)&condQuestId->m_Items[39] + 64LL),
                       v2->m_Items[v6 + 1],
                       0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      ++v6;
    }
    while ( v7 != v6 );
    return 1;
  }
  return v5;
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

  if ( (byte_4C20E20 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    byte_4C20E20 = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
bool __fastcall CondType__IsQuestPhaseClear_39069888(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v10; // x1
  NetworkManager_c *v11; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C20E21 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C20E21 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&condQuestPhase);
    byte_4C1C955 = 1;
  }
  v11 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v11 = NetworkManager_TypeInfo;
  }
  userIdNumber = v11->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(
           userIdNumber,
           condQuestId,
           condQuestPhase,
           beforeClearQuestId,
           isCheckResetFlag,
           v5);
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
  Il2CppObject *v10; // x8
  signed __int64 v11; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v13; // x9
  bool v14; // w19
  int32_t v15; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E67 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestResetMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E67 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v8 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v8);
    v10 = entity;
    if ( entity )
    {
      v11 = 0LL;
      do
      {
        monitor = v10[1].monitor;
        if ( !monitor )
          break;
        v13 = (unsigned int)monitor[6];
        v14 = v11 < (int)v13;
        if ( v11 >= (int)v13 )
          return v14;
        if ( v11 >= v13 )
          sub_1C3B9C8(Instance, v7);
        v15 = monitor[v11 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_39011304(v15, -1, 1, v9);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v14;
        v10 = entity;
        ++v11;
      }
      while ( entity );
    }
LABEL_17:
    sub_1C3B9C0(Instance, v7);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *v11; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v14; // w20
  il2cpp_array_size_t v15; // w21
  struct System_Int32_array *v16; // x8
  int v17; // w23
  int v18; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E75 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_1C3B764(&System_Math_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E75 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_26;
  Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v11 = entity;
    if ( !entity )
      goto LABEL_26;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_26;
    max_length = costumeIds->max_length;
    v14 = max_length - 1;
    if ( max_length >= 1 )
    {
      v15 = 0;
      do
      {
        v16 = v11->fields.costumeIds;
        if ( !v16 )
          break;
        if ( v15 >= v16->max_length )
          sub_1C3B9C8(Instance, v9);
        v17 = v16->m_Items[v15 + 1];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v17 >= 0 )
          v18 = v17;
        else
          v18 = -v17;
        Instance = (DataManager_o *)(v18 == costumeId);
        if ( v18 == costumeId || v14 == v15 )
          return (char)Instance;
        v11 = entity;
        ++v15;
      }
      while ( entity );
LABEL_26:
      sub_1C3B9C0(Instance, v9);
    }
  }
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool __fastcall CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  UserGameEntity_o *v3; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C3B9C0(0LL, v2);
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

  if ( (byte_4C20EA9 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&routeId);
    sub_1C3B764(&int___TypeInfo, v5);
    byte_4C20EA9 = 1;
  }
  v6 = sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_10;
  v8 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v6 + 32) = questId;
  v6 = sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !v6 )
LABEL_10:
    sub_1C3B9C0(v6, v7);
  v10 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
LABEL_11:
    sub_1C3B9C8(v6, v7);
  *(_DWORD *)(v6 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_39075004(v8, v10, 1, 0, v9);
}


bool __fastcall CondType__IsRouteSelect_39075004(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v20; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IList_int__c *v37; // x8
  int32_t v38; // w27
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x26
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w28
  NetworkManager_c *v54; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v56; // x1
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v67; // [xsp+18h] [xbp-68h]

  if ( (byte_4C20EAA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, routeIds);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1C3B764(&System_IDisposable_TypeInfo, v11);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_int__TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_int__TypeInfo, v13);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C20EAA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_77;
  klass = questIds->klass;
  v22 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C8D744(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v67 = v25;
  while ( 1 )
  {
    if ( !v67 )
      sub_1C3B9C0(v25, v26);
    v27 = *(_QWORD *)v67;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_17;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_17:
      v30 = sub_1C8D744(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v67, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v67;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v33 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_24;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_24:
      v34 = sub_1C8D744(v67, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v67, *(_QWORD *)(v34 + 8));
    if ( !routeIds )
      sub_1C3B9C0(v35, v36);
    v37 = routeIds->klass;
    v38 = v35;
    v39 = *(unsigned __int16 *)(&routeIds->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&routeIds->klass->_2.bitflags2 + 3) )
    {
      v40 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v40 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_31;
      }
      v41 = (__int64)&v37->vtable[*v40].method;
    }
    else
    {
LABEL_31:
      v41 = sub_1C8D744(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v41)(
            routeIds,
            *(_QWORD *)(v41 + 8));
    if ( !v43 )
      sub_1C3B9C0(0LL, v42);
    while ( 1 )
    {
      v44 = *(_QWORD *)v43;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_38;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_38:
        v47 = sub_1C8D744(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
        break;
      v48 = *(_QWORD *)v43;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v50 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_45;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_45:
        v51 = sub_1C8D744(v43, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v52);
        byte_4C1C955 = 1;
      }
      v54 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v54 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1C3B9C0(v54, v52);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      v54->static_fields->userIdNumber,
                      v38,
                      v53,
                      0LL);
      if ( haveRouteId )
      {
        if ( !v20 )
          sub_1C3B9C0(haveRouteId, v56);
        System_Collections_Generic_HashSet_int___Add(
          v20,
          v53,
          (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v57 = *(_QWORD *)v43;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_61;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_61:
      v60 = sub_1C8D744(v43, System_IDisposable_TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v43, *(_QWORD *)(v60 + 8));
  }
  v61 = *(_QWORD *)v67;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_71;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_71:
    v64 = sub_1C8D744(v67, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v67, *(_QWORD *)(v64 + 8));
  if ( !v20 )
LABEL_77:
    sub_1C3B9C0(Instance, v18);
  return v20->fields._count == count;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship(
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C20E34 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20E34 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&condFriendshipRank);
    byte_4C1C955 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_39053560(userIdNumber, svtId, condFriendshipRank, isAbove, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_39051344(
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
  Il2CppObject v15; // q1
  int64_t v16; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  const MethodInfo *v19; // x4
  int32_t v20; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C20E36 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C20E36 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_22;
  v15 = entity[4];
  *(Il2CppObject *)&v24.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v24.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v23 = v24;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v23, 0LL);
  if ( !entity )
LABEL_22:
    sub_1C3B9C0(Instance, v14);
  v16 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = klass;
  *(_QWORD *)&v26.fields.fakeValue = monitor;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v26, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_39053560(v16, v20, condFriendshipRank, 1, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_39053560(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C20E35 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C20E35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v12);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v15;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v19, 0LL) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v16 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v17 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = v16;
    *(_QWORD *)&v20.fields.fakeValue = v17;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v20, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C20E2E & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    byte_4C20E2E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_39051188(userIdNumber, condSvtId, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v13; // [xsp+8h] [xbp-48h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C20E69 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E69 = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_21;
  Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                (UserServantCollectionMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                svtId,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( entity->fields.status )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    &v13,
                                    eventId,
                                    (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v13 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v13[6].klass;
LABEL_21:
        sub_1C3B9C0(Instance, v10);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGet_39051188(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C20E2F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condSvtId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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


bool __fastcall CondType__IsServantGet_39071172(int64_t userSvtId, const MethodInfo *method)
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
  Il2CppObject v12; // q1
  int64_t v13; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  const MethodInfo *v16; // x2
  int32_t v17; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  Il2CppObject *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C20E30 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E30 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_20;
  v12 = entity[4];
  *(Il2CppObject *)&v21.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v21.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v20, 0LL);
  if ( !entity )
LABEL_20:
    sub_1C3B9C0(Instance, v11);
  v13 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = klass;
  *(_QWORD *)&v23.fields.fakeValue = monitor;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v23, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_39051188(v13, v17, v16);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C20E38 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    byte_4C20E38 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  userIdNumber = v5->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_39051880(userIdNumber, condGroup, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGroup_39051880(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  int v10; // w8
  void *v11; // x21
  bool v12; // w22
  int v13; // w23
  __int64 v14; // x8

  if ( (byte_4C20E39 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&condGroup);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  v12 = v10 > 0;
  if ( v10 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
        sub_1C3B9C8(Instance, v8);
      v14 = *((_QWORD *)v11 + v13 + 4);
      if ( !v14 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v14 + 20),
                   0LL);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v10 = *((_DWORD *)v11 + 6);
        v12 = ++v13 < v10;
        if ( v13 < v10 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  }
  return v12;
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C20E31 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4C20E31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v5);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C20E80 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condNum);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E25 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLv);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E25 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1C3B9C0(Instance, v10);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_39008508(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4C20E26 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condLv);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C20E26 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&condLv);
    byte_4C1C955 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_39053160(userIdNumber, svtId, condLv, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_39053160(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C20E27 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v16; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C20E29 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4C20E29 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_22:
    sub_1C3B9C0(Instance, v13);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v16 = 0;
    goto LABEL_14;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_22;
  klass = entity[6].klass;
  monitor = entity[6].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = klass;
  *(_QWORD *)&v19.fields.fakeValue = monitor;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v19, 0LL);
LABEL_14:
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
  unsigned __int64 v7; // x23
  int32_t v8; // w22
  int32_t v9; // w21

  v4 = targetIds;
  if ( (byte_4C20E99 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_4C20E99 = 1;
  }
  if ( !v4 )
    sub_1C3B9C0(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1C3B9C8(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E2A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C20E2A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_1C3B9C0(Instance, v12);
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
bool __fastcall CondType__IsServantLimit_39008712(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C20E2B & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condLimitCount);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C20E2B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&condLimitCount);
    byte_4C1C955 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_39053320(userIdNumber, svtId, condLimitCount, checkType, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_39053320(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C20E2C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v11);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v11; // x20
  __int64 v12; // x8
  int v13; // w24
  UserShopMaster_o *v14; // x21
  int v15; // w25
  int32_t v16; // w26
  ShopGroupEntity_o *v17; // x8
  int32_t shopId; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C20E7E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopGroupMaster___, *(_QWORD *)&limitNum);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E7E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_26;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v11 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v12 = *(_QWORD *)&v11->max_length;
  v13 = v12 - 1;
  if ( (int)v12 >= 1 )
  {
    v14 = (UserShopMaster_o *)Instance;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = v11->m_Items[v15];
      if ( !v17 )
        break;
      shopId = v17->fields.shopId;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v9);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        break;
      Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                    v14,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    shopId,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v16 += entity->fields.num;
        if ( v16 >= limitNum )
          return 1;
      }
      if ( v13 == v15 )
        return 0;
      if ( ++v15 >= v11->max_length )
        sub_1C3B9C8(Instance, v9);
    }
LABEL_26:
    sub_1C3B9C0(Instance, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  int v10; // w23
  UserShopMaster_o *v11; // x21
  unsigned __int64 v12; // x24
  __int64 v13; // x25

  if ( (byte_4C20E62 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&num);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E62 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  v9 = *(_QWORD *)&values->max_length;
  v10 = 0;
  if ( v9 && (int)v9 >= 1 )
  {
    v11 = (UserShopMaster_o *)Instance;
    v12 = 0LL;
    v10 = 0;
    v13 = (unsigned int)*(_QWORD *)&values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v8);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v12 >= values->max_length )
        sub_1C3B9C8(Instance, v8);
      if ( !v11 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v11,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    values->m_Items[v12 + 1],
                                    0LL);
      if ( !Instance )
        break;
      ++v12;
      v10 += HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( v13 == v12 )
        return num > 0 && v10 == num;
    }
LABEL_19:
    sub_1C3B9C0(Instance, v8);
  }
  return num > 0 && v10 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v9; // x19
  __int64 v10; // x8
  int v11; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  int v13; // w23
  ShopGroupEntity_o *v14; // x8
  ShopEntity_o *v15; // x21

  if ( (byte_4C20E78 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C20E78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C3B9C0(Instance, v7);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
  v10 = *(_QWORD *)&v9->max_length;
  v11 = v10 - 1;
  if ( (int)v10 < 1 )
    goto LABEL_18;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    v14 = v9->m_Items[v13];
    if ( !v14 || !v12 )
      goto LABEL_21;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v12,
                 v14->fields.shopId,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v15 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v15, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v11 == v13 )
      goto LABEL_18;
    if ( ++v13 >= v9->max_length )
      sub_1C3B9C8(Instance, v7);
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C20EAB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C20EAB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v5);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *player_datalist; // x21
  int *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v19; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v21; // w24
  int32_t v22; // w22
  int v23; // w25
  void *monitor; // x20
  Il2CppClass *klass; // x23
  Il2CppObject *Master_object; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  UserServantEntity_array *v28; // x21
  BalanceConfig_c *v29; // x0
  unsigned __int64 v31; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v33; // x8
  __int64 v34; // x22
  __int64 v35; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4C20ECB & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&targetLimitCount);
    sub_1C3B764(&Method_DataManager_GetMaster_UserDeckMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&TutorialFlag_TypeInfo, v13);
    byte_4C20ECB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v19 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        static_fields = v19->static_fields;
        if ( size >= static_fields->DeckMainMemberMax )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          p_size = &static_fields->DeckMainMemberMax;
        }
        v21 = *p_size;
        if ( *p_size >= 1 )
        {
          v22 = 0;
          v23 = targetLimitCount - (targetLimitCount < 11);
          while ( 1 )
          {
            if ( System_Collections_Generic_List_object___get_Item(
                   player_datalist,
                   v22,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v22,
                       (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v36.fields.currentCryptoKey = klass;
              *(_QWORD *)&v36.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v36, 0LL) == targetSvtId )
              {
                if ( (v23 & 0x80000000) != 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v22,
                         (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_54;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0LL) == v23 )
                  return 1;
              }
            }
            if ( v21 == ++v22 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_54:
    sub_1C3B9C0(Item, v15);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Item = (Il2CppObject *)TutorialFlag__Get_39109112(126, 0LL);
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
  v28 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( v29->static_fields->DeckMainMemberMax <= (signed int)v28->max_length )
    {
      v31 = 0LL;
      m_Items = v28->m_Items;
      while ( 1 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v31 >= v29->static_fields->DeckMainMemberMax )
          break;
        if ( v31 >= v28->max_length )
          goto LABEL_55;
        v33 = m_Items[v31];
        if ( v33 )
        {
          v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v37.fields.currentCryptoKey = v35;
          *(_QWORD *)&v37.fields.fakeValue = v34;
          v29 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v37, 0LL);
          if ( (_DWORD)v29 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v31 >= v28->max_length )
LABEL_55:
              sub_1C3B9C8(v29, v15);
            Item = (Il2CppObject *)m_Items[v31];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0LL) == targetLimitCount - 1 )
              return 1;
          }
        }
        v29 = BalanceConfig_TypeInfo;
        ++v31;
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

  if ( (byte_4C20EB3 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    byte_4C20EB3 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C20EB4 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    byte_4C20EB4 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20EB2 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, condVal);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20EB2 = 1;
  }
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v9 = condId / 100;
    v10 = condId % 100;
    if ( v10 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v12);
        byte_4C1C955 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_20;
      Instance = (DataManager_o *)UserSuperBossMaster__TryGetEntity(
                                    (UserSuperBossMaster_o *)MasterData_object,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v9,
                                    v10,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_20:
        sub_1C3B9C0(Instance, v12);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C20E83 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C20E83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v4);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C20E85 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4C20E85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  UserEventServantFatigueMaster_o *v12; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v14; // x1
  int64_t v15; // x22
  int32_t v16; // w26
  __int64 v17; // x27
  __int64 v18; // x28
  int64_t v19; // x23
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v22; // w0
  int64_t v23; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C20E77 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, *(_QWORD *)&condNum);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E77 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_26:
    sub_1C3B9C0(Instance, v11);
  }
  v12 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v15 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_23:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v16 = 0;
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v15 + 32 + 8 * v17);
      if ( v19 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v19,
                   (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = klass;
      *(_QWORD *)&v27.fields.fakeValue = monitor;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v27, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v12, &recoverAt, &isRecover, eventId, v22, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v23 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v23 - RecoverySvtIdList > 0 )
          goto LABEL_20;
        ++v16;
      }
      if ( v16 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_20:
      if ( v18 == v17 )
        goto LABEL_23;
      if ( ++v17 >= (unsigned __int64)*(unsigned int *)(v15 + 24) )
        sub_1C3B9C8(RecoverySvtIdList, v14);
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
    sub_1C3B9C0(countFunc, targetIds);
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
        sub_1C3B9C8(countFunc, targetIds);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int v10; // w8

  if ( (byte_4C20E8D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
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
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  if ( (byte_4C20E8F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flag);
    sub_1C3B764(&System_Enum_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&EventStatus_Type_var, v8);
    sub_1C3B764(&EventStatus_Type_TypeInfo, v9);
    sub_1C3B764(&System_Type_TypeInfo, v10);
    byte_4C20E8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3B9C0(Instance, v12);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v15 = EntityDefinitely;
    v16 = (int)EventStatus_Type_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v24.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
    v23 = flag;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v23, v18, v19, v20);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v21, 0LL)
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
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  if ( (byte_4C20E90 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&flag);
    sub_1C3B764(&System_Enum_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&UserQuestEntity_StatusKind_var, v8);
    sub_1C3B764(&UserQuestEntity_StatusKind_TypeInfo, v9);
    sub_1C3B764(&System_Type_TypeInfo, v10);
    byte_4C20E90 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3B9C0(Instance, v12);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   questId,
                   0LL);
  if ( EntityFromId )
  {
    v15 = EntityFromId;
    v16 = (int)UserQuestEntity_StatusKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v24.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
    v23 = flag;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v23, v18, v19, v20);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v21, 0LL)
                        && UserQuestEntity__HasStatus_41624532(v15, flag, 0LL);
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
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v15; // x20
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x22
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  if ( (byte_4C20EA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&flagKind);
    sub_1C3B764(&System_Enum_TypeInfo, v5);
    sub_1C3B764(&UserShopFlag_FlagKind_var, v6);
    sub_1C3B764(&UserShopFlag_FlagKind_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C3B764(&System_Type_TypeInfo, v10);
    byte_4C20EA6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3B9C0(Instance, v12);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v15 = EntityDefinitely;
    v16 = (int)UserShopFlag_FlagKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v24.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
    v23 = flagKind;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v23, v18, v19, v20);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v21, 0LL)
                            && UserShopEntity__CheckFlagKind(v15, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsValidPrivilege(
        int32_t privilegeId,
        int32_t privilegeNum,
        int64_t *startedAt,
        int64_t *endedAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x23
  _QWORD *p_image; // x0
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C20ED4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserPrivilegeMaster___, *(_QWORD *)&privilegeNum);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    byte_4C20ED4 = 1;
  }
  entity = 0LL;
  *startedAt = 0LL;
  *endedAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    byte_4C1C955 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_19;
  if ( !UserPrivilegeMaster__TryGetEntity(
          (UserPrivilegeMaster_o *)Master_object,
          &entity,
          *(_QWORD *)(p_image[23] + 64LL),
          privilegeId,
          0LL) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
    goto LABEL_19;
  if ( !UserPrivilegeEntity__IsEnabledNum(entity, privilegeNum, 0LL) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
LABEL_19:
    sub_1C3B9C0(p_image, v11);
  return UserPrivilegeEntity__IsValidPeriod(entity, startedAt, endedAt, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x9
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

  if ( (byte_4C20E7B & 1) == 0 )
  {
    sub_1C3B764(&EventRewardRootComponent_TypeInfo, *(_QWORD *)&playCount);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4C20E7B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1C3BC80(Instance);
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v20, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v15, 0LL);
  if ( !byte_4C1F632 )
  {
    sub_1C3B764(&EventRewardSaveData_TypeInfo, v16);
    byte_4C1F632 = 1;
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E6A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&num);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E6A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Instance, v8);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int i; // w9

  if ( (byte_4C20E98 & 1) == 0 )
  {
    sub_1C3B764(&ServantCommentManager_TypeInfo, method);
    byte_4C20E98 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_1C3B9C0(0LL, v4);
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
        sub_1C3B9C8(ClearWarIdList, v4);
      if ( ClearWarIdList->m_Items[i + 1] == condWarId )
        break;
    }
  }
  return i < max_length;
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  CondType___c_c *v16; // x0
  System_Comparison_T__o *_9__168_0; // x20
  Il2CppObject *v18; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  CondType___c_c *v26; // x0
  System_Predicate_object__o *_9__168_1; // x20
  Il2CppObject *v28; // x21
  struct CondType___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x3
  int32_t klass_high; // w19

  if ( (byte_4C20EA4 & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_WarEntity__TypeInfo, v1);
    sub_1C3B764(&CondType_TypeInfo, v2);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarEntity__Find__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarEntity__Sort__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v6);
    sub_1C3B764(&System_Predicate_WarEntity__TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, v9);
    sub_1C3B764(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, v10);
    sub_1C3B764(&CondType___c_TypeInfo, v11);
    byte_4C20EA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v13);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
  if ( !EntityList )
    return 0;
  v15 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v16 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v16 = CondType___c_TypeInfo;
  }
  _9__168_0 = (System_Comparison_T__o *)v16->static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CondType___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__168_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__168_0, v18, Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__168_0,
      (int64_t)_9__168_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_57202480(
    v15,
    _9__168_0,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v26 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v26 = CondType___c_TypeInfo;
  }
  _9__168_1 = (System_Predicate_object__o *)v26->static_fields->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = CondType___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__168_1 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_object____ctor(_9__168_1, v28, Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, 0LL);
    v29 = CondType___c_TypeInfo->static_fields;
    v29->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v29->__9__168_1, (int64_t)_9__168_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = System_Collections_Generic_List_object___Find(
          v15,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v36 )
    return 0;
  klass_high = HIDWORD(v36[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39011304(klass_high, -1, 0, v37);
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

  if ( (byte_4C20E19 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_3836/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, v8);
    byte_4C20E19 = 1;
  }
  switch ( condType )
  {
    case 0:
      v9 = System_String__Concat_63368612((System_String_o *)StringLiteral_3836/*"CRAFT_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      result = LocalizationManager__Get(v9, 0LL);
      break;
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextQuestClear(condValue, textType, (const MethodInfo *)textType);
      break;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantLevel(condValue, textType, (const MethodInfo *)textType);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantLimit(condValue, textType, (const MethodInfo *)textType);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantGet(condValue, textType, (const MethodInfo *)textType);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantFriendship(condValue, textType, (const MethodInfo *)textType);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextServantGroup(condValue, textType, (const MethodInfo *)textType);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextEvent(condValue, textType, (const MethodInfo *)textType);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextPurchaseQpShop(condValue, textType, (const MethodInfo *)textType);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__OpenConditionTextPurchaseStoneShop(condValue, textType, (const MethodInfo *)textType);
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C1D52E )
      {
        sub_1C3B764(&LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
        byte_4C1D52E = 1;
      }
      v11 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4C20E3C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, textType);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_3835/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, v8);
    byte_4C20E3C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_3835/*"CRAFT_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1C3B9C0(Instance, v10);
  v13 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0LL);
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
  Il2CppObject *Entity; // x20
  System_String_o *v12; // x19

  if ( (byte_4C20E3F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_3837/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/, v8);
    byte_4C20E3F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_3837/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_MASK"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1C3B9C0(Instance, v10);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
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
  Il2CppObject *Entity; // x20
  System_String_o *v12; // x19

  if ( (byte_4C20E44 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_1C3B764(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_3838/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, v8);
    byte_4C20E44 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_3838/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1C3B9C0(Instance, v10);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
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
  System_String_o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x19
  LocalizationManager_c *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E1F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, textType);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_3839/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, v8);
    byte_4C20E1F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_3839/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, textType, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get(v12, 0LL);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
LABEL_18:
    sub_1C3B9C0(Master_object, v10);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C1D52E )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    byte_4C1D52E = 1;
  }
  v14 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  WarMaster_o *Master_object; // x0
  __int64 v17; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v19; // x22
  System_String_o *v20; // x19
  System_String_o *v21; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  Il2CppObject *monitor; // x20
  System_String_o *v26; // x19
  Il2CppObject *v27; // x0
  LocalizationManager_c *v28; // x0
  Il2CppObject *v29; // [xsp+0h] [xbp-40h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v30 = condQuestPhase;
  if ( (byte_4C20E23 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_3840/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/, v14);
    sub_1C3B764(&StringLiteral_3839/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, v15);
    byte_4C20E23 = 1;
  }
  v29 = 0LL;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0LL);
    if ( QuestId )
    {
      v19 = QuestId;
      v20 = System_String__Concat_63368612((System_String_o *)StringLiteral_3839/*"CRAFT_EVENT_CONFIRM_DIALOG_SUPPORT_TOOL_POSSESSION_HEADER"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get(v20, 0LL);
      return System_String__Format(v21, (Il2CppObject *)v19->fields.name, 0LL);
    }
  }
  if ( condQuestPhase <= 0 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__OpenConditionTextQuestClear(condQuestId, textType, (const MethodInfo *)textType);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v29,
           condQuestId,
           (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v24 = System_String__Concat_63368612((System_String_o *)StringLiteral_3840/*"CRAFT_EVENT_CONFIRM_DIALOG_TITLE"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v24, 0LL);
      if ( v29 )
      {
        monitor = (Il2CppObject *)v29[1].monitor;
        v26 = (System_String_o *)Master_object;
        v27 = (Il2CppObject *)System_Int32__ToString((int32_t)&v30, 0LL);
        return System_String__Format_63382984(v26, monitor, v27, 0LL);
      }
LABEL_31:
      sub_1C3B9C0(Master_object, v17);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C1D52E )
    {
      sub_1C3B764(&LocalizationManager_TypeInfo, v23);
      byte_4C1D52E = 1;
    }
    v28 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C20E37 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, textType);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3841/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/, v6);
    byte_4C20E37 = 1;
  }
  v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_3841/*"CRAFT_EVENT_CONFIRM_DIALOG_USE_SUPPORT_TOOL"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  v14 = condFriendshipRank;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format(v8, v12, 0LL);
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
  Il2CppObject *Entity; // x20
  System_String_o *v12; // x19
  System_String_o *v13; // x19
  Il2CppObject *Name; // x1

  if ( (byte_4C20E33 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, textType);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_3842/*"CRAFT_EVENT_END"*/, v8);
    byte_4C20E33 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = System_String__Concat_63368612((System_String_o *)StringLiteral_3842/*"CRAFT_EVENT_END"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1C3B9C0(Instance, v10);
  v13 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C20E3A & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, textType);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3843/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, v6);
    byte_4C20E3A = 1;
  }
  v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_3843/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_DETAIL"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  v14 = condGroup;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format(v8, v12, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C20E28 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, textType);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3844/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, v6);
    byte_4C20E28 = 1;
  }
  v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_3844/*"CRAFT_EVENT_FIRST_TIME_SUPPORT_TOOL_DIALOG_POSSESSION"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  v14 = condLv;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format(v8, v12, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C20E2D & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, textType);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3845/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, v6);
    byte_4C20E2D = 1;
  }
  v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_3845/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  v14 = condLimitCount;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format(v8, v12, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  SpotPathEntity_o *v14; // x19
  int32_t v15; // w20
  int32_t monitor_high; // w21

  if ( (byte_4C20E0F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_SpotPathMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1C3B764(&EventSpotMoveManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20E0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_13:
    sub_1C3B9C0(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v15 = (int32_t)Entity[2].klass;
    if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v15, v14, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C20E0E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&targetId);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C20E0E = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
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
        sub_1C3B9C0(Instance, v8);
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
  MapEntity_array *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  MapEntity_o *v13; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v15; // x21

  if ( (byte_4C20EA5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_long___, target);
    sub_1C3B764(&Method_DataManager_GetMasterData_MapMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventMapMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C20EA5 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v12 = *(_QWORD *)&Instance->max_length;
  if ( !v12 )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)v12 )
    sub_1C3B9C8(Instance, v11);
  v13 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v13 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v13->fields.warId,
                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v15 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_1C3B9C0(Instance, v11);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_41555612(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v15 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_30EE5F0 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1C3B9C0(0LL, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_162_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(collection, method);
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
        sub_1C3B9C8(v4, method);
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
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  char v11; // w8
  TotalEventRaidEntity_o *v13; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E10 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E10 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v11 = 0;
    return v11 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_1C3B9C0(Instance, v10);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v13,
                               targetId,
                               condValue,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v13 )
    goto LABEL_14;
  v11 = (entity->fields.maxHp <= v13->fields.totalDamage) ^ alive;
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v13; // x22
  unsigned int v14; // w23
  EventRaidEntity_o *v15; // x24
  char v16; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20E11 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4C20E11 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1C3B9C0(Instance, v10);
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
        sub_1C3B9C8(Instance, v10);
      v15 = EventRaidEntityArray->m_Items[v14];
      if ( !v15 || !v13 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v13, &entity, targetId, v15->fields.day, 0LL);
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
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C20E0D & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C20E0D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Instance, v9);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7BDC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7BD64;
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
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  v14 = level;
  v15 = id;
  if ( (byte_4C20ED7 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&id);
    byte_4C20ED7 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&level, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v13, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C3B71C(result, 0LL, method) )
    sub_1C3B9C0(0LL, v3);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C20ED8 & 1) == 0 )
  {
    sub_1C3B764(&CondType___c_TypeInfo, v1);
    byte_4C20ED8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(CondType___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v2;
  sub_1C3B708((PartyOrganizationUtility_o *)CondType___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
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
    sub_1C3B9C0(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_2(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return !UserQuestEntity__IsResetStatus(entity, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_3(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.clearNum >= 1 && !UserQuestEntity__IsResetStatus(entity, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_4(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return entity->fields.clearNum > 0;
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C20EDC & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3B764(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4C20EDC = 1;
  }
  if ( !x )
    sub_1C3B9C0(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_300B39C *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C20EDD & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3B764(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4C20EDD = 1;
  }
  if ( !x )
    sub_1C3B9C0(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_300B39C *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4C20ED9 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4C20ED9 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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

  if ( (byte_4C20EDA & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4C20EDA = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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

  if ( (byte_4C20EDB & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4C20EDB = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestFriendShipRank(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


bool __fastcall CondType___c___IsCompleteHighestWaveValue_b__222_0(
        CondType___c_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return QuestPhaseEntity__IsInterruptionQuest(x, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__168_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3B9C0(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, collection);
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
        sub_1C3B9C8(v6, collection);
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
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C20EDE & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4C20EDE = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C20EDF & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4C20EDF = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4C20EE0 & 1) == 0 )
  {
    sub_1C3B764(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4C20EE0 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, targetNum, 0LL);
}


void __fastcall CondType___c__DisplayClass204_0___ctor(
        CondType___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass204_0___IsExchangeSvtBuff_b__0(
        CondType___c__DisplayClass204_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3B9C0(this, 0LL);
  return this->fields.targetId == entity->fields.eventId;
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}