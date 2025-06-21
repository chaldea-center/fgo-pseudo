void __fastcall CondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v7; // x19
  struct CondType_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1B40A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v5);
    byte_4B1B40A = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->uQuestMst, 0, v2, v3);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v8 = CondType_TypeInfo->static_fields;
  v8->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v8->cachedServantEquipIdStrDic, (int32_t)v7, v9, v10);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_BE29D0;
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
  __int64 v22; // x19
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
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  QuestScriptMaterialNextMaster_o *v39; // x8
  Il2CppObject *v40; // x0
  int32_t questPhase; // w24
  int32_t questId; // w26
  UserQuestMaster_o *v43; // x27
  int64_t updatedAt; // x8
  QuestScriptMaterialNextMaster_o *v45; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x22
  System_Func_object__bool__o *v47; // x20
  CondType___c_c *v49; // x0
  System_Func_object__bool__o *_9__28_2; // x23
  Il2CppObject *v51; // x25
  struct CondType___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int clearNum; // w8
  CondType___c_c *v56; // x0
  struct CondType___c_StaticFields *v57; // x8
  System_Func_object__bool__o *_9__28_3; // x20
  Il2CppObject *v59; // x25
  struct CondType___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x24
  struct CondType___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3

  if ( (byte_4B1B34C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&condQuestId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_UserQuestEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76957208, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___, v11);
    sub_1BCAFF8(&System_Func_UserQuestEntity__bool__TypeInfo, v12);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v13);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, v15);
    sub_1BCAFF8(&Method_CondType___c__CheckGroupMaterialQuest_b__28_2__, v16);
    sub_1BCAFF8(&Method_CondType___c__CheckGroupMaterialQuest_b__28_3__, v17);
    sub_1BCAFF8(&Method_CondType___c__CheckGroupMaterialQuest_b__28_4__, v18);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__, v19);
    sub_1BCAFF8(&CondType___c__DisplayClass28_0_TypeInfo, v20);
    sub_1BCAFF8(&CondType___c_TypeInfo, v21);
    byte_4B1B34C = 1;
  }
  v22 = sub_1BCB244(CondType___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_70;
  *(_DWORD *)(v22 + 16) = condQuestId;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0LL);
  if ( userQuestEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( !Master_object )
      goto LABEL_70;
    v26 = (QuestScriptMaterialNextMaster_o *)Master_object;
    IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                       (QuestScriptMaterialNextMaster_o *)Master_object,
                       *(_DWORD *)(v22 + 16),
                       0LL);
    SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                     v26,
                                     IncludedGroups,
                                     0LL);
    v29 = QuestScriptMaterialNextMaster__GetIncludedGroups(v26, *(_DWORD *)(v22 + 16), 0LL);
    v30 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (const MethodInfo_303F1D0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
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
      _9__28_1 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserQuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_1, v35, Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, 0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__28_1, (int32_t)_9__28_1, v37, v38);
    }
    Master_object = System_Linq_Enumerable__All_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                      (System_Func_TSource__bool__o *)_9__28_1,
                      (const MethodInfo_3024F54 *)Method_System_Linq_Enumerable_All_UserQuestEntity___);
    if ( (Master_object & 1) != 0 )
      v39 = 0LL;
    else
      v39 = v26;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_66;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v40 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v30->fields.questId;
      questPhase = v30->fields.questPhase;
      v43 = (UserQuestMaster_o *)v40;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__getTime(0LL);
      if ( !v43 )
        goto LABEL_70;
      Master_object = (int64_t)UserQuestMaster__CreateQuestClearDummyData(v43, questId, questPhase, Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_70;
      updatedAt = v30->fields.updatedAt;
      v45 = v26;
      v30 = (UserQuestEntity_o *)Master_object;
      *(_QWORD *)(Master_object + 72) = updatedAt;
LABEL_47:
      clearNum = v30->fields.clearNum;
      if ( clearNum <= 0 )
        v26 = v45;
      else
        v26 = 0LL;
      if ( clearNum > 0 )
      {
LABEL_67:
        if ( v45 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v45, *(_DWORD *)(v22 + 16), v30, v33, 0LL);
LABEL_70:
        sub_1BCB254(Master_object, v24);
      }
      v56 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v56 = CondType___c_TypeInfo;
      }
      v57 = v56->static_fields;
      if ( isCheckResetFlag )
      {
        _9__28_3 = (System_Func_object__bool__o *)v57->__9__28_3;
        if ( !_9__28_3 )
        {
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = CondType___c_TypeInfo;
          }
          v59 = (Il2CppObject *)v56->static_fields->__9;
          _9__28_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__28_3, v59, Method_CondType___c__CheckGroupMaterialQuest_b__28_3__, 0LL);
          v60 = CondType___c_TypeInfo->static_fields;
          v60->__9__28_3 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_3;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v60->__9__28_3, (int32_t)_9__28_3, v61, v62);
        }
        v26 = v45;
      }
      else
      {
        _9__28_3 = (System_Func_object__bool__o *)v57->__9__28_4;
        if ( !_9__28_3 )
        {
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = CondType___c_TypeInfo;
          }
          v63 = (Il2CppObject *)v56->static_fields->__9;
          _9__28_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__28_3, v63, Method_CondType___c__CheckGroupMaterialQuest_b__28_4__, 0LL);
          v64 = CondType___c_TypeInfo->static_fields;
          v64->__9__28_4 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_3;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v64->__9__28_4, (int32_t)_9__28_3, v65, v66);
        }
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__28_3,
                                 (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76957208);
      if ( Master_object )
        v30 = (UserQuestEntity_o *)Master_object;
LABEL_66:
      v45 = v26;
      goto LABEL_67;
    }
    if ( isCheckResetFlag )
      v45 = v39;
    else
      v45 = 0LL;
    if ( isCheckResetFlag )
    {
      if ( !v30 )
      {
        v45 = v39;
        if ( v39 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v45, *(_DWORD *)(v22 + 16), v30, v33, 0LL);
        goto LABEL_70;
      }
      Master_object = UserQuestEntity__IsResetStatus(v30, 0LL);
      if ( (Master_object & 1) == 0 )
        goto LABEL_47;
      v49 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v49 = CondType___c_TypeInfo;
      }
      _9__28_2 = (System_Func_object__bool__o *)v49->static_fields->__9__28_2;
      if ( !_9__28_2 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = CondType___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__28_2 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__28_2, v51, Method_CondType___c__CheckGroupMaterialQuest_b__28_2__, 0LL);
        v52 = CondType___c_TypeInfo->static_fields;
        v52->__9__28_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_2;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v52->__9__28_2, (int32_t)_9__28_2, v53, v54);
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__28_2,
                                 (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76957208);
      v30 = (UserQuestEntity_o *)Master_object;
    }
    else
    {
      v45 = v26;
    }
    if ( !v30 )
      goto LABEL_67;
    goto LABEL_47;
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v47 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v22,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                v46,
                                (System_Func_TSource__bool__o *)v47,
                                (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76957208);
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
  bool IsQuestClear_39516796; // w8

  if ( (byte_4B1B406 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, time);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B1B406 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, time);
    byte_4B165D1 = 1;
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
    sub_1BCB254(0LL, v11);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9, questId, 0LL);
  if ( EntityFromId )
  {
    v14 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_39516796 = CondType__IsQuestClear_39516796(questId, -1, 0, v13);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_39516796 )
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
  __int64 v8; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v10; // x21
  int32_t v11; // w22
  unsigned int v12; // w24
  UserServantCollectionMaster_c **v13; // x8
  UserServantCollectionEntity_o *v14; // x23
  int v15; // w8
  int v16; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B3E7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, *(_QWORD *)&targetNum);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    byte_4B1B3E7 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_1BCB254(Master_object, v7);
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
      if ( *(&Master_object->fields.revision + v16) >= skillLv )
        ++v11;
      if ( targetNum && v11 >= targetNum )
        return v11;
      if ( v15 == ++v16 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BCB25C(Master_object, v7, v8);
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
  __int64 v14; // x20
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  CondType___c_c *v20; // x8
  System_Func_object__int__o *_9__197_1; // x20
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct CondType___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__197_1; // x0
  CondType___c_c *v27; // x0
  Il2CppObject *v28; // x21
  struct CondType___c_StaticFields *v29; // x0

  if ( (byte_4B1B3ED & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__,
      v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___, v6);
    sub_1BCAFF8(&System_Func_UserClassBoardSquareEntity__int__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_1BCAFF8(&Method_CondType___c__CountClassBoardSquareReleased_b__197_1__, v9);
    sub_1BCAFF8(&Method_CondType___c__CountClassBoardSquareReleased_b__197_2__, v10);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass197_0__CountClassBoardSquareReleased_b__0__, v11);
    sub_1BCAFF8(&CondType___c__DisplayClass197_0_TypeInfo, v12);
    sub_1BCAFF8(&CondType___c_TypeInfo, v13);
    byte_4B1B3ED = 1;
  }
  v14 = sub_1BCB244(CondType___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_22;
  *(_DWORD *)(v14 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1BCB254(Master_object, v16);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( *(_DWORD *)(v14 + 16) )
  {
    v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v14,
      Method_CondType___c__DisplayClass197_0__CountClassBoardSquareReleased_b__0__,
      0LL);
    v19 = System_Linq_Enumerable__Where_object_(
            monitor,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v20 = CondType___c_TypeInfo;
    monitor = v19;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v20 = CondType___c_TypeInfo;
    }
    _9__197_1 = (System_Func_object__int__o *)v20->static_fields->__9__197_1;
    if ( !_9__197_1 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = CondType___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__197_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__197_1,
        v22,
        Method_CondType___c__CountClassBoardSquareReleased_b__197_1__,
        0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__197_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__197_1;
      p__9__197_1 = (CGThumbnailListItem_o *)&static_fields->__9__197_1;
LABEL_20:
      sub_1BCAF9C(p__9__197_1, (int32_t)_9__197_1, v23, v24);
    }
  }
  else
  {
    v27 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v27 = CondType___c_TypeInfo;
    }
    _9__197_1 = (System_Func_object__int__o *)v27->static_fields->__9__197_2;
    if ( !_9__197_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = CondType___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v27->static_fields->__9;
      _9__197_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__197_1,
        v28,
        Method_CondType___c__CountClassBoardSquareReleased_b__197_2__,
        0LL);
      v29 = CondType___c_TypeInfo->static_fields;
      v29->__9__197_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__197_1;
      p__9__197_1 = (CGThumbnailListItem_o *)&v29->__9__197_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           monitor,
           (System_Func_TSource__int__o *)_9__197_1,
           (const MethodInfo_3055D78 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
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
  __int64 v14; // x2
  int max_length; // w9
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  int32_t v17; // w22
  int v18; // w8
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x24
  void *data; // x25
  const char *namespaze; // x26
  Il2CppObject *v24; // [xsp+0h] [xbp-70h] BYREF
  __int64 findSum; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1B3EA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantClassMaster___, countFunc);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4B1B3EA = 1;
  }
  entity = 0LL;
  v24 = 0LL;
  findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v17 = 0;
        v18 = 0;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)max_length )
            sub_1BCB25C(Master_object, v12, v14);
          v19 = &v13->obj.klass + v18;
          v20 = v19[4];
          if ( !v20 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v19[4],
                                                                 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v20->_1.namespaze;
            data = v20->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v27.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v27.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                                   v27,
                                                                   0LL);
            if ( !v16 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v16,
                                                                   &v24,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v24 )
                break;
              if ( LODWORD(v24[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))countFunc->fields.m_target)(
                                                                       countFunc->fields.original_method_info,
                                                                       v20,
                                                                       *(_QWORD *)&countFunc->fields.extra_arg);
                v17 += (int)Master_object;
              }
            }
          }
          v18 = findSum + 1;
          LODWORD(findSum) = v18;
          max_length = v13->max_length;
          if ( v18 >= max_length )
            return v17;
        }
