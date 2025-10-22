void CondType___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  struct CondType_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C55C0A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    byte_4C55C0A = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->uQuestMst, 0, v1, v2);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v5 = CondType_TypeInfo->static_fields;
  v5->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->cachedServantEquipIdStrDic, (int32_t)v4, v6, v7);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_C12A50;
}


void CondType___ctor(CondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType__CheckAbove(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue <= compValue;
}


bool CondType__CheckBelow(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue >= compValue;
}


bool CondType__CheckEqual(int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  return condValue == compValue;
}


UserQuestEntity_o *CondType__CheckGroupMaterialQuest(
        UserQuestEntity_o *userQuestEntity,
        int32_t condQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v7; // x19
  int64_t Master_object; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v11; // x25
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x22
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v14; // x21
  UserQuestEntity_o *v15; // x23
  UserQuestEntity_o *IncludedGroupQuest; // x0
  CondType___c_c *v17; // x8
  UserQuestEntity_o *v18; // x21
  System_Func_object__bool__o *_9__32_1; // x24
  Il2CppObject *v20; // x26
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  QuestScriptMaterialNextMaster_o *v24; // x8
  Il2CppObject *v25; // x0
  int32_t questPhase; // w24
  int32_t questId; // w26
  UserQuestMaster_o *v28; // x27
  int64_t updatedAt; // x8
  QuestScriptMaterialNextMaster_o *v30; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x22
  System_Func_object__bool__o *v32; // x20
  CondType___c_c *v34; // x0
  System_Func_object__bool__o *_9__32_2; // x23
  Il2CppObject *v36; // x25
  struct CondType___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int clearNum; // w8
  CondType___c_c *v41; // x0
  struct CondType___c_StaticFields *v42; // x8
  System_Func_object__bool__o *_9__32_3; // x20
  Il2CppObject *v44; // x25
  struct CondType___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x24
  struct CondType___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3

  if ( (byte_4C55B49 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_UserQuestEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78227688);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    sub_1C3E564(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_1C3E564(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_CondType___c__CheckGroupMaterialQuest_b__32_1__);
    sub_1C3E564(&Method_CondType___c__CheckGroupMaterialQuest_b__32_2__);
    sub_1C3E564(&Method_CondType___c__CheckGroupMaterialQuest_b__32_3__);
    sub_1C3E564(&Method_CondType___c__CheckGroupMaterialQuest_b__32_4__);
    sub_1C3E564(&Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__);
    sub_1C3E564(&CondType___c__DisplayClass32_0_TypeInfo);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55B49 = 1;
  }
  v7 = sub_1C3E7B0(CondType___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_70;
  *(_DWORD *)(v7 + 16) = condQuestId;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0);
  if ( userQuestEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( !Master_object )
      goto LABEL_70;
    v11 = (QuestScriptMaterialNextMaster_o *)Master_object;
    IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                       (QuestScriptMaterialNextMaster_o *)Master_object,
                       *(_DWORD *)(v7 + 16),
                       0);
    SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                     v11,
                                     IncludedGroups,
                                     0);
    v14 = QuestScriptMaterialNextMaster__GetIncludedGroups(v11, *(_DWORD *)(v7 + 16), 0);
    v15 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (const MethodInfo_3122250 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v14, 0);
    v17 = CondType___c_TypeInfo;
    v18 = IncludedGroupQuest;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v17 = CondType___c_TypeInfo;
    }
    _9__32_1 = (System_Func_object__bool__o *)v17->static_fields->__9__32_1;
    if ( !_9__32_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CondType___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__32_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserQuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__32_1, v20, Method_CondType___c__CheckGroupMaterialQuest_b__32_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__32_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__32_1, (int32_t)_9__32_1, v22, v23);
    }
    Master_object = System_Linq_Enumerable__All_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                      (System_Func_TSource__bool__o *)_9__32_1,
                      (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_UserQuestEntity___);
    if ( (Master_object & 1) != 0 )
      v24 = 0;
    else
      v24 = v11;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_66;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v25 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v15->fields.questId;
      questPhase = v15->fields.questPhase;
      v28 = (UserQuestMaster_o *)v25;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__getTime(0);
      if ( !v28 )
        goto LABEL_70;
      Master_object = (int64_t)UserQuestMaster__CreateQuestClearDummyData(v28, questId, questPhase, Master_object, 0);
      if ( !Master_object )
        goto LABEL_70;
      updatedAt = v15->fields.updatedAt;
      v30 = v11;
      v15 = (UserQuestEntity_o *)Master_object;
      *(_QWORD *)(Master_object + 72) = updatedAt;
LABEL_47:
      clearNum = v15->fields.clearNum;
      if ( clearNum <= 0 )
        v11 = v30;
      else
        v11 = 0;
      if ( clearNum > 0 )
      {
LABEL_67:
        if ( v30 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v30, *(_DWORD *)(v7 + 16), v15, v18, 0);
LABEL_70:
        sub_1C3E7C0(Master_object, v9);
      }
      v41 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v41 = CondType___c_TypeInfo;
      }
      v42 = v41->static_fields;
      if ( isCheckResetFlag )
      {
        _9__32_3 = (System_Func_object__bool__o *)v42->__9__32_3;
        if ( !_9__32_3 )
        {
          if ( !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            v41 = CondType___c_TypeInfo;
          }
          v44 = (Il2CppObject *)v41->static_fields->__9;
          _9__32_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__32_3, v44, Method_CondType___c__CheckGroupMaterialQuest_b__32_3__, 0);
          v45 = CondType___c_TypeInfo->static_fields;
          v45->__9__32_3 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_3;
          sub_1C3E508((CGThumbnailListItem_o *)&v45->__9__32_3, (int32_t)_9__32_3, v46, v47);
        }
        v11 = v30;
      }
      else
      {
        _9__32_3 = (System_Func_object__bool__o *)v42->__9__32_4;
        if ( !_9__32_3 )
        {
          if ( !v41->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v41);
            v41 = CondType___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v41->static_fields->__9;
          _9__32_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__32_3, v48, Method_CondType___c__CheckGroupMaterialQuest_b__32_4__, 0);
          v49 = CondType___c_TypeInfo->static_fields;
          v49->__9__32_4 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_3;
          sub_1C3E508((CGThumbnailListItem_o *)&v49->__9__32_4, (int32_t)_9__32_3, v50, v51);
        }
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__32_3,
                                 (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78227688);
      if ( Master_object )
        v15 = (UserQuestEntity_o *)Master_object;
LABEL_66:
      v30 = v11;
      goto LABEL_67;
    }
    if ( isCheckResetFlag )
      v30 = v24;
    else
      v30 = 0;
    if ( isCheckResetFlag )
    {
      if ( !v15 )
      {
        v30 = v24;
        if ( v24 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v30, *(_DWORD *)(v7 + 16), v15, v18, 0);
        goto LABEL_70;
      }
      Master_object = UserQuestEntity__IsResetStatus(v15, 0);
      if ( (Master_object & 1) == 0 )
        goto LABEL_47;
      v34 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v34 = CondType___c_TypeInfo;
      }
      _9__32_2 = (System_Func_object__bool__o *)v34->static_fields->__9__32_2;
      if ( !_9__32_2 )
      {
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v34 = CondType___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v34->static_fields->__9;
        _9__32_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__32_2, v36, Method_CondType___c__CheckGroupMaterialQuest_b__32_2__, 0);
        v37 = CondType___c_TypeInfo->static_fields;
        v37->__9__32_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v37->__9__32_2, (int32_t)_9__32_2, v38, v39);
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__32_2,
                                 (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78227688);
      v15 = (UserQuestEntity_o *)Master_object;
    }
    else
    {
      v30 = v11;
    }
    if ( !v15 )
      goto LABEL_67;
    goto LABEL_47;
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0;
  v32 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                v31,
                                (System_Func_TSource__bool__o *)v32,
                                (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78227688);
}


bool CondType__CompareQuestClearTime(int32_t questId, int64_t time, int32_t checkType, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  int64_t v8; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v10; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v12; // x3
  UserQuestEntity_o *v13; // x22
  bool IsQuestClear_40371188; // w8

  if ( (byte_4C55C04 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55C04 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v7 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v8 = *((_QWORD *)v7[2].virtualMethodPointer + 8);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(v7);
  if ( !UserQuestMaster )
    sub_1C3E7C0(0, v10);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v8, questId, 0);
  if ( EntityFromId )
  {
    v13 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40371188 = CondType__IsQuestClear_40371188(questId, -1, 0, v12);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_40371188 )
    {
      if ( checkType == 2 )
      {
        LOBYTE(EntityFromId) = v13->fields.updatedAt <= time;
      }
      else if ( checkType == 1 )
      {
        LOBYTE(EntityFromId) = v13->fields.updatedAt >= time;
      }
      else if ( checkType )
      {
        LOBYTE(EntityFromId) = 0;
      }
      else
      {
        LOBYTE(EntityFromId) = v13->fields.updatedAt == time;
      }
    }
  }
  return (char)EntityFromId;
}


int32_t CondType__CountAllServantTargetSkillLvNum(int32_t skillLv, int32_t targetNum, const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v8; // x21
  int32_t v9; // w22
  unsigned int v10; // w24
  UserServantCollectionMaster_c **v11; // x8
  UserServantCollectionEntity_o *v12; // x23
  int v13; // w8
  int v14; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BE4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BE4 = 1;
  }
  *(_QWORD *)findSum = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !Master_object
    || (Master_object = (UserServantCollectionMaster_o *)UserServantCollectionMaster__getCollectionList(
                                                           Master_object,
                                                           &findSum[1],
                                                           findSum,
                                                           0,
                                                           0,
                                                           0)) == 0 )
  {
LABEL_27:
    sub_1C3E7C0(Master_object, v6);
  }
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v8 = Master_object;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_26;
      v11 = &v8->klass + (int)v10;
      v12 = (UserServantCollectionEntity_o *)v11[4];
      if ( !v12 )
        goto LABEL_27;
      Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                         (UserServantCollectionEntity_o *)v11[4],
                                                         0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v12, 0);
        if ( !Master_object )
          goto LABEL_27;
        v13 = (int)Master_object->fields._MasterName_k__BackingField;
        if ( v13 >= 1 )
          break;
      }
LABEL_22:
      LODWORD(MasterName_k__BackingField) = v8->fields._MasterName_k__BackingField;
      if ( (int)++v10 >= (int)MasterName_k__BackingField )
        return v9;
    }
    v14 = 0;
    while ( v13 != v14 )
    {
      if ( *(&Master_object->fields.revision + v14) >= skillLv )
        ++v9;
      if ( targetNum && v9 >= targetNum )
        return v9;
      if ( v13 == ++v14 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C3E7C8(Master_object, v6);
  }
  return 0;
}


int32_t CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  CondType___c_c *v9; // x8
  System_Func_object__int__o *_9__201_1; // x20
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct CondType___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__201_1; // x0
  CondType___c_c *v16; // x0
  Il2CppObject *v17; // x21
  struct CondType___c_StaticFields *v18; // x0

  if ( (byte_4C55BEA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    sub_1C3E564(&System_Func_UserClassBoardSquareEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_1C3E564(&Method_CondType___c__CountClassBoardSquareReleased_b__201_1__);
    sub_1C3E564(&Method_CondType___c__CountClassBoardSquareReleased_b__201_2__);
    sub_1C3E564(&Method_CondType___c__DisplayClass201_0__CountClassBoardSquareReleased_b__0__);
    sub_1C3E564(&CondType___c__DisplayClass201_0_TypeInfo);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55BEA = 1;
  }
  v3 = sub_1C3E7B0(CondType___c__DisplayClass201_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1C3E7C0(Master_object, v5);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( *(_DWORD *)(v3 + 16) )
  {
    v7 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass201_0__CountClassBoardSquareReleased_b__0__,
      0);
    v8 = System_Linq_Enumerable__Where_object_(
           monitor,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v9 = CondType___c_TypeInfo;
    monitor = v8;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v9 = CondType___c_TypeInfo;
    }
    _9__201_1 = (System_Func_object__int__o *)v9->static_fields->__9__201_1;
    if ( !_9__201_1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = CondType___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__201_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__201_1, v11, Method_CondType___c__CountClassBoardSquareReleased_b__201_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__201_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__201_1;
      p__9__201_1 = (CGThumbnailListItem_o *)&static_fields->__9__201_1;
LABEL_20:
      sub_1C3E508(p__9__201_1, (int32_t)_9__201_1, v12, v13);
    }
  }
  else
  {
    v16 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v16 = CondType___c_TypeInfo;
    }
    _9__201_1 = (System_Func_object__int__o *)v16->static_fields->__9__201_2;
    if ( !_9__201_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CondType___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v16->static_fields->__9;
      _9__201_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__201_1, v17, Method_CondType___c__CountClassBoardSquareReleased_b__201_2__, 0);
      v18 = CondType___c_TypeInfo->static_fields;
      v18->__9__201_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__201_1;
      p__9__201_1 = (CGThumbnailListItem_o *)&v18->__9__201_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           monitor,
           (System_Func_TSource__int__o *)_9__201_1,
           (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  UserServantCollectionEntity_array *Master_object; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_array *v7; // x21
  int max_length; // w9
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  int32_t v10; // w22
  int v11; // w8
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x24
  void *data; // x25
  const char *namespaze; // x26
  Il2CppObject *v17; // [xsp+0h] [xbp-70h] BYREF
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C55BE7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C55BE7 = 1;
  }
  entity = 0;
  v17 = 0;
  *(_QWORD *)findSum = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !Master_object )
      goto LABEL_31;
    Master_object = UserServantCollectionMaster__getCollectionList(
                      (UserServantCollectionMaster_o *)Master_object,
                      &findSum[1],
                      findSum,
                      0,
                      0,
                      0);
    if ( !Master_object )
      goto LABEL_31;
    v7 = Master_object;
    if ( Master_object->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
      findSum[0] = 0;
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)max_length )
            sub_1C3E7C8(Master_object, v6);
          v12 = &v7->obj.klass + v11;
          v13 = v12[4];
          if ( !v13 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v12[4],
                                                                 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v13->_1.namespaze;
            data = v13->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v20.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v20.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                                   v20,
                                                                   0);
            if ( !v9 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v9,
                                                                   &v17,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v17 )
                break;
              if ( LODWORD(v17[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))countFunc->fields.invoke_impl)(
                                                                       countFunc->fields.method_code,
                                                                       v13,
                                                                       countFunc->fields.method);
                v10 += (int)Master_object;
              }
            }
          }
          v11 = findSum[0] + 1;
          findSum[0] = v11;
          max_length = v7->max_length;
          if ( v11 >= max_length )
            return v10;
        }
LABEL_31:
        sub_1C3E7C0(Master_object, v6);
      }
    }
  }
  return 0;
}


int32_t CondType__CountEquipRarityLevelNum(int32_t targetId, const MethodInfo *method)
{
  CondType_c *v3; // x0
  int64_t lastUserId; // x23
  NetworkManager_c *v5; // x0
  CondType_c *v6; // x0
  Il2CppObject *cachedServantEquipIdStrDic; // x0
  NetworkManager_c *v8; // x0
  UserServantCollectionMaster_o *v9; // x20
  System_Collections_Generic_List_object__o *ServantEquipCollectionList; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v12; // x21
  int v13; // w26
  int v14; // w19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v20; // x0
  Il2CppObject *v21; // x23
  void *v22; // x24
  Il2CppClass *v23; // x25
  __int64 v24; // x0
  ServantLimitEntity_o *v25; // x24
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // [xsp+0h] [xbp-B0h]
  int32_t v31; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C55BD2 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD2 = 1;
  }
  v3 = CondType_TypeInfo;
  memset(&v34, 0, sizeof(v34));
  entity = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v3 = CondType_TypeInfo;
  }
  lastUserId = v3->static_fields->lastUserId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( lastUserId != v5->static_fields->userIdNumber )
  {
    v6 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (Il2CppObject *)v6->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_57:
      sub_1C3E7C0(cachedServantEquipIdStrDic, method);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_340C5C4 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    CondType_TypeInfo->static_fields->lastUserId = v8->static_fields->userIdNumber;
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v9 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v9 )
    goto LABEL_57;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v9,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_57;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v13 = targetId / 100;
  v14 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    ServantEquipCollectionList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v31 = 0;
  v34 = v32;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C3E7C0(v15, v16);
    if ( LODWORD(v34.fields._current[2].monitor) == 2 )
    {
      monitor = v34.fields._current[1].monitor;
      klass = v34.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v35.fields.fakeValue = klass;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v35, 0);
      if ( !MasterData_object )
        sub_1C3E7C0(v20, (unsigned int)v20);
      v21 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v20,
              (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v21 )
      {
        v23 = v21[1].klass;
        v22 = v21[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v23;
        *(_QWORD *)&v36.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v36, 0);
        if ( !v12 )
          sub_1C3E7C0(v24, (unsigned int)v24);
        v25 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v12, v24, 0, 0);
        if ( v25
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v21, 0)
          && v25->fields.rarity == v14
          && SHIDWORD(current[2].monitor) >= v13 )
        {
          if ( !v30 )
            sub_1C3E7C0(0, v26);
          v27 = DataMasterBase_object__object__int___TryGetEntity(
                  v30,
                  &entity,
                  (int32_t)v21[8].monitor,
                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v27 )
            goto LABEL_51;
          if ( !entity )
            sub_1C3E7C0(v27, v28);
          if ( HIDWORD(entity[1].klass) != 3
            || ServantEntity__get_IsSvtEquipRarityLevelNumMission((ServantEntity_o *)v21, 0) )
          {
LABEL_51:
            ++v31;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v31;
}


int32_t CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BEF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__CountGrandServantSet(int32_t targetId, int32_t targetNum, const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  EventMissionConditionMaster_o *v8; // x20
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  System_Func_object__bool__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_ICollection_o *v12; // x20
  Il2CppObject *v13; // x0
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x20
  System_Func_object__bool__o *v16; // x21

  if ( (byte_4C55C07 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
    sub_1C3E564(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_EventMissionConditionEntity__bool__TypeInfo);
    sub_1C3E564(&Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__0__);
    sub_1C3E564(&Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__1__);
    sub_1C3E564(&Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__2__);
    sub_1C3E564(&CondType___c__DisplayClass232_0_TypeInfo);
    byte_4C55C07 = 1;
  }
  v5 = sub_1C3E7B0(CondType___c__DisplayClass232_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = targetId;
  *(_DWORD *)(v5 + 20) = targetNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v8 = (EventMissionConditionMaster_o *)Master_object;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v8 )
    goto LABEL_18;
  EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                    v8,
                                    CondType_TypeInfo->static_fields->EventId,
                                    258,
                                    0);
  v10 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
  v12 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v11,
                                              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
  if ( BasicHelper__IsNullOrEmpty(v12, 0) )
  {
    LODWORD(v13) = 0;
    return (int)v13;
  }
  v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__1__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
  if ( !v13 )
    return (int)v13;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
LABEL_18:
    sub_1C3E7C0(Master_object, v7);
  UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)Master_object, 0);
  v16 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass232_0__CountGrandServantSet_b__2__,
    0);
  LODWORD(v13) = System_Linq_Enumerable__Count_object__51492776(
                   (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
                   (System_Func_TSource__bool__o *)v16,
                   (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
  if ( (int)v13 >= *(_DWORD *)(v5 + 20) )
    LODWORD(v13) = *(_DWORD *)(v5 + 20);
  return (int)v13;
}


int32_t CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  UserEventRandomMissionMaster_o *v6; // x20
  int32_t v7; // w21
  unsigned __int64 v8; // x22

  if ( (byte_4C55BDC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BDC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  max_length = missionIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = Master_object;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C3E7C8(Master_object, v4);
      if ( !v6 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v6,
                                                          missionIds->m_Items[v8],
                                                          0);
      if ( Master_object )
        v7 += *(&Master_object->fields.revision + 1);
      LODWORD(max_length) = missionIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return v7;
    }
LABEL_16:
    sub_1C3E7C0(Master_object, v4);
  }
  return 0;
}


int32_t CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C55BCC & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_165_0__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C55BCC = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_165_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C55BCF & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_168_0__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C55BCF = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_168_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C55BCA & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_163_0__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C55BCA = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_163_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C55BE6 & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_196_0__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C55BE6 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_196_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Func_object__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4C55BCB & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1C3E564(&Method_CondType___c__DisplayClass164_0__CountServantFriendShipClassNum_g__CountFunc_0__);
    sub_1C3E564(&CondType___c__DisplayClass164_0_TypeInfo);
    byte_4C55BCB = 1;
  }
  v3 = sub_1C3E7B0(CondType___c__DisplayClass164_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  v6 = targetId / 100;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v7 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass164_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v7, v8);
}


int32_t CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_array *v7; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  __int64 v10; // x26
  int32_t v11; // w22
  UserServantCollectionEntity_o *v12; // x24
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C55BCE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BCE = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = UserServantCollectionMaster__getCollectionList(
                 (UserServantCollectionMaster_o *)Instance,
                 &findSum[1],
                 findSum,
                 0,
                 0,
                 0);
    if ( !Instance )
      goto LABEL_27;
    v7 = Instance;
    if ( Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_1C3E7C8(Instance, v6);
          v12 = v7->m_Items[v10];
          if ( !v12 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v7->m_Items[v10], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 && v12->fields.maxLv >= level )
          {
            v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v14;
            *(_QWORD *)&v17.fields.fakeValue = v13;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                              v17,
                                                              0);
            if ( !v9 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v9,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v11;
          }
          max_length = v7->max_length;
          if ( (int)++v10 >= max_length )
            return v11;
        }
LABEL_27:
        sub_1C3E7C0(Instance, v6);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v8; // x20

  if ( (byte_4C55BD0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                      0)) == 0 )
  {
LABEL_15:
    sub_1C3E7C0(Instance, v6);
  }
  v8 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0)
      && SHIDWORD(v8->fields.datalist) >= level;
}


int32_t CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int v5; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  __int64 v9; // x26
  int32_t v10; // w23
  int v11; // w29
  UserServantCollectionEntity_o *v12; // x20
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C55BC9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v5 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    max_length = CollectionList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        v10 = 0;
        v11 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= (unsigned int)max_length )
            sub_1C3E7C8(Instance, v4);
          v12 = CollectionList->m_Items[v9];
          if ( !v12 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v9], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v14;
            *(_QWORD *)&v17.fields.fakeValue = v13;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v17, 0);
            if ( !v8 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v8,
                         (int32_t)Instance,
                         (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v5 && v12->fields.maxLimitCount >= v11 )
              ++v10;
          }
          LODWORD(max_length) = CollectionList->max_length;
          if ( (int)++v9 >= (int)max_length )
            return v10;
        }
LABEL_27:
        sub_1C3E7C0(Instance, v4);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  System_Func_object__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4C55BE5 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1C3E564(&Method_CondType___c__DisplayClass195_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__);
    sub_1C3E564(&CondType___c__DisplayClass195_0_TypeInfo);
    byte_4C55BE5 = 1;
  }
  v3 = sub_1C3E7B0(CondType___c__DisplayClass195_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  v6 = targetId / 100;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v7 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass195_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v7, v8);
}


int32_t CondType__CountTargetParamMatchFunction(
        System_Int32_array *targetParam,
        CondType_CountDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  CondType_c *max_length; // x8
  int32_t v6; // w21
  int v7; // w24
  int v8; // w22
  int32_t TARGET_PARAM_NUM; // w9

  v4 = targetParam;
  if ( (byte_4C55BCD & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BCD = 1;
  }
  if ( !v4 )
    goto LABEL_20;
  max_length = (CondType_c *)v4->max_length;
  if ( !max_length )
    return 0;
  targetParam = (System_Int32_array *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    targetParam = (System_Int32_array *)CondType_TypeInfo;
    max_length = (CondType_c *)v4->max_length;
  }
  v6 = 0;
  if ( (int)max_length % *(_DWORD *)(*(_QWORD *)&targetParam->m_Items[38] + 8LL) != 1 && (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length || v7 + 1 >= (unsigned int)max_length )
        sub_1C3E7C8(targetParam, func);
      if ( !func )
        break;
      targetParam = (System_Int32_array *)((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))func->fields.invoke_impl)(
                                            func->fields.method_code,
                                            (unsigned int)v4->m_Items[v7],
                                            (unsigned int)v4->m_Items[v7 + 1],
                                            func->fields.method);
      max_length = CondType_TypeInfo;
      v8 = (int)targetParam;
      if ( !CondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        max_length = CondType_TypeInfo;
      }
      v6 += v8;
      TARGET_PARAM_NUM = max_length->static_fields->TARGET_PARAM_NUM;
      LODWORD(max_length) = v4->max_length;
      v7 += TARGET_PARAM_NUM;
      if ( v7 >= (int)max_length )
        return v6;
    }
LABEL_20:
    sub_1C3E7C0(targetParam, func);
  }
  return v6;
}


int32_t CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w9
  int v6; // w10
  int32_t v7; // w8
  UserEventBoardGameTokenEntity_o *v8; // x11

  if ( (byte_4C55BC3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC3 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_43078564((UserEventBoardGameTokenMaster_o *)Instance, 0);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        if ( max_length == v6 )
          sub_1C3E7C8(Instance, v4);
        v8 = Instance->m_Items[v6];
        if ( !v8 )
          break;
        ++v6;
        if ( v8->fields.tokenId == tokenId )
          ++v7;
        if ( max_length == v6 )
          return v7;
      }
LABEL_19:
      sub_1C3E7C0(Instance, v4);
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


bool CondType__GetCompareCheckType(int32_t checkType, int32_t condValue, int32_t compValue, const MethodInfo *method)
{
  if ( (byte_4C55B36 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B36 = 1;
  }
  if ( checkType == 2 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return condValue >= compValue;
  }
  else if ( checkType == 1 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return condValue <= compValue;
  }
  else if ( checkType )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return condValue == compValue;
  }
}


int64_t CondType__GetEventTotalPoint(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C55BB1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C3E7C0(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           -1,
           0);
}


int32_t CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BF3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BED & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BF1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v7; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C55B40 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4C55B40 = 1;
  }
  entity = 0;
  v7 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                targetId,
                                (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0);
LABEL_23:
      sub_1C3E7C0(Instance, v4);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                &v7,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v7 )
    goto LABEL_23;
  return v7->fields.num;
}


int32_t CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4C55B78 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B78 = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v6, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C3E7C0(Instance, v5);
    }
    max_length = Instance->max_length;
    v8 = Instance;
    if ( (int)max_length < 1 )
      return 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v5);
      v11 = v8->m_Items[v10];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v11, v5);
      LODWORD(max_length) = v8->max_length;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)max_length );
    return v9;
  }
}


int32_t CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4C55B79 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B79 = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v6, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C3E7C0(Instance, v5);
    }
    max_length = Instance->max_length;
    v8 = Instance;
    if ( (int)max_length < 1 )
      return 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v5);
      v11 = v8->m_Items[v10];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v11, v5);
      LODWORD(max_length) = v8->max_length;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)max_length );
    return v9;
  }
}


int32_t CondType__GetNegativeSideCond(int32_t cond, const MethodInfo *method)
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
      return dword_C4BD48[v2];
  }
  return cond;
}


int32_t CondType__GetNotQuestGoupClearCount(
        int32_t questId,
        int32_t groupId,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v12; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x25
  il2cpp_array_size_t max_length; // x8
  int32_t v19; // w21
  unsigned __int64 v20; // x26
  bool v21; // w23
  int32_t v22; // w24

  if ( (byte_4C55B82 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B82 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v12 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1C3E508((CGThumbnailListItem_o *)sameGroupQuestIds, (int32_t)QuestIdListByGroupId, v14, v15),
        (v17 = *sameGroupQuestIds) == 0) )
  {
LABEL_30:
    sub_1C3E7C0(Instance, v10);
  }
  max_length = v17->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    v20 = 0;
    v21 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v10);
      v22 = v17->m_Items[v20];
      if ( v22 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_40371188(v22, -1, v21, v16);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v19;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v12 )
            goto LABEL_30;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        v12,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v22,
                                        0);
          if ( Instance )
          {
            Instance = (DataManager_o *)UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0);
            if ( (int)Instance > 0 )
              ++v19;
          }
        }
      }
      LODWORD(max_length) = v17->max_length;
      if ( (__int64)++v20 >= (int)max_length )
        return v19;
    }
  }
  return 0;
}


int32_t CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4C55B86 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B86 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) >= condVal;
}


int32_t CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B76 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B76 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_18:
    sub_1C3E7C0(Instance, v6);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t CondType__GetOpenTime(const MethodInfo *method)
{
  if ( (byte_4C55B85 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B85 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0);
}


// local variable allocation has failed, the output may be wrong!
int64_t CondType__GetProgressNum(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  CondType_c *v9; // x0
  int64_t v10; // x8
  int32_t PurchaseShopCount; // w0
  bool IsPurchaseShop; // w0
  CondType_c *v14; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v5 = eventId;
  if ( (byte_4C55B47 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B47 = 1;
  }
  v9 = CondType_TypeInfo;
  sameGroupQuestIds = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v9 = CondType_TypeInfo;
  }
  v9->static_fields->EventId = v5;
  if ( condType <= 85 )
  {
    if ( condType <= 46 )
    {
      v10 = 1;
      switch ( condType )
      {
        case 0:
          return v10;
        case 1:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetQuestClearCount(targetId, *(const MethodInfo **)&targetId);
        case 2:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&targetId);
        case 6:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetSvtLv(targetId, condValue, (const MethodInfo *)condValue);
        case 7:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetSvtLimitCnt(targetId, condValue, (const MethodInfo *)condValue);
        case 8:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return (unsigned int)CondType__GetSvtGetNum(targetId, *(const MethodInfo **)&targetId);
        case 9:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetSvtFriendShip(targetId, condValue, (const MethodInfo *)condValue);
        case 12:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetOpenTime((const MethodInfo *)v9);
        case 22:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetNumMissionCondDetail(targetId, condValue, (const MethodInfo *)condValue);
        case 23:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetMIssionClearNum(targetId, *(const MethodInfo **)&targetId);
        case 24:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetMissionAchiveNum(targetId, *(const MethodInfo **)&targetId);
        case 25:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetQuestClearNum(targetId, condValue, (const MethodInfo *)condValue);
        case 26:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetNotQuestGoupClearCount(0, targetId, &sameGroupQuestIds, 0, method);
        case 28:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          IsPurchaseShop = CondType__checkCondTypeRaidAlive(targetId, condValue, 0, *(const MethodInfo **)&eventId);
          goto LABEL_46;
        case 29:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetRaidDamage(targetId, condValue, (const MethodInfo *)condValue);
        case 30:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetQuestChallengeNum(targetId, condValue, (const MethodInfo *)condValue);
        case 32:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetQuestGroupClearCount(0, targetId, 0, *(const MethodInfo **)&eventId);
        case 33:
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v5 = CondType_TypeInfo->static_fields->EventId;
          }
          return CondType__GetSuperBossDamage(targetId, condValue, v5, *(const MethodInfo **)&eventId);
        case 34:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetSuperBossDamageAll(targetId, condValue, (const MethodInfo *)condValue);
        case 35:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          IsPurchaseShop = CondType__IsPurchaseShop(targetId, 1, (const MethodInfo *)condValue);
LABEL_46:
          v10 = IsPurchaseShop;
          break;
        case 40:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
        case 46:
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
          }
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v14 = CondType_TypeInfo;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__GetQuestClearPhaseCount((int64_t)v14, targetId, -1, 0, method);
        default:
          return 0;
      }
    }
    else
    {
      switch ( condType )
      {
        case 'C':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
        case 'G':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
        case 'U':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetEventTotalPoint(v5, *(const MethodInfo **)&targetId);
        default:
          return 0;
      }
    }
  }
  else
  {
    if ( condType > 142 )
    {
      v10 = 0;
      switch ( condType )
      {
        case 174:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountAllServantTargetSkillLvNum(targetId, condValue, (const MethodInfo *)condValue);
        case 175:
        case 176:
        case 177:
        case 179:
        case 185:
        case 186:
          return v10;
        case 178:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantFriendShipClassNum(targetId, *(const MethodInfo **)&targetId);
        case 180:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
        case 181:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 182:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
        case 183:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
        case 184:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
        case 187:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
        case 188:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&targetId);
        case 189:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountExchangeServantMaxLimit(targetId, *(const MethodInfo **)&targetId);
        case 190:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&targetId);
        case 191:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&targetId);
        default:
          if ( condType == 219 )
          {
            if ( !v9->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v9);
            PurchaseShopCount = CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
          }
          else
          {
            if ( condType != 258 )
              return v10;
            if ( !v9->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v9);
            PurchaseShopCount = CondType__CountGrandServantSet(targetId, condValue, (const MethodInfo *)condValue);
          }
          break;
      }
      return PurchaseShopCount;
    }
    v10 = 0;
    if ( condType <= 135 )
    {
      switch ( condType )
      {
        case ']':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetServantHavingLimitMaxCount(targetId, *(const MethodInfo **)&targetId);
        case '_':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetSvtEquipFriendShip((const MethodInfo *)v9);
        case '\x7F':
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__GetBoardGameTokenGetNum(targetId, *(const MethodInfo **)&targetId);
      }
    }
    else
    {
      switch ( condType )
      {
        case 136:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
        case 139:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          IsPurchaseShop = CondType__TimeLimitRaidDead(v5, targetId, (const MethodInfo *)condValue);
          goto LABEL_46;
        case 141:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
        case 142:
          if ( !v9->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v9);
          return CondType__LatestMainScenarioWarClear((const MethodInfo *)v9);
        default:
          return v10;
      }
    }
  }
  return v10;
}


int64_t CondType__GetProgressNumByTargetIds(int32_t condType, System_Int32_array *targetIds, const MethodInfo *method)
{
  int64_t result; // x0
  CondType___c_c *v6; // x0
  System_Func_int__int__int__o *_9__30_1; // x20
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CondType___c_StaticFields *v11; // x0
  CGThumbnailListItem_o *p__9__30_1; // x0
  CondType_CountDelegate_o *v13; // x0
  const MethodInfo *v14; // x3
  intptr_t *v15; // x8
  CondType___c_c *v16; // x0
  Il2CppObject *v17; // x21
  struct CondType___c_StaticFields *v18; // x0
  CondType_CountDelegate_o *v19; // x20
  const MethodInfo *v20; // x2
  CondType___c_c *v21; // x0
  Il2CppObject *v22; // x21
  struct CondType___c_StaticFields *static_fields; // x0

  if ( (byte_4C55B48 & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType_CountServantLevelClassNum__);
    sub_1C3E564(&Method_CondType_CountServantLevelIdNum__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&CondType_CountDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Aggregate_int__int___);
    sub_1C3E564(&System_Func_int__int__int__TypeInfo);
    sub_1C3E564(&Method_CondType___c__GetProgressNumByTargetIds_b__30_0__);
    sub_1C3E564(&Method_CondType___c__GetProgressNumByTargetIds_b__30_1__);
    sub_1C3E564(&Method_CondType___c__GetProgressNumByTargetIds_b__30_2__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55B48 = 1;
  }
  if ( condType > 149 )
  {
    result = 0;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v21 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v21 = CondType___c_TypeInfo;
        }
        _9__30_1 = v21->static_fields->__9__30_1;
        if ( _9__30_1 )
          goto LABEL_39;
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = CondType___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v21->static_fields->__9;
        _9__30_1 = (System_Func_int__int__int__o *)sub_1C3E7B0(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__30_1, v22, Method_CondType___c__GetProgressNumByTargetIds_b__30_1__, 0);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__30_1 = _9__30_1;
        p__9__30_1 = (CGThumbnailListItem_o *)&static_fields->__9__30_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v16 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v16 = CondType___c_TypeInfo;
        }
        _9__30_1 = v16->static_fields->__9__30_2;
        if ( _9__30_1 )
          goto LABEL_39;
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = CondType___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v16->static_fields->__9;
        _9__30_1 = (System_Func_int__int__int__o *)sub_1C3E7B0(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__30_1, v17, Method_CondType___c__GetProgressNumByTargetIds_b__30_2__, 0);
        v18 = CondType___c_TypeInfo->static_fields;
        v18->__9__30_2 = _9__30_1;
        p__9__30_1 = (CGThumbnailListItem_o *)&v18->__9__30_2;
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
      v6 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v6 = CondType___c_TypeInfo;
      }
      _9__30_1 = v6->static_fields->__9__30_0;
      if ( _9__30_1 )
        goto LABEL_39;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = CondType___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__30_1 = (System_Func_int__int__int__o *)sub_1C3E7B0(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__30_1, v8, Method_CondType___c__GetProgressNumByTargetIds_b__30_0__, 0);
      v11 = CondType___c_TypeInfo->static_fields;
      v11->__9__30_0 = _9__30_1;
      p__9__30_1 = (CGThumbnailListItem_o *)&v11->__9__30_0;
    }
    sub_1C3E508(p__9__30_1, (int32_t)_9__30_1, v9, v10);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__30_1,
                        (const MethodInfo_3101D48 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v13 = (CondType_CountDelegate_o *)sub_1C3E7B0(CondType_CountDelegate_TypeInfo);
    v15 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0;
    v13 = (CondType_CountDelegate_o *)sub_1C3E7B0(CondType_CountDelegate_TypeInfo);
    v15 = &Method_CondType_CountServantLevelIdNum__;
  }
  v19 = v13;
  CondType_CountDelegate___ctor(v13, 0, *v15, v14);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v19, v20);
  return (int)result;
}


int32_t CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B70 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B70 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_15:
    sub_1C3E7C0(Instance, v4);
  }
  return 0;
}


int32_t CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w25
  QuestGroupMaster_o *v11; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x21
  unsigned __int64 v14; // x26
  int32_t v15; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t v18; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C55B88 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B88 = 1;
  }
  v18 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v11 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v11,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v13 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          challengeNum = 0;
          v14 = 0;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3E7C8(Instance, v6);
            v15 = *((_DWORD *)&v13->fields._DispLog + v14);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(&NetworkManager_TypeInfo);
              byte_4C50AE2 = 1;
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
                                          v15,
                                          0);
            if ( Instance )
              challengeNum += LODWORD(Instance->fields.masterDataBytes);
            LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
            if ( (__int64)++v14 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C3E7C0(Instance, v6);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                   0);
  if ( EntityFromId )
  {
    challengeNum = EntityFromId->fields.challengeNum;
    goto LABEL_36;
  }
LABEL_35:
  challengeNum = 0;
LABEL_36:
  if ( challengeNum >= v18 )
    return v18;
  else
    return challengeNum;
}


int32_t CondType__GetQuestClearCount(int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestGroupMaster_o *v7; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v9; // x19
  unsigned __int64 v10; // x26
  int32_t v11; // w22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v13; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C55B77 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B77 = 1;
  }
  entity = 0;
  if ( !targetId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v7 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v7 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v7,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v9 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            return 0;
          v4 = 0;
          v10 = 0;
          while ( 1 )
          {
            if ( v10 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3E7C8(Instance, v6);
            v11 = *((_DWORD *)&v9->fields._DispLog + v10);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(&NetworkManager_TypeInfo);
              byte_4C50AE2 = 1;
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
                                          v11,
                                          0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Instance = (DataManager_o *)CondType__IsQuestClear_40371188(v11, -1, 0, v13);
              v4 += (unsigned __int8)Instance & 1;
            }
            LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
            if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
              return v4;
          }
        }
      }
    }
    sub_1C3E7C0(Instance, v6);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40371188(targetId, -1, 0, v2);
}


int32_t CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w21
  QuestGroupMaster_o *v11; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x22
  unsigned __int64 v14; // x26
  int32_t v15; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t v18; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C55B7F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B7F = 1;
  }
  v18 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v11 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v11,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v13 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          ClearNum = 0;
          v14 = 0;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)m_CancellationTokenSource )
              sub_1C3E7C8(Instance, v6);
            v15 = *((_DWORD *)&v13->fields._DispLog + v14);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C50AE2 )
            {
              sub_1C3E564(&NetworkManager_TypeInfo);
              byte_4C50AE2 = 1;
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
                                          v15,
                                          0);
            if ( Instance )
            {
              Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
              ClearNum += (int)Instance;
            }
            LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
            if ( (__int64)++v14 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C3E7C0(Instance, v6);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                   0);
  if ( EntityFromId )
  {
    ClearNum = UserQuestEntity__getClearNum(EntityFromId, 0);
    goto LABEL_36;
  }
LABEL_35:
  ClearNum = 0;
LABEL_36:
  if ( ClearNum >= v18 )
    return v18;
  else
    return ClearNum;
}


int32_t CondType__GetQuestClearPhaseCount(
        int64_t userId,
        int32_t targetId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v8; // x0
  __int64 v9; // x1
  UserQuestMaster_o *UserQuestMaster; // x22
  _QWORD *p_image; // x0
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B4F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B4F = 1;
  }
  v8 = CondType_TypeInfo;
  entity = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !UserQuestMaster )
    goto LABEL_21;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, *(_QWORD *)(p_image[23] + 64LL), targetId, 0) )
    return 0;
  if ( isCheckResetFlag )
  {
    p_image = &entity->klass;
    if ( !entity )
      goto LABEL_21;
    if ( UserQuestEntity__IsResetStatus(entity, 0) )
      return 0;
  }
  p_image = &entity->klass;
  if ( !entity )
LABEL_21:
    sub_1C3E7C0(p_image, v9);
  result = UserQuestEntity__getQuestPhase(entity, 0);
  if ( beforeClearQuestId >= 1 )
    result -= targetId == beforeClearQuestId;
  return result;
}