LABEL_31:
        sub_1BCB254(Master_object, v12);
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

  if ( (byte_4B1B3D5 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CombineMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__string__Clear__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1B3D5 = 1;
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
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
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
LABEL_57:
      sub_1BCB254(cachedServantEquipIdStrDic, method);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v23);
      byte_4B165D1 = 1;
    }
    v24 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v24 = NetworkManager_TypeInfo;
    }
    CondType_TypeInfo->static_fields->lastUserId = v24->static_fields->userIdNumber;
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v25 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v25 )
    goto LABEL_57;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v25,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0LL);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_57;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v29 = targetId / 100;
  v30 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    ServantEquipCollectionList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v47 = 0;
  v50 = v48;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1BCB254(v31, v32);
    if ( LODWORD(v50.fields._current[2].monitor) == 2 )
    {
      monitor = v50.fields._current[1].monitor;
      klass = v50.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v51.fields.fakeValue = klass;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v51, 0LL);
      if ( !MasterData_object )
        sub_1BCB254(v36, (unsigned int)v36);
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v36,
              (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v37 )
      {
        v39 = v37[1].klass;
        v38 = v37[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v39;
        *(_QWORD *)&v52.fields.fakeValue = v38;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v52, 0LL);
        if ( !v28 )
          sub_1BCB254(v40, (unsigned int)v40);
        v41 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v28, v40, 0, 0LL);
        if ( v41
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v37, 0LL)
          && v41->fields.rarity == v30
          && SHIDWORD(current[2].monitor) >= v29 )
        {
          if ( !v46 )
            sub_1BCB254(0LL, v42);
          v43 = DataMasterBase_object__object__int___TryGetEntity(
                  v46,
                  &entity,
                  (int32_t)v37[8].monitor,
                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v43 )
            goto LABEL_51;
          if ( !entity )
            sub_1BCB254(v43, v44);
          if ( HIDWORD(entity[1].klass) != 3
            || ServantEntity__get_IsSvtEquipRarityLevelNumMission((ServantEntity_o *)v37, 0LL) )
          {
LABEL_51:
            ++v47;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v47;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1B3F2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType__CountGrandServantSet(int32_t targetId, int32_t targetNum, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x19
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  EventMissionConditionMaster_o *v22; // x20
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_ICollection_o *v26; // x21
  __int64 v27; // x20
  System_Func_object__bool__o *v28; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UserEventMissionMaster_o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *UserEventMissionList; // x21
  System_Func_object__bool__o *v33; // x22
  Il2CppObject *v34; // x0

  if ( (byte_4B1B409 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventMissionMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventMissionEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___, v11);
    sub_1BCAFF8(&System_Func_UserEventMissionEntity__bool__TypeInfo, v12);
    sub_1BCAFF8(&System_Func_EventMissionConditionEntity__bool__TypeInfo, v13);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass228_0__CountGrandServantSet_b__0__, v14);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass228_0__CountGrandServantSet_b__1__, v15);
    sub_1BCAFF8(&CondType___c__DisplayClass228_0_TypeInfo, v16);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass228_1__CountGrandServantSet_b__2__, v17);
    sub_1BCAFF8(&CondType___c__DisplayClass228_1_TypeInfo, v18);
    byte_4B1B409 = 1;
  }
  v19 = sub_1BCB244(CondType___c__DisplayClass228_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_21;
  *(_DWORD *)(v19 + 16) = targetId;
  *(_DWORD *)(v19 + 20) = targetNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v22 = (EventMissionConditionMaster_o *)Master_object;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v22 )
    goto LABEL_21;
  EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                    v22,
                                    CondType_TypeInfo->static_fields->EventId,
                                    258,
                                    0LL);
  v24 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v19,
    Method_CondType___c__DisplayClass228_0__CountGrandServantSet_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
  v26 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v25,
                                              (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
  if ( BasicHelper__IsNullOrEmpty(v26, 0LL) )
    goto LABEL_19;
  v27 = sub_1BCB244(CondType___c__DisplayClass228_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  v28 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v19,
    Method_CondType___c__DisplayClass228_0__CountGrandServantSet_b__1__,
    0LL);
  Master_object = System_Linq_Enumerable__FirstOrDefault_object__50595188(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                    (System_Func_TSource__bool__o *)v28,
                    (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
  if ( !v27 )
    goto LABEL_21;
  *(_QWORD *)(v27 + 16) = Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 16), (int32_t)Master_object, v29, v30);
  if ( !*(_QWORD *)(v27 + 16) )
  {
LABEL_19:
    LODWORD(v34) = 0;
    return (int)v34;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  v31 = (UserEventMissionMaster_o *)Master_object;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v31 )
LABEL_21:
    sub_1BCB254(Master_object, v21);
  UserEventMissionList = (System_Collections_Generic_IEnumerable_TSource__o *)UserEventMissionMaster__getUserEventMissionList(
                                                                                v31,
                                                                                CondType_TypeInfo->static_fields->EventId,
                                                                                0LL);
  v33 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserEventMissionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v27,
    Method_CondType___c__DisplayClass228_1__CountGrandServantSet_b__2__,
    0LL);
  v34 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
          UserEventMissionList,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventMissionEntity___);
  if ( v34 )
    LODWORD(v34) = *(_DWORD *)(v19 + 20);
  return (int)v34;
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  UserEventRandomMissionMaster_o *v8; // x20
  int32_t v9; // w21
  unsigned __int64 v10; // x22

  if ( (byte_4B1B3DF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1B3DF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  v7 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = Master_object;
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1BCB25C(Master_object, v5, v6);
      if ( !v8 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v8,
                                                          missionIds->m_Items[v10 + 1],
                                                          0LL);
      if ( Master_object )
        v9 += *(&Master_object->fields.revision + 1);
      LODWORD(v7) = missionIds->max_length;
      if ( (__int64)++v10 >= (int)v7 )
        return v9;
    }
LABEL_16:
    sub_1BCB254(Master_object, v5);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_object__int__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B1B3CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_161_0__, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4B1B3CF = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v5,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_161_0__,
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

  if ( (byte_4B1B3D2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_164_0__, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4B1B3D2 = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v5, 0LL, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_164_0__, 0LL);
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

  if ( (byte_4B1B3CD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_159_0__, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4B1B3CD = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v5, 0LL, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_159_0__, 0LL);
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

  if ( (byte_4B1B3E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_192_0__, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v4);
    byte_4B1B3E9 = 1;
  }
  v5 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v5,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_192_0__,
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
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // w21
  System_Func_object__int__o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4B1B3CE & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v3);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass160_0__CountServantFriendShipClassNum_g__CountFunc_0__, v4);
    sub_1BCAFF8(&CondType___c__DisplayClass160_0_TypeInfo, v5);
    byte_4B1B3CE = 1;
  }
  v6 = sub_1BCB244(CondType___c__DisplayClass160_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1BCB254(v7, v8);
  v9 = targetId / 100;
  *(_DWORD *)(v6 + 16) = targetId % 100;
  v10 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_CondType___c__DisplayClass160_0__CountServantFriendShipClassNum_g__CountFunc_0__,
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
  __int64 v14; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x23
  __int64 v17; // x26
  int32_t v18; // w22
  UserServantCollectionEntity_o *v19; // x24
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B1B3D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantClassMaster___, *(_QWORD *)&level);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1B3D1 = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v13->max_length;
      if ( max_length >= 1 )
      {
        v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v17 = 0LL;
        v18 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v17 >= max_length )
            sub_1BCB25C(Instance, v12, v14);
          v19 = v13->m_Items[v17];
          if ( !v19 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v13->m_Items[v17], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && v19->fields.maxLv >= level )
          {
            v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
            v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v21;
            *(_QWORD *)&v24.fields.fakeValue = v20;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                              v24,
                                                              0LL);
            if ( !v16 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v16,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v18;
          }
          max_length = v13->max_length;
          if ( (int)++v17 >= max_length )
            return v18;
        }
LABEL_27:
        sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B3D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&level);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B3D3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v8);
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
  __int64 v13; // x2
  __int64 v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  __int64 v16; // x26
  int32_t v17; // w23
  int v18; // w29
  UserServantCollectionEntity_o *v19; // x20
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B1B3CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B3CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v11 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    v14 = *(_QWORD *)&CollectionList->max_length;
    if ( v14 )
    {
      if ( (int)v14 >= 1 )
      {
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v16 = 0LL;
        v17 = 0;
        v18 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v16 >= (unsigned int)v14 )
            sub_1BCB25C(Instance, v10, v13);
          v19 = CollectionList->m_Items[v16];
          if ( !v19 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v16], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
            v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v21;
            *(_QWORD *)&v24.fields.fakeValue = v20;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v24, 0LL);
            if ( !v15 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v15,
                         (int32_t)Instance,
                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v11 && v19->fields.maxLimitCount >= v18 )
              ++v17;
          }
          LODWORD(v14) = CollectionList->max_length;
          if ( (int)++v16 >= (int)v14 )
            return v17;
        }
LABEL_27:
        sub_1BCB254(Instance, v10);
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
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int v9; // w21
  System_Func_object__int__o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_4B1B3E8 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&System_Func_UserServantCollectionEntity__int__TypeInfo, v3);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass191_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__, v4);
    sub_1BCAFF8(&CondType___c__DisplayClass191_0_TypeInfo, v5);
    byte_4B1B3E8 = 1;
  }
  v6 = sub_1BCB244(CondType___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    sub_1BCB254(v7, v8);
  v9 = targetId / 100;
  *(_DWORD *)(v6 + 16) = targetId % 100;
  v10 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_CondType___c__DisplayClass191_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
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
  if ( (byte_4B1B3D0 & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1BCAFF8(&CondType_TypeInfo, func);
    byte_4B1B3D0 = 1;
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
        sub_1BCB25C(targetParam, func, method);
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
    sub_1BCB254(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  __int64 v3; // x1
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w9
  int v8; // w10
  int32_t v9; // w8
  UserEventBoardGameTokenEntity_o *v10; // x11

  if ( (byte_4B1B3C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3C6 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_42164772((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        if ( max_length == v8 )
          sub_1BCB25C(Instance, v5, v6);
        v10 = Instance->m_Items[v8];
        if ( !v10 )
          break;
        ++v8;
        if ( v10->fields.tokenId == tokenId )
          ++v9;
        if ( max_length == v8 )
          return v9;
      }
LABEL_19:
      sub_1BCB254(Instance, v5);
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

  if ( (byte_4B1B3B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventPointMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B3B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1BCB254(Instance, v6);
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

  if ( (byte_4B1B3F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
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

  if ( (byte_4B1B3F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1B3F4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
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

  if ( (byte_4B1B343 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BCAFF8(&Method_SingletonTemplate_BattleItemData__get_Instance__, v7);
    byte_4B1B343 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                targetId,
                                (const MethodInfo_32C7E4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_23:
      sub_1BCB254(Instance, v9);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
  __int64 v9; // x2
  __int64 v10; // x8
  System_Int32_array *v11; // x19
  int32_t v12; // w20
  unsigned __int64 v13; // x23
  int32_t v14; // w21

  if ( (byte_4B1B37B & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B37B = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1BCB254(Instance, v7);
    }
    v10 = *(_QWORD *)&Instance->max_length;
    v11 = Instance;
    if ( (int)v10 < 1 )
      return 0;
    v12 = 0;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v10 )
        sub_1BCB25C(Instance, v7, v9);
      v14 = v11->m_Items[v13 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v14, v7);
      LODWORD(v10) = v11->max_length;
      ++v13;
      v12 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v13 < (int)v10 );
    return v12;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *Instance; // x0
  const MethodInfo *v7; // x1
  EventMissionMaster_o *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x8
  System_Int32_array *v11; // x19
  int32_t v12; // w20
  unsigned __int64 v13; // x23
  int32_t v14; // w21

  if ( (byte_4B1B37C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B37C = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v8 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v8
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v8, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1BCB254(Instance, v7);
    }
    v10 = *(_QWORD *)&Instance->max_length;
    v11 = Instance;
    if ( (int)v10 < 1 )
      return 0;
    v12 = 0;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v10 )
        sub_1BCB25C(Instance, v7, v9);
      v14 = v11->m_Items[v13 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v14, v7);
      LODWORD(v10) = v11->max_length;
      ++v13;
      v12 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v13 < (int)v10 );
    return v12;
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
      return dword_C1BF24[v2];
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x25
  __int64 v23; // x8
  int32_t v24; // w21
  unsigned __int64 v25; // x26
  bool v26; // w23
  int32_t v27; // w24

  if ( (byte_4B1B385 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1B385 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v16 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1BCAF9C((CGThumbnailListItem_o *)sameGroupQuestIds, (int32_t)QuestIdListByGroupId, v18, v19),
        (v22 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_30:
    sub_1BCB254(Instance, v14);
  }
  v23 = *(_QWORD *)&v22->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0;
    v25 = 0LL;
    v26 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
        sub_1BCB25C(Instance, v14, v20);
      v27 = v22->m_Items[v25 + 1];
      if ( v27 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_39516796(v27, -1, v26, v21);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v24;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B165D1 )
          {
            sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
            byte_4B165D1 = 1;
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
                                        v27,
                                        0LL);
          if ( Instance )
          {
            Instance = (DataManager_o *)UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
              ++v24;
          }
        }
      }
      LODWORD(v23) = v22->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        return v24;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4B1B389 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1B389 = 1;
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

  if ( (byte_4B1B379 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B379 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v8);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1B388 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v1);
    byte_4B1B388 = 1;
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
  CondType_c *v15; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v5 = eventId;
  if ( (byte_4B1B34A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B1B34A = 1;
  }
  v10 = CondType_TypeInfo;
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v10 = CondType_TypeInfo;
  }
  v10->static_fields->EventId = v5;
  if ( condType <= 85 )
  {
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
          goto LABEL_46;
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
LABEL_46:
          v11 = IsPurchaseShop;
          break;
        case 40:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
        case 46:
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B165D1 )
          {
            sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
            byte_4B165D1 = 1;
          }
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v15 = CondType_TypeInfo;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__GetQuestClearPhaseCount((int64_t)v15, targetId, -1, 0, method);
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( condType )
      {
        case 'C':
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
        case 'G':
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
        case 'U':
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__GetEventTotalPoint(v5, *(const MethodInfo **)&targetId);
        default:
          return 0LL;
      }
    }
  }
  else
  {
    if ( condType > 142 )
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
          if ( condType == 219 )
          {
            if ( !v10->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v10);
            PurchaseShopCount = CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
          }
          else
          {
            if ( condType != 258 )
              return v11;
            if ( !v10->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v10);
            PurchaseShopCount = CondType__CountGrandServantSet(targetId, condValue, (const MethodInfo *)condValue);
          }
          break;
      }
      return PurchaseShopCount;
    }
    v11 = 0LL;
    if ( condType <= 135 )
    {
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
    }
    else
    {
      switch ( condType )
      {
        case 136:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
        case 139:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          IsPurchaseShop = CondType__TimeLimitRaidDead(v5, targetId, (const MethodInfo *)condValue);
          goto LABEL_46;
        case 141:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
        case 142:
          if ( !v10->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v10);
          return CondType__LatestMainScenarioWarClear((const MethodInfo *)v10);
        default:
          return v11;
      }
    }
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct CondType___c_StaticFields *v20; // x0
  CGThumbnailListItem_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 *v24; // x8
  CondType___c_c *v25; // x0
  Il2CppObject *v26; // x21
  struct CondType___c_StaticFields *v27; // x0
  CondType_CountDelegate_o *v28; // x20
  const MethodInfo *v29; // x2
  CondType___c_c *v30; // x0
  Il2CppObject *v31; // x21
  struct CondType___c_StaticFields *static_fields; // x0

  if ( (byte_4B1B34B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType_CountServantLevelClassNum__, targetIds);
    sub_1BCAFF8(&Method_CondType_CountServantLevelIdNum__, v5);
    sub_1BCAFF8(&CondType_TypeInfo, v6);
    sub_1BCAFF8(&CondType_CountDelegate_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Aggregate_int__int___, v8);
    sub_1BCAFF8(&System_Func_int__int__int__TypeInfo, v9);
    sub_1BCAFF8(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, v10);
    sub_1BCAFF8(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, v11);
    sub_1BCAFF8(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, v12);
    sub_1BCAFF8(&CondType___c_TypeInfo, v13);
    byte_4B1B34B = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v30 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v30 = CondType___c_TypeInfo;
        }
        _9__26_1 = v30->static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = CondType___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v30->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1BCB244(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v31, Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__26_1 = _9__26_1;
        p__9__26_1 = (CGThumbnailListItem_o *)&static_fields->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v25 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v25 = CondType___c_TypeInfo;
        }
        _9__26_1 = v25->static_fields->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = CondType___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v25->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1BCB244(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v26, Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, 0LL);
        v27 = CondType___c_TypeInfo->static_fields;
        v27->__9__26_2 = _9__26_1;
        p__9__26_1 = (CGThumbnailListItem_o *)&v27->__9__26_2;
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
      _9__26_1 = (System_Func_int__int__int__o *)sub_1BCB244(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__26_1, v17, Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, 0LL);
      v20 = CondType___c_TypeInfo->static_fields;
      v20->__9__26_0 = _9__26_1;
      p__9__26_1 = (CGThumbnailListItem_o *)&v20->__9__26_0;
    }
    sub_1BCAF9C(p__9__26_1, (int32_t)_9__26_1, v18, v19);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_3022D7C *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v22 = (CondType_CountDelegate_o *)sub_1BCB244(CondType_CountDelegate_TypeInfo);
    v24 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v22 = (CondType_CountDelegate_o *)sub_1BCB244(CondType_CountDelegate_TypeInfo);
    v24 = &Method_CondType_CountServantLevelIdNum__;
  }
  v28 = v22;
  CondType_CountDelegate___ctor(v22, 0LL, *v24, v23);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v28, v29);
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

  if ( (byte_4B1B373 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B373 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v6);
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
  __int64 v16; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v18; // x21
  unsigned __int64 v19; // x26
  int32_t v20; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1B38B & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B38B = 1;
  }
  v23 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
          v18 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          challengeNum = 0;
          v19 = 0LL;
          while ( 1 )
          {
            if ( v19 >= (unsigned int)m_CancellationTokenSource )
              sub_1BCB25C(Instance, v10, v16);
            v20 = *((_DWORD *)&v18->fields._DispLog + v19);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
              byte_4B165D1 = 1;
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
                                          v20,
                                          0LL);
            if ( Instance )
              challengeNum += LODWORD(Instance->fields.masterDataBytes);
            LODWORD(m_CancellationTokenSource) = v18->fields.m_CancellationTokenSource;
            if ( (__int64)++v19 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1BCB254(Instance, v10);
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
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
  if ( challengeNum >= v23 )
    return v23;
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
  __int64 v12; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v14; // x19
  unsigned __int64 v15; // x26
  int32_t v16; // w22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v18; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1B37A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B37A = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
          v14 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            return 0;
          v8 = 0;
          v15 = 0LL;
          while ( 1 )
          {
            if ( v15 >= (unsigned int)m_CancellationTokenSource )
              sub_1BCB25C(Instance, v10, v12);
            v16 = *((_DWORD *)&v14->fields._DispLog + v15);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
              byte_4B165D1 = 1;
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
                                          v16,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Instance = (DataManager_o *)CondType__IsQuestClear_39516796(v16, -1, 0, v18);
              v8 += (unsigned __int8)Instance & 1;
            }
            LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
            if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
              return v8;
          }
        }
      }
    }
    sub_1BCB254(Instance, v10);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(targetId, -1, 0, v2);
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
  __int64 v16; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v18; // x22
  unsigned __int64 v19; // x26
  int32_t v20; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1B382 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B382 = 1;
  }
  v23 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
          v18 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          ClearNum = 0;
          v19 = 0LL;
          while ( 1 )
          {
            if ( v19 >= (unsigned int)m_CancellationTokenSource )
              sub_1BCB25C(Instance, v10, v16);
            v20 = *((_DWORD *)&v18->fields._DispLog + v19);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B165D1 )
            {
              sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
              byte_4B165D1 = 1;
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
                                          v20,
                                          0LL);
            if ( Instance )
            {
              Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += (int)Instance;
            }
            LODWORD(m_CancellationTokenSource) = v18->fields.m_CancellationTokenSource;
            if ( (__int64)++v19 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1BCB254(Instance, v10);
  }
  v9 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
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
  if ( ClearNum >= v23 )
    return v23;
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

  if ( (byte_4B1B352 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B352 = 1;
  }
  v9 = CondType_TypeInfo;
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v9);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
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
    sub_1BCB254(p_image, v10);
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
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  System_Int32_array *v26; // x22
  unsigned __int64 v27; // x24
  int32_t v28; // w23
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1B387 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&groupId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    byte_4B1B387 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        CacheByTypeGroup,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
      v18 = 0;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v30,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
        if ( !v19 )
          break;
        if ( !v30.fields._current )
          sub_1BCB254(v19, v20);
        klass = (int32_t)v30.fields._current[1].klass;
        if ( klass != questId )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v18 += CondType__IsQuestClear_39516796(klass, -1, isCheckResetFlag, v21);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
      return v18;
    }
    return 0;
  }
  Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)MasterData_object, groupId, 2, 0LL);
  if ( !Instance )