int32_t CondType__GetQuestGroupClearCount(
        int32_t questId,
        int32_t groupId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *CacheByTypeGroup; // x0
  int32_t v11; // w21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  int32_t v15; // w22
  const MethodInfo *v16; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v18; // x22
  unsigned __int64 v19; // x24
  int32_t v20; // w23
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C55B84 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C55B84 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance || !MasterData_object )
    goto LABEL_30;
  if ( BYTE1(Instance->m_Items[10]) )
  {
    CacheByTypeGroup = (System_Collections_Generic_List_object__o *)QuestGroupMaster__GetCacheByTypeGroup(
                                                                      (QuestGroupMaster_o *)MasterData_object,
                                                                      groupId,
                                                                      2,
                                                                      0);
    if ( CacheByTypeGroup )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        CacheByTypeGroup,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
      v11 = 0;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
        if ( !v12 )
          break;
        if ( !v22.fields._current )
          sub_1C3E7C0(v12, v13);
        v15 = *(_DWORD *)((char *)&v22.fields._current->klass + (unsigned __int64)&word_10);
        if ( v15 != questId )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v11 += CondType__IsQuestClear_40371188(v15, -1, isCheckResetFlag, v14);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
      return v11;
    }
    return 0;
  }
  Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)MasterData_object, groupId, 2, 0);
  if ( !Instance )
LABEL_30:
    sub_1C3E7C0(Instance, v8);
  max_length = Instance->max_length;
  v18 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v11 = 0;
  v19 = 0;
  do
  {
    if ( v19 >= (unsigned int)max_length )
      sub_1C3E7C8(Instance, v8);
    v20 = v18->m_Items[v19];
    if ( v20 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestClear_40371188(v20, -1, isCheckResetFlag, v16);
      v11 += (unsigned __int8)Instance & 1;
    }
    LODWORD(max_length) = v18->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)max_length );
  return v11;
}


int64_t CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v8; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4C55B87 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B87 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v8 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
LABEL_19:
    sub_1C3E7C0(Instance, v6);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
             v8,
             CondType_TypeInfo->static_fields->EventId,
             condId,
             0);
  if ( Entity )
    damage = Entity->fields.damage;
  else
    damage = 0;
  if ( damage >= condVal )
    return condVal;
  else
    return damage;
}


int32_t CondType__GetRaidGroupDeadCount(int32_t targetId, int64_t condValue, const MethodInfo *method)
{
  int32_t v3; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v9; // x21
  unsigned int v10; // w23
  int32_t v11; // w22
  EventRaidEntity_o *v12; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4C55B3F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
        sub_1C3E7C8(Instance, v6);
      v12 = EventRaidEntityArray->m_Items[v10];
      if ( !v12 || !v9 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v9, &entity, targetId, v12->fields.day, 0);
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
    sub_1C3E7C0(Instance, v6);
  }
  return 0;
}


int32_t CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C55BDB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BDB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LODWORD(MissionEntity) = MissionEntity->fields.clearNum;
  return (int)MissionEntity;
}


int32_t CondType__GetServantHavingCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55B5F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0);
}


int32_t CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BB0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0);
}


int32_t CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  __int64 v9; // x22
  int32_t v10; // w20
  ShopGroupEntity_o *v11; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BA7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA7 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C3E7C8(Instance, v4);
          v11 = v6->m_Items[v9];
          if ( !v11 || !v8 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v8,
                                       &entity,
                                       v11->fields.shopId,
                                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = entity;
            if ( !entity )
              break;
            Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)entity, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = entity;
              if ( !entity )
                break;
              Instance = (Il2CppObject *)ShopEntity__IsSoldOut((ShopEntity_o *)entity, 0);
              v10 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v6->max_length;
          if ( (int)++v9 >= max_length )
            return v10;
        }
LABEL_22:
        sub_1C3E7C0(Instance, v4);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t CondType__GetSuperBossDamage(int32_t condId, int64_t condVal, int32_t eventId, const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4C55B89 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B89 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetSuperBossDamageValue(eventId, condId, *(const MethodInfo **)&eventId);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t CondType__GetSuperBossDamageAll(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v8; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4C55B8B & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v8 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_object )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 (UserSuperBossMaster_o *)MasterData_object,
                 v8,
                 CondType_TypeInfo->static_fields->EventId,
                 condId,
                 0);
      if ( Entity )
        damage = Entity->fields.damage;
      else
        damage = 0;
      if ( damage >= condVal )
        return condVal;
      else
        return damage;
    }
LABEL_26:
    sub_1C3E7C0(Instance, v6);
  }
  Instance = (DataManager_o *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
    goto LABEL_26;
  result = UserSuperBossMaster__getTotalDamagePoint(
             (UserSuperBossMaster_o *)MasterData_object,
             CondType_TypeInfo->static_fields->EventId,
             0);
  if ( result >= condVal )
    return condVal;
  return result;
}


int64_t CondType__GetSuperBossDamageValue(int32_t eventId, int32_t bossId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B8A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_15:
    sub_1C3E7C0(Instance, v6);
  UserSuperBossMaster__TryGetEntity(
    (UserSuperBossMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    eventId,
    bossId,
    0);
  if ( entity )
    return entity->fields.damage;
  else
    return 0;
}


int32_t CondType__GetSvtEquipFriendShip(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C55BB3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0);
}


int32_t CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C55B7D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B7D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_17:
    sub_1C3E7C0(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    v9 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v10 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v10;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v12, 0);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4C55B7A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B7A = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


int32_t CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C55B7B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B7B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLimitCount >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLimitCount;
  }
  return (int)EntityDefinitely;
}


int32_t CondType__GetSvtLv(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C55B7C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B7C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    if ( EntityDefinitely->fields.maxLv >= condVal )
      LODWORD(EntityDefinitely) = condVal;
    else
      LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  }
  return (int)EntityDefinitely;
}


UserQuestMaster_o *CondType__GetUserQuestMaster(const MethodInfo *method)
{
  CondType_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CondType_c *v7; // x8
  Il2CppObject *v8; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4C55B37 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B37 = 1;
  }
  v1 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v3);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v7 = CondType_TypeInfo;
    v8 = MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v8;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->uQuestMst, (int32_t)v8, v5, v6);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = CondType_TypeInfo;
  }
  return v1->static_fields->uQuestMst;
}


bool CondType__IsAboveEventTradeTotalNum(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0

  if ( (byte_4C55BFF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BFF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( Master_object )
  {
    Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__GetEntity(Master_object, eventId, 0);
    if ( Master_object )
      LODWORD(Master_object) = UserEventTradeEntity__GetTotalTradeCount((UserEventTradeEntity_o *)Master_object, 0);
  }
  return (int)Master_object >= condNum;
}


bool CondType__IsAchieveLimitedMission(int32_t missionId, int32_t condNum, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0

  if ( (byte_4C55C00 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55C00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__GetLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0);
  if ( !LimitedMissionList )
    return (char)LimitedMissionList;
  if ( LimitedMissionList->fields._size < 1 )
  {
    LOBYTE(LimitedMissionList) = 0;
    return (char)LimitedMissionList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0 )
  {
LABEL_16:
    sub_1C3E7C0(Instance, v8);
  }
  LODWORD(LimitedMissionList) = UserEventMissionMaster__getAchiveMissionNum(
                                  (UserEventMissionMaster_o *)Instance,
                                  missionId,
                                  0);
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


bool CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C55C03 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C03 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C55BBB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BBB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0) >= count;
}


bool CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C55BAA & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BAA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) >= time;
}


bool CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1

  if ( (byte_4C55BF9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C55BF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v3, 0);
}


bool CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v12; // x21
  unsigned __int64 v13; // x26
  int32_t v14; // w25
  int32_t v15; // w23
  int32_t v16; // w24

  if ( (byte_4C55BC6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC6 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 15, 0);
  if ( !Instance )
    goto LABEL_28;
  v9 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C3E7C0(Instance, v8);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v12 = MasterData_object;
  v13 = 0;
  v14 = 0;
  if ( isWin )
    v15 = 128;
  else
    v15 = 256;
  do
  {
    if ( v13 >= (unsigned int)m_CancellationTokenSource )
      sub_1C3E7C8(MasterData_object, v8);
    v16 = *((_DWORD *)&v9->fields._DispLog + v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v12 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v12,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v16,
                                               0);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v15,
                                                 0);
      v14 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v14 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
    ++v13;
  }
  while ( (__int64)v13 < (int)m_CancellationTokenSource );
  return v14 >= val;
}


bool CondType__IsBattleLineReusltConsecutiveCount(
        int32_t groupId,
        int32_t val,
        bool isWin,
        bool isBelow,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x21
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v14; // x22
  unsigned __int64 v15; // x26
  int32_t v16; // w27
  int32_t v17; // w24
  int32_t v18; // w25

  if ( (byte_4C55BC5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Sort_int___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 14, 0);
  if ( !Instance )
    goto LABEL_34;
  v11 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_30C5EA4 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_34:
    sub_1C3E7C0(Instance, v10);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = MasterData_object;
    v15 = 0;
    v16 = 0;
    if ( isWin )
      v17 = 128;
    else
      v17 = 256;
    do
    {
      if ( v15 >= (unsigned int)m_CancellationTokenSource )
        sub_1C3E7C8(MasterData_object, v10);
      v18 = *((_DWORD *)&v11->fields._DispLog + v15);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v14 )
        goto LABEL_34;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                 v14,
                                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                                 v18,
                                                 0);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v17,
                                                   0);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
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
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v15;
    }
    while ( (__int64)v15 < (int)m_CancellationTokenSource );
  }
  return isBelow;
}


bool CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v12; // x21
  unsigned __int64 v13; // x26
  int32_t v14; // w25
  int32_t v15; // w23
  int32_t v16; // w24

  if ( (byte_4C55BC4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC4 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 14, 0);
  if ( !Instance )
    goto LABEL_28;
  v9 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C3E7C0(Instance, v8);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v12 = MasterData_object;
  v13 = 0;
  v14 = 0;
  if ( isWin )
    v15 = 128;
  else
    v15 = 256;
  do
  {
    if ( v13 >= (unsigned int)m_CancellationTokenSource )
      sub_1C3E7C8(MasterData_object, v8);
    v16 = *((_DWORD *)&v9->fields._DispLog + v13);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v12 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v12,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v16,
                                               0);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v15,
                                                 0);
      v14 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v14 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
    ++v13;
  }
  while ( (__int64)v13 < (int)m_CancellationTokenSource );
  return v14 >= val;
}


bool CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C55C01 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55C01 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) < time;
}


bool CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C55C02 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C02 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4C55BC2 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BC2 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C55BC1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0);
}


bool CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BC0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BC0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0);
}


bool CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BD7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD7 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_18:
    sub_1C3E7C0(Instance, v6);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool CondType__IsClassBoardSquareAllReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  ClassBoardSquareEntity_array *AllEntity; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  int32_t v8; // w0
  CondType___c_c *v9; // x8
  int32_t v10; // w20
  System_Func_object__bool__o *_9__202_0; // x21
  Il2CppObject *v12; // x22
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C55BEB & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
    sub_1C3E564(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_1C3E564(&Method_CondType___c__IsClassBoardSquareAllReleased_b__202_0__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55BEB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  AllEntity = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, targetId, 0);
  if ( AllEntity )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)AllEntity;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v8 = CondType__CountClassBoardSquareReleased(targetId, v6);
    v9 = CondType___c_TypeInfo;
    v10 = v8;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v9 = CondType___c_TypeInfo;
    }
    _9__202_0 = (System_Func_object__bool__o *)v9->static_fields->__9__202_0;
    if ( !_9__202_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = CondType___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__202_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__202_0, v12, Method_CondType___c__IsClassBoardSquareAllReleased_b__202_0__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__202_0 = (struct System_Func_ClassBoardSquareEntity__bool__o *)_9__202_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__202_0, (int32_t)_9__202_0, v14, v15);
    }
    LOBYTE(AllEntity) = v10 == System_Linq_Enumerable__Count_object__51492776(
                                 v7,
                                 (System_Func_TSource__bool__o *)_9__202_0,
                                 (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
  }
  return (char)AllEntity;
}


bool CondType__IsClearLatestQuestPhase(int32_t questId, int64_t phase, bool isEqual, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v6; // w20
  CondType_c *v8; // x0
  int32_t QuestClearPhaseCount; // w0

  v6 = phase;
  if ( (byte_4C55BFE & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BFE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v8 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  QuestClearPhaseCount = CondType__GetQuestClearPhaseCount((int64_t)v8, questId, -1, 1, v4);
  if ( isEqual )
    return QuestClearPhaseCount == v6;
  else
    return QuestClearPhaseCount != v6;
}


bool CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C55BB8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BB8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_40435308(userIdNumber, commandCodeId, v2);
}


bool CondType__IsCommandCodeGet_40435308(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55BB9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB9 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  UserCommandCodeCollectionMaster__TryGetEntity(
    (UserCommandCodeCollectionMaster_o *)Instance,
    &entity,
    userId,
    commandCodeId,
    0);
  return entity && entity->fields.status == 2;
}


bool CondType__IsCommonRelease(int32_t releaseId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55BBD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantMaxLimit(int32_t eventId, int32_t targetCount, const MethodInfo *method)
{
  if ( (byte_4C55BEE & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BEE = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountExchangeServantMaxLimit(eventId, *(const MethodInfo **)&targetCount) >= targetCount;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetFriendShipRank(
        int32_t eventId,
        int32_t targetFriendShipRank,
        const MethodInfo *method)
{
  if ( (byte_4C55BF2 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BF2 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetLevel(int32_t eventId, int32_t targetLevel, const MethodInfo *method)
{
  if ( (byte_4C55BEC & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BEC = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestLevel(eventId, *(const MethodInfo **)&targetLevel) >= targetLevel;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetSkillLevel(
        int32_t eventId,
        int32_t targetSkillLevel,
        const MethodInfo *method)
{
  if ( (byte_4C55BF0 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BF0 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55BE9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BE9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (Il2CppObject *)UserHeelPortraitMaster__TryGetEntity(
                                    (UserHeelPortraitMaster_o *)Master_object,
                                    &entity,
                                    eventId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      heelPortraitIds = entity->fields.heelPortraitIds;
      if ( heelPortraitIds )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0) <= SLODWORD(heelPortraitIds->max_length);
      }
    }
LABEL_15:
    sub_1C3E7C0(Master_object, v4);
  }
  return 0;
}


bool CondType__IsCompleteHighestWaveValue(int32_t questId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_ICollection_o *List; // x22
  CondType___c_c *v10; // x0
  System_Func_object__bool__o *_9__230_0; // x23
  Il2CppObject *v12; // x24
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t ReachedWave; // w0

  if ( (byte_4C55C05 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_QuestPhaseEntity___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_1C3E564(&Method_CondType___c__IsCompleteHighestWaveValue_b__230_0__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55C05 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  List = (System_Collections_ICollection_o *)QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, questId, 0);
  if ( BasicHelper__IsNullOrEmpty(List, 0) )
    return 0;
  v10 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v10 = CondType___c_TypeInfo;
  }
  _9__230_0 = (System_Func_object__bool__o *)v10->static_fields->__9__230_0;
  if ( !_9__230_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CondType___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__230_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__230_0, v12, Method_CondType___c__IsCompleteHighestWaveValue_b__230_0__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__230_0 = (struct System_Func_QuestPhaseEntity__bool__o *)_9__230_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__230_0, (int32_t)_9__230_0, v14, v15);
  }
  if ( !BasicHelper__Any_object__51261116(
          (System_Object_array *)List,
          (System_Func_T__bool__o *)_9__230_0,
          (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_QuestPhaseEntity___) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1C3E7C0(Master_object, v8);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)Master_object, questId, 0);
  if ( checkType == 1 )
    return ReachedWave >= num;
  else
    return checkType == 2 && ReachedWave <= num;
}


bool CondType__IsCompleteUserGameCommonValue(int32_t no, int32_t num, int32_t checkType, const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v9; // x0
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BFA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserGameCommonMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BFA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_21;
  v9 = (NetworkManager_c *)UserGameCommonMaster__TryGetEntity(
                             (UserGameCommonMaster_o *)Master_object,
                             &entity,
                             v9->static_fields->userIdNumber,
                             no,
                             0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_16;
    }
LABEL_21:
    sub_1C3E7C0(v9, v7);
  }
  value = 0;
LABEL_16:
  if ( checkType == 2 )
    return value <= num;
  if ( checkType == 1 )
    return value >= num;
  return value == num;
}


bool CondType__IsCompleteUserLevelValue(int32_t num, int32_t checkType, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
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


bool CondType__IsConst(int32_t condType, const MethodInfo *method)
{
  return condType == 0;
}


bool CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  System_DateTime_o v5; // x0
  int64_t Time_41414896; // x0
  System_DateTime_o v7; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55BDD & 1) == 0 )
  {
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BDD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_41414896 = NetworkManager__getTime_41414896(v5, 0);
  dateData = NetworkManager__getDateTime_41415676(Time_41414896 - 3600 * condNum, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek(v7, 0) + 1)) & 1;
}


bool CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B95 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B95 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  return UserServantCollectionEntity__IsCostumeGet(entity, costumeId, 0);
}


bool CondType__IsDeadRaidDay(
        int32_t day,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *EntityListFromDay; // x23
  __int64 v14; // x25
  _BOOL8 v15; // x0
  __int64 v16; // x1
  float v17; // s0
  int64_t v18; // x22
  CondType_c *v19; // x0
  float v20; // s1
  bool v21; // cc
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF
  int64_t maxHpSum; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C55BF5 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BF5 = 1;
  }
  maxHpSum = 0;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1C3E7C0(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    EntityListFromDay,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v14 = 0;
  for ( i = v24; ; v14 += (__int64)i.fields._current[1].monitor )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !i.fields._current )
      sub_1C3E7C0(v15, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v17 = 0.0;
    if ( v14 >= 1 )
    {
      v18 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v19 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
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


bool CondType__IsDeadRaidGroup(
        int32_t eventId,
        int32_t num,
        int32_t checkType,
        bool isRate,
        bool isIncludingEquals,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v15; // x25
  int v16; // w28
  __int64 v17; // x27
  __int64 v18; // x26
  EventRaidEntity_o *v19; // x29
  float v20; // s0
  CondType_c *v21; // x0
  float v22; // s1
  bool v23; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C55BF6 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BF6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1C3E7C0(Instance, v12);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v18 = 0;
    v17 = 0;
    if ( isRate )
    {
LABEL_17:
      v20 = 0.0;
      if ( v17 >= 1 && v18 >= 1 )
      {
        v21 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v21 = CondType_TypeInfo;
        }
        v20 = (float)((float)v18 / (float)v17) * (float)v21->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
      v22 = (float)num;
      if ( checkType != 2 )
      {
        if ( checkType == 1 )
        {
          v23 = v20 < v22;
          if ( isIncludingEquals )
            return !v23;
          return !v23;
        }
        return v20 == v22;
      }
      if ( isIncludingEquals )
        return v20 <= v22;
      else
        return v20 < v22;
    }
  }
  else
  {
    v15 = (TotalEventRaidMaster_o *)Instance;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v12);
      v19 = EventRaidEntityArrayFromEventId->m_Items[v16];
      if ( !v19 || !v15 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v15, &entity, eventId, v19->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
        v17 += v19->fields.maxHp;
        v18 += entity->fields.totalDamage;
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      ++v16;
    }
    while ( v16 < max_length );
    if ( isRate )
      goto LABEL_17;
  }
  if ( checkType != 2 )
  {
    if ( checkType == 1 )
    {
      v23 = v18 < num;
      if ( isIncludingEquals )
        return !v23;
      return !v23;
    }
    return v18 == num;
  }
  if ( isIncludingEquals )
    return v18 <= num;
  else
    return v18 < num;
}


bool CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  QuestPhaseMaster_c *v9; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v11; // x19

  if ( (byte_4C55BB5 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C3E564(&QuestPhaseMaster_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0);
  if ( Entity )
  {
    v8 = Entity;
    v9 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v9 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v8, v9->static_fields->MOVIE_QUEST_SCRIPT_STR, 0, 0);
    if ( ScriptStr )
    {
      v11 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.writeMasterDataThreadException;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v11, 0);
      }
LABEL_13:
      sub_1C3E7C0(Instance, v6);
    }
  }
  return 0;
}


bool CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  const MethodInfo *v5; // x0
  int64_t v6; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v8; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v10; // x3
  UserQuestEntity_o *v11; // x21
  bool IsQuestClear_40371188; // w8
  int64_t updatedAt; // x20
  System_DateTime_o v14; // x0
  int64_t Time_41414896; // x20

  if ( (byte_4C55BFB & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BFB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v5 = (const MethodInfo *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = (const MethodInfo *)NetworkManager_TypeInfo;
  }
  v6 = *((_QWORD *)v5[2].virtualMethodPointer + 8);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(v5);
  if ( !UserQuestMaster )
    sub_1C3E7C0(0, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v6, questId, 0);
  if ( EntityFromId )
  {
    v11 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40371188 = CondType__IsQuestClear_40371188(questId, -1, 0, v10);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_40371188 )
    {
      updatedAt = v11->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14.fields._dateData = NetworkManager__getServerDateTime_41416004(updatedAt, 0).fields._dateData;
      Time_41414896 = NetworkManager__getTime_41414896(v14, 0);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0) - Time_41414896 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool CondType__IsElapsedTimeAfterSvtGet(int32_t svtId, int64_t elapsedTime, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55BFC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BFC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         svtId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0);
    if ( entity )
      return (char *)Master_object - (char *)entity[1].monitor >= elapsedTime;
LABEL_12:
    sub_1C3E7C0(Master_object, v6);
  }
  return 0;
}


bool CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C55BB6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestDateRangeMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v5);
  }
  return QuestDateRangeMaster__IsPeriodFromOpenedToClosed((QuestDateRangeMaster_o *)Instance, questDateRangeId, Time, 0);
}


bool CondType__IsEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserEquipEntity_o *userEquipEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55C08 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55C08 = 1;
  }
  userEquipEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  return UserEquipMaster__TryGetEntityByEquipId((UserEquipMaster_o *)Master_object, &userEquipEntity, condEquipId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsEquipRarityLevelNum(System_Int32_array *targetIds, int32_t targetNum, const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x23
  int32_t v8; // w22
  int32_t v9; // w21

  v4 = targetIds;
  if ( (byte_4C55BD1 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BD1 = 1;
  }
  if ( !v4 )
    sub_1C3E7C0(targetIds, *(_QWORD *)&targetNum);
  max_length = v4->max_length;
  v6 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C3E7C8(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountEquipRarityLevelNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(max_length) = v4->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
    LOBYTE(v6) = v8 >= targetNum;
  }
  return v6;
}


bool CondType__IsEquipWithTargetCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4C55BA9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BA9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v6);
  return UserServantMaster__IsEquipCostume((UserServantMaster_o *)Master_object, svtId, costumeId, 0);
}