LABEL_30:
    sub_1BCB254(Instance, v15);
  v25 = *(_QWORD *)&Instance->max_length;
  v26 = Instance;
  if ( (int)v25 < 1 )
    return 0;
  v18 = 0;
  v27 = 0LL;
  do
  {
    if ( v27 >= (unsigned int)v25 )
      sub_1BCB25C(Instance, v15, v23);
    v28 = v26->m_Items[v27 + 1];
    if ( v28 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestClear_39516796(v28, -1, isCheckResetFlag, v24);
      v18 += (unsigned __int8)Instance & 1;
    }
    LODWORD(v25) = v26->max_length;
    ++v27;
  }
  while ( (__int64)v27 < (int)v25 );
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

  if ( (byte_4B1B38A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B38A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v9);
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
  __int64 v10; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v12; // x21
  unsigned int v13; // w23
  int32_t v14; // w22
  EventRaidEntity_o *v15; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4B1B342 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B342 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = (TotalEventRaidMaster_o *)Instance;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCB25C(Instance, v8, v10);
      v15 = EventRaidEntityArray->m_Items[v13];
      if ( !v15 || !v12 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v12, &entity, targetId, v15->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v15->fields.maxHp )
          ++v14;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v13 >= max_length )
        return v14;
    }
LABEL_20:
    sub_1BCB254(Instance, v8);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4B1B3DE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1B3DE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v5);
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

  if ( (byte_4B1B362 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B362 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1B3B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
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
  __int64 v10; // x2
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  __int64 v13; // x22
  int32_t v14; // w20
  ShopGroupEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B3AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3AA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v9->max_length;
      if ( max_length >= 1 )
      {
        v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v13 = 0LL;
        v14 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= max_length )
            sub_1BCB25C(Instance, v7, v10);
          v15 = v9->m_Items[v13];
          if ( !v15 || !v12 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v12,
                                       &entity,
                                       v15->fields.shopId,
                                       (const MethodInfo_32C7E4C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v14 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v9->max_length;
          if ( (int)++v13 >= max_length )
            return v14;
        }
LABEL_22:
        sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B38C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    byte_4B1B38C = 1;
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

  if ( (byte_4B1B38E & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B38E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
      byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B38D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserSuperBossMaster___, *(_QWORD *)&bossId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B38D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_15:
    sub_1BCB254(Instance, v8);
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

  if ( (byte_4B1B3B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B1B3B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v4);
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

  if ( (byte_4B1B380 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B380 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_17:
    sub_1BCB254(Instance, v9);
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
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v15, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4B1B37D & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1B37D = 1;
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

  if ( (byte_4B1B37E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B37E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1BCB254(Instance, v8);
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

  if ( (byte_4B1B37F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B37F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1BCB254(Instance, v8);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CondType_c *v10; // x8
  Il2CppObject *v11; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4B1B33A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, v1);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B33A = 1;
  }
  v4 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v4 = CondType_TypeInfo;
  }
  if ( !v4->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v10 = CondType_TypeInfo;
    v11 = MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v10 = CondType_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->uQuestMst, (int32_t)v11, v8, v9);
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

  if ( (byte_4B1B401 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventTradeMaster___, *(_QWORD *)&condNum);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    byte_4B1B401 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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

  if ( (byte_4B1B402 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&condNum);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B402 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__GetLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0LL);
  if ( !LimitedMissionList )
    return (char)LimitedMissionList;
  if ( LimitedMissionList->fields._size < 1 )
  {
    LOBYTE(LimitedMissionList) = 0;
    return (char)LimitedMissionList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0LL )
  {
LABEL_16:
    sub_1BCB254(Instance, v11);
  }
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


bool __fastcall CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1B405 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, time);
    byte_4B1B405 = 1;
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

  if ( (byte_4B1B3BE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___, count);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4B1B3AD & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1B3AD = 1;
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

  if ( (byte_4B1B3FB & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    byte_4B1B3FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    sub_1BCB254(0LL, v6);
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
  __int64 v14; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v16; // x21
  unsigned __int64 v17; // x26
  int32_t v18; // w25
  int32_t v19; // w23
  int32_t v20; // w24

  if ( (byte_4B1B3C9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B3C9 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BCB254(Instance, v11);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v16 = MasterData_object;
  v17 = 0LL;
  v18 = 0;
  if ( isWin )
    v19 = 128;
  else
    v19 = 256;
  do
  {
    if ( v17 >= (unsigned int)m_CancellationTokenSource )
      sub_1BCB25C(MasterData_object, v11, v14);
    v20 = *((_DWORD *)&v12->fields._DispLog + v17);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
      byte_4B165D1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v16 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v16,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v20,
                                               0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v19,
                                                 0LL);
      v18 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v18 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    ++v17;
  }
  while ( (__int64)v17 < (int)m_CancellationTokenSource );
  return v18 >= val;
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
  __int64 v17; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v19; // x22
  unsigned __int64 v20; // x26
  int32_t v21; // w27
  int32_t v22; // w24
  int32_t v23; // w25

  if ( (byte_4B1B3C8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int___, *(_QWORD *)&val);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1B3C8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_2FE7858 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_34:
    sub_1BCB254(Instance, v14);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v15->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
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
        sub_1BCB25C(MasterData_object, v14, v17);
      v23 = *((_DWORD *)&v15->fields._DispLog + v20);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v14);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_34;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                 v19,
                                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                                 v23,
                                                 0LL);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v22,
                                                   0LL);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
          ++v21;
        else
          v21 = 0;
      }
      else
      {
        v21 = 0;
      }
      if ( isBelow )
      {
        if ( v21 > val )
          return 0;
      }
      else if ( v21 >= val )
      {
        return 1;
      }
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      ++v20;
    }
    while ( (__int64)v20 < (int)m_CancellationTokenSource );
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
  __int64 v14; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v16; // x21
  unsigned __int64 v17; // x26
  int32_t v18; // w25
  int32_t v19; // w23
  int32_t v20; // w24

  if ( (byte_4B1B3C7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&val);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B3C7 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BCB254(Instance, v11);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v16 = MasterData_object;
  v17 = 0LL;
  v18 = 0;
  if ( isWin )
    v19 = 128;
  else
    v19 = 256;
  do
  {
    if ( v17 >= (unsigned int)m_CancellationTokenSource )
      sub_1BCB25C(MasterData_object, v11, v14);
    v20 = *((_DWORD *)&v12->fields._DispLog + v17);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
      byte_4B165D1 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v16 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v16,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v20,
                                               0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v19,
                                                 0LL);
      v18 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v18 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
    ++v17;
  }
  while ( (__int64)v17 < (int)m_CancellationTokenSource );
  return v18 >= val;
}


bool __fastcall CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  if ( (byte_4B1B403 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1B403 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) < time;
}


bool __fastcall CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B1B404 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, time);
    byte_4B1B404 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4B1B3C5 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, value);
    byte_4B1B3C5 = 1;
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

  if ( (byte_4B1B3C4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, *(_QWORD *)&kindNum);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B3C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
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

  if ( (byte_4B1B3DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, *(_QWORD *)&giftId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3DA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v9);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsClassBoardSquareAllReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  ClassBoardSquareEntity_array *AllEntity; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  int32_t v14; // w0
  CondType___c_c *v15; // x8
  int32_t v16; // w20
  System_Func_object__bool__o *_9__198_0; // x21
  Il2CppObject *v18; // x22
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B1B3EE & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___, v5);
    sub_1BCAFF8(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_CondType___c__IsClassBoardSquareAllReleased_b__198_0__, v7);
    sub_1BCAFF8(&CondType___c_TypeInfo, v8);
    byte_4B1B3EE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v10);
  AllEntity = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, targetId, 0LL);
  if ( AllEntity )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)AllEntity;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v14 = CondType__CountClassBoardSquareReleased(targetId, v12);
    v15 = CondType___c_TypeInfo;
    v16 = v14;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v15 = CondType___c_TypeInfo;
    }
    _9__198_0 = (System_Func_object__bool__o *)v15->static_fields->__9__198_0;
    if ( !_9__198_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CondType___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__198_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__198_0,
        v18,
        Method_CondType___c__IsClassBoardSquareAllReleased_b__198_0__,
        0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__198_0 = (struct System_Func_ClassBoardSquareEntity__bool__o *)_9__198_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__198_0, (int32_t)_9__198_0, v20, v21);
    }
    LOBYTE(AllEntity) = v16 == System_Linq_Enumerable__Count_object__50562856(
                                 v13,
                                 (System_Func_TSource__bool__o *)_9__198_0,
                                 (const MethodInfo_3038728 *)Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
  }
  return (char)AllEntity;
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
  if ( (byte_4B1B400 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, phase);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B400 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, phase);
    byte_4B165D1 = 1;
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

  if ( (byte_4B1B3BB & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    byte_4B1B3BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
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
  return CondType__IsCommandCodeGet_39580672(userIdNumber, commandCodeId, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCommandCodeGet_39580672(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B3BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, *(_QWORD *)&commandCodeId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3BC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B3C0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B3C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4B1B3F1 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetCount);
    byte_4B1B3F1 = 1;
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
  if ( (byte_4B1B3F5 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetFriendShipRank);
    byte_4B1B3F5 = 1;
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
  if ( (byte_4B1B3EF & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetLevel);
    byte_4B1B3EF = 1;
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
  if ( (byte_4B1B3F3 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetSkillLevel);
    byte_4B1B3F3 = 1;
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

  if ( (byte_4B1B3EC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    byte_4B1B3EC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_15:
    sub_1BCB254(Master_object, v6);
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
  System_Func_object__bool__o *_9__226_0; // x23
  Il2CppObject *v18; // x24
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t ReachedWave; // w0

  if ( (byte_4B1B407 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_QuestPhaseEntity___, *(_QWORD *)&num);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&System_Func_QuestPhaseEntity__bool__TypeInfo, v10);
    sub_1BCAFF8(&Method_CondType___c__IsCompleteHighestWaveValue_b__226_0__, v11);
    sub_1BCAFF8(&CondType___c_TypeInfo, v12);
    byte_4B1B407 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  _9__226_0 = (System_Func_object__bool__o *)v16->static_fields->__9__226_0;
  if ( !_9__226_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CondType___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__226_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__226_0, v18, Method_CondType___c__IsCompleteHighestWaveValue_b__226_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__226_0 = (struct System_Func_QuestPhaseEntity__bool__o *)_9__226_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__226_0, (int32_t)_9__226_0, v20, v21);
  }
  if ( !BasicHelper__Any_object__50347976(
          (System_Object_array *)List,
          (System_Func_T__bool__o *)_9__226_0,
          (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_QuestPhaseEntity___) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1BCB254(Master_object, v14);
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

  if ( (byte_4B1B3FC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserGameCommonMaster___, *(_QWORD *)&num);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B3FC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    sub_1BCB254(v11, v9);
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
  int64_t Time_40542184; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x0.8

  if ( (byte_4B1B3E0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_DateTime_TypeInfo, *(_QWORD *)&condNum);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B1B3E0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v9.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_40542184 = NetworkManager__getTime_40542184(v9, 0LL);
  dateData = NetworkManager__getDateTime_40542964(Time_40542184 - 3600 * condNum, 0LL).fields._dateData;
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

  if ( (byte_4B1B398 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B398 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v8);
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

  if ( (byte_4B1B3F8 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1B3F8 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1BCB254(Instance, v19);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    EntityListFromDay,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v21 = 0LL;
  for ( i = v31; ; v21 += (__int64)i.fields._current[1].monitor )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !i.fields._current )
      sub_1BCB254(v22, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
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
  __int64 v17; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v19; // x25
  int v20; // w28
  __int64 v21; // x27
  __int64 v22; // x26
  EventRaidEntity_o *v23; // x29
  float v24; // s0
  CondType_c *v25; // x0
  float v26; // s1
  bool v27; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1B3F9 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B1B3F9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1BCB254(Instance, v15);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v22 = 0LL;
    v21 = 0LL;
    if ( isRate )
    {
LABEL_17:
      v24 = 0.0;
      if ( v21 >= 1 && v22 >= 1 )
      {
        v25 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v25 = CondType_TypeInfo;
        }
        v24 = (float)((float)v22 / (float)v21) * (float)v25->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v26 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          v27 = v24 < v26;
          if ( isIncludingEquals )
            return !v27;
          return !v27;
        }
        return v24 == v26;
      }
      if ( isIncludingEquals )
        return v24 <= v26;
      else
        return v24 < v26;
    }
  }
  else
  {
    v19 = (TotalEventRaidMaster_o *)Instance;
    v20 = 0;
    v21 = 0LL;
    v22 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1BCB25C(Instance, v15, v17);
      v23 = EventRaidEntityArrayFromEventId->m_Items[v20];
      if ( !v23 || !v19 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v19, &entity, eventId, v23->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
        v21 += v23->fields.maxHp;
        v22 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v20;
    }
    while ( v20 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      v27 = v22 < num;
      if ( isIncludingEquals )
        return !v27;
      return !v27;
    }
    return v22 == num;
  }
  if ( isIncludingEquals )
    return v22 <= num;
  else
    return v22 < num;
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

  if ( (byte_4B1B3B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, *(_QWORD *)&phase);
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.context;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v14, 0LL);
      }
LABEL_13:
      sub_1BCB254(Instance, v9);
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
  bool IsQuestClear_39516796; // w8
  int64_t updatedAt; // x20
  int64_t Time_40542184; // x20
  System_DateTime_o v17; // 0:x0.8

  if ( (byte_4B1B3FD & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, elapsedTime);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B1B3FD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, elapsedTime);
    byte_4B165D1 = 1;
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
    sub_1BCB254(0LL, v9);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v7, questId, 0LL);
  if ( EntityFromId )
  {
    v12 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_39516796 = CondType__IsQuestClear_39516796(questId, -1, 0, v11);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_39516796 )
    {
      updatedAt = v12->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v17.fields._dateData = NetworkManager__getServerDateTime_40543292(updatedAt, 0LL).fields._dateData;
      Time_40542184 = NetworkManager__getTime_40542184(v17, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_40542184 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsElapsedTimeAfterSvtGet(int32_t svtId, int64_t elapsedTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B3FE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___, elapsedTime);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B1B3FE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         svtId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0LL);
    if ( entity )
      return (char *)Master_object - (char *)entity[1].monitor >= elapsedTime;
LABEL_12:
    sub_1BCB254(Master_object, v9);
  }
  return 0;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1B3B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestDateRangeMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B3B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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
  if ( (byte_4B1B3D4 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_4B1B3D4 = 1;
  }
  if ( !v4 )
    sub_1BCB254(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCB25C(v6, *(_QWORD *)&targetNum, method);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsEquipWithTargetCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4B1B3AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&costumeId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    byte_4B1B3AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v7);
  return UserServantMaster__IsEquipCostume((UserServantMaster_o *)Master_object, svtId, costumeId, 0LL);
}


bool __fastcall CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B1B36B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B36B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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

  if ( (byte_4B1B39C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B39C = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B39B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B39B = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_13:
      sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B39D & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&rate);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B39D = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B39E & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&rank);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B39E = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B3EB & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condNum);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMissionGroupMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__, v10);
    byte_4B1B3EB = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v12);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      EntityList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v16) )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v15 )
        break;
      if ( !v19.fields._current )
        sub_1BCB254(v15, v16);
      klass_high = HIDWORD(v19.fields._current[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
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

  if ( (byte_4B1B394 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B394 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B393 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventPointMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B393 = 1;
  }
  v7 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v7->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v10);
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
  __int64 v13; // x22
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v17; // x23
  const MethodInfo *v18; // x3
  int32_t v19; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B3A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_FindIndex_int___, *(_QWORD *)&termId);
    sub_1BCAFF8(&CondType_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v8);
    sub_1BCAFF8(&System_Predicate_int__TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__, v11);
    sub_1BCAFF8(&CondType___c__DisplayClass115_0_TypeInfo, v12);
    byte_4B1B3A3 = 1;
  }
  goalTime = 0LL;
  v13 = sub_1BCB244(CondType___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v15);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v17 = (System_Predicate_int__o *)sub_1BCB244(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    0LL);
  v19 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_3117B74 *)Method_System_Array_FindIndex_int___)
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

  if ( (byte_4B1B3A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&groupId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventRaceMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3A1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B3A4 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&termId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventScriptMaster___, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B3A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B3A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flagId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B3A2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v8);
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
  if ( (byte_4B1B3B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventStatusMaster___, flagId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3B1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventStatusMaster___);
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
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B3E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventMaster___, *(_QWORD *)&bitNum);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B1B3E3 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
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
    sub_1BCB254(p_image, v7);
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

  if ( (byte_4B1B3D9 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__,
      *(_QWORD *)&overWriteTime);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__, v6);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1B3D9 = 1;
  }
  dateTime.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_42;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getServerTime(0LL);
  if ( !datalist )
LABEL_42:
    sub_1BCB254(Instance, v14);
  v16 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v17);
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
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
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
      dateData = NetworkManager__getDateTime_40542964(v32, 0LL).fields._dateData;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v45.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v45, 0LL);
      v46.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v46, 0LL);
      v47.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v47, 0LL);
      v48.fields._dateData = (uint64_t)&dateTime;
      System_DateTime___ctor_63835372(v48, Year, Month, Day, hour, v19, v20, 0LL);
      if ( *(_QWORD *)(v31 + 88) <= v16 )
      {
        v36 = dateTime.fields._dateData;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v49.fields._dateData = v36;
        if ( v16 <= NetworkManager__getTime_40542184(v49, 0LL) )
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
    v40 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v12; // x19
  void *Master_object; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_T__o *ExchangeSvtCampaign; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x20

  if ( (byte_4B1B3F7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_EventCampaignEntity___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventCampaignMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&System_Func_EventCampaignEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass207_0__IsExchangeSvtBuff_b__0__, v10);
    sub_1BCAFF8(&CondType___c__DisplayClass207_0_TypeInfo, v11);
    byte_4B1B3F7 = 1;
  }
  v12 = sub_1BCB244(CondType___c__DisplayClass207_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_20;
  *(_DWORD *)(v12 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ExchangeSvtCampaign = (System_Collections_Generic_List_T__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                  (EventCampaignMaster_o *)Master_object,
                                                                  0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExchangeSvtCampaign, 0LL) )
  {
    v16 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v12,
      Method_CondType___c__DisplayClass207_0__IsExchangeSvtBuff_b__0__,
      0LL);
    if ( BasicHelper__Any_object_(
           ExchangeSvtCampaign,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_3003F1C *)Method_BasicHelper_Any_EventCampaignEntity___) )
    {
      goto LABEL_23;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_20;
  if ( !v17 )
    goto LABEL_20;
  Master_object = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)v17, 0, *((_QWORD *)Master_object + 14), 0LL);
  if ( !Master_object )
    goto LABEL_20;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Master_object,
         *(_DWORD *)(v12 + 16),
         (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
LABEL_23:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Master_object )
      return UserExchangeSvtMaster__GetExchangeSvtId(
               (UserExchangeSvtMaster_o *)Master_object,
               *(_DWORD *)(v12 + 16),
               0LL) != 0;