bool CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4C55B68 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B68 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0);
  return (char)Entity;
}


bool CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C55B99 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B99 = 1;
  }
  entity = 0;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_14:
    sub_1C3E7C0(Instance, v4);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C55B98 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B98 = 1;
  }
  entity = 0;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !entity )
LABEL_13:
      sub_1C3E7C0(Instance, v4);
    if ( (__int64)Instance < (__int64)entity[6].klass )
      return 0;
  }
  return 1;
}


bool CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C55B9A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B9A = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  return EventRaceMaster__IsReachedPointRateInTerm(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           rate,
           0);
}


bool CondType__IsEventGroupRankInTerm(int32_t eventTerm, int32_t rank, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w22
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4C55B9B & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B9B = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v9);
  }
  return EventRaceMaster__GetGoaledTeamCount(
           (EventRaceMaster_o *)Instance,
           eventTerm / EVENT_RACE_DEVIDER,
           eventTerm % EVENT_RACE_DEVIDER,
           Time,
           0) >= rank;
}


bool CondType__IsEventMissionGroupClear(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C55BE8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    byte_4C55BE8 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v6);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      EntityList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(v11, v10) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v9 )
        break;
      if ( !v13.fields._current )
        sub_1C3E7C0(v9, v10);
      v11 = *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_14);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C55B91 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B91 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  return TotalEventPointMaster__GetPeriodTotalPoint(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           0) >= condVal;
}


bool CondType__IsEventPoint(int32_t eventId, int64_t evPoint, const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(eventId, 0) >= evPoint;
}


bool CondType__IsEventPointGroupWin(int32_t evGroupId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C55B90 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B90 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  return TotalEventPointMaster__IsGroupWin(
           (TotalEventPointMaster_o *)Instance,
           evGroupId / EVENT_POINT_DEVIDER,
           evGroupId % EVENT_POINT_DEVIDER,
           condVal,
           0);
}


bool CondType__IsEventRaceGoalScriptPlayed(int32_t eventId, int32_t termId, int32_t groupId, const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v11; // x23
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BA0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_FindIndex_int___);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C3E564(&System_Predicate_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_CondType___c__DisplayClass119_0__IsEventRaceGoalScriptPlayed_b__0__);
    sub_1C3E564(&CondType___c__DisplayClass119_0_TypeInfo);
    byte_4C55BA0 = 1;
  }
  goalTime = 0;
  v7 = sub_1C3E7B0(CondType___c__DisplayClass119_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v9);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0);
  v11 = (System_Predicate_int__o *)sub_1C3E7B0(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass119_0__IsEventRaceGoalScriptPlayed_b__0__,
    0);
  v13 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_31FF768 *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v13 < 1 )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v13, v12);
  }
}


bool CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B9E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B9E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0 )
  {
LABEL_12:
    sub_1C3E7C0(Instance, v6);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, klass_high, 0) == groupId;
}


bool CondType__IsEventRaceRankedScriptPlayed(int32_t eventId, int32_t termId, int32_t rank, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v10; // x2
  int32_t flagId; // w20

  if ( (byte_4C55BA1 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  RaceResultEntity = EventScriptMaster__getRaceResultEntity(
                       (EventScriptMaster_o *)Instance,
                       1,
                       eventId,
                       termId,
                       rank,
                       0);
  if ( RaceResultEntity )
  {
    flagId = RaceResultEntity->fields.flagId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v10);
  }
  return (char)RaceResultEntity;
}


bool CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B9F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B9F = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_17:
    sub_1C3E7C0(Instance, v6);
  return UserEventEntity__getScriptFlag(entity, flagId, 0);
}


bool CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v8; // w21
  _BOOL4 v9; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flagId;
  if ( (byte_4C55BAE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BAE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
               0);
  if ( !Instance )
    goto LABEL_18;
  v8 = *((_DWORD *)Instance + 8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v8, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( !entity )
LABEL_18:
    sub_1C3E7C0(Instance, v6);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


bool CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BE0 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BE0 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
LABEL_17:
    sub_1C3E7C0(p_image, v5);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0);
}


bool CondType__IsEventTypeStartTimeToEndDate(int32_t eventType, int32_t overWriteTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  int64_t v8; // x21
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v11; // w24
  int32_t v12; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  char v17; // w23
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x26
  int64_t v24; // x27
  System_DateTime_o v25; // x0
  int32_t Year; // w27
  System_DateTime_o v27; // x0
  int32_t Month; // w28
  System_DateTime_o v29; // x0
  int32_t Day; // w3
  System_DateTime_o v31; // x0
  uint64_t v32; // x26
  System_DateTime_o v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  int hour; // [xsp+Ch] [xbp-74h]
  System_DateTime_o dateTime; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C55BD6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD6 = 1;
  }
  dateTime.fields._dateData = 0;
  dateData = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_42;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getServerTime(0);
  if ( !datalist )
LABEL_42:
    sub_1C3E7C0(Instance, v6);
  v8 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v9);
  hour = overWriteTime / 10000;
  v11 = overWriteTime / 100 % 100;
  v12 = overWriteTime % 100;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_21:
      v21 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v23 = v22;
    if ( v22 && *(_DWORD *)(v22 + 24) == eventType )
    {
      v24 = *(_QWORD *)(v22 + 96);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_41415676(v24, 0).fields._dateData;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v25.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v25, 0);
      v27.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v27, 0);
      v29.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v29, 0);
      v31.fields._dateData = (uint64_t)&dateTime;
      System_DateTime___ctor_65022812(v31, Year, Month, Day, hour, v11, v12, 0);
      if ( *(_QWORD *)(v23 + 88) <= v8 )
      {
        v32 = dateTime.fields._dateData;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v33.fields._dateData = v32;
        if ( v8 <= NetworkManager__getTime_41414896(v33, 0) )
          goto LABEL_35;
      }
    }
  }
  v17 = 0;
LABEL_35:
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_39;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_39:
    v37 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return v17 & 1;
}


bool CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *ExchangeSvtCampaign; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x20

  if ( (byte_4C55BF4 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_EventCampaignEntity___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&Method_CondType___c__DisplayClass211_0__IsExchangeSvtBuff_b__0__);
    sub_1C3E564(&CondType___c__DisplayClass211_0_TypeInfo);
    byte_4C55BF4 = 1;
  }
  v3 = sub_1C3E7B0(CondType___c__DisplayClass211_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ExchangeSvtCampaign = (System_Collections_Generic_List_T__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                  (EventCampaignMaster_o *)Master_object,
                                                                  0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExchangeSvtCampaign, 0) )
  {
    v7 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass211_0__IsExchangeSvtBuff_b__0__,
      0);
    if ( BasicHelper__Any_object_(
           ExchangeSvtCampaign,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_EventCampaignEntity___) )
    {
      goto LABEL_23;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_20;
  if ( !v8 )
    goto LABEL_20;
  Master_object = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)v8, 0, *((_QWORD *)Master_object + 14), 0);
  if ( !Master_object )
    goto LABEL_20;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Master_object,
         *(_DWORD *)(v3 + 16),
         (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
LABEL_23:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Master_object )
      return UserExchangeSvtMaster__GetExchangeSvtId((UserExchangeSvtMaster_o *)Master_object, *(_DWORD *)(v3 + 16), 0) != 0;
LABEL_20:
    sub_1C3E7C0(Master_object, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4C55B41 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B41 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetItemGetCount(targetId, *(const MethodInfo **)&condValue) >= condValue;
}


bool CondType__IsLimitCountCondType(int32_t condType, const MethodInfo *method)
{
  return (unsigned int)(condType - 103) < 3 || (unsigned int)(condType - 150) < 3;
}


bool CondType__IsLimitedPeriodVoiceChangeTypeOn(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t Value_41951728; // w0

  if ( (byte_4C55BDE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8265/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4C55BDE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  Value_41951728 = ConstantMaster__GetValue_41951728(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8265/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0);
  return Value_41951728 != 0 && Value_41951728 == targetId;
}


bool CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B75 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B75 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 5;
LABEL_15:
    sub_1C3E7C0(Instance, v4);
  }
  return 0;
}


bool CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B73 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B73 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
         0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  condId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)EventMissionEntity__IsDaily((EventMissionEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_19;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    Instance = (DataManager_o *)UserEventMissionEntity__IsTodayMissionData(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
LABEL_19:
      if ( entity )
        return (entity->fields.missionProgressType & 0xFFFFFFFE) == 4;
LABEL_22:
      sub_1C3E7C0(Instance, v4);
    }
  }
  return 0;
}


bool CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B74 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B74 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.missionProgressType == 4;
LABEL_15:
    sub_1C3E7C0(Instance, v4);
  }
  return 0;
}


bool CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4C55B72 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B72 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_14:
    sub_1C3E7C0(Instance, v6);
  Entity = UserEventMissionCondDetailMaster__GetEntity(
             (UserEventMissionCondDetailMaster_o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
             condId,
             0);
  if ( Entity )
    LOBYTE(Entity) = Entity->fields.progressNum >= condVal;
  return (char)Entity;
}


bool CondType__IsMultiTargetParamCond(int32_t condType, const MethodInfo *method)
{
  _BOOL8 v2; // x0

  if ( (unsigned int)(condType - 148) > 0x2B )
    LOBYTE(v2) = 0;
  else
    return (0xD0000000403uLL >> ((unsigned __int8)condType + 108)) & 1;
  return v2;
}


bool CondType__IsNotCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C55BBA & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BBA = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_1C3E7C0(Instance, v5);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0);
  }
}


bool CondType__IsNotEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4C55C09 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55C09 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsEquipGet(condEquipId, method) )
  {
    return 0;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
    if ( !Master_object )
      sub_1C3E7C0(0, v5);
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Master_object, 5, condEquipId, 0);
  }
}


bool CondType__IsNotEventRaceQuestOrNotAllGroupGoal(int32_t questGroupId, int32_t eventTerm, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  bool v6; // w22
  CondType_c *v7; // x0
  int32_t EVENT_RACE_DEVIDER; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B9C & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B9C = 1;
  }
  sameGroupQuestIds = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v6 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v7 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
    {
      sub_1C3E7C0(Instance, v10);
    }
    return !EventRaceMaster__IsEveryTeamGoaled(
              (EventRaceMaster_o *)Instance,
              eventTerm / EVENT_RACE_DEVIDER,
              eventTerm % EVENT_RACE_DEVIDER,
              0);
  }
  return v6;
}


bool CondType__IsNotEventRaceQuestOrNotTargetRankGoal(
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
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B9D & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_10951/*"RACE_TARGET_GOAL_RANK"*/);
    byte_4C55B9D = 1;
  }
  sameGroupQuestIds = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  v6 = 1;
  if ( !CondType__IsNotQuestGroupClear(0, questGroupId, 1, &sameGroupQuestIds, 0, v3) )
  {
    v7 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    EVENT_RACE_DEVIDER = v7->static_fields->EVENT_RACE_DEVIDER;
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10951/*"RACE_TARGET_GOAL_RANK"*/, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !MasterData_object )
LABEL_14:
      sub_1C3E7C0(Instance, v11);
    return EventRaceMaster__GetGoaledTeamCount(
             (EventRaceMaster_o *)MasterData_object,
             eventTerm / EVENT_RACE_DEVIDER,
             eventTerm % EVENT_RACE_DEVIDER,
             (int64_t)Instance,
             0) < Value;
  }
  return v6;
}


bool CondType__IsNotEventShopPurchase(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x19
  Il2CppObject *MasterData_object; // x20
  __int64 v7; // x8

  if ( (byte_4C55B8C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0);
  if ( !Instance )
    goto LABEL_20;
  v5 = Instance;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(v5->fields.m_CancellationTokenSource) )
        sub_1C3E7C8(Instance, v4);
      v7 = *(_QWORD *)&v5->fields._DispLog;
      if ( v7 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v7 + 20),
                                        0);
          if ( Instance )
            return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
        }
      }
    }
LABEL_20:
    sub_1C3E7C0(Instance, v4);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsNotQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        System_Int32_array **sameGroupQuestIds,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4C55B80 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B80 = 1;
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


bool CondType__IsNotQuestGroupClear_40433844(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int32_t v4; // w21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v8; // x4
  int32_t v9; // w19
  int32_t monitor; // w20
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  questId = targetId;
  if ( (byte_4C55B81 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B81 = 1;
  }
  sameGroupQuestIds = 0;
  entity = 0;
  if ( condValue <= 1 )
    v4 = 1;
  else
    v4 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_33B7A5C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  if ( HIDWORD(entity[1].klass) != 26 )
    return 0;
  v9 = questId;
  monitor = (int32_t)entity[1].monitor;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v9, monitor, &sameGroupQuestIds, 1, v8) >= v4;
}


bool CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C55B8D & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8D = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_1C3E7C0(Instance, v5);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
  }
}


bool CondType__IsNotShopGroupLimit(int32_t shopGroupId, int32_t limitNum, const MethodInfo *method)
{
  ShopGroupMaster_o *Master_object; // x0
  __int64 v6; // x1
  System_Collections_ICollection_o *TargetEntityList; // x20
  void *monitor; // x8
  int v10; // w24
  UserShopMaster_o *v11; // x21
  int v12; // w26
  int32_t v13; // w25
  __int64 v14; // x8
  int32_t v15; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C55BAD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BAD = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_29;
  TargetEntityList = (System_Collections_ICollection_o *)ShopGroupMaster__GetTargetEntityList(
                                                           Master_object,
                                                           shopGroupId,
                                                           0);
  if ( BasicHelper__IsNullOrEmpty(TargetEntityList, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !TargetEntityList )
LABEL_29:
    sub_1C3E7C0(Master_object, v6);
  monitor = TargetEntityList[1].monitor;
  v10 = (_DWORD)monitor - 1;
  if ( (int)monitor >= 1 )
  {
    v11 = (UserShopMaster_o *)Master_object;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *((_QWORD *)&TargetEntityList[2].klass + v12);
      if ( !v14 )
        goto LABEL_29;
      v15 = *(_DWORD *)(v14 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_29;
      Master_object = (ShopGroupMaster_o *)UserShopMaster__TryGetEntity(
                                             v11,
                                             &entity,
                                             (int64_t)Master_object[2].fields.list[1].monitor,
                                             v15,
                                             0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_29;
        v13 += entity->fields.num;
      }
      if ( v10 == v12 )
        return v13 < limitNum;
      if ( (unsigned int)++v12 >= LODWORD(TargetEntityList[1].monitor) )
        sub_1C3E7C8(Master_object, v6);
    }
  }
  v13 = 0;
  return v13 < limitNum;
}


bool CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8
  bool v6; // w23
  UserShopMaster_o *v7; // x20
  unsigned __int64 v8; // x24
  int32_t v9; // w22

  if ( (byte_4C55B8E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  max_length = values->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = (UserShopMaster_o *)Instance;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v4);
      v9 = values->m_Items[v8];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v7 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v7,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v9,
                                    0);
      if ( !Instance )
        break;
      if ( HIDWORD(Instance->fields.m_CancellationTokenSource) )
      {
        LODWORD(max_length) = values->max_length;
        v6 = (__int64)++v8 < (int)max_length;
        if ( (__int64)v8 < (int)max_length )
          continue;
      }
      return v6;
    }
LABEL_19:
    sub_1C3E7C0(Instance, v4);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        bool isCollection,
        BattleVoicePlayCondArgs_o *battleCondArgs,
        const MethodInfo *method)
{
  BattleData_o *m_CachedPtr; // x21
  char IsQuestClear; // w0
  int32_t v12; // w2
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x21
  bool v15; // w2
  int32_t v16; // w0
  int32_t v17; // w1
  bool v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  CondType_c *v21; // x0
  __int64 v22; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  DataManager_o *Instance; // x0
  int32_t ChallengeCountsFromId; // w0
  bool v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w1
  int32_t v30; // w0
  bool v31; // w2
  int32_t v32; // w0
  int32_t v33; // w1
  bool IsPurchaseShop; // w0
  CondType_c *v35; // x0
  UserQuestMaster_o *v36; // x21
  int32_t ClearCountsFromId; // w0
  CondType_c *v38; // x0
  UserQuestMaster_o *v39; // x21
  int32_t v40; // w0
  CondType_c *v41; // x0
  UserQuestMaster_o *v42; // x21
  bool v43; // zf
  CondType_c *v44; // x0
  UserQuestMaster_o *v45; // x21
  bool v46; // cc
  NetworkManager_c *v47; // x0
  int64_t v48; // x21
  NetworkManager_c *v49; // x0
  int64_t v50; // x21
  int64_t EventPointNoGroup; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  bool v54; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v56; // x21
  int64_t Point; // x0
  Il2CppObject *v58; // x21
  bool v59; // cc
  Il2CppObject *v60; // x21
  Il2CppObject *v61; // x21
  int64_t m_CancellationTokenSource_high; // x8
  Il2CppObject *v63; // x21
  Il2CppObject *v64; // x21
  __int64 lookup_low; // x8
  CondType_c *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *v68; // x21
  bool v69; // w2
  int32_t v70; // w0
  int32_t v71; // w1
  bool v72; // w2
  int32_t v73; // w0
  int32_t v74; // w1
  bool v75; // w3
  bool v76; // w2
  int32_t v77; // w0
  int32_t v78; // w1
  CondType_c *v79; // x0
  int32_t v80; // w2
  bool v81; // w4
  int32_t v82; // w0
  int32_t v83; // w1
  bool v84; // w3
  int32_t v85; // w2
  bool v86; // w4
  int32_t v87; // w0
  int32_t v88; // w1
  bool v89; // w3
  int32_t v90; // w2
  CondType_c *v91; // x0
  BattleVoicePlayCondArgs_o *v92; // x0
  int32_t v93; // w1
  int32_t v94; // w2
  bool v95; // w3
  int32_t v96; // w2
  bool v97; // w2
  int32_t v98; // w0
  int64_t v99; // x1
  int32_t v100; // w2
  Il2CppObject *Master_object; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8
  UserGameEntity_o *v104; // x0
  int32_t v105; // w8
  UserGameEntity_o *v106; // x0
  int32_t v107; // w8
  int32_t v108; // w2
  bool v109; // w2
  BattleVoicePlayCondArgs_o *v110; // x0
  int32_t v111; // w1
  int64_t v113; // [xsp+0h] [xbp-50h] BYREF
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF

  m_CachedPtr = (BattleData_o *)battleCondArgs;
  if ( (byte_4C55B38 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B38 = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0;
  v113 = 0;
  startedAt = 0;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v13 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v13 = NetworkManager_TypeInfo;
      }
      userIdNumber = v13->static_fields->userIdNumber;
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
      IsQuestClear = CondType__IsServantLevel_40368392(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 1;
      goto LABEL_386;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v15 = 1;
      v16 = targetId;
      v17 = condValue;
      goto LABEL_370;
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
      v18 = 1;
      v19 = targetId;
      v20 = condValue;
      goto LABEL_79;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v19 = targetId;
      v20 = condValue;
      v18 = 0;
LABEL_79:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v19, v20, v18, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v21 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v21);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !UserQuestMaster )
        goto LABEL_832;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                                UserQuestMaster,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
      goto LABEL_590;
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v26 = 1;
      v27 = targetId;
      v28 = condValue;
      goto LABEL_207;
    case 35:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v29 = 1;
      v30 = targetId;
      goto LABEL_703;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v31 = 1;
      v32 = targetId;
      v33 = condValue;
      goto LABEL_253;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 42:
      v35 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v36 = CondType__GetUserQuestMaster((const MethodInfo *)v35);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v36 )
        goto LABEL_832;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                            v36,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0);
      goto LABEL_144;
    case 43:
      v38 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = CondType__GetUserQuestMaster((const MethodInfo *)v38);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v39 )
        goto LABEL_832;
      v40 = UserQuestMaster__getChallengeCountsFromId(
              v39,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0);
      goto LABEL_155;
    case 44:
      v41 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v42 = CondType__GetUserQuestMaster((const MethodInfo *)v41);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v42 )
        goto LABEL_832;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(
                            v42,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0);