LABEL_20:
    sub_1BCB254(Master_object, v14);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4B1B344 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4B1B344 = 1;
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
  int32_t Value_41064760; // w0

  if ( (byte_4B1B3E1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_8195/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v4);
    byte_4B1B3E1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v6);
  Value_41064760 = ConstantMaster__GetValue_41064760(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8195/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_41064760 != 0 && Value_41064760 == targetId;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B378 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B378 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v6);
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

  if ( (byte_4B1B376 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMissionMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B376 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  condId,
                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
      sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B377 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B377 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v6);
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

  if ( (byte_4B1B375 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B375 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_14:
    sub_1BCB254(Instance, v8);
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

  if ( (byte_4B1B3BD & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B3BD = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B39F & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B39F = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B3A0 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&eventTerm);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaceMaster___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&StringLiteral_10867/*"RACE_TARGET_GOAL_RANK"*/, v9);
    byte_4B1B3A0 = 1;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10867/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_object )
LABEL_14:
      sub_1BCB254(Instance, v15);
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
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x20
  __int64 v11; // x8

  if ( (byte_4B1B38F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v3);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B38F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v8 = Instance;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
        sub_1BCB25C(Instance, v7, v9);
      v11 = *(_QWORD *)&v8->fields._DispLog;
      if ( v11 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v11 + 20),
                                        0LL);
          if ( Instance )
            return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
        }
      }
    }
LABEL_20:
    sub_1BCB254(Instance, v7);
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
  if ( (byte_4B1B383 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4B1B383 = 1;
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
bool __fastcall CondType__IsNotQuestGroupClear_39579208(int32_t targetId, int32_t condValue, const MethodInfo *method)
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
  if ( (byte_4B1B384 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B384 = 1;
  }
  sameGroupQuestIds = 0LL;
  entity = 0LL;
  if ( condValue <= 1 )
    v7 = 1;
  else
    v7 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_32CC904 *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B390 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B390 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1BCB254(Instance, v7);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsNotShopGroupLimit(int32_t shopGroupId, int32_t limitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *TargetEntityList; // x20
  void *monitor; // x8
  int v13; // w24
  UserShopMaster_o *v14; // x21
  int v15; // w26
  int32_t v16; // w25
  __int64 v17; // x8
  int32_t v18; // w23
  __int64 v19; // x2
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1B3B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ShopGroupMaster___, *(_QWORD *)&limitNum);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserShopMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B1B3B0 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           Master_object,
                                                           shopGroupId,
                                                           0LL);
  if ( BasicHelper__IsNullOrEmpty(TargetEntityList, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !TargetEntityList )
LABEL_29:
    sub_1BCB254(Master_object, v9);
  monitor = TargetEntityList[1].monitor;
  v13 = (_DWORD)monitor - 1;
  if ( (int)monitor >= 1 )
  {
    v14 = (UserShopMaster_o *)Master_object;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *((_QWORD *)&TargetEntityList[2].klass + v15);
      if ( !v17 )
        goto LABEL_29;
      v18 = *(_DWORD *)(v17 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
        byte_4B165D1 = 1;
      }
      Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_29;
      Master_object = (ShopGroupMaster_o *)UserShopMaster__TryGetEntity(
                                             v14,
                                             &entity,
                                             (int64_t)Master_object[2].fields.list[1].monitor,
                                             v18,
                                             0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_29;
        v16 += entity->fields.num;
      }
      if ( v13 == v15 )
        return v16 < limitNum;
      if ( (unsigned int)++v15 >= LODWORD(TargetEntityList[1].monitor) )
        sub_1BCB25C(Master_object, v9, v19);
    }
  }
  v16 = 0;
  return v16 < limitNum;
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  bool v9; // w23
  UserShopMaster_o *v10; // x20
  unsigned __int64 v11; // x24
  int32_t v12; // w22

  if ( (byte_4B1B391 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B391 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  v8 = *(_QWORD *)&values->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = (UserShopMaster_o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1BCB25C(Instance, v6, v7);
      v12 = values->m_Items[v11 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v10 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v10,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v12,
                                    0LL);
      if ( !Instance )
        break;
      if ( HIDWORD(Instance->fields.m_CancellationTokenSource) )
      {
        LODWORD(v8) = values->max_length;
        v9 = (__int64)++v11 < (int)v8;
        if ( (__int64)v11 < (int)v8 )
          continue;
      }
      return v9;
    }
LABEL_19:
    sub_1BCB254(Instance, v6);
  }
  return v9;
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
  NetworkManager_c *v22; // x0
  int64_t userIdNumber; // x21
  bool v24; // w2
  int32_t v25; // w0
  int32_t v26; // w1
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
  bool v40; // w2
  int32_t v41; // w0
  int32_t v42; // w1
  bool IsPurchaseShop; // w0
  CondType_c *v44; // x0
  UserQuestMaster_o *v45; // x21
  int32_t ClearCountsFromId; // w0
  CondType_c *v47; // x0
  UserQuestMaster_o *v48; // x21
  int32_t v49; // w0
  CondType_c *v50; // x0
  UserQuestMaster_o *v51; // x21
  bool v52; // zf
  CondType_c *v53; // x0
  UserQuestMaster_o *v54; // x21
  bool v55; // cc
  NetworkManager_c *v56; // x0
  int64_t v57; // x21
  NetworkManager_c *v58; // x0
  int64_t v59; // x21
  int64_t EventPointNoGroup; // x0
  int32_t v61; // w1
  int32_t v62; // w2
  bool v63; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v65; // x21
  int64_t Point; // x0
  Il2CppObject *v67; // x21
  bool v68; // cc
  Il2CppObject *v69; // x21
  Il2CppObject *v70; // x21
  Il2CppObject *v71; // x21
  Il2CppObject *v72; // x21
  __int64 m_CancellationTokenSource_high; // x8
  CondType_c *v74; // x0
  Il2CppObject *v75; // x21
  Il2CppObject *v76; // x21
  bool v77; // w2
  int32_t v78; // w0
  int32_t v79; // w1
  bool v80; // w2
  int32_t v81; // w0
  int32_t v82; // w1
  bool v83; // w3
  bool v84; // w2
  int32_t v85; // w0
  int32_t v86; // w1
  CondType_c *v87; // x0
  int32_t v88; // w2
  bool v89; // w4
  int32_t v90; // w0
  int32_t v91; // w1
  bool v92; // w3
  int32_t v93; // w2
  bool v94; // w4
  int32_t v95; // w0
  int32_t v96; // w1
  bool v97; // w3
  int32_t v98; // w2
  CondType_c *v99; // x0
  BattleVoicePlayCondArgs_o *v100; // x0
  int32_t v101; // w1
  int32_t v102; // w2
  bool v103; // w3
  int32_t v104; // w2
  bool v105; // w2
  int32_t v106; // w0
  int64_t v107; // x1
  int32_t v108; // w2
  Il2CppObject *Master_object; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8
  UserGameEntity_o *v112; // x0
  int32_t v113; // w8
  UserGameEntity_o *v114; // x0
  int32_t v115; // w8
  int32_t v116; // w2
  bool v117; // w2
  BattleVoicePlayCondArgs_o *v118; // x0
  int32_t v119; // w1
  int64_t v121; // [xsp+0h] [xbp-50h] BYREF
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B1B33B & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventPointMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v16);
    sub_1BCAFF8(&DataManager_TypeInfo, v17);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B1B33B = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0LL;
  v121 = 0LL;
  startedAt = 0LL;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4B165D1 = 1;
      }
      v22 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v22 = NetworkManager_TypeInfo;
      }
      userIdNumber = v22->static_fields->userIdNumber;
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
      IsQuestClear = CondType__IsServantLevel_39514000(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 1;
      goto LABEL_384;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v24 = 1;
      v25 = targetId;
      v26 = condValue;
      goto LABEL_368;
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
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !UserQuestMaster )
        goto LABEL_821;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                                UserQuestMaster,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0LL);
      goto LABEL_588;
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
      goto LABEL_699;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v40 = 1;
      v41 = targetId;
      v42 = condValue;
      goto LABEL_251;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 42:
      v44 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v45 = CondType__GetUserQuestMaster((const MethodInfo *)v44);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v45 )
        goto LABEL_821;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                            v45,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0LL);
      goto LABEL_142;
    case 43:
      v47 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = CondType__GetUserQuestMaster((const MethodInfo *)v47);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v48 )
        goto LABEL_821;
      v49 = UserQuestMaster__getChallengeCountsFromId(
              v48,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0LL);
      goto LABEL_153;
    case 44:
      v50 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v51 = CondType__GetUserQuestMaster((const MethodInfo *)v50);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_821;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(
                            v51,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0LL);