LABEL_144:
      v43 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_753;
    case 45:
      v44 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v45 = CondType__GetUserQuestMaster((const MethodInfo *)v44);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v45 )
        goto LABEL_832;
      v40 = UserQuestMaster__getClearCountsFromId(
              v45,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0);
LABEL_155:
      v46 = v40 <= (int)condValue;
      goto LABEL_827;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v47 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v47 = NetworkManager_TypeInfo;
      }
      v48 = v47->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v48, targetId, condValue, -1, 0, method);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v49 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v49 = NetworkManager_TypeInfo;
      }
      v50 = v49->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v50, targetId, condValue, -1, 0, method);
      goto LABEL_812;
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
      goto LABEL_812;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
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
      IsQuestClear = CondType__IsQuestClear_40371188(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetId;
      v28 = condValue;
      v26 = 0;
LABEL_207:
      IsQuestClear = CondType__IsQuestGroupClear(0, v27, v28, v26, (const MethodInfo *)battleCondArgs);
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
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0);
      goto LABEL_305;
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
      goto LABEL_812;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v32 = targetId;
      v33 = condValue;
      v31 = 0;
LABEL_253:
      IsPurchaseShop = CondType__IsQuestClear_40371188(v32, v33, v31, (const MethodInfo *)isCollection);
      goto LABEL_812;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetId;
      v53 = condValue;
      v54 = 0;
      goto LABEL_656;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_832;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId / 100,
                            targetId,
                            0);
      goto LABEL_305;
    case 84:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v56 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_832;
      Point = UserEventPointMaster__GetPoint(
                (UserEventPointMaster_o *)v56,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId / 100,
                targetId,
                0);
      goto LABEL_315;
    case 85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v58 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v58 )
        goto LABEL_832;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v58,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            -1,
                            0);
LABEL_305:
      v59 = EventPointNoGroup < condValue;
      goto LABEL_591;
    case 86:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v60 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v60 )
        goto LABEL_832;
      Point = UserEventPointMaster__GetEventPointTotal(
                (UserEventPointMaster_o *)v60,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId,
                -1,
                0);
LABEL_315:
      v46 = Point <= condValue;
      goto LABEL_827;
    case 87:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v61 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v61 )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v61,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
      m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_809;
    case 88:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v63 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v63 )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v63,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
      v46 = SHIDWORD(Instance->fields.m_CancellationTokenSource) <= condValue;
      goto LABEL_827;
    case 89:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v64 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v64 )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v64,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
      lookup_low = *(int *)&Instance->fields._DispLog;
      goto LABEL_752;
    case 90:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 93:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v66 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v66);
      return IsQuestClear & 1;
    case 96:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 97:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 98:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v15 = 1;
      v16 = targetId;
      v17 = condValue;
      goto LABEL_370;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v16 = targetId;
      v17 = condValue;
      v15 = 0;
LABEL_370:
      IsQuestClear = CondType__IsServantFriendship(v16, v17, v15, (const MethodInfo *)isCollection);
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
      goto LABEL_812;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLimit_40368596(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 2;
LABEL_386:
      IsQuestClear = CondType__IsServantLimit_40368596(targetId, condValue, v12, (const MethodInfo *)isCollection);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v67 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v67 )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v67,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
      lookup_low = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_752;
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
      goto LABEL_812;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 123:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_832;
      v68 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v68 )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v68,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
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
      v69 = 1;
      v70 = targetId;
      v71 = condValue;
      goto LABEL_449;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v70 = targetId;
      v71 = condValue;
      v69 = 0;
LABEL_449:
      IsQuestClear = CondType__IsBattleLineReusltCount(v70, v71, v69, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v72 = 1;
      v73 = targetId;
      v74 = condValue;
      goto LABEL_456;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v73 = targetId;
      v74 = condValue;
      v72 = 0;
LABEL_456:
      v75 = 0;
      goto LABEL_463;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v72 = 1;
      v75 = 1;
      v73 = targetId;
      v74 = condValue;
      goto LABEL_463;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v75 = 1;
      v73 = targetId;
      v74 = condValue;
      v72 = 0;
LABEL_463:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(
                       v73,
                       v74,
                       v72,
                       v75,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 134:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = 1;
      v77 = targetId;
      v78 = condValue;
      goto LABEL_470;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v77 = targetId;
      v78 = condValue;
      v76 = 0;
LABEL_470:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v77, v78, v76, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
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
      goto LABEL_590;
    case 143:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__UserEventMapValueContains(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 144:
      v79 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v79);
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
      goto LABEL_812;
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
      goto LABEL_812;
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
      goto LABEL_590;
    case 162:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_832;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0);
      goto LABEL_590;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_832;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0);
LABEL_590:
      v59 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_591;
    case 168:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 174:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_590;
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
      goto LABEL_590;
    case 179:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 180:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
    case 181:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
    case 182:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
    case 183:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
    case 184:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
    case 185:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_812;
    case 187:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_590;
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
      v80 = 1;
      goto LABEL_615;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 2;
LABEL_615:
      v81 = 1;
      v82 = targetId;
      v83 = condValue;
      v84 = 0;
      goto LABEL_637;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
      goto LABEL_622;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
LABEL_622:
      v86 = 1;
      v87 = targetId;
      v88 = condValue;
      v89 = 0;
      goto LABEL_652;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 1;
      goto LABEL_629;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 2;
LABEL_629:
      v84 = 1;
      v81 = 1;
      v82 = targetId;
      v83 = condValue;
      goto LABEL_637;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 2;
      goto LABEL_636;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v80 = 1;
LABEL_636:
      v84 = 1;
      v82 = targetId;
      v83 = condValue;
      v81 = 0;
LABEL_637:
      IsQuestClear = CondType__IsDeadRaidDay(v82, v83, v80, v84, v81, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
      goto LABEL_644;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
LABEL_644:
      v89 = 1;
      v86 = 1;
      v87 = targetId;
      v88 = condValue;
      goto LABEL_652;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 2;
      goto LABEL_651;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v85 = 1;
LABEL_651:
      v89 = 1;
      v87 = targetId;
      v88 = condValue;
      v86 = 0;
LABEL_652:
      IsQuestClear = CondType__IsDeadRaidGroup(v87, v88, v85, v89, v86, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = 1;
      v52 = targetId;
      v53 = condValue;
LABEL_656:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v52, v53, v54, (const MethodInfo *)battleCondArgs);
      goto LABEL_812;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 1;
      goto LABEL_663;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v90 = 2;
LABEL_663:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v90, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v91 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = ((_DWORD)condValue == 0) ^ CondType__IsAuthTDAccelerate((const MethodInfo *)v91);
      return IsQuestClear & 1;
    case 209:
      if ( !m_CachedPtr )
        goto LABEL_796;
      v92 = (BattleVoicePlayCondArgs_o *)m_CachedPtr;
      v93 = targetId;
      v94 = condValue;
      v95 = 0;
      goto LABEL_671;
    case 210:
      if ( !m_CachedPtr )
        goto LABEL_796;
      v95 = 1;
      v92 = (BattleVoicePlayCondArgs_o *)m_CachedPtr;
      v93 = targetId;
      v94 = condValue;
LABEL_671:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v92, v93, v94, v95, 0);
      return IsQuestClear & 1;
    case 211:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v96 = 1;
      goto LABEL_681;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v96 = 2;
LABEL_681:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, v96, (const MethodInfo *)isCollection);
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
      if ( m_CachedPtr )
        m_CachedPtr = (BattleData_o *)m_CachedPtr->fields.m_CachedPtr;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, m_CachedPtr, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v97 = 1;
      v98 = targetId;
      v99 = condValue;
      goto LABEL_699;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v98 = targetId;
      v99 = condValue;
      v97 = 0;
LABEL_699:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v98, v99, v97, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v30 = targetId;
      v29 = condValue;
LABEL_703:
      IsQuestClear = CondType__IsPurchaseShop(v30, v29, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 220:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAboveEventTradeTotalNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 221:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v100 = 2;
      goto LABEL_713;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v100 = 1;
LABEL_713:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v100, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 225:
    case 226:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsQuestClear = BattleVoicePlayCondArgs__IsOpenBattlePoint(
                       (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                       targetId,
                       condValue,
                       condType == 225,
                       0);
      return IsQuestClear & 1;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 229:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_832;
      IsQuestClear = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      return IsQuestClear & 1;
    case 230:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_832;
      v59 = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      goto LABEL_591;
    case 231:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsQuestClear = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                       (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                       targetId,
                       0);
      return IsQuestClear & 1;
    case 232:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsQuestClear = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(
                       (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                       targetId,
                       0);
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
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
                         (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                         targetId,
                         0);
      goto LABEL_812;
    case 236:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(
                         (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                         targetId,
                         0);
      goto LABEL_812;
    case 237:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_832;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_832;
      lookup_low = SLODWORD(Instance->fields.lookup);
LABEL_752:
      v43 = lookup_low == condValue;
LABEL_753:
      IsQuestClear = v43;
      return IsQuestClear & 1;
    case 241:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
LABEL_832:
        sub_1C3E7C0(Instance, v22);
      IsQuestClear = UserImagePartsGroupMaster__ContainsImagePartsGroupIdx(
                       (UserImagePartsGroupMaster_o *)Instance,
                       targetId,
                       condValue,
                       0);
      return IsQuestClear & 1;
    case 242:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( SelfUserGame )
        lv = SelfUserGame->fields.lv;
      else
        lv = 0;
      v59 = lv < targetId;
      goto LABEL_591;
    case 243:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v104 = UserGameMaster__getSelfUserGame(0);
      if ( v104 )
        v105 = v104->fields.lv;
      else
        v105 = 0;
      v46 = v105 <= targetId;
LABEL_827:
      IsQuestClear = v46;
      return IsQuestClear & 1;
    case 244:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v106 = UserGameMaster__getSelfUserGame(0);
      if ( v106 )
        v107 = v106->fields.lv;
      else
        v107 = 0;
      IsQuestClear = v107 == targetId;
      return IsQuestClear & 1;
    case 245:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v108 = 1;
      goto LABEL_778;
    case 246:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v108 = 2;
LABEL_778:
      IsQuestClear = CondType__IsCompleteHighestWaveValue(targetId, condValue, v108, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 247:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsValidPrivilege(
                       targetId,
                       condValue,
                       &startedAt,
                       &v113,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 248:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsValidPrivilege(
                         targetId,
                         condValue,
                         &v113,
                         &startedAt,
                         (const MethodInfo *)battleCondArgs);
      goto LABEL_812;
    case 249:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsQuestClear = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(
                       (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                       targetId,
                       0);
      return IsQuestClear & 1;
    case 250:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsPurchaseShop = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(
                         (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                         targetId,
                         0);
      goto LABEL_812;
    case 251:
      if ( !m_CachedPtr )
        goto LABEL_796;
      IsQuestClear = BattleVoicePlayCondArgs__IsSelectTreasureDvcCard(
                       (BattleVoicePlayCondArgs_o *)m_CachedPtr,
                       targetId,
                       0);
      return IsQuestClear & 1;
    case 252:
      if ( !m_CachedPtr )
        goto LABEL_796;
      v109 = 1;
      v110 = (BattleVoicePlayCondArgs_o *)m_CachedPtr;
      v111 = condValue;
      goto LABEL_795;
    case 253:
      if ( m_CachedPtr )
      {
        v110 = (BattleVoicePlayCondArgs_o *)m_CachedPtr;
        v111 = condValue;
        v109 = 0;
LABEL_795:
        IsQuestClear = BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(v110, v111, v109, 0);
      }
      else
      {
LABEL_796:
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
      goto LABEL_812;
    case 256:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_812;
    case 258:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      m_CancellationTokenSource_high = CondType__CountGrandServantSet(
                                         targetId,
                                         condValue,
                                         (const MethodInfo *)condValue);
LABEL_809:
      v59 = m_CancellationTokenSource_high < condValue;
LABEL_591:
      IsQuestClear = !v59;
      return IsQuestClear & 1;
    case 259:
      IsQuestClear = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
      return IsQuestClear & 1;
    case 260:
      IsPurchaseShop = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
LABEL_812:
      IsQuestClear = !IsPurchaseShop;
      break;
    case 263:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotShopGroupLimit(targetId, condValue, (const MethodInfo *)condValue);
      break;
    case 264:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEquipGet(targetId, *(const MethodInfo **)&targetId);
      break;
    case 265:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotEquipGet(targetId, *(const MethodInfo **)&targetId);
      break;
    default:
      return IsQuestClear & 1;
  }
  return IsQuestClear & 1;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpenExcludeBeforeClearQuest(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool IsQuestClear_40371188; // w0
  NetworkManager_c *v13; // x0
  int64_t v14; // x23
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C55B39 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B39 = 1;
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
        return CondType__IsOpen(condType, targetId, condValue, 0, 0, method);
      }
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40371188 = CondType__IsQuestClear_40371188(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_40371188;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_40371188(
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
                   0);
        goto LABEL_13;
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v15 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v15 = NetworkManager_TypeInfo;
      }
      userIdNumber = v15->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_40371188 = CondType__IsQuestPhaseClear(
                                userIdNumber,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                method);
      return !IsQuestClear_40371188;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13 = NetworkManager_TypeInfo;
    }
    v14 = v13->static_fields->userIdNumber;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v14, targetId, condValue, beforeClearQuestId, isCheckResetFlag, method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpenForUsrSvt(int32_t condType, int32_t condValue, int64_t userSvtId, const MethodInfo *method)
{
  bool v7; // w0
  int32_t v8; // w2
  bool result; // w0
  int32_t v10; // w2
  int64_t v11; // x0
  int32_t v12; // w1
  int64_t v13; // x0
  int32_t v14; // w1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject v17; // q1
  const MethodInfo *v18; // x5
  int64_t v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]

  if ( (byte_4C55B44 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B44 = 1;
  }
  if ( condType <= 38 )
  {
    v7 = 1;
    switch ( condType )
    {
      case 0:
        return v7;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
        {
          sub_1C3E7C0(Instance, v16);
        }
        v17 = Instance[4];
        *(Il2CppObject *)&v21.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v21.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v20, 0);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsQuestClear(v19, condValue, -1, 0, 0, v18);
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
        result = CondType__IsServantGet_40413064(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantFriendship_40413220(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGroup_40413756(userSvtId, condValue, (const MethodInfo *)userSvtId);
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
    v7 = 0;
    if ( condType <= 149 )
    {
      switch ( condType )
      {
        case 'g':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v11 = userSvtId;
          v12 = condValue;
          v8 = 0;
          return CondType__IsServantLimit(v11, v12, v8, method);
        case 'h':
LABEL_20:
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v8 = 1;
          goto LABEL_23;
        case 'i':
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v8 = 2;
LABEL_23:
          v11 = userSvtId;
          v12 = condValue;
          return CondType__IsServantLimit(v11, v12, v8, method);
      }
      return v7;
    }
    if ( condType == 150 )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 = userSvtId;
      v14 = condValue;
      v10 = 0;
    }
    else
    {
      if ( condType == 151 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v10 = 1;
      }
      else
      {
        if ( condType != 152 )
          return v7;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v10 = 2;
      }
      v13 = userSvtId;
      v14 = condValue;
    }
    return CondType__IsServantLimitImage(v13, v14, v10, method);
  }
  return result;
}


bool CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  EventRaidMaster_o *v9; // x22
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v12; // x25
  int max_length; // w8
  int64_t v14; // x26
  unsigned int v15; // w20
  int32_t v16; // w19
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x27
  __int64 v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x27
  CondType___c_c *v21; // x0
  System_Func_object__bool__o *_9__215_0; // x28
  Il2CppObject *v23; // x29
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  EventRaidMaster_o *v28; // [xsp+8h] [xbp-78h]
  int32_t v29; // [xsp+10h] [xbp-70h]
  int32_t v30; // [xsp+14h] [xbp-6Ch]
  TotalEventRaidEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C55BF7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
    sub_1C3E564(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_CondType___c__IsOpenRaidGroupNum_b__215_0__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55BF7 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_39;
  v30 = checkType;
  v9 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_39:
    sub_1C3E7C0(Instance, v8);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v14 = Instance;
    v15 = 0;
    v16 = 0;
    v29 = num;
    v28 = v9;
    while ( 1 )
    {
      if ( v15 >= max_length )
LABEL_40:
        sub_1C3E7C8(Instance, v8);
      v17 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v15;
      v18 = v17[4];
      if ( !v18 )
        goto LABEL_39;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v17[4], v14, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_39;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     eventId,
                     HIDWORD(v18->_1.name),
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v9, eventId, HIDWORD(v18->_1.name), 0);
          if ( !Instance )
            goto LABEL_39;
          v19 = *(_QWORD *)(Instance + 24);
          if ( !v19 )
            goto LABEL_30;
          if ( !(_DWORD)v19 )
            goto LABEL_40;
          if ( !v12 )
            goto LABEL_39;
          Instance = (int64_t)QuestReleaseMaster__getListByQuestID(
                                (QuestReleaseMaster_o *)v12,
                                *(_DWORD *)(Instance + 32),
                                0);
          if ( !Instance )
            goto LABEL_39;
          v20 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
          if ( !*(_QWORD *)(Instance + 24) )
            goto LABEL_30;
          v21 = CondType___c_TypeInfo;
          if ( !CondType___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
            v21 = CondType___c_TypeInfo;
          }
          _9__215_0 = (System_Func_object__bool__o *)v21->static_fields->__9__215_0;
          if ( !_9__215_0 )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              v21 = CondType___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v21->static_fields->__9;
            _9__215_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestReleaseEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__215_0, v23, Method_CondType___c__IsOpenRaidGroupNum_b__215_0__, 0);
            static_fields = CondType___c_TypeInfo->static_fields;
            static_fields->__9__215_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__215_0;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__215_0, (int32_t)_9__215_0, v25, v26);
            num = v29;
            v9 = v28;
          }
          Instance = System_Linq_Enumerable__All_object_(
                       v20,
                       (System_Func_TSource__bool__o *)_9__215_0,
                       (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
          if ( (Instance & 1) != 0 )
LABEL_30:
            ++v16;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_34;
    }
  }
  v16 = 0;
LABEL_34:
  if ( v30 == 2 )
    return v16 <= num;
  if ( v30 == 1 )
    return v16 >= num;
  return v16 == num;
}


bool CondType__IsOpenWithSumOfProgressCount(
        int32_t condType,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *IsOpen; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  il2cpp_array_size_t max_length; // x8
  int32_t v13; // w19
  int64_t v14; // x2
  int32_t v15; // w0
  int32_t v16; // w1
  bool result; // w0
  System_Func_int__int__o *v18; // x0
  intptr_t *v19; // x8
  unsigned __int64 v20; // x22
  int32_t v21; // w23
  __int64 v22; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v24; // x5
  bool v25; // w0
  CondType_CountDelegate_o *v26; // x0
  const MethodInfo *v27; // x3
  intptr_t *v28; // x8
  CondType_CountDelegate_o *v29; // x21
  const MethodInfo *v30; // x2
  int32_t ClearCountsFromIds; // w0
  bool v32; // cc
  int32_t v33; // w23
  __int64 v34; // x24
  __int64 v35; // x25
  int32_t v36; // w22
  int32_t v37; // w19
  System_Func_int__bool__o *v38; // x0
  intptr_t *v39; // x8
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

  if ( (byte_4C55B42 & 1) == 0 )
  {
    sub_1C3E564(&Method_CondType_CountExchangeServantMaxLimit__);
    sub_1C3E564(&Method_CondType_CountServantClassTotalFriendShipUp__);
    sub_1C3E564(&Method_CondType_CountServantClassTotalLevelUp__);
    sub_1C3E564(&Method_CondType_CountServantClassTotalLimitUp__);
    sub_1C3E564(&Method_CondType_CountServantClassTotalSkillLevelUp__);
    sub_1C3E564(&Method_CondType_CountServantFriendShipClassNum__);
    sub_1C3E564(&Method_CondType_CountServantLevelClassNum__);
    sub_1C3E564(&Method_CondType_CountServantLevelIdNum__);
    sub_1C3E564(&Method_CondType_CountServantTargetSkillLvClassNum__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&CondType_CountDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_int____78225040);
    sub_1C3E564(&System_Func_int__int__TypeInfo);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__);
    sub_1C3E564(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__);
    sub_1C3E564(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__);
    sub_1C3E564(&CondType___c__DisplayClass23_0_TypeInfo);
    byte_4C55B42 = 1;
  }
  v7 = sub_1C3E7B0(CondType___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_144:
    sub_1C3E7C0(IsOpen, v9);
  *(_DWORD *)(v7 + 16) = targetNum;
  if ( !targetIds )
    return 0;
  max_length = targetIds->max_length;
  if ( !max_length )
    return 0;
  if ( (_DWORD)max_length == 1 )
  {
    v13 = targetIds->m_Items[0];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v14 = targetNum;
    v15 = condType;
    v16 = v13;
    return CondType__IsOpen(v15, v16, v14, 0, 0, v11);
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
        if ( (int)max_length < 1 )
        {
          v33 = 0;
        }
        else
        {
          if ( !(unsigned int)targetIds->max_length )
            goto LABEL_40;
          v33 = 0;
          v34 = 0;
          v35 = (unsigned int)targetIds->max_length - 1LL;
          while ( 1 )
          {
            v36 = targetIds->m_Items[v34];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsOpen = (void *)CondType__IsOpen(condType, v36, 0, 0, 0, v11);
            v33 += (unsigned __int8)IsOpen & 1;
            if ( v35 == v34 )
              break;
            if ( ++v34 >= (unsigned __int64)LODWORD(targetIds->max_length) )
              goto LABEL_40;
          }
          targetNum = *(_DWORD *)(v7 + 16);
        }
        v32 = v33 < targetNum;
        return !v32;
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
        v44 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v44);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
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
                               0);
        goto LABEL_30;
      case 26:
      case 36:
      case 37:
      case 38:
      case 41:
        if ( (int)max_length < 1 )
        {
          v21 = 0;
        }
        else
        {
          v20 = 0;
          v21 = 0;
          v22 = (unsigned int)targetIds->max_length;
          do
          {
            IsOpen = CondType_TypeInfo;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( v20 >= LODWORD(targetIds->max_length) )
              goto LABEL_40;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v9);
            v25 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[v20++], 0, 0, 0, v24);
            v21 += v25;
          }
          while ( v22 != v20 );
          targetNum = *(_DWORD *)(v7 + 16);
        }
        result = v21 < targetNum;
        break;
      case 30:
        v46 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v47 = CondType__GetUserQuestMaster((const MethodInfo *)v46);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v47 )
          goto LABEL_144;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                               v47,
                               *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                               targetIds,
                               0);
        goto LABEL_30;
      case 42:
        v48 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v49 = CondType__GetUserQuestMaster((const MethodInfo *)v48);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v49 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(
                                   v49,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0);
        return ChallengeCountsFromIds == *(_DWORD *)(v7 + 16);
      case 43:
        v51 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v52 = CondType__GetUserQuestMaster((const MethodInfo *)v51);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v52 )
          goto LABEL_144;
        v53 = UserQuestMaster__getChallengeCountsFromIds(
                v52,
                *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                targetIds,
                0);
        return v53 <= *(_DWORD *)(v7 + 16);
      case 44:
        v54 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v55 = CondType__GetUserQuestMaster((const MethodInfo *)v54);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v55 )
          goto LABEL_144;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(
                                   v55,
                                   *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL),
                                   targetIds,
                                   0);
        return ChallengeCountsFromIds == *(_DWORD *)(v7 + 16);
      case 45:
        v56 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v57 = CondType__GetUserQuestMaster((const MethodInfo *)v56);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        IsOpen = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          IsOpen = NetworkManager_TypeInfo;
        }
        if ( !v57 )
          goto LABEL_144;
        v53 = UserQuestMaster__getClearCountsFromIds(v57, *(_QWORD *)(*((_QWORD *)IsOpen + 23) + 64LL), targetIds, 0);
        return v53 <= *(_DWORD *)(v7 + 16);
      default:
        if ( condType == 92 )
          return 0;
        if ( condType != 136 )
          goto LABEL_62;
        if ( !CondType_TypeInfo->_2.cctor_finished )
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
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v38 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v18 = (System_Func_int__int__o *)sub_1C3E7B0(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v40 = v18;
          System_Func_int__int____ctor(v18, 0, *v19, 0);
          v42 = *(_DWORD *)(v7 + 16);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v40, targetIds, v42, v41);
        case 190:
          v38 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v38 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v43 = (System_Func_TSource__bool__o *)v38;
          System_Func_int__bool____ctor(v38, (Il2CppObject *)v7, *v39, 0);
          return System_Linq_Enumerable__Any_int__51409292(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v43,
                   (const MethodInfo_310718C *)Method_System_Linq_Enumerable_Any_int____78225040);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v9);