LABEL_142:
      v52 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_749;
    case 45:
      v53 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = CondType__GetUserQuestMaster((const MethodInfo *)v53);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_821;
      v49 = UserQuestMaster__getClearCountsFromId(
              v54,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0LL);
LABEL_153:
      v55 = v49 <= (int)condValue;
      goto LABEL_816;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4B165D1 = 1;
      }
      v56 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v56 = NetworkManager_TypeInfo;
      }
      v57 = v56->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v57, targetId, condValue, -1, 0, method);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4B165D1 = 1;
      }
      v58 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v58 = NetworkManager_TypeInfo;
      }
      v59 = v58->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v59, targetId, condValue, -1, 0, method);
      goto LABEL_807;
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
      IsPurchaseShop = CondType__IsEventNormaPointClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
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
      IsQuestClear = CondType__IsQuestClear_39516796(targetId, condValue, 0, (const MethodInfo *)isCollection);
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
      goto LABEL_303;
    case 69:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsVoicePlayCount(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 70:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEquipWithTargetCostume(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 71:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__checkCondTypeRaidGroupAlive(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 72:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = targetId;
      v42 = condValue;
      v40 = 0;
LABEL_251:
      IsPurchaseShop = CondType__IsQuestClear_39516796(v41, v42, v40, (const MethodInfo *)isCollection);
      goto LABEL_807;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v61 = targetId;
      v62 = condValue;
      v63 = 0;
      goto LABEL_654;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_821;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId / 100,
                            targetId,
                            0LL);
      goto LABEL_303;
    case 84:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v65 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_821;
      Point = UserEventPointMaster__GetPoint(
                (UserEventPointMaster_o *)v65,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId / 100,
                targetId,
                0LL);
      goto LABEL_313;
    case 85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v67 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v67 )
        goto LABEL_821;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v67,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            -1,
                            0LL);
LABEL_303:
      v68 = EventPointNoGroup < condValue;
      goto LABEL_589;
    case 86:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v69 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v69 )
        goto LABEL_821;
      Point = UserEventPointMaster__GetEventPointTotal(
                (UserEventPointMaster_o *)v69,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId,
                -1,
                0LL);
LABEL_313:
      v55 = Point <= condValue;
      goto LABEL_816;
    case 87:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v70 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v70 )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v70,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
      v68 = SHIDWORD(Instance->fields.m_CancellationTokenSource) < condValue;
      goto LABEL_589;
    case 88:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v71 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v71 )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v71,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
      v55 = SHIDWORD(Instance->fields.m_CancellationTokenSource) <= condValue;
      goto LABEL_816;
    case 89:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v72 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v72 )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v72,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
      m_CancellationTokenSource_high = *(int *)&Instance->fields._DispLog;
      goto LABEL_748;
    case 90:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 93:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v74 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v74);
      return IsQuestClear & 1;
    case 96:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 97:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 98:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v24 = 1;
      v25 = targetId;
      v26 = condValue;
      goto LABEL_368;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v25 = targetId;
      v26 = condValue;
      v24 = 0;
LABEL_368:
      IsQuestClear = CondType__IsServantFriendship(v25, v26, v24, (const MethodInfo *)isCollection);
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
      IsPurchaseShop = CondType__IsRouteSelect(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLimit_39514204(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v21 = 2;
LABEL_384:
      IsQuestClear = CondType__IsServantLimit_39514204(targetId, condValue, v21, (const MethodInfo *)isCollection);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v75 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v75 )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v75,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
      m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_748;
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
      IsPurchaseShop = CondType__IsUserEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 123:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_821;
      v76 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v76 )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v76,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
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
      v77 = 1;
      v78 = targetId;
      v79 = condValue;
      goto LABEL_447;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v78 = targetId;
      v79 = condValue;
      v77 = 0;
LABEL_447:
      IsQuestClear = CondType__IsBattleLineReusltCount(v78, v79, v77, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      goto LABEL_454;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v81 = targetId;
      v82 = condValue;
      v80 = 0;
LABEL_454:
      v83 = 0;
      goto LABEL_461;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 1;
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      goto LABEL_461;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      v80 = 0;
LABEL_461:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(
                       v81,
                       v82,
                       v80,
                       v83,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 134:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
      v85 = targetId;
      v86 = condValue;
      goto LABEL_468;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = targetId;
      v86 = condValue;
      v84 = 0;
LABEL_468:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v85, v86, v84, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
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
      goto LABEL_588;
    case 143:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v87 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v87);
      return IsQuestClear & 1;
    case 145:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 146:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserShopStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
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
      IsPurchaseShop = CondType__IsBoxGachaGiftReplaced(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
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
      goto LABEL_588;
    case 162:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_821;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_588;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_821;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
LABEL_588:
      v68 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_589;
    case 168:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 174:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_588;
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
      goto LABEL_588;
    case 179:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 180:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
    case 181:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
    case 182:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
    case 183:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
    case 184:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
    case 185:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_807;
    case 187:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_588;
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
      v88 = 1;
      goto LABEL_613;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v88 = 2;
LABEL_613:
      v89 = 1;
      v90 = targetId;
      v91 = condValue;
      v92 = 0;
      goto LABEL_635;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 1;
      goto LABEL_620;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 2;
LABEL_620:
      v94 = 1;
      v95 = targetId;
      v96 = condValue;
      v97 = 0;
      goto LABEL_650;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v88 = 1;
      goto LABEL_627;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v88 = 2;
LABEL_627:
      v92 = 1;
      v89 = 1;
      v90 = targetId;
      v91 = condValue;
      goto LABEL_635;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v88 = 2;
      goto LABEL_634;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v88 = 1;
LABEL_634:
      v92 = 1;
      v90 = targetId;
      v91 = condValue;
      v89 = 0;
LABEL_635:
      IsQuestClear = CondType__IsDeadRaidDay(v90, v91, v88, v92, v89, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 1;
      goto LABEL_642;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 2;
LABEL_642:
      v97 = 1;
      v94 = 1;
      v95 = targetId;
      v96 = condValue;
      goto LABEL_650;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 2;
      goto LABEL_649;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v93 = 1;
LABEL_649:
      v97 = 1;
      v95 = targetId;
      v96 = condValue;
      v94 = 0;
LABEL_650:
      IsQuestClear = CondType__IsDeadRaidGroup(v95, v96, v93, v97, v94, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v63 = 1;
      v61 = targetId;
      v62 = condValue;
LABEL_654:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v61, v62, v63, (const MethodInfo *)battleCondArgs);
      goto LABEL_807;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v98 = 1;
      goto LABEL_661;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v98 = 2;
LABEL_661:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v98, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v99 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = ((_DWORD)condValue == 0) ^ CondType__IsAuthTDAccelerate((const MethodInfo *)v99);
      return IsQuestClear & 1;
    case 209:
      if ( !battleCondArgs )
        goto LABEL_792;
      v100 = battleCondArgs;
      v101 = targetId;
      v102 = condValue;
      v103 = 0;
      goto LABEL_669;
    case 210:
      if ( !battleCondArgs )
        goto LABEL_792;
      v103 = 1;
      v100 = battleCondArgs;
      v101 = targetId;
      v102 = condValue;
LABEL_669:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v100, v101, v102, v103, 0LL);
      return IsQuestClear & 1;
    case 211:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v104 = 1;
      goto LABEL_679;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v104 = 2;
LABEL_679:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(
                       targetId,
                       condValue,
                       v104,
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
      v105 = 1;
      v106 = targetId;
      v107 = condValue;
      goto LABEL_695;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v106 = targetId;
      v107 = condValue;
      v105 = 0;
LABEL_695:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v106, v107, v105, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = targetId;
      v38 = condValue;
LABEL_699:
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
      v108 = 2;
      goto LABEL_709;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v108 = 1;
LABEL_709:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v108, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 229:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_821;
      IsQuestClear = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      return IsQuestClear & 1;
    case 230:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_821;
      v68 = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      goto LABEL_589;
    case 231:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 232:
      if ( !battleCondArgs )
        goto LABEL_792;
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
        goto LABEL_792;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                         battleCondArgs,
                         targetId,
                         0LL);
      goto LABEL_807;
    case 236:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0LL);
      goto LABEL_807;
    case 237:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v31);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_821;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0LL);
      if ( !Instance )
        goto LABEL_821;
      m_CancellationTokenSource_high = SLODWORD(Instance->fields.lookup);
LABEL_748:
      v52 = m_CancellationTokenSource_high == condValue;
LABEL_749:
      IsQuestClear = v52;
      return IsQuestClear & 1;
    case 241:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
LABEL_821:
        sub_1BCB254(Instance, v31);
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
      v68 = lv < targetId;
      goto LABEL_589;
    case 243:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v112 = UserGameMaster__getSelfUserGame(0LL);
      if ( v112 )
        v113 = v112->fields.lv;
      else
        v113 = 0;
      v55 = v113 <= targetId;
LABEL_816:
      IsQuestClear = v55;
      return IsQuestClear & 1;
    case 244:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v114 = UserGameMaster__getSelfUserGame(0LL);
      if ( v114 )
        v115 = v114->fields.lv;
      else
        v115 = 0;
      IsQuestClear = v115 == targetId;
      return IsQuestClear & 1;
    case 245:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v116 = 1;
      goto LABEL_774;
    case 246:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v116 = 2;
LABEL_774:
      IsQuestClear = CondType__IsCompleteHighestWaveValue(targetId, condValue, v116, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 247:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsValidPrivilege(
                       targetId,
                       condValue,
                       &startedAt,
                       &v121,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 248:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsValidPrivilege(
                         targetId,
                         condValue,
                         &v121,
                         &startedAt,
                         (const MethodInfo *)battleCondArgs);
      goto LABEL_807;
    case 249:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 250:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsPurchaseShop = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(battleCondArgs, targetId, 0LL);
      goto LABEL_807;
    case 251:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__IsSelectTreasureDvcCard(battleCondArgs, targetId, 0LL);
      return IsQuestClear & 1;
    case 252:
      if ( !battleCondArgs )
        goto LABEL_792;
      v117 = 1;
      v118 = battleCondArgs;
      v119 = condValue;
      goto LABEL_791;
    case 253:
      if ( battleCondArgs )
      {
        v118 = battleCondArgs;
        v119 = condValue;
        v117 = 0;
LABEL_791:
        IsQuestClear = BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(v118, v119, v117, 0LL);
      }
      else
      {
LABEL_792:
        IsQuestClear = 0;
      }
      break;
    case 254:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 255:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsElapsedTimeAfterQuestClear(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 256:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_807;
    case 258:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v68 = CondType__CountGrandServantSet(targetId, condValue, (const MethodInfo *)condValue) < condValue;
LABEL_589:
      IsQuestClear = !v68;
      return IsQuestClear & 1;
    case 259:
      IsQuestClear = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 0LL);
      return IsQuestClear & 1;
    case 260:
      IsPurchaseShop = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 0LL);
LABEL_807:
      IsQuestClear = !IsPurchaseShop;
      break;
    case 263:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
      break;
    default:
      return IsQuestClear & 1;
  }
  return IsQuestClear & 1;
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
  bool IsQuestClear_39516796; // w0
  NetworkManager_c *v14; // x0
  int64_t v15; // x23
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4B1B33C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B1B33C = 1;
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
      IsQuestClear_39516796 = CondType__IsQuestClear_39516796(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_39516796;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_39516796(
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
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
        byte_4B165D1 = 1;
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
      IsQuestClear_39516796 = CondType__IsQuestPhaseClear(
                                userIdNumber,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                method);
      return !IsQuestClear_39516796;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&targetId);
      byte_4B165D1 = 1;
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

  if ( (byte_4B1B347 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1B347 = 1;
  }
  if ( condType <= 38 )
  {
    v11 = 1;
    switch ( condType )
    {
      case 0:
        return v11;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
        {
          sub_1BCB254(Instance, v20);
        }
        v21 = Instance[4];
        *(Il2CppObject *)&v25.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v25.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v24, 0LL);
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
        result = CondType__IsServantGet_39558428(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantFriendship_39558584(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGroup_39559120(userSvtId, condValue, (const MethodInfo *)userSvtId);
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
  __int64 v18; // x2
  int max_length; // w8
  CondType_c **v20; // x29
  int32_t v21; // w19
  int64_t v22; // x26
  unsigned int v23; // w20
  int32_t v24; // w21
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x27
  EventRaidMaster_o *v27; // x22
  __int64 v28; // x8
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  int64_t v31; // x27
  __int64 v32; // x25
  int v33; // w8
  int32_t v34; // w28
  int32_t v35; // w28
  int32_t ValueInt; // w0
  const MethodInfo *v37; // x4
  CondType_c *v38; // x8
  CondType_c **v39; // x24
  int32_t v40; // w29
  int32_t v42; // [xsp+8h] [xbp-88h]
  int32_t v43; // [xsp+Ch] [xbp-84h]
  QuestReleaseMaster_o *v44; // [xsp+10h] [xbp-80h]
  Il2CppObject *v45; // [xsp+18h] [xbp-78h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B1B3FA & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&num);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_TotalEventRaidMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1B3FA = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_48;
  v42 = num;
  v43 = checkType;
  v14 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v17 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_48:
    sub_1BCB254(Instance, v13);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v44 = (QuestReleaseMaster_o *)v17;
    v20 = &CondType_TypeInfo;
    v21 = eventId;
    v22 = Instance;
    v23 = 0;
    v24 = 0;
    v45 = Master_object;
    while ( 1 )
    {
      if ( v23 >= max_length )
        goto LABEL_49;
      v25 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v23;
      v26 = v25[4];
      if ( !v26 )
        goto LABEL_48;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v25[4], v22, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_48;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     v21,
                     HIDWORD(v26->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v27 = v14;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v14, v21, HIDWORD(v26->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_48;
          v28 = *(_QWORD *)(Instance + 24);
          if ( v28 )
          {
            if ( !(_DWORD)v28 )
              goto LABEL_49;
            if ( !v44 )
              goto LABEL_48;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v44, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_48;
            v30 = *(_QWORD *)(Instance + 24);
            v31 = Instance;
            if ( v30 )
            {
              if ( (int)v30 >= 1 )
              {
                v32 = 0LL;
                while ( (unsigned int)v32 < (unsigned int)v30 )
                {
                  Instance = *(_QWORD *)(v31 + 32 + 8 * v32);
                  if ( !Instance )
                    goto LABEL_48;
                  v33 = *(_DWORD *)(Instance + 20);
                  if ( v33 == 32 )
                  {
                    v35 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    v38 = *v20;
                    v39 = v20;
                    v40 = ValueInt;
                    if ( !v38->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(v38);
                    Instance = CondType__IsQuestGroupClear(0, v35, v40, 0, v37);
                    v20 = v39;
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  else if ( v33 == 1 )
                  {
                    v34 = *(_DWORD *)(Instance + 24);
                    if ( !(*v20)->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(*v20);
                    Instance = CondType__IsQuestClear_39516796(v34, -1, 0, v29);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  LODWORD(v30) = *(_DWORD *)(v31 + 24);
                  if ( (int)++v32 >= (int)v30 )
                    goto LABEL_37;
                }
LABEL_49:
                sub_1BCB25C(Instance, v13, v18);
              }
            }
          }
LABEL_37:
          ++v24;
LABEL_38:
          v14 = v27;
          v21 = eventId;
          Master_object = v45;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_42;
    }
  }
  v24 = 0;
LABEL_42:
  if ( v43 == 2 )
    return v24 <= v42;
  if ( v43 == 1 )
    return v24 >= v42;
  return v24 == v42;
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
  __int64 v25; // x20
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
  const MethodInfo *v45; // x3
  __int64 *v46; // x8
  CondType_CountDelegate_o *v47; // x21
  const MethodInfo *v48; // x2
  int32_t ClearCountsFromIds; // w0
  bool v50; // cc
  int32_t v51; // w23
  __int64 v52; // x24
  __int64 v53; // x25
  int32_t v54; // w22
  int32_t v55; // w19
  System_Func_int__bool__o *v56; // x0
  __int64 *v57; // x8
  System_Func_int__int__o *v58; // x21
  const MethodInfo *v59; // x3
  int32_t v60; // w20
  System_Func_TSource__bool__o *v61; // x21
  CondType_c *v62; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v64; // x0
  UserQuestMaster_o *v65; // x21
  CondType_c *v66; // x0
  UserQuestMaster_o *v67; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v69; // x0
  UserQuestMaster_o *v70; // x21
  int32_t v71; // w0
  CondType_c *v72; // x0
  UserQuestMaster_o *v73; // x21
  CondType_c *v74; // x0
  UserQuestMaster_o *v75; // x21

  if ( (byte_4B1B345 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_CondType_CountExchangeServantMaxLimit__, targetIds);
    sub_1BCAFF8(&Method_CondType_CountServantClassTotalFriendShipUp__, v7);
    sub_1BCAFF8(&Method_CondType_CountServantClassTotalLevelUp__, v8);
    sub_1BCAFF8(&Method_CondType_CountServantClassTotalLimitUp__, v9);
    sub_1BCAFF8(&Method_CondType_CountServantClassTotalSkillLevelUp__, v10);
    sub_1BCAFF8(&Method_CondType_CountServantFriendShipClassNum__, v11);
    sub_1BCAFF8(&Method_CondType_CountServantLevelClassNum__, v12);
    sub_1BCAFF8(&Method_CondType_CountServantLevelIdNum__, v13);
    sub_1BCAFF8(&Method_CondType_CountServantTargetSkillLvClassNum__, v14);
    sub_1BCAFF8(&CondType_TypeInfo, v15);
    sub_1BCAFF8(&CondType_CountDelegate_TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_int____76954672, v17);
    sub_1BCAFF8(&System_Func_int__int__TypeInfo, v18);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v19);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v20);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__, v21);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__, v22);
    sub_1BCAFF8(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__, v23);
    sub_1BCAFF8(&CondType___c__DisplayClass19_0_TypeInfo, v24);
    byte_4B1B345 = 1;
  }
  v25 = sub_1BCB244(CondType___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
LABEL_144:
    sub_1BCB254(IsOpen, v27);
  *(_DWORD *)(v25 + 16) = targetNum;
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
          v51 = 0;
        }
        else
        {
          if ( !(unsigned int)*(_QWORD *)&targetIds->max_length )
            goto LABEL_40;
          v51 = 0;
          v52 = 0LL;
          v53 = (unsigned int)*(_QWORD *)&targetIds->max_length - 1LL;
          while ( 1 )
          {
            v54 = targetIds->m_Items[v52 + 1];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsOpen = (void *)CondType__IsOpen(condType, v54, 0LL, 0, 0LL, v29);
            v51 += (unsigned __int8)IsOpen & 1;
            if ( v53 == v52 )
              break;
            if ( ++v52 >= (unsigned __int64)targetIds->max_length )
              goto LABEL_40;
          }
          targetNum = *(_DWORD *)(v25 + 16);
        }
        v50 = v51 < targetNum;
        return !v50;
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
        v62 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v62);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
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
          targetNum = *(_DWORD *)(v25 + 16);
        }
        result = v39 < targetNum;
        break;
      case 30:
        v64 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v65 = CondType__GetUserQuestMaster((const MethodInfo *)v64);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v65 )
          goto LABEL_144;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                               v65,
                               *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                               targetIds,
                               0LL);
        goto LABEL_30;
      case 42:
        v66 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v67 = CondType__GetUserQuestMaster((const MethodInfo *)v66);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v67 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                                   v67,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0LL);
        return ChallengeCountsFromIds == *(_DWORD *)(v25 + 16);
      case 43:
        v69 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v70 = CondType__GetUserQuestMaster((const MethodInfo *)v69);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v70 )
          goto LABEL_144;
        v71 = UserQuestMaster__getChallengeCountsFromIds(
                v70,
                *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                targetIds,
                0LL);
        return v71 <= *(_DWORD *)(v25 + 16);
      case 44:
        v72 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v73 = CondType__GetUserQuestMaster((const MethodInfo *)v72);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v73 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(
                                   v73,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0LL);
        return ChallengeCountsFromIds == *(_DWORD *)(v25 + 16);
      case 45:
        v74 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v75 = CondType__GetUserQuestMaster((const MethodInfo *)v74);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v27);
          byte_4B165D1 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v75 )
          goto LABEL_144;
        v71 = UserQuestMaster__getClearCountsFromIds(v75, *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL), targetIds, 0LL);
        return v71 <= *(_DWORD *)(v25 + 16);
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
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v56 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
          v57 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v36 = (System_Func_int__int__o *)sub_1BCB244(System_Func_int__int__TypeInfo);
          v37 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v58 = v36;
          System_Func_int__int____ctor(v36, 0LL, *v37, 0LL);
          v60 = *(_DWORD *)(v25 + 16);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v58, targetIds, v60, v59);
        case 190:
          v56 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
          v57 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v56 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
          v57 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v61 = (System_Func_TSource__bool__o *)v56;
          System_Func_int__bool____ctor(v56, (Il2CppObject *)v25, *v57, 0LL);
          return System_Linq_Enumerable__Any_int__50495936(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v61,
                   (const MethodInfo_30281C0 *)Method_System_Linq_Enumerable_Any_int____76954672);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v27);
LABEL_30:
              v50 = ClearCountsFromIds < *(_DWORD *)(v25 + 16);
              return !v50;
            }
            goto LABEL_62;
          }
          v44 = (CondType_CountDelegate_o *)sub_1BCB244(CondType_CountDelegate_TypeInfo);
          v46 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_27:
      v47 = v44;
      CondType_CountDelegate___ctor(v44, 0LL, *v46, v45);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v47, v48);
      goto LABEL_30;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v44 = (CondType_CountDelegate_o *)sub_1BCB244(CondType_CountDelegate_TypeInfo);
        v46 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_27;
      }