LABEL_30:
              v32 = ClearCountsFromIds < *(_DWORD *)(v7 + 16);
              return !v32;
            }
            goto LABEL_62;
          }
          v26 = (CondType_CountDelegate_o *)sub_1C3E7B0(CondType_CountDelegate_TypeInfo);
          v28 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_27:
      v29 = v26;
      CondType_CountDelegate___ctor(v26, 0, *v28, v27);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v29, v30);
      goto LABEL_30;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v26 = (CondType_CountDelegate_o *)sub_1C3E7B0(CondType_CountDelegate_TypeInfo);
        v28 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_27;
      }
LABEL_62:
      if ( (_DWORD)max_length )
      {
        v37 = targetIds->m_Items[0];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v15 = condType;
        v16 = v37;
        v14 = 0;
        return CondType__IsOpen(v15, v16, v14, 0, 0, v11);
      }
LABEL_40:
      sub_1C3E7C8(IsOpen, v9);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v10);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen_40410028(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4C55B43 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B43 = 1;
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
bool CondType__IsOpen_40414412(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4C55B45 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B45 = 1;
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
      result = CondType__IsServantLevel_40415036(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_40415196(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_40413064(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_40415436(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_40413756(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_40415740(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_40415908(userId, condValue, (const MethodInfo *)userId);
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


bool CondType__IsPlayedNotMeetsScript(int32_t notMeetsScriptId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = notMeetsScriptId;
  if ( (byte_4C55BB7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22324/*"notMeets"*/);
    byte_4C55BB7 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63636468((System_String_o *)StringLiteral_22324/*"notMeets"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0) == 1;
}


bool CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55BAB & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C55BAB = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1C3E7C0(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54190 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54190 = 1;
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


bool CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55B6A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseQpShop_40415740(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C55B6B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  return ShopEntity__IsCondType_42892912((ShopEntity_o *)Instance, userId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4C55B6F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B6F = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( v3 <= 1 )
    v3 = 1;
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55B6D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseStoneShop_40415908(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C55B6E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  return ShopEntity__IsCondType_42892912((ShopEntity_o *)Instance, userId, 0);
}


bool CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  int v8; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  int v10; // w23
  ShopGroupEntity_o *v11; // x8
  ShopEntity_o *v12; // x21

  if ( (byte_4C55BA6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      v8 = max_length - 1;
      if ( (int)max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v10 = 0;
        while ( 1 )
        {
          v11 = v6->m_Items[v10];
          if ( !v11 || !v9 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v9,
                       v11->fields.shopId,
                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v12 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0) && !ShopEntity__IsSoldOut(v12, 0) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v12, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v8 == v10 )
            goto LABEL_20;
          if ( (unsigned int)++v10 >= LODWORD(v6->max_length) )
            sub_1C3E7C8(Instance, v4);
        }
LABEL_22:
        sub_1C3E7C0(Instance, v4);
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


bool CondType__IsQuestAvailable(int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  BalanceConfig_c *v6; // x8
  int32_t WarId_k__BackingField; // w21
  TerminalPramsManager_c *v8; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0

  if ( (byte_4C55B92 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C55B92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 22, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C51117 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C51117 = 1;
        }
        v5 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v5 = TerminalPramsManager_TypeInfo;
        }
        v6 = BalanceConfig_TypeInfo;
        WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v6 = BalanceConfig_TypeInfo;
        }
        if ( WarId_k__BackingField != v6->static_fields->OrdealCallWarId )
          goto LABEL_25;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C538E9 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C538E9 = 1;
        }
        v8 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v8 = TerminalPramsManager_TypeInfo;
        }
        if ( !v8->static_fields->_IsPhaseClear_k__BackingField )
        {
LABEL_25:
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !Instance )
            goto LABEL_30;
          QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
          if ( QuestInfo )
            return QuestInfo->fields.dispType == 1;
        }
      }
    }
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1C3E7C0(Instance, v4);
  return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, questId, 0, 0);
}


bool CondType__IsQuestClear(
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
  UserQuestEntity_o *EntityFromId; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C55B4A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55B4A = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( !UserQuestMaster )
    goto LABEL_19;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0);
  if ( !isCollection )
    goto LABEL_14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1C3E7C0(UserQuestMaster, v13);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0) )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, isCheckResetFlag, v15);
  }
LABEL_14:
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0) )
    return 0;
  else
    return (beforeClearQuestId < 1 || beforeClearQuestId != condQuestId)
         & (UserQuestEntity__getClearNum(EntityFromId, 0) > 0);
}


bool CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool IsQuestClear_40371188; // w8
  bool result; // w0
  CondType_c *v8; // x0
  __int64 v9; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *Entity; // x0
  int64_t klass; // x20

  if ( (byte_4C55BDF & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BDF = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40371188 = CondType__IsQuestClear_40371188(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_40371188 )
  {
    v8 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
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
                                0);
    if ( !Entity )
      goto LABEL_21;
    klass = (int64_t)Entity[1].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Entity = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Entity )
LABEL_21:
      sub_1C3E7C0(Entity, v9);
    return klass < EventMaster__GetEventStartedAt(Entity, eventId, 0);
  }
  return result;
}


bool CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  __int64 v6; // x1
  UserQuestMaster_o *UserQuestMaster; // x21
  NetworkManager_c *v8; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4C55B7E & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B7E = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    sub_1C3E7C0(v8, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v8->static_fields->userIdNumber, condId, 0);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0) >= condVal;
  return (char)EntityFromId;
}


bool CondType__IsQuestClear_40371188(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C55B4B & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B4B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear(userIdNumber, condQuestId, beforeClearQuestId, isCheckResetFlag, 0, v4);
}


bool CondType__IsQuestEnable(int32_t openQuestid, int32_t closeQuestid, const MethodInfo *method)
{
  UserQuestEntity_o *EntityFromId; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x21
  CondType_c *v10; // x0
  CondType_c *v11; // x0
  UserQuestEntity_o *v12; // x0

  if ( (byte_4C55B51 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B51 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( openQuestid >= 1 )
  {
    v10 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v10);
    if ( !Instance )
      goto LABEL_27;
    EntityFromId = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, openQuestid, 0);
    if ( !EntityFromId )
      return (char)EntityFromId;
    if ( UserQuestEntity__getClearNum(EntityFromId, 0) < 1 )
      goto LABEL_26;
  }
  if ( closeQuestid < 1 )
  {
LABEL_5:
    LOBYTE(EntityFromId) = 1;
    return (char)EntityFromId;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( !Instance )
LABEL_27:
    sub_1C3E7C0(Instance, v7);
  v12 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, closeQuestid, 0);
  if ( !v12 || UserQuestEntity__getClearNum(v12, 0) <= 0 )
    goto LABEL_5;
LABEL_26:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


bool CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Int32_array *Instance; // x0
  const MethodInfo *v7; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v9; // x19
  bool v10; // w25
  int v11; // w22
  unsigned __int64 v12; // x23
  int32_t v13; // w20

  if ( (byte_4C55B93 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B93 = 1;
  }
  if ( questCount <= 1 )
    v5 = 1;
  else
    v5 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0)) == 0 )
  {
    sub_1C3E7C0(Instance, v7);
  }
  max_length = Instance->max_length;
  v9 = Instance;
  v10 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C3E7C8(Instance, v7);
      v13 = v9->m_Items[v12];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v13, v7);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v11 >= v5 )
        break;
      LODWORD(max_length) = v9->max_length;
      v10 = (__int64)++v12 < (int)max_length;
    }
    while ( (__int64)v12 < (int)max_length );
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4C55B83 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B83 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( condVal <= 1 )
    condVal = 1;
  return CondType__GetQuestGroupClearCount(questId, groupId, isCheckResetFlag, (const MethodInfo *)isCheckResetFlag) >= condVal;
}


bool CondType__IsQuestNotClearAndCond(System_Int32_array *condQuestId, const MethodInfo *method)
{
  System_Int32_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  bool v4; // w20
  unsigned __int64 v5; // x23
  __int64 v6; // x24
  CondType_c *v7; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  UserQuestEntity_o *EntityFromId; // x0

  v2 = condQuestId;
  if ( (byte_4C55BA3 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    condQuestId = (System_Int32_array *)sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55BA3 = 1;
  }
  if ( !v2 )
LABEL_23:
    sub_1C3E7C0(condQuestId, method);
  max_length = v2->max_length;
  if ( !max_length )
    return 0;
  v4 = 1;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)v2->max_length;
    do
    {
      v7 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v7);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      }
      if ( v5 >= LODWORD(v2->max_length) )
        sub_1C3E7C8(condQuestId, method);
      if ( !UserQuestMaster )
        goto LABEL_23;
      EntityFromId = UserQuestMaster__getEntityFromId(
                       UserQuestMaster,
                       *(_QWORD *)(*(_QWORD *)&condQuestId->m_Items[38] + 64LL),
                       v2->m_Items[v5],
                       0);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0) > 0 )
        return 0;
      ++v5;
    }
    while ( v6 != v5 );
    return 1;
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsQuestPhaseClear(
        int64_t userId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  CondType_c *v11; // x0
  bool v12; // w3

  if ( (byte_4C55B4D & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55B4D = 1;
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


bool CondType__IsQuestPhaseClear_40431816(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C55B4E & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B4E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  userIdNumber = v10->static_fields->userIdNumber;
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


bool CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  CondType_c *v5; // x0
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x8
  signed __int64 v8; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v10; // x9
  bool v11; // w19
  int32_t v12; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B94 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestResetMaster___);
    sub_1C3E564(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B94 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v5 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v5);
    v7 = entity;
    if ( entity )
    {
      v8 = 0;
      do
      {
        monitor = v7[1].monitor;
        if ( !monitor )
          break;
        v10 = (unsigned int)monitor[6];
        v11 = v8 < (int)v10;
        if ( v8 >= (int)v10 )
          return v11;
        if ( v8 >= v10 )
          sub_1C3E7C8(Instance, v4);
        v12 = monitor[v8 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_40371188(v12, -1, 1, v6);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v11;
        v7 = entity;
        ++v8;
      }
      while ( entity );
    }
LABEL_17:
    sub_1C3E7C0(Instance, v4);
  }
  return 0;
}


bool CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *v8; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v11; // w20
  unsigned int v12; // w21
  struct System_Int32_array *v13; // x8
  int v14; // w23
  int v15; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BA2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA2 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = entity;
    if ( !entity )
      goto LABEL_26;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_26;
    max_length = costumeIds->max_length;
    v11 = max_length - 1;
    if ( max_length >= 1 )
    {
      v12 = 0;
      do
      {
        v13 = v8->fields.costumeIds;
        if ( !v13 )
          break;
        if ( v12 >= LODWORD(v13->max_length) )
          sub_1C3E7C8(Instance, v6);
        v14 = v13->m_Items[v12];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v14 >= 0 )
          v15 = v14;
        else
          v15 = -v14;
        Instance = (DataManager_o *)(v15 == costumeId);
        if ( v15 == costumeId || v11 == v12 )
          return (char)Instance;
        v8 = entity;
        ++v12;
      }
      while ( entity );
LABEL_26:
      sub_1C3E7C0(Instance, v6);
    }
  }
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool CondType__IsReleaseRaidUiQuestClear(int32_t type, int32_t targetId, int32_t value, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_CommonReleaseEntity__o *CacheById; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  CondType___c_c *v11; // x0
  System_Func_object__int__o *_9__216_1; // x20
  Il2CppObject *v13; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v17; // x0
  CondType___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__216_2; // x20
  Il2CppObject *v21; // x21
  struct CondType___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Func_object__bool__o *_9__216_3; // x21
  Il2CppObject *v26; // x22
  struct CondType___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  CondType___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_bool__bool__o *_9__216_4; // x20
  Il2CppObject *v34; // x21
  CGThumbnailListItem_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3

  if ( (byte_4C55BF8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_bool____78224960);
    sub_1C3E564(&Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    sub_1C3E564(&System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
    sub_1C3E564(&System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
    sub_1C3E564(&System_Func_bool__bool__TypeInfo);
    sub_1C3E564(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_1__);
    sub_1C3E564(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_2__);
    sub_1C3E564(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_3__);
    sub_1C3E564(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_4__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55BF8 = 1;
  }
  if ( type == 113 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_38;
    CacheById = CommonReleaseMaster__GetCacheById((CommonReleaseMaster_o *)Instance, targetId, 0);
    if ( !CacheById )
      return 0;
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)CacheById;
    if ( !CacheById->fields._size )
      return 0;
    v11 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v11 = CondType___c_TypeInfo;
    }
    _9__216_1 = (System_Func_object__int__o *)v11->static_fields->__9__216_1;
    if ( !_9__216_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CondType___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__216_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_CommonReleaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__216_1, v13, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__216_1 = (struct System_Func_CommonReleaseEntity__int__o *)_9__216_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__216_1, (int32_t)_9__216_1, v15, v16);
    }
    v17 = System_Linq_Enumerable__GroupBy_object__int_(
            v10,
            (System_Func_TSource__TKey__o *)_9__216_1,
            (const MethodInfo_3123F24 *)Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    v18 = CondType___c_TypeInfo;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v18 = CondType___c_TypeInfo;
    }
    _9__216_2 = (System_Func_object__int__o *)v18->static_fields->__9__216_2;
    if ( !_9__216_2 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = CondType___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__216_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__216_2, v21, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_2__, 0);
      v22 = CondType___c_TypeInfo->static_fields;
      v22->__9__216_2 = (struct System_Func_IGrouping_int__CommonReleaseEntity___int__o *)_9__216_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v22->__9__216_2, (int32_t)_9__216_2, v23, v24);
      v18 = CondType___c_TypeInfo;
    }
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CondType___c_TypeInfo;
    }
    _9__216_3 = (System_Func_object__bool__o *)v18->static_fields->__9__216_3;
    if ( !_9__216_3 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = CondType___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v18->static_fields->__9;
      _9__216_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
      System_Func_object__bool____ctor(_9__216_3, v26, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_3__, 0);
      v27 = CondType___c_TypeInfo->static_fields;
      v27->__9__216_3 = (struct System_Func_IGrouping_int__CommonReleaseEntity___bool__o *)_9__216_3;
      sub_1C3E508((CGThumbnailListItem_o *)&v27->__9__216_3, (int32_t)_9__216_3, v28, v29);
    }
    Instance = (DataManager_o *)System_Linq_Enumerable__ToDictionary_object__int__bool_(
                                  v19,
                                  (System_Func_TSource__TKey__o *)_9__216_2,
                                  (System_Func_TSource__TElement__o *)_9__216_3,
                                  (const MethodInfo_3139A58 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    if ( !Instance )
LABEL_38:
      sub_1C3E7C0(Instance, v8);
    Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
               (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
               (const MethodInfo_33FD9E8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    v31 = CondType___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v31 = CondType___c_TypeInfo;
    }
    _9__216_4 = v31->static_fields->__9__216_4;
    if ( !_9__216_4 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = CondType___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__216_4 = (System_Func_bool__bool__o *)sub_1C3E7B0(System_Func_bool__bool__TypeInfo);
      System_Func_bool__bool____ctor(_9__216_4, v34, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_4__, 0);
      v35 = (CGThumbnailListItem_o *)CondType___c_TypeInfo->static_fields;
      v35[1].klass = (CGThumbnailListItem_c *)_9__216_4;
      sub_1C3E508(v35 + 1, (int32_t)_9__216_4, v36, v37);
    }
    return System_Linq_Enumerable__Any_bool__51407656(
             v32,
             (System_Func_TSource__bool__o *)_9__216_4,
             (const MethodInfo_3106B28 *)Method_System_Linq_Enumerable_Any_bool____78224960);
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_216_0(type, targetId, value, method);
  }
}


bool CondType__IsResetBirthDay(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  UserGameEntity_o *v3; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C3E7C0(0, v2);
  v3 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0) && v3->fields.birthDay > 0;
}


bool CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IList_int__o *v7; // x20
  const MethodInfo *v8; // x5
  System_Collections_Generic_IList_int__o *v9; // x21

  if ( (byte_4C55BD8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    byte_4C55BD8 = 1;
  }
  v5 = sub_1C3E60C(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v7 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_1C3E60C(int___TypeInfo, 1);
  if ( !v5 )
LABEL_10:
    sub_1C3E7C0(v5, v6);
  v9 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_1C3E7C8(v5, v6);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_40436948(v7, v9, 1, 0, 0, v8);
}


bool CondType__IsRouteSelect_40436948(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        System_Collections_Generic_HashSet_int__o *addCheckedRoute,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v13; // x0
  System_Collections_Generic_HashSet_int__o *v14; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_IList_int__c *v31; // x8
  int32_t v32; // w27
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x26
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w28
  NetworkManager_c *v48; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v50; // x1
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // w21
  System_Collections_Generic_IList_int__o *v63; // [xsp+10h] [xbp-70h]
  __int64 v64; // [xsp+18h] [xbp-68h]

  if ( (byte_4C55BD9 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor___78114696);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  v14 = v13;
  if ( addCheckedRoute )
  {
    System_Collections_Generic_HashSet_int____ctor_57040820(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)addCheckedRoute,
      (const MethodInfo_3665FB4 *)Method_System_Collections_Generic_HashSet_int___ctor___78114696);
    if ( !questIds )
      goto LABEL_82;
  }
  else
  {
    System_Collections_Generic_HashSet_int____ctor(
      v13,
      (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !questIds )
      goto LABEL_82;
  }
  klass = questIds->klass;
  v63 = routeIds;
  v16 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_12;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v18 = sub_1C8ED7C(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v18)(
          questIds,
          *(_QWORD *)(v18 + 8));
  v64 = v19;
  while ( 1 )
  {
    if ( !v64 )
      sub_1C3E7C0(v19, v20);
    v21 = *(_QWORD *)v64;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_20;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_20:
      v24 = sub_1C8ED7C(v64, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v64, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v64;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v27 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_27;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_27:
      v28 = sub_1C8ED7C(v64, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v64, *(_QWORD *)(v28 + 8));
    if ( !v63 )
      sub_1C3E7C0(v29, v30);
    v31 = v63->klass;
    v32 = v29;
    v33 = *(unsigned __int16 *)&v63->klass->_2.rank;
    if ( *(_WORD *)&v63->klass->_2.rank )
    {
      v34 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v34 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = (__int64)&v31->vtable[*v34];
    }
    else
    {
LABEL_34:
      v35 = sub_1C8ED7C(v63, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v35)(v63, *(_QWORD *)(v35 + 8));
    if ( !v37 )
      sub_1C3E7C0(0, v36);
    while ( 1 )
    {
      v38 = *(_QWORD *)v37;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_41;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_41:
        v41 = sub_1C8ED7C(v37, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
        break;
      v42 = *(_QWORD *)v37;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v44 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_48;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_48:
        v45 = sub_1C8ED7C(v37, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      v48 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v48 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1C3E7C0(v48, v46);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      v48->static_fields->userIdNumber,
                      v32,
                      v47,
                      0);
      if ( haveRouteId )
      {
        if ( !v14 )
          sub_1C3E7C0(haveRouteId, v50);
        System_Collections_Generic_HashSet_int___Add(
          v14,
          v47,
          (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v51 = *(_QWORD *)v37;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_64;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_64:
      v54 = sub_1C8ED7C(v37, System_IDisposable_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v37, *(_QWORD *)(v54 + 8));
  }
  v55 = *(_QWORD *)v64;
  v56 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_74;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_74:
    v58 = sub_1C8ED7C(v64, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v64, *(_QWORD *)(v58 + 8));
  if ( !v14 )
LABEL_82:
    sub_1C3E7C0(Instance, v11);
  v60 = v14->fields._count;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetCompareCheckType(checkType, count, v60, v59);
}


bool CondType__IsServantFriendship(int32_t svtId, int32_t condFriendshipRank, bool isAbove, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C55B61 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B61 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_40415436(userIdNumber, svtId, condFriendshipRank, isAbove, v4);
}


bool CondType__IsServantFriendship_40413220(int64_t userSvtId, int32_t condFriendshipRank, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject v7; // q1
  int64_t v8; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  const MethodInfo *v11; // x4
  int32_t v12; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C55B63 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B63 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_22;
  v7 = entity[4];
  *(Il2CppObject *)&v16.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v16.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v15, 0);
  if ( !entity )
LABEL_22:
    sub_1C3E7C0(Instance, v6);
  v8 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = klass;
  *(_QWORD *)&v18.fields.fakeValue = monitor;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v18, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_40415436(v8, v12, condFriendshipRank, 1, v11);
}


bool CondType__IsServantFriendship_40415436(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  __int64 v14; // x20
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C55B62 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
  if ( isAbove )
  {
    if ( EntityDefinitely )
    {
      v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v17, 0) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v14 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v15 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v14;
    *(_QWORD *)&v18.fields.fakeValue = v15;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v18, 0) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C55B5B & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B5B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_40413064(userIdNumber, condSvtId, v2);
}


bool CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // [xsp+8h] [xbp-48h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C55B96 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B96 = 1;
  }
  entity = 0;
  v9 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
                                0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( entity->fields.status )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    &v9,
                                    eventId,
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v9 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v9[6].klass;
LABEL_21:
        sub_1C3E7C0(Instance, v6);
      }
    }
  }
  return 0;
}


bool CondType__IsServantGet_40413064(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C55B5C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       condSvtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.status == 2;
  return (char)EntityDefinitely;
}


bool CondType__IsServantGet_40433100(int64_t userSvtId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject v5; // q1
  int64_t v6; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  const MethodInfo *v9; // x2
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-50h]
  Il2CppObject *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C55B5D & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B5D = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_20;
  v5 = entity[4];
  *(Il2CppObject *)&v14.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v14.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v13, 0);
  if ( !entity )
LABEL_20:
    sub_1C3E7C0(Instance, v4);
  v6 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = klass;
  *(_QWORD *)&v16.fields.fakeValue = monitor;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v16, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_40413064(v6, v10, v9);
}


bool CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C55B65 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B65 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_40413756(userIdNumber, condGroup, v2);
}


bool CondType__IsServantGroup_40413756(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  int v8; // w8
  void *v9; // x21
  bool v10; // w22
  int v11; // w23
  __int64 v12; // x8

  if ( (byte_4C55B66 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0);
  if ( !Instance )
    goto LABEL_16;
  v8 = *((_DWORD *)Instance + 6);
  v9 = Instance;
  v10 = v8 > 0;
  if ( v8 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1C3E7C8(Instance, v6);
      v12 = *((_QWORD *)v9 + v11 + 4);
      if ( !v12 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v12 + 20),
                   0);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v8 = *((_DWORD *)v9 + 6);
        v10 = ++v11 < v8;
        if ( v11 < v8 )
          continue;
      }
      return v10;
    }
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  }
  return v10;
}


bool CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C55B5E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0);
}


bool CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C55BAF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0);
}


bool CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B52 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B52 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1C3E7C0(Instance, v6);
  }
  return 0;
}


bool CondType__IsServantLevel_40368392(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4C55B53 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B53 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_40415036(userIdNumber, svtId, condLv, v3);
}


bool CondType__IsServantLevel_40415036(int64_t userId, int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C55B54 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B54 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.maxLv >= condLv;
  return (char)EntityDefinitely;
}


bool CondType__IsServantLimit(int64_t userSvtId, int32_t condLimitCount, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v11; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C55B56 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B56 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
LABEL_22:
    sub_1C3E7C0(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v11 = 0;
    goto LABEL_14;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_22;
  klass = entity[6].klass;
  monitor = entity[6].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = klass;
  *(_QWORD *)&v14.fields.fakeValue = monitor;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v14, 0);
LABEL_14:
  if ( checkType == 2 )
    return v11 <= condLimitCount;
  if ( checkType == 1 )
    return v11 >= condLimitCount;
  if ( checkType )
    return 0;
  return v11 == condLimitCount;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsServantLimitClassNum(System_Int32_array *targetIds, int32_t targetNum, const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x0
  unsigned __int64 v7; // x23
  int32_t v8; // w22
  int32_t v9; // w21

  v4 = targetIds;
  if ( (byte_4C55BC8 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BC8 = 1;
  }
  if ( !v4 )
    sub_1C3E7C0(targetIds, *(_QWORD *)&targetNum);
  max_length = v4->max_length;
  v6 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C3E7C8(v6, *(_QWORD *)&targetNum);
      v9 = v4->m_Items[v7];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType__CountServantLimitClassNum(v9, *(const MethodInfo **)&targetNum);
      v8 += v6;
      if ( v8 >= targetNum )
        break;
      LODWORD(max_length) = v4->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
    LOBYTE(v6) = v8 >= targetNum;
  }
  return v6;
}


bool CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B57 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B57 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0);
      goto LABEL_12;
    }
LABEL_20:
    sub_1C3E7C0(Instance, v8);
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


bool CondType__IsServantLimit_40368596(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C55B58 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55B58 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  userIdNumber = v8->static_fields->userIdNumber;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_40415196(userIdNumber, svtId, condLimitCount, checkType, v4);
}


bool CondType__IsServantLimit_40415196(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C55B59 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v10);
  }
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Instance,
                       userId,
                       svtId,
                       0);
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


bool CondType__IsShopGroupLimit(int32_t condValue, int32_t limitNum, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  il2cpp_array_size_t max_length; // x8
  int v10; // w24
  UserShopMaster_o *v11; // x21
  int v12; // w25
  int32_t v13; // w26
  ShopGroupEntity_o *v14; // x8
  int32_t shopId; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C55BAC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BAC = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_26;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0);
  if ( !TargetEntityList )
    return 1;
  v8 = TargetEntityList;
  if ( !TargetEntityList->max_length )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
  max_length = v8->max_length;
  v10 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v11 = (UserShopMaster_o *)Instance;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = v8->m_Items[v12];
      if ( !v14 )
        break;
      shopId = v14->fields.shopId;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v11 )
        break;
      Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                    v11,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    shopId,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v13 += entity->fields.num;
        if ( v13 >= limitNum )
          return 1;
      }
      if ( v10 == v12 )
        return 0;
      if ( (unsigned int)++v12 >= LODWORD(v8->max_length) )
        sub_1C3E7C8(Instance, v6);
    }
LABEL_26:
    sub_1C3E7C0(Instance, v6);
  }
  return 0;
}


bool CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  int v8; // w23
  UserShopMaster_o *v9; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x25

  if ( (byte_4C55B8F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  max_length = values->max_length;
  v8 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v9 = (UserShopMaster_o *)Instance;
    v10 = 0;
    v8 = 0;
    v11 = (unsigned int)values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v10 >= LODWORD(values->max_length) )
        sub_1C3E7C8(Instance, v6);
      if ( !v9 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v9,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    values->m_Items[v10],
                                    0);
      if ( !Instance )
        break;
      ++v10;
      v8 += HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( v11 == v10 )
        return num > 0 && v8 == num;
    }
LABEL_19:
    sub_1C3E7C0(Instance, v6);
  }
  return num > 0 && v8 == num;
}


bool CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  int v8; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  int v10; // w23
  ShopGroupEntity_o *v11; // x8
  ShopEntity_o *v12; // x21

  if ( (byte_4C55BA5 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v6 = TargetEntityList;
  if ( !TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C3E7C0(Instance, v4);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
  max_length = v6->max_length;
  v8 = max_length - 1;
  if ( (int)max_length < 1 )
    goto LABEL_18;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    v11 = v6->m_Items[v10];
    if ( !v11 || !v9 )
      goto LABEL_21;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v9,
                 v11->fields.shopId,
                 (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v12 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v12, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v8 == v10 )
      goto LABEL_18;
    if ( (unsigned int)++v10 >= LODWORD(v6->max_length) )
      sub_1C3E7C8(Instance, v4);
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C55BDA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C55BDA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v4);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0);
  if ( MissionEntity )
    LOBYTE(MissionEntity) = UserEventRandomMissionEntity__IsInProgress(MissionEntity, 0);
  return (char)MissionEntity;
}


bool CondType__IsStartingMember(
        int32_t targetSvtId,
        int32_t targetLimitCount,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *player_datalist; // x21
  int *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v14; // w24
  int32_t v15; // w22
  int v16; // w25
  void *monitor; // x20
  Il2CppClass *klass; // x23
  Il2CppObject *Master_object; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  UserServantEntity_array *v21; // x21
  BalanceConfig_c *v22; // x0
  unsigned __int64 v24; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v26; // x8
  __int64 v27; // x22
  __int64 v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4C55BFD & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55BFD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0, 0);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( battleData )
    {
      player_datalist = (System_Collections_Generic_List_object__o *)battleData->fields.player_datalist;
      if ( player_datalist )
      {
        p_size = &player_datalist->fields._size;
        size = player_datalist->fields._size;
        v12 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        static_fields = v12->static_fields;
        if ( size >= static_fields->DeckMainMemberMax )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          p_size = &static_fields->DeckMainMemberMax;
        }
        v14 = *p_size;
        if ( *p_size >= 1 )
        {
          v15 = 0;
          v16 = targetLimitCount - (targetLimitCount < 11);
          while ( 1 )
          {
            if ( System_Collections_Generic_List_object___get_Item(
                   player_datalist,
                   v15,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v15,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v29.fields.currentCryptoKey = klass;
              *(_QWORD *)&v29.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v29, 0) == targetSvtId )
              {
                if ( v16 < 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v15,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_54;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0) == v16 )
                  return 1;
              }
            }
            if ( v14 == ++v15 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_54:
    sub_1C3E7C0(Item, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Item = (Il2CppObject *)TutorialFlag__Get_40473944(126, 0);
  if ( !Master_object )
    goto LABEL_54;
  if ( ((unsigned __int8)Item & 1) != 0 )
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeckReaveHeroine(
                                            (UserDeckMaster_o *)Master_object,
                                            0);
  else
    UserServantListFromDeckReaveHeroine = UserDeckMaster__GetUserServantListFromDeck(
                                            (UserDeckMaster_o *)Master_object,
                                            0);
  v21 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( v22->static_fields->DeckMainMemberMax <= SLODWORD(v21->max_length) )
    {
      v24 = 0;
      m_Items = v21->m_Items;
      while ( 1 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v24 >= v22->static_fields->DeckMainMemberMax )
          break;
        if ( v24 >= LODWORD(v21->max_length) )
          goto LABEL_55;
        v26 = m_Items[v24];
        if ( v26 )
        {
          v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v30.fields.currentCryptoKey = v28;
          *(_QWORD *)&v30.fields.fakeValue = v27;
          v22 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v30, 0);
          if ( (_DWORD)v22 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v24 >= LODWORD(v21->max_length) )
LABEL_55:
              sub_1C3E7C8(v22, v8);
            Item = (Il2CppObject *)m_Items[v24];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0) == targetLimitCount - 1 )
              return 1;
          }
        }
        v22 = BalanceConfig_TypeInfo;
        ++v24;
      }
    }
  }
  return 0;
}


bool CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w21
  int32_t v7; // w20

  if ( (byte_4C55BE2 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BE2 = 1;
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


bool CondType__IsSuperBossDamageBellow(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w21
  int32_t v7; // w20

  if ( (byte_4C55BE3 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55BE3 = 1;
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


bool CondType__IsSuperBossValueEqual(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w20
  int32_t v7; // w21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55BE1 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BE1 = 1;
  }
  entity = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C50AE2 )
      {
        sub_1C3E564(&NetworkManager_TypeInfo);
        byte_4C50AE2 = 1;
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
                                    v6,
                                    v7,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_20:
        sub_1C3E7C0(Instance, v9);
      }
      return 0;
    }
  }
  return result;
}


bool CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C55BB2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C55BB4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v2);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserEventServantFatigueMaster_o *v7; // x21
  int64_t RecoverySvtIdList; // x0
  __int64 v9; // x1
  int64_t v10; // x22
  int32_t v11; // w26
  __int64 v12; // x27
  __int64 v13; // x28
  int64_t v14; // x23
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v17; // w0
  int64_t v18; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C55BA4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BA4 = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0 )
  {
LABEL_26:
    sub_1C3E7C0(Instance, v6);
  }
  v7 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0);
  if ( RecoverySvtIdList )
  {
    v10 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_23:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v11 = 0;
    v12 = 0;
    v13 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v10 + 32 + 8 * v12);
      if ( v14 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v14,
                   (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v22, 0);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v7, &recoverAt, &isRecover, eventId, v17, 0);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v18 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        RecoverySvtIdList = NetworkManager__getTime(0);
        if ( v18 - RecoverySvtIdList > 0 )
          goto LABEL_20;
        ++v11;
      }
      if ( v11 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_20:
      if ( v13 == v12 )
        goto LABEL_23;
      if ( ++v12 >= (unsigned __int64)*(unsigned int *)(v10 + 24) )
        sub_1C3E7C8(RecoverySvtIdList, v9);
    }
  }
  return RecoverySvtIdList;
}


bool CondType__IsTargetIdsCommonCount(
        System_Func_int__int__o *countFunc,
        System_Int32_array *targetIds,
        int32_t targetNum,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  System_Func_int__int__o *v6; // x21
  unsigned __int64 v8; // x23
  int32_t v9; // w22

  if ( !targetIds )
LABEL_12:
    sub_1C3E7C0(countFunc, targetIds);
  max_length = targetIds->max_length;
  v6 = countFunc;
  countFunc = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C3E7C8(countFunc, targetIds);
      if ( !v6 )
        goto LABEL_12;
      countFunc = (System_Func_int__int__o *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t, const MethodInfo *))v6->fields.invoke_impl)(
                                               v6->fields.method_code,
                                               (unsigned int)targetIds->m_Items[v8],
                                               v6->fields.method,
                                               method);
      v9 += (int)countFunc;
      if ( v9 >= targetNum )
        break;
      LODWORD(max_length) = targetIds->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
    LOBYTE(countFunc) = v9 >= targetNum;
  }
  return (char)countFunc;
}


bool CondType__IsTotalTdLvCond(int32_t condType, int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int v9; // w8

  if ( (byte_4C55BBC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v8);
  }
  v9 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0);
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


bool CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v9; // x20
  Il2CppType *v10; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x22
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55BBE & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&EventStatus_Type_var);
    sub_1C3E564(&EventStatus_Type_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C55BBE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3E7C0(Instance, v6);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       eventId,
                       0);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = EventStatus_Type_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v11.fields.value = (intptr_t)v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
    v21 = flag;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v21, v13, v14, v15, v16, v17, v18);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v19, 0)
                            && UserEventEntity__getEventFlag(v9, flag, 0);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v9; // x20
  Il2CppType *v10; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x22
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55BBF & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&UserQuestEntity_StatusKind_var);
    sub_1C3E564(&UserQuestEntity_StatusKind_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C55BBF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3E7C0(Instance, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   questId,
                   0);
  if ( EntityFromId )
  {
    v9 = EntityFromId;
    v10 = UserQuestEntity_StatusKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v11.fields.value = (intptr_t)v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
    v21 = flag;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v21, v13, v14, v15, v16, v17, v18);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v19, 0)
                        && UserQuestEntity__HasStatus_43165664(v9, flag, 0);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v9; // x20
  Il2CppType *v10; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x22
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55BD5 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&UserShopFlag_FlagKind_var);
    sub_1C3E564(&UserShopFlag_FlagKind_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&System_Type_TypeInfo);
    byte_4C55BD5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C3E7C0(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       shopId,
                       0);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = UserShopFlag_FlagKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v11.fields.value = (intptr_t)v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
    v21 = flagKind;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v21, v13, v14, v15, v16, v17, v18);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v19, 0)
                            && UserShopEntity__CheckFlagKind(v9, flagKind, 0);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool CondType__IsValidPrivilege(
        int32_t privilegeId,
        int32_t privilegeNum,
        int64_t *startedAt,
        int64_t *endedAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Master_object; // x23
  _QWORD *p_image; // x0
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C55C06 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C55C06 = 1;
  }
  entity = 0;
  *startedAt = 0;
  *endedAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
    goto LABEL_19;
  if ( !UserPrivilegeEntity__IsEnabledNum(entity, privilegeNum, 0) )
    return 0;
  p_image = &entity->klass;
  if ( !entity )
LABEL_19:
    sub_1C3E7C0(p_image, v9);
  return UserPrivilegeEntity__IsValidPeriod(entity, startedAt, endedAt, 0, 0);
}


bool CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 naturalAligment; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  int32_t v15; // w0
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C55BA8 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardRootComponent_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C55BA8 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0 )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1C3EA80(Instance);
    return CondType__IsEquipWithTargetCostume(v15, v16, v17);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v11 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v18, 0);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v13, 0);
  if ( !byte_4C51232 )
  {
    sub_1C3E564(&EventRewardSaveData_TypeInfo);
    byte_4C51232 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B97 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B97 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0);
}


bool CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int i; // w9

  if ( (byte_4C55BC7 & 1) == 0 )
  {
    sub_1C3E564(&ServantCommentManager_TypeInfo);
    byte_4C55BC7 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  if ( !ClearWarIdList )
    sub_1C3E7C0(0, v4);
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
        sub_1C3E7C8(ClearWarIdList, v4);
      if ( ClearWarIdList->m_Items[i] == condWarId )
        break;
    }
  }
  return i < max_length;
}


int32_t CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_object__o *v4; // x19
  CondType___c_c *v5; // x0
  System_Comparison_T__o *_9__174_0; // x20
  Il2CppObject *v7; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CondType___c_c *v11; // x0
  System_Predicate_object__o *_9__174_1; // x20
  Il2CppObject *v13; // x21
  struct CondType___c_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3
  int32_t klass_high; // w19

  if ( (byte_4C55BD3 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_WarEntity__TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarEntity__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarEntity__get_Count__);
    sub_1C3E564(&System_Predicate_WarEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_CondType___c__LatestMainScenarioWarClear_b__174_0__);
    sub_1C3E564(&Method_CondType___c__LatestMainScenarioWarClear_b__174_1__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55BD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v2);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0);
  if ( !EntityList )
    return 0;
  v4 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v5 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v5 = CondType___c_TypeInfo;
  }
  _9__174_0 = (System_Comparison_T__o *)v5->static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CondType___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__174_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__174_0, v7, Method_CondType___c__LatestMainScenarioWarClear_b__174_0__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__174_0 = (struct System_Comparison_WarEntity__o *)_9__174_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__174_0, (int32_t)_9__174_0, v9, v10);
  }
  System_Collections_Generic_List_object___Sort_58421028(
    v4,
    _9__174_0,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v11 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v11 = CondType___c_TypeInfo;
  }
  _9__174_1 = (System_Predicate_object__o *)v11->static_fields->__9__174_1;
  if ( !_9__174_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = CondType___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__174_1 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_object____ctor(_9__174_1, v13, Method_CondType___c__LatestMainScenarioWarClear_b__174_1__, 0);
    v14 = CondType___c_TypeInfo->static_fields;
    v14->__9__174_1 = (struct System_Predicate_WarEntity__o *)_9__174_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v14->__9__174_1, (int32_t)_9__174_1, v15, v16);
  }
  v17 = System_Collections_Generic_List_object___Find(
          v4,
          (System_Predicate_T__o *)_9__174_1,
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v17 )
    return 0;
  klass_high = HIDWORD(v17[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40371188(klass_high, -1, 0, v18);
}


System_String_o *CondType__OpenConditionText(
        int32_t condType,
        int32_t condValue,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v7; // x19
  System_String_o *result; // x0
  LocalizationManager_c *v9; // x0

  if ( (byte_4C55B46 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3725/*"COND_TYPE_NONE"*/);
    byte_4C55B46 = 1;
  }
  switch ( condType )
  {
    case 0:
      v7 = System_String__Concat_63636468((System_String_o *)StringLiteral_3725/*"COND_TYPE_NONE"*/, textType, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      result = LocalizationManager__Get(v7, 0);
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
      if ( !byte_4C5204F )
      {
        sub_1C3E564(&LocalizationManager_TypeInfo);
        byte_4C5204F = 1;
      }
      v9 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager_TypeInfo;
      }
      result = v9->static_fields->unknownNameText;
      break;
  }
  return result;
}


System_String_o *CondType__OpenConditionTextEvent(int32_t condId, System_String_o *textType, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19
  System_String_o *v9; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4C55B69 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3724/*"COND_TYPE_EVENT"*/);
    byte_4C55B69 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_3724/*"COND_TYPE_EVENT"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  v9 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0);
  return System_String__Format(v9, EventName, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_4C55B6C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3726/*"COND_TYPE_PURCHASE_QP_SHOP"*/);
    byte_4C55B6C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_3726/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_4C55B71 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C3E564(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3727/*"COND_TYPE_PURCHASE_STONE_SHOP"*/);
    byte_4C55B71 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_3727/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  LocalizationManager_c *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B4C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4C55B4C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v7 = System_String__Concat_63636468((System_String_o *)StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get(v7, 0);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0);
LABEL_18:
    sub_1C3E7C0(Master_object, v6);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C5204F )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C5204F = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  return v9->static_fields->unknownNameText;
}


System_String_o *CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  WarMaster_o *Master_object; // x0
  __int64 v10; // x1
  WarEntity_o *QuestId; // x0
  WarEntity_o *v12; // x22
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v16; // x19
  Il2CppObject *monitor; // x20
  System_String_o *v18; // x19
  Il2CppObject *v19; // x0
  LocalizationManager_c *v20; // x0
  Il2CppObject *v21; // [xsp+0h] [xbp-40h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v22 = condQuestPhase;
  if ( (byte_4C55B50 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3729/*"COND_TYPE_QUEST_PHASE_CLEAR"*/);
    sub_1C3E564(&StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4C55B50 = 1;
  }
  v21 = 0;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0);
    if ( QuestId )
    {
      v12 = QuestId;
      v13 = System_String__Concat_63636468((System_String_o *)StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get(v13, 0);
      return System_String__Format(v14, (Il2CppObject *)v12->fields.name, 0);
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
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v21,
           condQuestId,
           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v16 = System_String__Concat_63636468((System_String_o *)StringLiteral_3729/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v16, 0);
      if ( v21 )
      {
        monitor = (Il2CppObject *)v21[1].monitor;
        v18 = (System_String_o *)Master_object;
        v19 = (Il2CppObject *)System_Int32__ToString((int32_t)&v22, 0);
        return System_String__Format_63677760(v18, monitor, v19, 0);
      }
LABEL_31:
      sub_1C3E7C0(Master_object, v10);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C5204F )
    {
      sub_1C3E564(&LocalizationManager_TypeInfo);
      byte_4C5204F = 1;
    }
    v20 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager_TypeInfo;
    }
    return v20->static_fields->unknownNameText;
  }
}


System_String_o *CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55B64 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3730/*"COND_TYPE_SERVANT_FRIENDSHIP"*/);
    byte_4C55B64 = 1;
  }
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_3730/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  v15 = condFriendshipRank;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  return System_String__Format(v6, v13, 0);
}


System_String_o *CondType__OpenConditionTextServantGet(
        int32_t condSvtId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19
  System_String_o *v9; // x19
  Il2CppObject *Name; // x1

  if ( (byte_4C55B60 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3731/*"COND_TYPE_SERVANT_GET"*/);
    byte_4C55B60 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v8 = System_String__Concat_63636468((System_String_o *)StringLiteral_3731/*"COND_TYPE_SERVANT_GET"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0);
  if ( !Entity )
LABEL_9:
    sub_1C3E7C0(Instance, v6);
  v9 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0);
  return System_String__Format(v9, Name, 0);
}


System_String_o *CondType__OpenConditionTextServantGroup(
        int32_t condGroup,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55B67 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3732/*"COND_TYPE_SERVANT_GROUP"*/);
    byte_4C55B67 = 1;
  }
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_3732/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  v15 = condGroup;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  return System_String__Format(v6, v13, 0);
}


System_String_o *CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55B55 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3733/*"COND_TYPE_SERVANT_LEVEL"*/);
    byte_4C55B55 = 1;
  }
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_3733/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  v15 = condLv;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  return System_String__Format(v6, v13, 0);
}


System_String_o *CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C55B5A & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3734/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/);
    byte_4C55B5A = 1;
  }
  v5 = System_String__Concat_63636468((System_String_o *)StringLiteral_3734/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  v15 = condLimitCount;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  return System_String__Format(v6, v13, 0);
}