LABEL_62:
      if ( (_DWORD)v30 )
      {
        v55 = targetIds->m_Items[1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v33 = condType;
        v34 = v55;
        v32 = 0LL;
        return CondType__IsOpen(v33, v34, v32, 0, 0LL, v29);
      }
LABEL_40:
      sub_1BCB25C(IsOpen, v27, v28);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v28);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_39555392(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4B1B346 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condValues);
    byte_4B1B346 = 1;
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
bool __fastcall CondType__IsOpen_39559776(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4B1B348 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4B1B348 = 1;
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
      result = CondType__IsServantLevel_39560400(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_39560560(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_39558428(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_39560800(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_39559120(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_39561104(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_39561272(userId, condValue, (const MethodInfo *)userId);
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
  if ( (byte_4B1B3BA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22105/*"notMeets"*/, method);
    byte_4B1B3BA = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_62450424((System_String_o *)StringLiteral_22105/*"notMeets"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B3AE & 1) == 0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B1B3AE = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1BCB254(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B199B1 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v4);
      byte_4B199B1 = 1;
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

  if ( (byte_4B1B36D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B36D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseQpShop_39561104(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1B36E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B36E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  return ShopEntity__IsCondType_41984132((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4B1B372 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4B1B372 = 1;
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

  if ( (byte_4B1B370 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1B370 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseStoneShop_39561272(int64_t userId, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1B371 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, *(_QWORD *)&condId);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B371 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v8);
  }
  return ShopEntity__IsCondType_41984132((ShopEntity_o *)Instance, userId, 0LL);
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
  __int64 v15; // x2
  ShopEntity_o *v16; // x21

  if ( (byte_4B1B3A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v9 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
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
                       (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v16 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v16, 0LL) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v16, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v11 == v13 )
            goto LABEL_20;
          if ( ++v13 >= v9->max_length )
            sub_1BCB25C(Instance, v7, v15);
        }
LABEL_22:
        sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B395 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v6);
    byte_4B1B395 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 22, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B169E0 )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v9);
          byte_4B169E0 = 1;
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
        if ( !byte_4B1912A )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v9);
          byte_4B1912A = 1;
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
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !Instance )
            goto LABEL_30;
          QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
          if ( QuestInfo )
            return QuestInfo->fields.dispType == 1;
        }
      }
    }
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1BCB254(Instance, v8);
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

  if ( (byte_4B1B34D & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    byte_4B1B34D = 1;
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
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1BCB254(UserQuestMaster, v15);
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
  bool IsQuestClear_39516796; // w8
  bool result; // w0
  CondType_c *v11; // x0
  __int64 v12; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *Entity; // x0
  int64_t klass; // x20

  if ( (byte_4B1B3E2 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B3E2 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_39516796 = CondType__IsQuestClear_39516796(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_39516796 )
  {
    v11 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
      byte_4B165D1 = 1;
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
    Entity = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Entity )
LABEL_21:
      sub_1BCB254(Entity, v12);
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

  if ( (byte_4B1B381 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condVal);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B1B381 = 1;
  }
  v6 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    sub_1BCB254(v9, v7);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v9->static_fields->userIdNumber, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestClear_39516796(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4B1B34E & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B34E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4B165D1 = 1;
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

  if ( (byte_4B1B354 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&closeQuestid);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B354 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v10);
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
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array *v12; // x19
  bool v13; // w25
  int v14; // w22
  unsigned __int64 v15; // x23
  int32_t v16; // w20

  if ( (byte_4B1B396 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&questCount);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B396 = 1;
  }
  if ( questCount <= 1 )
    v7 = 1;
  else
    v7 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1BCB254(Instance, v9);
  }
  v11 = *(_QWORD *)&Instance->max_length;
  v12 = Instance;
  v13 = (int)v11 > 0;
  if ( (int)v11 >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v11 )
        sub_1BCB25C(Instance, v9, v10);
      v16 = v12->m_Items[v15 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v16, v9);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v14 >= v7 )
        break;
      LODWORD(v11) = v12->max_length;
      v13 = (__int64)++v15 < (int)v11;
    }
    while ( (__int64)v15 < (int)v11 );
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4B1B386 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&groupId);
    byte_4B1B386 = 1;
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
  __int64 v9; // x2
  UserQuestMaster_o *UserQuestMaster; // x22
  UserQuestEntity_o *EntityFromId; // x0

  v2 = condQuestId;
  if ( (byte_4B1B3A6 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    condQuestId = (System_Int32_array *)sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    byte_4B1B3A6 = 1;
  }
  if ( !v2 )
LABEL_23:
    sub_1BCB254(condQuestId, method);
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
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, method);
        byte_4B165D1 = 1;
      }
      condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      }
      if ( v6 >= v2->max_length )
        sub_1BCB25C(condQuestId, method, v9);
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

  if ( (byte_4B1B350 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condQuestId);
    byte_4B1B350 = 1;
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
bool __fastcall CondType__IsQuestPhaseClear_39577180(
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

  if ( (byte_4B1B351 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B1B351 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&condQuestPhase);
    byte_4B165D1 = 1;
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x8
  signed __int64 v12; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v14; // x9
  bool v15; // w19
  int32_t v16; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B397 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestResetMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B397 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v8 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v8);
    v11 = entity;
    if ( entity )
    {
      v12 = 0LL;
      do
      {
        monitor = v11[1].monitor;
        if ( !monitor )
          break;
        v14 = (unsigned int)monitor[6];
        v15 = v12 < (int)v14;
        if ( v12 >= (int)v14 )
          return v15;
        if ( v12 >= v14 )
          sub_1BCB25C(Instance, v7, v9);
        v16 = monitor[v12 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_39516796(v16, -1, 1, v10);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v15;
        v11 = entity;
        ++v12;
      }
      while ( entity );
    }
LABEL_17:
    sub_1BCB254(Instance, v7);
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
  __int64 v11; // x2
  UserServantCollectionEntity_o *v12; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v15; // w20
  il2cpp_array_size_t v16; // w21
  struct System_Int32_array *v17; // x8
  int v18; // w23
  int v19; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B3A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&costumeId);
    sub_1BCAFF8(&System_Math_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3A5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    v12 = entity;
    if ( !entity )
      goto LABEL_26;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_26;
    max_length = costumeIds->max_length;
    v15 = max_length - 1;
    if ( max_length >= 1 )
    {
      v16 = 0;
      do
      {
        v17 = v12->fields.costumeIds;
        if ( !v17 )
          break;
        if ( v16 >= v17->max_length )
          sub_1BCB25C(Instance, v9, v11);
        v18 = v17->m_Items[v16 + 1];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v18 >= 0 )
          v19 = v18;
        else
          v19 = -v18;
        Instance = (DataManager_o *)(v19 == costumeId);
        if ( v19 == costumeId || v15 == v16 )
          return (char)Instance;
        v12 = entity;
        ++v16;
      }
      while ( entity );
LABEL_26:
      sub_1BCB254(Instance, v9);
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
    sub_1BCB254(0LL, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0LL) && v3->fields.birthDay > 0;
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

  if ( (byte_4B1B3DB & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&routeId);
    sub_1BCAFF8(&int___TypeInfo, v5);
    byte_4B1B3DB = 1;
  }
  v6 = sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_10;
  v9 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v6 + 32) = questId;
  v6 = sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !v6 )
LABEL_10:
    sub_1BCB254(v6, v7);
  v11 = (System_Collections_Generic_IList_int__o *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
LABEL_11:
    sub_1BCB25C(v6, v7, v8);
  *(_DWORD *)(v6 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_39582312(v9, v11, 1, 0, v10);
}


bool __fastcall CondType__IsRouteSelect_39582312(
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
  __int64 v17; // x1
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v21; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IList_int__c *v38; // x8
  int32_t v39; // w28
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x27
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w29
  NetworkManager_c *v55; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v57; // x1
  ScriptManager_c *v58; // x8
  System_Collections_ICollection_o *SelectRouteArray; // x0
  System_Int32_array *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  System_Int32_array *v63; // x19
  __int64 v64; // x8
  unsigned __int64 v65; // x20
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v78; // [xsp+18h] [xbp-68h]

  if ( (byte_4B1B3DC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestRouteMaster___, routeIds);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&ScriptManager_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1B3DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v21,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_110;
  klass = questIds->klass;
  v23 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1B560(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v78 = v26;
  while ( 1 )
  {
    if ( !v78 )
      sub_1BCB254(v26, v27);
    v28 = *(_QWORD *)v78;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_17;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_17:
      v31 = sub_1C1B560(v78, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v78, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v78;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v34 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_24;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_24:
      v35 = sub_1C1B560(v78, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v78, *(_QWORD *)(v35 + 8));
    if ( !routeIds )
      sub_1BCB254(v36, v37);
    v38 = routeIds->klass;
    v39 = v36;
    v40 = *(unsigned __int16 *)(&routeIds->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&routeIds->klass->_2.bitflags2 + 3) )
    {
      v41 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v41 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_31;
      }
      v42 = (__int64)&v38->vtable[*v41].method;
    }
    else
    {
LABEL_31:
      v42 = sub_1C1B560(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v42)(
            routeIds,
            *(_QWORD *)(v42 + 8));
    if ( !v44 )
      sub_1BCB254(0LL, v43);
    while ( 1 )
    {
      v45 = *(_QWORD *)v44;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_38;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_38:
        v48 = sub_1C1B560(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      v49 = *(_QWORD *)v44;
      v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v51 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v50;
          v51 += 4;
          if ( !v50 )
            goto LABEL_45;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_45:
        v52 = sub_1C1B560(v44, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v53);
        byte_4B165D1 = 1;
      }
      v55 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v55 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1BCB254(v55, v53);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      v55->static_fields->userIdNumber,
                      v39,
                      v54,
                      0LL);
      if ( haveRouteId )
      {
        if ( !v21 )
          sub_1BCB254(haveRouteId, v57);
        System_Collections_Generic_HashSet_int___Add(
          v21,
          v54,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      else
      {
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        if ( !byte_4B1B418 )
        {
          sub_1BCAFF8(&ScriptManager_TypeInfo, v57);
          byte_4B1B418 = 1;
        }
        v58 = ScriptManager_TypeInfo;
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          v58 = ScriptManager_TypeInfo;
        }
        if ( v58->static_fields->questId == v39 )
        {
          if ( !v58->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v58);
          SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0LL);
          if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0LL) )
          {
            if ( !ScriptManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v60 = ScriptManager__GetSelectRouteArray(0LL);
            v63 = v60;
            if ( !v60 )
              sub_1BCB254(0LL, v61);
            v64 = *(_QWORD *)&v60->max_length;
            if ( (int)v64 >= 1 )
            {
              v65 = 0LL;
              do
              {
                if ( v65 >= (unsigned int)v64 )
                  sub_1BCB25C(v60, v61, v62);
                if ( v54 == v63->m_Items[v65 + 1] )
                {
                  if ( !v21 )
                    sub_1BCB254(v60, v61);
                  v60 = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                v21,
                                                v54,
                                                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                LODWORD(v64) = v63->max_length;
                ++v65;
              }
              while ( (__int64)v65 < (int)v64 );
            }
          }
        }
      }
    }
    v66 = *(_QWORD *)v44;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_82;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_82:
      v69 = sub_1C1B560(v44, System_IDisposable_TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v44, *(_QWORD *)(v69 + 8));
  }
  v70 = *(_QWORD *)v78;
  v71 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
  {
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_95;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_95:
    v73 = sub_1C1B560(v78, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v78, *(_QWORD *)(v73 + 8));
  if ( !checkType )
  {
    if ( v21 )
      return v21->fields._count == count;
    goto LABEL_110;
  }
  if ( checkType == 1 )
  {
    if ( v21 )
      return v21->fields._count >= count;
LABEL_110:
    sub_1BCB254(Instance, v19);
  }
  if ( checkType != 2 )
    return 0;
  if ( !v21 )
    goto LABEL_110;
  return v21->fields._count <= count;
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

  if ( (byte_4B1B364 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B364 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&condFriendshipRank);
    byte_4B165D1 = 1;
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
  return CondType__IsServantFriendship_39560800(userIdNumber, svtId, condFriendshipRank, isAbove, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_39558584(
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

  if ( (byte_4B1B366 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condFriendshipRank);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B1B366 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v23, 0LL);
  if ( !entity )
LABEL_22:
    sub_1BCB254(Instance, v14);
  v16 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = klass;
  *(_QWORD *)&v26.fields.fakeValue = monitor;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v26, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_39560800(v16, v20, condFriendshipRank, 1, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantFriendship_39560800(
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

  if ( (byte_4B1B365 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1B365 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v12);
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
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL) >= condFriendshipRank;
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
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v20, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4B1B35E & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    byte_4B1B35E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
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
  return CondType__IsServantGet_39558428(userIdNumber, condSvtId, v2);
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

  if ( (byte_4B1B399 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B399 = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B165D1 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    &v13,
                                    eventId,
                                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v13 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v13[6].klass;
LABEL_21:
        sub_1BCB254(Instance, v10);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGet_39558428(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1B35F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&condSvtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B35F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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


bool __fastcall CondType__IsServantGet_39578464(int64_t userSvtId, const MethodInfo *method)
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

  if ( (byte_4B1B360 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B360 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v20, 0LL);
  if ( !entity )
LABEL_20:
    sub_1BCB254(Instance, v11);
  v13 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = klass;
  *(_QWORD *)&v23.fields.fakeValue = monitor;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v23, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_39558428(v13, v17, v16);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4B1B368 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v4);
    byte_4B1B368 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B165D1 = 1;
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
  return CondType__IsServantGroup_39559120(userIdNumber, condGroup, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantGroup_39559120(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v10; // x2
  int v11; // w8
  void *v12; // x21
  bool v13; // w22
  int v14; // w23
  __int64 v15; // x8

  if ( (byte_4B1B369 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&condGroup);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B369 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  v13 = v11 > 0;
  if ( v11 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v11 )
        sub_1BCB25C(Instance, v8, v10);
      v15 = *((_QWORD *)v12 + v14 + 4);
      if ( !v15 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v15 + 20),
                   0LL);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v11 = *((_DWORD *)v12 + 6);
        v13 = ++v14 < v11;
        if ( v14 < v11 )
          continue;
      }
      return v13;
    }
LABEL_16:
    sub_1BCB254(Instance, v8);
  }
  return v13;
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1B361 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B1B361 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v5);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1B3B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condNum);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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

  if ( (byte_4B1B355 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLv);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B355 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1BCB254(Instance, v10);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_39514000(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4B1B356 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condLv);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B1B356 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&condLv);
    byte_4B165D1 = 1;
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
  return CondType__IsServantLevel_39560400(userIdNumber, svtId, condLv, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLevel_39560400(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1B357 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B357 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B359 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B1B359 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_22:
    sub_1BCB254(Instance, v13);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v19, 0LL);
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
  if ( (byte_4B1B3CB & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetNum);
    byte_4B1B3CB = 1;
  }
  if ( !v4 )
    sub_1BCB254(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1BCB25C(v6, *(_QWORD *)&targetNum, method);
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

  if ( (byte_4B1B35A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&condLimitCount);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1B35A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_1BCB254(Instance, v12);
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
bool __fastcall CondType__IsServantLimit_39514204(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4B1B35B & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condLimitCount);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B1B35B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&condLimitCount);
    byte_4B165D1 = 1;
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
  return CondType__IsServantLimit_39560560(userIdNumber, svtId, condLimitCount, checkType, v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsServantLimit_39560560(
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

  if ( (byte_4B1B35C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B35C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
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
  __int64 v19; // x2
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1B3AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopGroupMaster___, *(_QWORD *)&limitNum);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3AF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_26;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v11 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
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
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
        byte_4B165D1 = 1;
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
        sub_1BCB25C(Instance, v9, v19);
    }
LABEL_26:
    sub_1BCB254(Instance, v9);
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
  __int64 v9; // x2
  __int64 v10; // x8
  int v11; // w23
  UserShopMaster_o *v12; // x21
  unsigned __int64 v13; // x24
  __int64 v14; // x25

  if ( (byte_4B1B392 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&num);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B392 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  v10 = *(_QWORD *)&values->max_length;
  v11 = 0;
  if ( v10 && (int)v10 >= 1 )
  {
    v12 = (UserShopMaster_o *)Instance;
    v13 = 0LL;
    v11 = 0;
    v14 = (unsigned int)*(_QWORD *)&values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
        byte_4B165D1 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v13 >= values->max_length )
        sub_1BCB25C(Instance, v8, v9);
      if ( !v12 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v12,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    values->m_Items[v13 + 1],
                                    0LL);
      if ( !Instance )
        break;
      ++v13;
      v11 += HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( v14 == v13 )
        return num > 0 && v11 == num;
    }
LABEL_19:
    sub_1BCB254(Instance, v8);
  }
  return num > 0 && v11 == num;
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
  __int64 v15; // x2
  ShopEntity_o *v16; // x21

  if ( (byte_4B1B3A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopGroupMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1B3A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1BCB254(Instance, v7);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
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
                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v16 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v16, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v11 == v13 )
      goto LABEL_18;
    if ( ++v13 >= v9->max_length )
      sub_1BCB25C(Instance, v7, v15);
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

  if ( (byte_4B1B3DD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1B3DD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v5);
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
  __int64 v28; // x2
  UserServantEntity_array *v29; // x21
  BalanceConfig_c *v30; // x0
  unsigned __int64 v32; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v34; // x8
  __int64 v35; // x22
  __int64 v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4B1B3FF & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&targetLimitCount);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserDeckMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v13);
    byte_4B1B3FF = 1;
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
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v22,
                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v37.fields.currentCryptoKey = klass;
              *(_QWORD *)&v37.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v37, 0LL) == targetSvtId )
              {
                if ( (v23 & 0x80000000) != 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v22,
                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
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
    sub_1BCB254(Item, v15);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Item = (Il2CppObject *)TutorialFlag__Get_39617644(126, 0LL);
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
  v29 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    if ( v30->static_fields->DeckMainMemberMax <= (signed int)v29->max_length )
    {
      v32 = 0LL;
      m_Items = v29->m_Items;
      while ( 1 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v32 >= v30->static_fields->DeckMainMemberMax )
          break;
        if ( v32 >= v29->max_length )
          goto LABEL_55;
        v34 = m_Items[v32];
        if ( v34 )
        {
          v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v38.fields.currentCryptoKey = v36;
          *(_QWORD *)&v38.fields.fakeValue = v35;
          v30 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v38, 0LL);
          if ( (_DWORD)v30 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v32 >= v29->max_length )
LABEL_55:
              sub_1BCB25C(v30, v15, v28);
            Item = (Il2CppObject *)m_Items[v32];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0LL) == targetLimitCount - 1 )
              return 1;
          }
        }
        v30 = BalanceConfig_TypeInfo;
        ++v32;
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

  if ( (byte_4B1B3E5 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    byte_4B1B3E5 = 1;
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

  if ( (byte_4B1B3E6 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    byte_4B1B3E6 = 1;
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

  if ( (byte_4B1B3E4 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, condVal);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserSuperBossMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3E4 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B165D1 )
      {
        sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
        byte_4B165D1 = 1;
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
        sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B3B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B1B3B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v4);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1B3B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B1B3B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v4);
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
  __int64 v15; // x2
  int64_t v16; // x22
  int32_t v17; // w26
  __int64 v18; // x27
  __int64 v19; // x28
  int64_t v20; // x23
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v23; // w0
  int64_t v24; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B1B3A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, *(_QWORD *)&condNum);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B3A7 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_26:
    sub_1BCB254(Instance, v11);
  }
  v12 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
  if ( RecoverySvtIdList )
  {
    v16 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_23:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v17 = 0;
    v18 = 0LL;
    v19 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v16 + 32 + 8 * v18);
      if ( v20 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v20,
                   (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = klass;
      *(_QWORD *)&v28.fields.fakeValue = monitor;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v28, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v12, &recoverAt, &isRecover, eventId, v23, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v24 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        RecoverySvtIdList = NetworkManager__getTime(0LL);
        if ( v24 - RecoverySvtIdList > 0 )
          goto LABEL_20;
        ++v17;
      }
      if ( v17 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_20:
      if ( v19 == v18 )
        goto LABEL_23;
      if ( ++v18 >= (unsigned __int64)*(unsigned int *)(v16 + 24) )
        sub_1BCB25C(RecoverySvtIdList, v14, v15);
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
  __int64 v4; // x8
  System_Func_int__int__o *v6; // x21
  unsigned __int64 v8; // x23
  int32_t v9; // w22

  if ( !targetIds )
LABEL_12:
    sub_1BCB254(countFunc, targetIds);
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
        sub_1BCB25C(countFunc, targetIds, *(_QWORD *)&targetNum);
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

  if ( (byte_4B1B3BF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B3BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1B3C1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&flag);
    sub_1BCAFF8(&System_Enum_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&EventStatus_Type_var, v8);
    sub_1BCAFF8(&EventStatus_Type_TypeInfo, v9);
    sub_1BCAFF8(&System_Type_TypeInfo, v10);
    byte_4B1B3C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B3C2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&flag);
    sub_1BCAFF8(&System_Enum_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&UserQuestEntity_StatusKind_var, v8);
    sub_1BCAFF8(&UserQuestEntity_StatusKind_TypeInfo, v9);
    sub_1BCAFF8(&System_Type_TypeInfo, v10);
    byte_4B1B3C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1BCB254(Instance, v12);
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
                        && UserQuestEntity__HasStatus_42250044(v15, flag, 0LL);
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

  if ( (byte_4B1B3D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserShopMaster___, *(_QWORD *)&flagKind);
    sub_1BCAFF8(&System_Enum_TypeInfo, v5);
    sub_1BCAFF8(&UserShopFlag_FlagKind_var, v6);
    sub_1BCAFF8(&UserShopFlag_FlagKind_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&System_Type_TypeInfo, v10);
    byte_4B1B3D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v12);
    byte_4B165D1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1BCB254(Instance, v12);
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

  if ( (byte_4B1B408 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserPrivilegeMaster___, *(_QWORD *)&privilegeNum);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    byte_4B1B408 = 1;
  }
  entity = 0LL;
  *startedAt = 0LL;
  *endedAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    byte_4B165D1 = 1;
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
    sub_1BCB254(p_image, v11);
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
  int32_t v18; // w0
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B1B3AB & 1) == 0 )
  {
    sub_1BCAFF8(&EventRewardRootComponent_TypeInfo, *(_QWORD *)&playCount);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4B1B3AB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_16:
    sub_1BCB254(Instance, v8);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1BCB514(Instance);
    return CondType__IsEquipWithTargetCostume(v18, v19, v20);
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
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v15, 0LL);
  if ( !byte_4B16AFB )
  {
    sub_1BCAFF8(&EventRewardSaveData_TypeInfo, v16);
    byte_4B16AFB = 1;
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

  if ( (byte_4B1B39A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&num);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B39A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v8);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  int i; // w9

  if ( (byte_4B1B3CA & 1) == 0 )
  {
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, method);
    byte_4B1B3CA = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_1BCB254(0LL, v4);
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
        sub_1BCB25C(ClearWarIdList, v4, v5);
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
  System_Comparison_T__o *_9__170_0; // x20
  Il2CppObject *v18; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CondType___c_c *v22; // x0
  System_Predicate_object__o *_9__170_1; // x20
  Il2CppObject *v24; // x21
  struct CondType___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x3
  int32_t klass_high; // w19

  if ( (byte_4B1B3D6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Comparison_WarEntity__TypeInfo, v1);
    sub_1BCAFF8(&CondType_TypeInfo, v2);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarEntity__Find__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarEntity__Sort__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarEntity__get_Count__, v6);
    sub_1BCAFF8(&System_Predicate_WarEntity__TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_CondType___c__LatestMainScenarioWarClear_b__170_0__, v9);
    sub_1BCAFF8(&Method_CondType___c__LatestMainScenarioWarClear_b__170_1__, v10);
    sub_1BCAFF8(&CondType___c_TypeInfo, v11);
    byte_4B1B3D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v13);
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
  _9__170_0 = (System_Comparison_T__o *)v16->static_fields->__9__170_0;
  if ( !_9__170_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CondType___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__170_0 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__170_0, v18, Method_CondType___c__LatestMainScenarioWarClear_b__170_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__170_0 = (struct System_Comparison_WarEntity__o *)_9__170_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__170_0, (int32_t)_9__170_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_57390740(
    v15,
    _9__170_0,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v22 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v22 = CondType___c_TypeInfo;
  }
  _9__170_1 = (System_Predicate_object__o *)v22->static_fields->__9__170_1;
  if ( !_9__170_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CondType___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__170_1 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_object____ctor(_9__170_1, v24, Method_CondType___c__LatestMainScenarioWarClear_b__170_1__, 0LL);
    v25 = CondType___c_TypeInfo->static_fields;
    v25->__9__170_1 = (struct System_Predicate_WarEntity__o *)_9__170_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v25->__9__170_1, (int32_t)_9__170_1, v26, v27);
  }
  v28 = System_Collections_Generic_List_object___Find(
          v15,
          (System_Predicate_T__o *)_9__170_1,
          (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v28 )
    return 0;
  klass_high = HIDWORD(v28[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_39516796(klass_high, -1, 0, v29);
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

  if ( (byte_4B1B349 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_3690/*"COND_TYPE_NONE"*/, v8);
    byte_4B1B349 = 1;
  }
  switch ( condType )
  {
    case 0:
      v9 = System_String__Concat_62450424((System_String_o *)StringLiteral_3690/*"COND_TYPE_NONE"*/, textType, 0LL);
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
      if ( !byte_4B1794E )
      {
        sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&condValue);
        byte_4B1794E = 1;
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

  if ( (byte_4B1B36C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, textType);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_3689/*"COND_TYPE_EVENT"*/, v8);
    byte_4B1B36C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v12 = System_String__Concat_62450424((System_String_o *)StringLiteral_3689/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B36F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_3691/*"COND_TYPE_PURCHASE_QP_SHOP"*/, v8);
    byte_4B1B36F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_62450424((System_String_o *)StringLiteral_3691/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B374 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, textType);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_3692/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, v8);
    byte_4B1B374 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v12 = System_String__Concat_62450424((System_String_o *)StringLiteral_3692/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B34F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, textType);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_3693/*"COND_TYPE_QUEST_CLEAR"*/, v8);
    byte_4B1B34F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v12 = System_String__Concat_62450424((System_String_o *)StringLiteral_3693/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get(v12, 0LL);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
LABEL_18:
    sub_1BCB254(Master_object, v10);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B1794E )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    byte_4B1794E = 1;
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
  if ( (byte_4B1B353 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condQuestPhase);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v12);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_3694/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, v14);
    sub_1BCAFF8(&StringLiteral_3693/*"COND_TYPE_QUEST_CLEAR"*/, v15);
    byte_4B1B353 = 1;
  }
  v29 = 0LL;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0LL);
    if ( QuestId )
    {
      v19 = QuestId;
      v20 = System_String__Concat_62450424((System_String_o *)StringLiteral_3693/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
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
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v29,
           condQuestId,
           (const MethodInfo_32C7E4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v24 = System_String__Concat_62450424((System_String_o *)StringLiteral_3694/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v24, 0LL);
      if ( v29 )
      {
        monitor = (Il2CppObject *)v29[1].monitor;
        v26 = (System_String_o *)Master_object;
        v27 = (Il2CppObject *)System_Int32__ToString((int32_t)&v30, 0LL);
        return System_String__Format_62491716(v26, monitor, v27, 0LL);
      }
LABEL_31:
      sub_1BCB254(Master_object, v17);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B1794E )
    {
      sub_1BCAFF8(&LocalizationManager_TypeInfo, v23);
      byte_4B1794E = 1;
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

  if ( (byte_4B1B367 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, textType);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3695/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, v6);
    byte_4B1B367 = 1;
  }
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_3695/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
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

  if ( (byte_4B1B363 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, textType);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_3696/*"COND_TYPE_SERVANT_GET"*/, v8);
    byte_4B1B363 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v12 = System_String__Concat_62450424((System_String_o *)StringLiteral_3696/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v12, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1BCB254(Instance, v10);
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

  if ( (byte_4B1B36A & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, textType);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3697/*"COND_TYPE_SERVANT_GROUP"*/, v6);
    byte_4B1B36A = 1;
  }
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_3697/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
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

  if ( (byte_4B1B358 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, textType);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3698/*"COND_TYPE_SERVANT_LEVEL"*/, v6);
    byte_4B1B358 = 1;
  }
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_3698/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
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

  if ( (byte_4B1B35D & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, textType);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3699/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, v6);
    byte_4B1B35D = 1;
  }
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_3699/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
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

  if ( (byte_4B1B33F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SpotPathMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&EventSpotMoveManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B33F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
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

  if ( (byte_4B1B33E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&targetId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1B33E = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
        sub_1BCB254(Instance, v8);
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
  __int64 v12; // x2
  __int64 v13; // x8
  MapEntity_o *v14; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v16; // x21

  if ( (byte_4B1B3D7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_long___, target);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MapMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMapMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_WarMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1B3D7 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v13 = *(_QWORD *)&Instance->max_length;
  if ( !v13 )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)v13 )
    sub_1BCB25C(Instance, v11, v12);
  v14 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v14 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v14->fields.warId,
                                    (const MethodInfo_32C7E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v16 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_1BCB254(Instance, v11);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_42181808(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v16 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_3119148 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_161_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1BCB254(0LL, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_164_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1BCB254(0LL, method);
  maxLv = collection->fields.maxLv;
  if ( maxLv <= 0 )
    return 0;
  else
    return maxLv - 1;
}


int32_t __fastcall CondType___CountServantClassTotalLimitUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1BCB254(0LL, method);
  return collection->fields.maxLimitCount;
}


int32_t __fastcall CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_192_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 currentCryptoKey; // x9
  UserServantCollectionEntity_o *v4; // x8
  __int64 v5; // x0
  __int64 v6; // x10
  int32_t *p_fakeValue; // x8
  int v8; // t1

  if ( !collection
    || (collection = (UserServantCollectionEntity_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL )
  {
    sub_1BCB254(collection, method);
  }
  currentCryptoKey = (unsigned int)collection->fields.svtId.fields.currentCryptoKey;
  v4 = collection;
  if ( currentCryptoKey << 32 < 1 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v5 = 0LL;
    v6 = (int)currentCryptoKey;
    p_fakeValue = &v4->fields.svtId.fields.fakeValue;
    do
    {
      if ( !currentCryptoKey )
        sub_1BCB25C(v5, method, v2);
      v8 = *p_fakeValue++;
      --v6;
      --currentCryptoKey;
      v5 = (unsigned int)(v5 + v8 - 1);
    }
    while ( v6 );
  }
  return v5;
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

  if ( (byte_4B1B340 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B340 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v11 = 0;
    return v11 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v10);
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
  __int64 v12; // x2
  int max_length; // w8
  TotalEventRaidMaster_o *v14; // x22
  unsigned int v15; // w23
  EventRaidEntity_o *v16; // x24
  char v17; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B341 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, *(_QWORD *)&condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B1B341 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1BCB254(Instance, v10);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v17 = 0;
  }
  else
  {
    v14 = (TotalEventRaidMaster_o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1BCB25C(Instance, v10, v12);
      v16 = EventRaidEntityArray->m_Items[v15];
      if ( !v16 || !v14 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v14, &entity, targetId, v16->fields.day, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v16->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_16;
    }
    v17 = 1;
  }
  return (v17 ^ ~alive) & 1;
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

  if ( (byte_4B1B33D & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&condValue);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1B33D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_1BCB254(Instance, v9);
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A14B8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A14B2C;
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
  if ( (byte_4B1B40B & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&id);
    byte_4B1B40B = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&level, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v13, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1BCAFB0(result, 0LL, method) )
    sub_1BCB254(0LL, v3);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B40C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType___c_TypeInfo, v1);
    byte_4B1B40C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(CondType___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)CondType___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_2(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return !UserQuestEntity__IsResetStatus(entity, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_3(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.clearNum >= 1 && !UserQuestEntity__IsResetStatus(entity, 0LL);
}


bool __fastcall CondType___c___CheckGroupMaterialQuest_b__28_4(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return entity->fields.clearNum > 0;
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__197_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1B410 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4B1B410 = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_30366BC *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__197_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1B411 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_int___, x);
    byte_4B1B411 = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_30366BC *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4B1B40D & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4B1B40D = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&current);
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

  if ( (byte_4B1B40E & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4B1B40E = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&current);
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

  if ( (byte_4B1B40F & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&current);
    byte_4B1B40F = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&current);
  if ( result < current )
    return current;
  return result;
}


bool __fastcall CondType___c___IsClassBoardSquareAllReleased_b__198_0(
        CondType___c_o *this,
        ClassBoardSquareEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCB254(this, 0LL);
  return !ClassBoardSquareEntity__get_HasLockId(ent, 0LL) && !ClassBoardSquareEntity__get_IsBlank(ent, 0LL);
}


bool __fastcall CondType___c___IsCompleteHighestWaveValue_b__226_0(
        CondType___c_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return QuestPhaseEntity__IsInterruptionQuest(x, 0LL);
}


int32_t __fastcall CondType___c___LatestMainScenarioWarClear_b__170_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCB254(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__170_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCB254(this, 0LL);
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


void __fastcall CondType___c__DisplayClass160_0___ctor(
        CondType___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass160_0___CountServantFriendShipClassNum_g__CountFunc_0(
        CondType___c__DisplayClass160_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1BCB254(this, 0LL);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL) >= this->fields.friendShipRank;
}


void __fastcall CondType___c__DisplayClass191_0___ctor(
        CondType___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CondType___c__DisplayClass191_0___CountServantTargetSkillLvClassNum_g__CountFunc_0(
        CondType___c__DisplayClass191_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  CondType___c__DisplayClass191_0_o *v3; // x19
  __int64 v4; // x2
  __int64 klass_low; // x9
  CondType___c__DisplayClass191_0_o *v6; // x8
  __int64 v7; // x0
  __int64 v8; // x10
  void **p_monitor; // x8
  int32_t v10; // t1

  if ( !collection
    || (v3 = this,
        (this = (CondType___c__DisplayClass191_0_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0LL)) == 0LL) )
  {
    sub_1BCB254(this, collection);
  }
  klass_low = LODWORD(this[1].klass);
  v6 = this;
  if ( klass_low << 32 < 1 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v7 = 0LL;
    v8 = (int)klass_low;
    p_monitor = &v6[1].monitor;
    do
    {
      if ( !klass_low )
        sub_1BCB25C(v7, collection, v4);
      v10 = *(_DWORD *)p_monitor;
      p_monitor = (void **)((char *)p_monitor + 4);
      --v8;
      --klass_low;
      if ( v10 < v3->fields.skillLv )
        v7 = (unsigned int)v7;
      else
        v7 = (unsigned int)(v7 + 1);
    }
    while ( v8 );
  }
  return v7;
}


void __fastcall CondType___c__DisplayClass197_0___ctor(
        CondType___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass197_0___CountClassBoardSquareReleased_b__0(
        CondType___c__DisplayClass197_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
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

  if ( (byte_4B1B412 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4B1B412 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4B1B413 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4B1B413 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4B1B414 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&targetId);
    byte_4B1B414 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, targetNum, method);
}


void __fastcall CondType___c__DisplayClass207_0___ctor(
        CondType___c__DisplayClass207_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass207_0___IsExchangeSvtBuff_b__0(
        CondType___c__DisplayClass207_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return this->fields.targetId == entity->fields.eventId;
}


void __fastcall CondType___c__DisplayClass228_0___ctor(
        CondType___c__DisplayClass228_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass228_0___CountGrandServantSet_b__0(
        CondType___c__DisplayClass228_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  CondType___c__DisplayClass228_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1B415 & 1) == 0 )
  {
    this = (CondType___c__DisplayClass228_0_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4B1B415 = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.targetIds,
           v4->fields.targetId,
           (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall CondType___c__DisplayClass228_0___CountGrandServantSet_b__1(
        CondType___c__DisplayClass228_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.targetNum == this->fields.targetNum;
}


void __fastcall CondType___c__DisplayClass228_1___ctor(
        CondType___c__DisplayClass228_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CondType___c__DisplayClass228_1___CountGrandServantSet_b__2(
        CondType___c__DisplayClass228_1_o *this,
        UserEventMissionEntity_o *x,
        const MethodInfo *method)
{
  struct EventMissionConditionEntity_o *grandServantSetMission; // x8

  if ( !x || (grandServantSetMission = this->fields.grandServantSetMission) == 0LL )
    sub_1BCB254(this, x);
  return x->fields.missionId == grandServantSetMission->fields.missionId;
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
    sub_1BCB254(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}