bool CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  SpotPathEntity_o *v9; // x19
  int32_t v10; // w20
  int32_t monitor_high; // w21

  if ( (byte_4C55B3C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C3E564(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C3E564(&EventSpotMoveManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
LABEL_13:
    sub_1C3E7C0(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v10 = (int32_t)Entity[2].klass;
    if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v10, v9, 0) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v9; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C55B3B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3B = 1;
  }
  entity = 0;
  v9 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                                 (TotalEventRaidMaster_o *)Instance,
                                 &v9,
                                 eventId,
                                 targetId,
                                 0);
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
        sub_1C3E7C0(Instance, v6);
      }
    }
  }
  return 0;
}


bool CondType__TrySuperBossPrimaryKey(int32_t condId, int32_t *eventId, int32_t *bossId, const MethodInfo *method)
{
  *eventId = condId / 100;
  *bossId = condId % 100;
  return *eventId && condId % 100 != 0;
}


bool CondType__UserEventMapValueContains(int32_t mapId, int64_t target, const MethodInfo *method)
{
  MapEntity_array *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  MapEntity_o *v8; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v10; // x21

  if ( (byte_4C55BD4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_long___);
    sub_1C3E564(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55BD4 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  if ( !max_length )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)max_length )
    sub_1C3E7C8(Instance, v6);
  v8 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v8 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v8->fields.warId,
                                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0 )
  {
LABEL_18:
    sub_1C3E7C0(Instance, v6);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_43095764(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v10 + 24),
                                    mapId,
                                    0);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_3200D3C *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t CondType___CountServantClassTotalFriendShipUp_g__CountFunc_165_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1C3E7C0(0, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0);
}


int32_t CondType___CountServantClassTotalLevelUp_g__CountFunc_168_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1C3E7C0(0, method);
  maxLv = collection->fields.maxLv;
  if ( maxLv <= 0 )
    return 0;
  else
    return maxLv - 1;
}


int32_t CondType___CountServantClassTotalLimitUp_g__CountFunc_163_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1C3E7C0(0, method);
  return collection->fields.maxLimitCount;
}


int32_t CondType___CountServantClassTotalSkillLevelUp_g__CountFunc_196_0(
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
    || (collection = (UserServantCollectionEntity_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0)) == 0 )
  {
    sub_1C3E7C0(collection, method);
  }
  currentCryptoKey = (unsigned int)collection->fields.svtId.fields.currentCryptoKey;
  v3 = collection;
  if ( currentCryptoKey << 32 < 1 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v4 = 0;
    v5 = (int)currentCryptoKey;
    p_fakeValue = &v3->fields.svtId.fields.fakeValue;
    do
    {
      if ( !currentCryptoKey )
        sub_1C3E7C8(v4, method);
      v7 = *p_fakeValue++;
      --v5;
      --currentCryptoKey;
      v4 = (unsigned int)(v4 + v7 - 1);
    }
    while ( v5 );
  }
  return v4;
}


bool CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_216_0(
        int32_t type,
        int32_t targetId,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4C55C0B & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C0B = 1;
  }
  switch ( type )
  {
    case 46:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear_40431816(targetId, value, -1, 0, v4);
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestGroupClear(0, targetId, value, 0, v4);
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_40371188(targetId, -1, 0, method);
    default:
      return 1;
  }
}


bool CondType__checkCondTypeRaidAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  char v9; // w8
  TotalEventRaidEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B3D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3D = 1;
  }
  v11 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
  {
LABEL_12:
    v9 = 0;
    return v9 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0 )
  {
LABEL_14:
    sub_1C3E7C0(Instance, v8);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v11,
                               targetId,
                               condValue,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v11 )
    goto LABEL_14;
  v9 = (entity->fields.maxHp <= v11->fields.totalDamage) ^ alive;
  return v9 & 1;
}


bool CondType__checkCondTypeRaidGroupAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v11; // x22
  unsigned int v12; // w23
  EventRaidEntity_o *v13; // x24
  char v14; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55B3E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1C3E7C0(Instance, v8);
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
        sub_1C3E7C8(Instance, v8);
      v13 = EventRaidEntityArray->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v11, &entity, targetId, v13->fields.day, 0);
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


bool CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C55B3A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55B3A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_16:
    sub_1C3E7C0(Instance, v6);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v7);
  }
}


void CondType_CountDelegate___ctor(
        CondType_CountDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A822B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A82254;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *CondType_CountDelegate__BeginInvoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v19; // [xsp+18h] [xbp-38h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-34h] BYREF

  v19 = level;
  v20 = id;
  if ( (byte_4C55C0C & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C55C0C = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&level, callback, object, method, v6, v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v18, callback, object);
}


int32_t CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C3E51C(result, 0, method) )
    sub_1C3E7C0(0, v3);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


int32_t CondType_CountDelegate__Invoke(
        CondType_CountDelegate_o *this,
        int32_t id,
        int32_t level,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           id,
           level,
           this->fields.method);
}


void CondType___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C55C0D & 1) == 0 )
  {
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55C0D = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(CondType___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)CondType___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CondType___c___ctor(CondType___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_1(
        CondType___c_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return UserQuestEntity__IsResetStatus(x, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_2(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_3(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.clearNum >= 1 && !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_4(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.clearNum > 0;
}


int32_t CondType___c___CountClassBoardSquareReleased_b__201_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C55C11 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C55C11 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t CondType___c___CountClassBoardSquareReleased_b__201_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C55C12 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C55C12 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_311973C *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4C55C0E & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C0E = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestLevel(targetId, *(const MethodInfo **)&current);
  if ( result < current )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4C55C0F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C0F = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestSkillLevel(targetId, *(const MethodInfo **)&current);
  if ( result < current )
    return current;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4C55C10 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C10 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestFriendShipRank(targetId, *(const MethodInfo **)&current);
  if ( result < current )
    return current;
  return result;
}


bool CondType___c___IsClassBoardSquareAllReleased_b__202_0(
        CondType___c_o *this,
        ClassBoardSquareEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3E7C0(this, 0);
  return !ClassBoardSquareEntity__get_HasLockId(ent, 0) && !ClassBoardSquareEntity__get_IsBlank(ent, 0);
}


bool CondType___c___IsCompleteHighestWaveValue_b__230_0(
        CondType___c_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return QuestPhaseEntity__IsInterruptionQuest(x, 0);
}


bool CondType___c___IsOpenRaidGroupNum_b__215_0(
        CondType___c_o *this,
        QuestReleaseEntity_o *questReleaseEntity,
        const MethodInfo *method)
{
  int32_t type; // w19
  int32_t targetId; // w20
  const MethodInfo *v6; // x3
  int32_t ValueInt; // w21

  if ( (byte_4C55C13 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C13 = 1;
  }
  if ( !questReleaseEntity )
    sub_1C3E7C0(this, questReleaseEntity);
  type = questReleaseEntity->fields.type;
  targetId = questReleaseEntity->fields.targetId;
  ValueInt = QuestReleaseEntity__getValueInt(questReleaseEntity, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsReleaseRaidUiQuestClear(type, targetId, ValueInt, v6);
}


int32_t CondType___c___IsReleaseRaidUiQuestClear_b__216_1(
        CondType___c_o *this,
        CommonReleaseEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.condGroup;
}


int32_t CondType___c___IsReleaseRaidUiQuestClear_b__216_2(
        CondType___c_o *this,
        System_Linq_IGrouping_int__CommonReleaseEntity__o *g,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__CommonReleaseEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C55C14 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3E564(&System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo);
    byte_4C55C14 = 1;
  }
  if ( !g )
    sub_1C3E7C0(this, g);
  klass = g->klass;
  v5 = *(unsigned __int16 *)&g->klass->_2.rank;
  if ( *(_WORD *)&g->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__CommonReleaseEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C8ED7C(g, System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__CommonReleaseEntity__o *, _QWORD))v7)(
           g,
           *(_QWORD *)(v7 + 8));
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__216_3(
        CondType___c_o *this,
        System_Linq_IGrouping_int__CommonReleaseEntity__o *g,
        const MethodInfo *method)
{
  CondType___c_c *v4; // x0
  System_Func_object__bool__o *_9__216_5; // x20
  Il2CppObject *v6; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C55C15 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
    sub_1C3E564(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C3E564(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_5__);
    sub_1C3E564(&CondType___c_TypeInfo);
    byte_4C55C15 = 1;
  }
  v4 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v4 = CondType___c_TypeInfo;
  }
  _9__216_5 = (System_Func_object__bool__o *)v4->static_fields->__9__216_5;
  if ( !_9__216_5 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CondType___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__216_5 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__216_5, v6, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_5__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__216_5 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__216_5;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__216_5, (int32_t)_9__216_5, v8, v9);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (System_Func_TSource__bool__o *)_9__216_5,
           (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__216_4(CondType___c_o *this, bool val, const MethodInfo *method)
{
  return val;
}


bool CondType___c___IsReleaseRaidUiQuestClear_b__216_5(
        CondType___c_o *this,
        CommonReleaseEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condId; // w20
  int32_t condType; // w21
  int32_t condNum; // w19

  if ( (byte_4C55C16 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C16 = 1;
  }
  if ( !e )
    sub_1C3E7C0(this, e);
  condType = e->fields.condType;
  condId = e->fields.condId;
  condNum = e->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType___IsReleaseRaidUiQuestClear_g__IsQuestClearCond_216_0(condType, condId, condNum, v3);
}


int32_t CondType___c___LatestMainScenarioWarClear_b__174_0(
        CondType___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.id - a->fields.id;
}


bool CondType___c___LatestMainScenarioWarClear_b__174_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C3E7C0(this, 0);
  return ent->fields.lastQuestId >= 1 && WarEntity__HasFlag(ent, 128, 0);
}


void CondType___c__DisplayClass119_0___ctor(CondType___c__DisplayClass119_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass119_0___IsEventRaceGoalScriptPlayed_b__0(
        CondType___c__DisplayClass119_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.groupId == x;
}


void CondType___c__DisplayClass164_0___ctor(CondType___c__DisplayClass164_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass164_0___CountServantFriendShipClassNum_g__CountFunc_0(
        CondType___c__DisplayClass164_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1C3E7C0(this, 0);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0) >= this->fields.friendShipRank;
}


void CondType___c__DisplayClass195_0___ctor(CondType___c__DisplayClass195_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CondType___c__DisplayClass195_0___CountServantTargetSkillLvClassNum_g__CountFunc_0(
        CondType___c__DisplayClass195_0_o *this,
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  CondType___c__DisplayClass195_0_o *v3; // x19
  __int64 klass_low; // x9
  CondType___c__DisplayClass195_0_o *v5; // x8
  __int64 v6; // x0
  __int64 v7; // x10
  void **p_monitor; // x8
  int32_t v9; // t1

  if ( !collection
    || (v3 = this,
        (this = (CondType___c__DisplayClass195_0_o *)UserServantCollectionEntity__getSkillLevelList(collection, 0)) == 0) )
  {
    sub_1C3E7C0(this, collection);
  }
  klass_low = LODWORD(this[1].klass);
  v5 = this;
  if ( klass_low << 32 < 1 )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    v6 = 0;
    v7 = (int)klass_low;
    p_monitor = &v5[1].monitor;
    do
    {
      if ( !klass_low )
        sub_1C3E7C8(v6, collection);
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


void CondType___c__DisplayClass201_0___ctor(CondType___c__DisplayClass201_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass201_0___CountClassBoardSquareReleased_b__0(
        CondType___c__DisplayClass201_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.classBoardBaseId == this->fields.targetId;
}


void CondType___c__DisplayClass211_0___ctor(CondType___c__DisplayClass211_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass211_0___IsExchangeSvtBuff_b__0(
        CondType___c__DisplayClass211_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return this->fields.targetId == entity->fields.eventId;
}


void CondType___c__DisplayClass232_0___ctor(CondType___c__DisplayClass232_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass232_0___CountGrandServantSet_b__0(
        CondType___c__DisplayClass232_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  CondType___c__DisplayClass232_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C55C17 & 1) == 0 )
  {
    this = (CondType___c__DisplayClass232_0_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C55C17 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.targetIds,
           v4->fields.targetId,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
}


bool CondType___c__DisplayClass232_0___CountGrandServantSet_b__1(
        CondType___c__DisplayClass232_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.targetNum == this->fields.targetNum;
}


bool CondType___c__DisplayClass232_0___CountGrandServantSet_b__2(
        CondType___c__DisplayClass232_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.targetId )
    return 1;
  if ( !x )
    sub_1C3E7C0(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 1, 0) == this->fields.targetId;
}


void CondType___c__DisplayClass23_0___ctor(CondType___c__DisplayClass23_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__0(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4C55C18 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C18 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, method);
}


bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4C55C19 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C19 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, method);
}


bool CondType___c__DisplayClass23_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass23_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4C55C1A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    byte_4C55C1A = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetFriendShipRank(targetId, targetNum, method);
}


void CondType___c__DisplayClass32_0___ctor(CondType___c__DisplayClass32_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass32_0___CheckGroupMaterialQuest_b__0(
        CondType___c__DisplayClass32_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.questId == this->fields.condQuestId;
}