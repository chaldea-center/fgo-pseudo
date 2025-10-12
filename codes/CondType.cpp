void CondType___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  struct CondType_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C36878 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    byte_4C36878 = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->uQuestMst, 0, v1, v2);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v5 = CondType_TypeInfo->static_fields;
  v5->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->cachedServantEquipIdStrDic, (int32_t)v4, v6, v7);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_C0D460;
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
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v10; // x25
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x22
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v13; // x21
  UserQuestEntity_o *v14; // x23
  UserQuestEntity_o *IncludedGroupQuest; // x0
  CondType___c_c *v16; // x8
  UserQuestEntity_o *v17; // x21
  System_Func_object__bool__o *_9__32_1; // x24
  Il2CppObject *v19; // x26
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  QuestScriptMaterialNextMaster_o *v23; // x8
  Il2CppObject *v24; // x0
  int32_t questPhase; // w24
  int32_t questId; // w26
  UserQuestMaster_o *v27; // x27
  int64_t updatedAt; // x8
  QuestScriptMaterialNextMaster_o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Func_object__bool__o *v31; // x20
  CondType___c_c *v33; // x0
  System_Func_object__bool__o *_9__32_2; // x23
  Il2CppObject *v35; // x25
  struct CondType___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int clearNum; // w8
  CondType___c_c *v40; // x0
  struct CondType___c_StaticFields *v41; // x8
  System_Func_object__bool__o *_9__32_3; // x20
  Il2CppObject *v43; // x25
  struct CondType___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x24
  struct CondType___c_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4C367B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_UserQuestEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78101896);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    sub_1C32C20(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_1C32C20(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_CondType___c__CheckGroupMaterialQuest_b__32_1__);
    sub_1C32C20(&Method_CondType___c__CheckGroupMaterialQuest_b__32_2__);
    sub_1C32C20(&Method_CondType___c__CheckGroupMaterialQuest_b__32_3__);
    sub_1C32C20(&Method_CondType___c__CheckGroupMaterialQuest_b__32_4__);
    sub_1C32C20(&Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__);
    sub_1C32C20(&CondType___c__DisplayClass32_0_TypeInfo);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C367B7 = 1;
  }
  v7 = sub_1C32E6C(CondType___c__DisplayClass32_0_TypeInfo);
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
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( !Master_object )
      goto LABEL_70;
    v10 = (QuestScriptMaterialNextMaster_o *)Master_object;
    IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                       (QuestScriptMaterialNextMaster_o *)Master_object,
                       *(_DWORD *)(v7 + 16),
                       0);
    SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                     v10,
                                     IncludedGroups,
                                     0);
    v13 = QuestScriptMaterialNextMaster__GetIncludedGroups(v10, *(_DWORD *)(v7 + 16), 0);
    v14 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v13, 0);
    v16 = CondType___c_TypeInfo;
    v17 = IncludedGroupQuest;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v16 = CondType___c_TypeInfo;
    }
    _9__32_1 = (System_Func_object__bool__o *)v16->static_fields->__9__32_1;
    if ( !_9__32_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CondType___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__32_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__32_1, v19, Method_CondType___c__CheckGroupMaterialQuest_b__32_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__32_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__32_1, (int32_t)_9__32_1, v21, v22);
    }
    Master_object = System_Linq_Enumerable__All_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                      (System_Func_TSource__bool__o *)_9__32_1,
                      (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_UserQuestEntity___);
    if ( (Master_object & 1) != 0 )
      v23 = 0;
    else
      v23 = v10;
    if ( (Master_object & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_66;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v24 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v14->fields.questId;
      questPhase = v14->fields.questPhase;
      v27 = (UserQuestMaster_o *)v24;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = NetworkManager__getTime(0);
      if ( !v27 )
        goto LABEL_70;
      Master_object = (int64_t)UserQuestMaster__CreateQuestClearDummyData(v27, questId, questPhase, Master_object, 0);
      if ( !Master_object )
        goto LABEL_70;
      updatedAt = v14->fields.updatedAt;
      v29 = v10;
      v14 = (UserQuestEntity_o *)Master_object;
      *(_QWORD *)(Master_object + 72) = updatedAt;
LABEL_47:
      clearNum = v14->fields.clearNum;
      if ( clearNum <= 0 )
        v10 = v29;
      else
        v10 = 0;
      if ( clearNum > 0 )
      {
LABEL_67:
        if ( v29 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v29, *(_DWORD *)(v7 + 16), v14, v17, 0);
LABEL_70:
        sub_1C32E7C(Master_object);
      }
      v40 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v40 = CondType___c_TypeInfo;
      }
      v41 = v40->static_fields;
      if ( isCheckResetFlag )
      {
        _9__32_3 = (System_Func_object__bool__o *)v41->__9__32_3;
        if ( !_9__32_3 )
        {
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v40 = CondType___c_TypeInfo;
          }
          v43 = (Il2CppObject *)v40->static_fields->__9;
          _9__32_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__32_3, v43, Method_CondType___c__CheckGroupMaterialQuest_b__32_3__, 0);
          v44 = CondType___c_TypeInfo->static_fields;
          v44->__9__32_3 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_3;
          sub_1C32BC4((CGThumbnailListItem_o *)&v44->__9__32_3, (int32_t)_9__32_3, v45, v46);
        }
        v10 = v29;
      }
      else
      {
        _9__32_3 = (System_Func_object__bool__o *)v41->__9__32_4;
        if ( !_9__32_3 )
        {
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v40 = CondType___c_TypeInfo;
          }
          v47 = (Il2CppObject *)v40->static_fields->__9;
          _9__32_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__32_3, v47, Method_CondType___c__CheckGroupMaterialQuest_b__32_4__, 0);
          v48 = CondType___c_TypeInfo->static_fields;
          v48->__9__32_4 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_3;
          sub_1C32BC4((CGThumbnailListItem_o *)&v48->__9__32_4, (int32_t)_9__32_3, v49, v50);
        }
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__32_3,
                                 (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78101896);
      if ( Master_object )
        v14 = (UserQuestEntity_o *)Master_object;
LABEL_66:
      v29 = v10;
      goto LABEL_67;
    }
    if ( isCheckResetFlag )
      v29 = v23;
    else
      v29 = 0;
    if ( isCheckResetFlag )
    {
      if ( !v14 )
      {
        v29 = v23;
        if ( v23 )
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v29, *(_DWORD *)(v7 + 16), v14, v17, 0);
        goto LABEL_70;
      }
      Master_object = UserQuestEntity__IsResetStatus(v14, 0);
      if ( (Master_object & 1) == 0 )
        goto LABEL_47;
      v33 = CondType___c_TypeInfo;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v33 = CondType___c_TypeInfo;
      }
      _9__32_2 = (System_Func_object__bool__o *)v33->static_fields->__9__32_2;
      if ( !_9__32_2 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = CondType___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__32_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__32_2, v35, Method_CondType___c__CheckGroupMaterialQuest_b__32_2__, 0);
        v36 = CondType___c_TypeInfo->static_fields;
        v36->__9__32_2 = (struct System_Func_UserQuestEntity__bool__o *)_9__32_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v36->__9__32_2, (int32_t)_9__32_2, v37, v38);
      }
      Master_object = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                 (System_Func_TSource__bool__o *)_9__32_2,
                                 (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78101896);
      v14 = (UserQuestEntity_o *)Master_object;
    }
    else
    {
      v29 = v10;
    }
    if ( !v14 )
      goto LABEL_67;
    goto LABEL_47;
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0;
  v31 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass32_0__CheckGroupMaterialQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                v30,
                                (System_Func_TSource__bool__o *)v31,
                                (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____78101896);
}


bool CondType__CompareQuestClearTime(int32_t questId, int64_t time, int32_t checkType, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  int64_t v8; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v11; // x3
  UserQuestEntity_o *v12; // x22
  bool IsQuestClear_40225464; // w8

  if ( (byte_4C36872 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36872 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(0);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v8, questId, 0);
  if ( EntityFromId )
  {
    v12 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40225464 = CondType__IsQuestClear_40225464(questId, -1, 0, v11);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_40225464 )
    {
      if ( checkType == 2 )
      {
        LOBYTE(EntityFromId) = v12->fields.updatedAt <= time;
      }
      else if ( checkType == 1 )
      {
        LOBYTE(EntityFromId) = v12->fields.updatedAt >= time;
      }
      else if ( checkType )
      {
        LOBYTE(EntityFromId) = 0;
      }
      else
      {
        LOBYTE(EntityFromId) = v12->fields.updatedAt == time;
      }
    }
  }
  return (char)EntityFromId;
}


int32_t CondType__CountAllServantTargetSkillLvNum(int32_t skillLv, int32_t targetNum, const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_object; // x0
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantCollectionMaster_o *v7; // x21
  int32_t v8; // w22
  unsigned int v9; // w24
  UserServantCollectionMaster_c **v10; // x8
  UserServantCollectionEntity_o *v11; // x23
  int v12; // w8
  int v13; // w9
  int32_t findSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36852 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36852 = 1;
  }
  *(_QWORD *)findSum = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_1C32E7C(Master_object);
  }
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  v7 = Master_object;
  if ( MasterName_k__BackingField && (int)MasterName_k__BackingField >= 1 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)MasterName_k__BackingField )
        goto LABEL_26;
      v10 = &v7->klass + (int)v9;
      v11 = (UserServantCollectionEntity_o *)v10[4];
      if ( !v11 )
        goto LABEL_27;
      Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__IsFinded(
                                                         (UserServantCollectionEntity_o *)v10[4],
                                                         0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v11, 0);
        if ( !Master_object )
          goto LABEL_27;
        v12 = (int)Master_object->fields._MasterName_k__BackingField;
        if ( v12 >= 1 )
          break;
      }
LABEL_22:
      LODWORD(MasterName_k__BackingField) = v7->fields._MasterName_k__BackingField;
      if ( (int)++v9 >= (int)MasterName_k__BackingField )
        return v8;
    }
    v13 = 0;
    while ( v12 != v13 )
    {
      if ( *(&Master_object->fields.revision + v13) >= skillLv )
        ++v8;
      if ( targetNum && v8 >= targetNum )
        return v8;
      if ( v12 == ++v13 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C32E84(Master_object);
  }
  return 0;
}


int32_t CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  System_Func_object__bool__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  CondType___c_c *v8; // x8
  System_Func_object__int__o *_9__201_1; // x20
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CondType___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__201_1; // x0
  CondType___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct CondType___c_StaticFields *v17; // x0

  if ( (byte_4C36858 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    sub_1C32C20(&System_Func_UserClassBoardSquareEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CondType___c__CountClassBoardSquareReleased_b__201_1__);
    sub_1C32C20(&Method_CondType___c__CountClassBoardSquareReleased_b__201_2__);
    sub_1C32C20(&Method_CondType___c__DisplayClass201_0__CountClassBoardSquareReleased_b__0__);
    sub_1C32C20(&CondType___c__DisplayClass201_0_TypeInfo);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36858 = 1;
  }
  v3 = sub_1C32E6C(CondType___c__DisplayClass201_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1C32E7C(Master_object);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( *(_DWORD *)(v3 + 16) )
  {
    v6 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass201_0__CountClassBoardSquareReleased_b__0__,
      0);
    v7 = System_Linq_Enumerable__Where_object_(
           monitor,
           (System_Func_TSource__bool__o *)v6,
           (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v8 = CondType___c_TypeInfo;
    monitor = v7;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v8 = CondType___c_TypeInfo;
    }
    _9__201_1 = (System_Func_object__int__o *)v8->static_fields->__9__201_1;
    if ( !_9__201_1 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = CondType___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__201_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__201_1, v10, Method_CondType___c__CountClassBoardSquareReleased_b__201_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__201_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__201_1;
      p__9__201_1 = (CGThumbnailListItem_o *)&static_fields->__9__201_1;
LABEL_20:
      sub_1C32BC4(p__9__201_1, (int32_t)_9__201_1, v11, v12);
    }
  }
  else
  {
    v15 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v15 = CondType___c_TypeInfo;
    }
    _9__201_1 = (System_Func_object__int__o *)v15->static_fields->__9__201_2;
    if ( !_9__201_1 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CondType___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v15->static_fields->__9;
      _9__201_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__201_1, v16, Method_CondType___c__CountClassBoardSquareReleased_b__201_2__, 0);
      v17 = CondType___c_TypeInfo->static_fields;
      v17->__9__201_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__201_1;
      p__9__201_1 = (CGThumbnailListItem_o *)&v17->__9__201_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           monitor,
           (System_Func_TSource__int__o *)_9__201_1,
           (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t CondType__CountCommonClassServantCollection(
        int32_t classId,
        System_Func_UserServantCollectionEntity__int__o *countFunc,
        const MethodInfo *method)
{
  UserServantCollectionEntity_array *Master_object; // x0
  UserServantCollectionEntity_array *v6; // x21
  int max_length; // w9
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x23
  int32_t v9; // w22
  int v10; // w8
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x24
  void *data; // x25
  const char *namespaze; // x26
  Il2CppObject *v16; // [xsp+0h] [xbp-70h] BYREF
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C36855 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C36855 = 1;
  }
  entity = 0;
  v16 = 0;
  *(_QWORD *)findSum = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    v6 = Master_object;
    if ( Master_object->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
      findSum[0] = 0;
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)max_length )
            sub_1C32E84(Master_object);
          v11 = &v6->obj.klass + v10;
          v12 = v11[4];
          if ( !v12 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v11[4],
                                                                 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v12->_1.namespaze;
            data = v12->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v19.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v19.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                                   v19,
                                                                   0);
            if ( !v8 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v8,
                                                                   &v16,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v16 )
                break;
              if ( LODWORD(v16[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(intptr_t, Il2CppClass *, intptr_t))countFunc->fields.invoke_impl)(
                                                                       countFunc->fields.method_code,
                                                                       v12,
                                                                       countFunc->fields.method);
                v9 += (int)Master_object;
              }
            }
          }
          v10 = findSum[0] + 1;
          findSum[0] = v10;
          max_length = v6->max_length;
          if ( v10 >= max_length )
            return v9;
        }
LABEL_31:
        sub_1C32E7C(Master_object);
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
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v19; // x0
  Il2CppObject *v20; // x23
  void *v21; // x24
  Il2CppClass *v22; // x25
  __int64 v23; // x0
  ServantLimitEntity_o *v24; // x24
  _BOOL8 v25; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // [xsp+0h] [xbp-B0h]
  int32_t v28; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C36840 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36840 = 1;
  }
  v3 = CondType_TypeInfo;
  memset(&v31, 0, sizeof(v31));
  entity = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v3 = CondType_TypeInfo;
  }
  lastUserId = v3->static_fields->lastUserId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
      sub_1C32E7C(cachedServantEquipIdStrDic);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager_TypeInfo;
    }
    CondType_TypeInfo->static_fields->lastUserId = v8->static_fields->userIdNumber;
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v9 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v9 )
    goto LABEL_57;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v9,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_57;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_57;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v13 = targetId / 100;
  v14 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    ServantEquipCollectionList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v28 = 0;
  v31 = v29;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C32E7C(v15);
    if ( LODWORD(v31.fields._current[2].monitor) == 2 )
    {
      monitor = v31.fields._current[1].monitor;
      klass = v31.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v32.fields.fakeValue = klass;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v32, 0);
      if ( !MasterData_object )
        sub_1C32E7C(v19);
      v20 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v19,
              (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v20 )
      {
        v22 = v20[1].klass;
        v21 = v20[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v22;
        *(_QWORD *)&v33.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v33, 0);
        if ( !v12 )
          sub_1C32E7C(v23);
        v24 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v12, v23, 0, 0);
        if ( v24
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v20, 0)
          && v24->fields.rarity == v14
          && SHIDWORD(current[2].monitor) >= v13 )
        {
          if ( !v27 )
            sub_1C32E7C(0);
          v25 = DataMasterBase_object__object__int___TryGetEntity(
                  v27,
                  &entity,
                  (int32_t)v20[8].monitor,
                  (const MethodInfo_3396884 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v25 )
            goto LABEL_51;
          if ( !entity )
            sub_1C32E7C(v25);
          if ( HIDWORD(entity[1].klass) != 3
            || ServantEntity__get_IsSvtEquipRarityLevelNumMission((ServantEntity_o *)v20, 0) )
          {
LABEL_51:
            ++v28;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v28;
}


int32_t CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3685D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3685D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__CountGrandServantSet(int32_t targetId, int32_t targetNum, const MethodInfo *method)
{
  __int64 v5; // x19
  Il2CppObject *Master_object; // x0
  EventMissionConditionMaster_o *v7; // x20
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_ICollection_o *v11; // x20
  Il2CppObject *v12; // x0
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x20
  System_Func_object__bool__o *v15; // x21

  if ( (byte_4C36875 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventMissionConditionEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__0__);
    sub_1C32C20(&Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__1__);
    sub_1C32C20(&Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__2__);
    sub_1C32C20(&CondType___c__DisplayClass233_0_TypeInfo);
    byte_4C36875 = 1;
  }
  v5 = sub_1C32E6C(CondType___c__DisplayClass233_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_DWORD *)(v5 + 16) = targetId;
  *(_DWORD *)(v5 + 20) = targetNum;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v7 = (EventMissionConditionMaster_o *)Master_object;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v7 )
    goto LABEL_18;
  EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                    v7,
                                    CondType_TypeInfo->static_fields->EventId,
                                    258,
                                    0);
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventMissionConditionEntity___);
  v11 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v10,
                                              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
  if ( BasicHelper__IsNullOrEmpty(v11, 0) )
  {
    LODWORD(v12) = 0;
    return (int)v12;
  }
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventMissionConditionEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__1__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventMissionConditionEntity___);
  if ( !v12 )
    return (int)v12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
LABEL_18:
    sub_1C32E7C(Master_object);
  UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)Master_object, 0);
  v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass233_0__CountGrandServantSet_b__2__,
    0);
  LODWORD(v12) = System_Linq_Enumerable__Count_object__51376204(
                   (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
                   (System_Func_TSource__bool__o *)v15,
                   (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
  if ( (int)v12 >= *(_DWORD *)(v5 + 20) )
    LODWORD(v12) = *(_DWORD *)(v5 + 20);
  return (int)v12;
}


int32_t CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  UserEventRandomMissionMaster_o *v5; // x20
  int32_t v6; // w21
  unsigned __int64 v7; // x22

  if ( (byte_4C3684A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3684A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  max_length = missionIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = Master_object;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      if ( !v5 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v5,
                                                          missionIds->m_Items[v7],
                                                          0);
      if ( Master_object )
        v6 += *(&Master_object->fields.revision + 1);
      LODWORD(max_length) = missionIds->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        return v6;
    }
LABEL_16:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


int32_t CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3683A & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_165_0__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C3683A = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_165_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3683D & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_168_0__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C3683D = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_168_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C36838 & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_163_0__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C36838 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_163_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C36854 & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_196_0__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4C36854 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0, Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_196_0__, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w21
  System_Func_object__int__o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4C36839 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1C32C20(&Method_CondType___c__DisplayClass164_0__CountServantFriendShipClassNum_g__CountFunc_0__);
    sub_1C32C20(&CondType___c__DisplayClass164_0_TypeInfo);
    byte_4C36839 = 1;
  }
  v3 = sub_1C32E6C(CondType___c__DisplayClass164_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  v5 = targetId / 100;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v6 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass164_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v5, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
}


int32_t CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
{
  UserServantCollectionEntity_array *Instance; // x0
  UserServantCollectionEntity_array *v6; // x21
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x23
  __int64 v9; // x26
  int32_t v10; // w22
  UserServantCollectionEntity_o *v11; // x24
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C3683C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3683C = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v6 = Instance;
    if ( Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1C32E84(Instance);
          v11 = v6->m_Items[v9];
          if ( !v11 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v6->m_Items[v9], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 && v11->fields.maxLv >= level )
          {
            v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v13;
            *(_QWORD *)&v16.fields.fakeValue = v12;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                              v16,
                                                              0);
            if ( !v8 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v8,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance->m_Items[6]) == classId )
              ++v10;
          }
          max_length = v6->max_length;
          if ( (int)++v9 >= max_length )
            return v10;
        }
LABEL_27:
        sub_1C32E7C(Instance);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v7; // x20

  if ( (byte_4C3683E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3683E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  }
  v7 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0)
      && SHIDWORD(v7->fields.datalist) >= level;
}


int32_t CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int v4; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x22
  __int64 v8; // x26
  int32_t v9; // w23
  int v10; // w29
  UserServantCollectionEntity_o *v11; // x20
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C36837 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36837 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v4 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    max_length = CollectionList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v8 = 0;
        v9 = 0;
        v10 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v8 >= (unsigned int)max_length )
            sub_1C32E84(Instance);
          v11 = CollectionList->m_Items[v8];
          if ( !v11 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v8], 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v16.fields.currentCryptoKey = v13;
            *(_QWORD *)&v16.fields.fakeValue = v12;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0);
            if ( !v7 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v7,
                         (int32_t)Instance,
                         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v4 && v11->fields.maxLimitCount >= v10 )
              ++v9;
          }
          LODWORD(max_length) = CollectionList->max_length;
          if ( (int)++v8 >= (int)max_length )
            return v9;
        }
LABEL_27:
        sub_1C32E7C(Instance);
      }
    }
  }
  return 0;
}


int32_t CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w21
  System_Func_object__int__o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4C36853 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1C32C20(&Method_CondType___c__DisplayClass195_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__);
    sub_1C32C20(&CondType___c__DisplayClass195_0_TypeInfo);
    byte_4C36853 = 1;
  }
  v3 = sub_1C32E6C(CondType___c__DisplayClass195_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  v5 = targetId / 100;
  *(_DWORD *)(v3 + 16) = targetId % 100;
  v6 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass195_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v5, (System_Func_UserServantCollectionEntity__int__o *)v6, v7);
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
  if ( (byte_4C3683B & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C3683B = 1;
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
        sub_1C32E84(targetParam);
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
    sub_1C32E7C(targetParam);
  }
  return v6;
}


int32_t CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  UserEventBoardGameTokenEntity_array *Instance; // x0
  int max_length; // w9
  int v5; // w10
  int32_t v6; // w8
  UserEventBoardGameTokenEntity_o *v7; // x11

  if ( (byte_4C36831 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36831 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_42924600((UserEventBoardGameTokenMaster_o *)Instance, 0);
  if ( tokenId )
  {
    if ( !Instance )
      goto LABEL_19;
    max_length = Instance->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        if ( max_length == v5 )
          sub_1C32E84(Instance);
        v7 = Instance->m_Items[v5];
        if ( !v7 )
          break;
        ++v5;
        if ( v7->fields.tokenId == tokenId )
          ++v6;
        if ( max_length == v5 )
          return v6;
      }
LABEL_19:
      sub_1C32E7C(Instance);
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
  if ( (byte_4C367A4 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367A4 = 1;
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C3681F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3681F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C36861 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36861 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3685B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3685B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3685F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3685F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0);
}


int32_t CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v6; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C367AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4C367AE = 1;
  }
  entity = 0;
  v6 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                targetId,
                                (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0);
LABEL_23:
      sub_1C32E7C(Instance);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
                                &v6,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v6 )
    goto LABEL_23;
  return v6->fields.num;
}


int32_t CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  EventMissionMaster_o *v5; // x19
  const MethodInfo *v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4C367E6 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E6 = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v5 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v5
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v5, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C32E7C(Instance);
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
        sub_1C32E84(Instance);
      v11 = v8->m_Items[v10];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v11, v6);
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
  EventMissionMaster_o *v5; // x19
  const MethodInfo *v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4C367E7 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E7 = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v5 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v5
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v5, CondType_TypeInfo->static_fields->EventId, 0)) == 0 )
    {
LABEL_22:
      sub_1C32E7C(Instance);
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
        sub_1C32E84(Instance);
      v11 = v8->m_Items[v10];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v11, v6);
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
      return dword_C46730[v2];
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
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v11; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x25
  il2cpp_array_size_t max_length; // x8
  int32_t v18; // w21
  unsigned __int64 v19; // x26
  bool v20; // w23
  int32_t v21; // w24

  if ( (byte_4C367F0 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367F0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v11 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1C32BC4((CGThumbnailListItem_o *)sameGroupQuestIds, (int32_t)QuestIdListByGroupId, v13, v14),
        (v16 = *sameGroupQuestIds) == 0) )
  {
LABEL_30:
    sub_1C32E7C(Instance);
  }
  max_length = v16->max_length;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    v19 = 0;
    v20 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      v21 = v16->m_Items[v19];
      if ( v21 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_40225464(v21, -1, v20, v15);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          ++v18;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v11 )
            goto LABEL_30;
          Instance = (DataManager_o *)UserQuestMaster__getEntityFromId(
                                        v11,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        v21,
                                        0);
          if ( Instance )
          {
            Instance = (DataManager_o *)UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0);
            if ( (int)Instance > 0 )
              ++v18;
          }
        }
      }
      LODWORD(max_length) = v16->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        return v18;
    }
  }
  return 0;
}


int32_t CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4C367F4 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367F4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) >= condVal;
}


int32_t CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t CondType__GetOpenTime(const MethodInfo *method)
{
  if ( (byte_4C367F3 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367F3 = 1;
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
  if ( (byte_4C367B5 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367B5 = 1;
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
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
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

  if ( (byte_4C367B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType_CountServantLevelClassNum__);
    sub_1C32C20(&Method_CondType_CountServantLevelIdNum__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&CondType_CountDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Aggregate_int__int___);
    sub_1C32C20(&System_Func_int__int__int__TypeInfo);
    sub_1C32C20(&Method_CondType___c__GetProgressNumByTargetIds_b__30_0__);
    sub_1C32C20(&Method_CondType___c__GetProgressNumByTargetIds_b__30_1__);
    sub_1C32C20(&Method_CondType___c__GetProgressNumByTargetIds_b__30_2__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C367B6 = 1;
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
        _9__30_1 = (System_Func_int__int__int__o *)sub_1C32E6C(System_Func_int__int__int__TypeInfo);
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
        _9__30_1 = (System_Func_int__int__int__o *)sub_1C32E6C(System_Func_int__int__int__TypeInfo);
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
      _9__30_1 = (System_Func_int__int__int__o *)sub_1C32E6C(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__30_1, v8, Method_CondType___c__GetProgressNumByTargetIds_b__30_0__, 0);
      v11 = CondType___c_TypeInfo->static_fields;
      v11->__9__30_0 = _9__30_1;
      p__9__30_1 = (CGThumbnailListItem_o *)&v11->__9__30_0;
    }
    sub_1C32BC4(p__9__30_1, (int32_t)_9__30_1, v9, v10);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__30_1,
                        (const MethodInfo_30E56C8 *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v13 = (CondType_CountDelegate_o *)sub_1C32E6C(CondType_CountDelegate_TypeInfo);
    v15 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0;
    v13 = (CondType_CountDelegate_o *)sub_1C32E6C(CondType_CountDelegate_TypeInfo);
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
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367DE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367DE = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  }
  return 0;
}


int32_t CondType__GetQuestChallengeNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t challengeNum; // w25
  QuestGroupMaster_o *v10; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x26
  int32_t v14; // w22
  Il2CppObject *MasterData_object; // x23
  int32_t v17; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C367F6 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367F6 = 1;
  }
  v17 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v10 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v10 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v10,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v12 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          challengeNum = 0;
          v13 = 0;
          while ( 1 )
          {
            if ( v13 >= (unsigned int)m_CancellationTokenSource )
              sub_1C32E84(Instance);
            v14 = *((_DWORD *)&v12->fields._DispLog + v13);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C31812 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C31812 = 1;
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
                                          v14,
                                          0);
            if ( Instance )
              challengeNum += LODWORD(Instance->fields.masterDataBytes);
            LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
            if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(Instance);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  if ( challengeNum >= v17 )
    return v17;
  else
    return challengeNum;
}


int32_t CondType__GetQuestClearCount(int32_t targetId, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  DataManager_o *Instance; // x0
  QuestGroupMaster_o *v6; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v8; // x19
  unsigned __int64 v9; // x26
  int32_t v10; // w22
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v12; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C367E5 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E5 = 1;
  }
  entity = 0;
  if ( !targetId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v6 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v6 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v6,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v8 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            return 0;
          v4 = 0;
          v9 = 0;
          while ( 1 )
          {
            if ( v9 >= (unsigned int)m_CancellationTokenSource )
              sub_1C32E84(Instance);
            v10 = *((_DWORD *)&v8->fields._DispLog + v9);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C31812 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C31812 = 1;
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
                                          v10,
                                          0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Instance = (DataManager_o *)CondType__IsQuestClear_40225464(v10, -1, 0, v12);
              v4 += (unsigned __int8)Instance & 1;
            }
            LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
            if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
              return v4;
          }
        }
      }
    }
    sub_1C32E7C(Instance);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(targetId, -1, 0, v2);
}


int32_t CondType__GetQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x22
  DataManager_o *Instance; // x0
  UserQuestEntity_o *EntityFromId; // x0
  int32_t ClearNum; // w21
  QuestGroupMaster_o *v10; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v12; // x22
  unsigned __int64 v13; // x26
  int32_t v14; // w23
  Il2CppObject *MasterData_object; // x24
  int32_t v17; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C367ED & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367ED = 1;
  }
  v17 = condVal;
  if ( !condId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v10 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( v10 )
      {
        Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByEventId(
                                      v10,
                                      CondType_TypeInfo->static_fields->EventId,
                                      0);
        if ( Instance )
        {
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v12 = Instance;
          if ( (int)m_CancellationTokenSource < 1 )
            goto LABEL_35;
          ClearNum = 0;
          v13 = 0;
          while ( 1 )
          {
            if ( v13 >= (unsigned int)m_CancellationTokenSource )
              sub_1C32E84(Instance);
            v14 = *((_DWORD *)&v12->fields._DispLog + v13);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C31812 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C31812 = 1;
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
                                          v14,
                                          0);
            if ( Instance )
            {
              Instance = (DataManager_o *)UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0);
              ClearNum += (int)Instance;
            }
            LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
            if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
              goto LABEL_36;
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(Instance);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  if ( ClearNum >= v17 )
    return v17;
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
  UserQuestMaster_o *UserQuestMaster; // x22
  _QWORD *p_image; // x0
  int32_t result; // w0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367BD & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367BD = 1;
  }
  v8 = CondType_TypeInfo;
  entity = 0;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(p_image);
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
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *CacheByTypeGroup; // x0
  int32_t v10; // w21
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  int32_t v13; // w22
  const MethodInfo *v14; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v16; // x22
  unsigned __int64 v17; // x24
  int32_t v18; // w23
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C367F2 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C367F2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        CacheByTypeGroup,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestGroupEntity__GetEnumerator__);
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__MoveNext__);
        if ( !v11 )
          break;
        if ( !v20.fields._current )
          sub_1C32E7C(v11);
        v13 = *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10);
        if ( v13 != questId )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v10 += CondType__IsQuestClear_40225464(v13, -1, isCheckResetFlag, v12);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestGroupEntity__Dispose__);
      return v10;
    }
    return 0;
  }
  Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)MasterData_object, groupId, 2, 0);
  if ( !Instance )
LABEL_30:
    sub_1C32E7C(Instance);
  max_length = Instance->max_length;
  v16 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v10 = 0;
  v17 = 0;
  do
  {
    if ( v17 >= (unsigned int)max_length )
      sub_1C32E84(Instance);
    v18 = v16->m_Items[v17];
    if ( v18 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestClear_40225464(v18, -1, isCheckResetFlag, v14);
      v10 += (unsigned __int8)Instance & 1;
    }
    LODWORD(max_length) = v16->max_length;
    ++v17;
  }
  while ( (__int64)v17 < (int)max_length );
  return v10;
}


int64_t CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int64_t v7; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4C367F5 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367F5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v7 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
LABEL_19:
    sub_1C32E7C(Instance);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
             v7,
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
  EventRaidEntity_array *EventRaidEntityArray; // x20
  int max_length; // w8
  TotalEventRaidMaster_o *v8; // x21
  unsigned int v9; // w23
  int32_t v10; // w22
  EventRaidEntity_o *v11; // x24
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = condValue;
  if ( (byte_4C367AD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367AD = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !EventRaidEntityArray )
    goto LABEL_20;
  max_length = EventRaidEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = (TotalEventRaidMaster_o *)Instance;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C32E84(Instance);
      v11 = EventRaidEntityArray->m_Items[v9];
      if ( !v11 || !v8 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v8, &entity, targetId, v11->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        if ( entity->fields.totalDamage >= v11->fields.maxHp )
          ++v10;
      }
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v9 >= max_length )
        return v10;
    }
LABEL_20:
    sub_1C32E7C(Instance);
  }
  return 0;
}


int32_t CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C36849 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36849 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
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

  if ( (byte_4C367CD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0);
}


int32_t CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3681E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3681E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0);
}


int32_t CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v5; // x19
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  __int64 v8; // x22
  int32_t v9; // w20
  ShopGroupEntity_o *v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36815 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36815 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v5 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v5->max_length;
      if ( max_length >= 1 )
      {
        v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v8 = 0;
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v8 >= max_length )
            sub_1C32E84(Instance);
          v10 = v5->m_Items[v8];
          if ( !v10 || !v7 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v7,
                                       &entity,
                                       v10->fields.shopId,
                                       (const MethodInfo_3396884 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v9 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v5->max_length;
          if ( (int)++v8 >= max_length )
            return v9;
        }
LABEL_22:
        sub_1C32E7C(Instance);
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int64_t CondType__GetSuperBossDamage(int32_t condId, int64_t condVal, int32_t eventId, const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4C367F7 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367F7 = 1;
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
  Il2CppObject *MasterData_object; // x21
  int64_t v7; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4C367F9 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367F9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    v7 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_object )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 (UserSuperBossMaster_o *)MasterData_object,
                 v7,
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
    sub_1C32E7C(Instance);
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
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367F8 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_15:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C36821 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36821 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0);
}


int32_t CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C367EB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367EB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_17:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       condId,
                       0);
  if ( EntityDefinitely )
  {
    v8 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v9 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v11.fields.currentCryptoKey = v8;
    *(_QWORD *)&v11.fields.fakeValue = v9;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v11, 0);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4C367E8 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367E8 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


int32_t CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C367E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C367EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367EA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_16:
    sub_1C32E7C(Instance);
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
  Il2CppObject *MasterData_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CondType_c *v6; // x8
  Il2CppObject *v7; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4C367A5 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367A5 = 1;
  }
  v1 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v6 = CondType_TypeInfo;
    v7 = MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->uQuestMst, (int32_t)v7, v4, v5);
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

  if ( (byte_4C3686D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C3686D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0

  if ( (byte_4C3686E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3686E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___)) == 0 )
  {
LABEL_16:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C36871 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36871 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C36829 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36829 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0) >= count;
}


bool CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C36818 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36818 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) >= time;
}


bool CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0

  if ( (byte_4C36867 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C36867 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    sub_1C32E7C(0);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v3, 0);
}


bool CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x20
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v11; // x21
  unsigned __int64 v12; // x26
  int32_t v13; // w25
  int32_t v14; // w23
  int32_t v15; // w24

  if ( (byte_4C36834 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36834 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 15, 0);
  if ( !Instance )
    goto LABEL_28;
  v8 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C32E7C(Instance);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v8->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v11 = MasterData_object;
  v12 = 0;
  v13 = 0;
  if ( isWin )
    v14 = 128;
  else
    v14 = 256;
  do
  {
    if ( v12 >= (unsigned int)m_CancellationTokenSource )
      sub_1C32E84(MasterData_object);
    v15 = *((_DWORD *)&v8->fields._DispLog + v12);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v11 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v11,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v15,
                                               0);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v14,
                                                 0);
      v13 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v13 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
    ++v12;
  }
  while ( (__int64)v12 < (int)m_CancellationTokenSource );
  return v13 >= val;
}


bool CondType__IsBattleLineReusltConsecutiveCount(
        int32_t groupId,
        int32_t val,
        bool isWin,
        bool isBelow,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v10; // x21
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v13; // x22
  unsigned __int64 v14; // x26
  int32_t v15; // w27
  int32_t v16; // w24
  int32_t v17; // w25

  if ( (byte_4C36833 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Sort_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36833 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_34;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 14, 0);
  if ( !Instance )
    goto LABEL_34;
  v10 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_30A9824 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_34:
    sub_1C32E7C(Instance);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v10->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = MasterData_object;
    v14 = 0;
    v15 = 0;
    if ( isWin )
      v16 = 128;
    else
      v16 = 256;
    do
    {
      if ( v14 >= (unsigned int)m_CancellationTokenSource )
        sub_1C32E84(MasterData_object);
      v17 = *((_DWORD *)&v10->fields._DispLog + v14);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v13 )
        goto LABEL_34;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                                 v13,
                                                 *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                                 v17,
                                                 0);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v16,
                                                   0);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
          ++v15;
        else
          v15 = 0;
      }
      else
      {
        v15 = 0;
      }
      if ( isBelow )
      {
        if ( v15 > val )
          return 0;
      }
      else if ( v15 >= val )
      {
        return 1;
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      ++v14;
    }
    while ( (__int64)v14 < (int)m_CancellationTokenSource );
  }
  return isBelow;
}


bool CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  DataManager_o *v8; // x20
  UserQuestMaster_o *MasterData_object; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v11; // x21
  unsigned __int64 v12; // x26
  int32_t v13; // w25
  int32_t v14; // w23
  int32_t v15; // w24

  if ( (byte_4C36832 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36832 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 14, 0);
  if ( !Instance )
    goto LABEL_28;
  v8 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C32E7C(Instance);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v8->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v11 = MasterData_object;
  v12 = 0;
  v13 = 0;
  if ( isWin )
    v14 = 128;
  else
    v14 = 256;
  do
  {
    if ( v12 >= (unsigned int)m_CancellationTokenSource )
      sub_1C32E84(MasterData_object);
    v15 = *((_DWORD *)&v8->fields._DispLog + v12);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !v11 )
      goto LABEL_28;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(
                                               v11,
                                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                               v15,
                                               0);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v14,
                                                 0);
      v13 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v13 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
    ++v12;
  }
  while ( (__int64)v12 < (int)m_CancellationTokenSource );
  return v13 >= val;
}


bool CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  if ( (byte_4C3686F & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3686F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) < time;
}


bool CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C36870 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36870 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4C36830 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36830 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3682F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3682F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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

  if ( (byte_4C3682E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3682E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0);
}


bool CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36845 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36845 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool CondType__IsClassBoardSquareAllReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  ClassBoardSquareEntity_array *AllEntity; // x0
  const MethodInfo *v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  int32_t v7; // w0
  CondType___c_c *v8; // x8
  int32_t v9; // w20
  System_Func_object__bool__o *_9__202_0; // x21
  Il2CppObject *v11; // x22
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C36859 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
    sub_1C32C20(&System_Func_ClassBoardSquareEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CondType___c__IsClassBoardSquareAllReleased_b__202_0__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36859 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  AllEntity = ClassBoardSquareMaster__GetAllEntity((ClassBoardSquareMaster_o *)Master_object, targetId, 0);
  if ( AllEntity )
  {
    v6 = (System_Collections_Generic_IEnumerable_TSource__o *)AllEntity;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v7 = CondType__CountClassBoardSquareReleased(targetId, v5);
    v8 = CondType___c_TypeInfo;
    v9 = v7;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v8 = CondType___c_TypeInfo;
    }
    _9__202_0 = (System_Func_object__bool__o *)v8->static_fields->__9__202_0;
    if ( !_9__202_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = CondType___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__202_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ClassBoardSquareEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__202_0, v11, Method_CondType___c__IsClassBoardSquareAllReleased_b__202_0__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__202_0 = (struct System_Func_ClassBoardSquareEntity__bool__o *)_9__202_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__202_0, (int32_t)_9__202_0, v13, v14);
    }
    LOBYTE(AllEntity) = v9 == System_Linq_Enumerable__Count_object__51376204(
                                v6,
                                (System_Func_TSource__bool__o *)_9__202_0,
                                (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_ClassBoardSquareEntity___);
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
  if ( (byte_4C3686C & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3686C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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

  if ( (byte_4C36826 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36826 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsCommandCodeGet_40289584(userIdNumber, commandCodeId, v2);
}


bool CondType__IsCommandCodeGet_40289584(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36827 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36827 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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

  if ( (byte_4C3682B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3682B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantMaxLimit(int32_t eventId, int32_t targetCount, const MethodInfo *method)
{
  if ( (byte_4C3685C & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3685C = 1;
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
  if ( (byte_4C36860 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36860 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestFriendShipRank(eventId, *(const MethodInfo **)&targetFriendShipRank) >= targetFriendShipRank;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsCompleteExchangeServantTargetLevel(int32_t eventId, int32_t targetLevel, const MethodInfo *method)
{
  if ( (byte_4C3685A & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3685A = 1;
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
  if ( (byte_4C3685E & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3685E = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36857 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36857 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0) <= SLODWORD(heelPortraitIds->max_length);
      }
    }
LABEL_15:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


bool CondType__IsCompleteHighestWaveValue(int32_t questId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *List; // x22
  CondType___c_c *v9; // x0
  System_Func_object__bool__o *_9__231_0; // x23
  Il2CppObject *v11; // x24
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t ReachedWave; // w0

  if ( (byte_4C36873 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_QuestPhaseEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CondType___c__IsCompleteHighestWaveValue_b__231_0__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36873 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  List = (System_Collections_ICollection_o *)QuestPhaseMaster__getList((QuestPhaseMaster_o *)Master_object, questId, 0);
  if ( BasicHelper__IsNullOrEmpty(List, 0) )
    return 0;
  v9 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v9 = CondType___c_TypeInfo;
  }
  _9__231_0 = (System_Func_object__bool__o *)v9->static_fields->__9__231_0;
  if ( !_9__231_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CondType___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__231_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__231_0, v11, Method_CondType___c__IsCompleteHighestWaveValue_b__231_0__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__231_0 = (struct System_Func_QuestPhaseEntity__bool__o *)_9__231_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__231_0, (int32_t)_9__231_0, v13, v14);
  }
  if ( !BasicHelper__Any_object__51144764(
          (System_Object_array *)List,
          (System_Func_T__bool__o *)_9__231_0,
          (const MethodInfo_30C683C *)Method_BasicHelper_Any_QuestPhaseEntity___) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1C32E7C(Master_object);
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)Master_object, questId, 0);
  if ( checkType == 1 )
    return ReachedWave >= num;
  else
    return checkType == 2 && ReachedWave <= num;
}


bool CondType__IsCompleteUserGameCommonValue(int32_t no, int32_t num, int32_t checkType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  NetworkManager_c *v8; // x0
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36868 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserGameCommonMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36868 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_21;
  v8 = (NetworkManager_c *)UserGameCommonMaster__TryGetEntity(
                             (UserGameCommonMaster_o *)Master_object,
                             &entity,
                             v8->static_fields->userIdNumber,
                             no,
                             0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( entity )
    {
      value = entity->fields.value;
      goto LABEL_16;
    }
LABEL_21:
    sub_1C32E7C(v8);
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
  int64_t Time_41266888; // x0
  System_DateTime_o v7; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3684B & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3684B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v5.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_41266888 = NetworkManager__getTime_41266888(v5, 0);
  dateData = NetworkManager__getDateTime_41267668(Time_41266888 - 3600 * condNum, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek(v7, 0) + 1)) & 1;
}


bool CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36803 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36803 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
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
  System_Collections_Generic_List_object__o *EntityListFromDay; // x23
  __int64 v13; // x25
  _BOOL8 v14; // x0
  float v15; // s0
  int64_t v16; // x22
  CondType_c *v17; // x0
  float v18; // s1
  bool v19; // cc
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-70h] BYREF
  int64_t maxHpSum; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C36863 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36863 = 1;
  }
  maxHpSum = 0;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1C32E7C(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    EntityListFromDay,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v13 = 0;
  for ( i = v22; ; v13 += (__int64)i.fields._current[1].monitor )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v14 )
      break;
    if ( !i.fields._current )
      sub_1C32E7C(v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
  if ( isRate )
  {
    v15 = 0.0;
    if ( v13 >= 1 )
    {
      v16 = maxHpSum;
      if ( maxHpSum >= 1 )
      {
        v17 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          v17 = CondType_TypeInfo;
        }
        v15 = (float)((float)v13 / (float)v16) * (float)v17->static_fields->RAID_DAMAGE_RATE_FRACTION;
      }
    }
    v18 = (float)num;
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v19 = v15 < v18;
        if ( isIncludingEquals )
          return !v19;
        return !v19;
      }
      return v15 == v18;
    }
    if ( isIncludingEquals )
      return v15 <= v18;
    else
      return v15 < v18;
  }
  else
  {
    if ( checkType != 2 )
    {
      if ( checkType == 1 )
      {
        v19 = v13 < num;
        if ( isIncludingEquals )
          return !v19;
        return !v19;
      }
      return v13 == num;
    }
    if ( isIncludingEquals )
      return v13 <= num;
    else
      return v13 < num;
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
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x24
  int max_length; // w8
  TotalEventRaidMaster_o *v14; // x25
  int v15; // w28
  __int64 v16; // x27
  __int64 v17; // x26
  EventRaidEntity_o *v18; // x29
  float v19; // s0
  CondType_c *v20; // x0
  float v21; // s1
  bool v22; // cc
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C36864 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36864 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1C32E7C(Instance);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v17 = 0;
    v16 = 0;
    if ( isRate )
    {
LABEL_17:
      v19 = 0.0;
      if ( v16 >= 1 && v17 >= 1 )
      {
        v20 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
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
          v22 = v19 < v21;
          if ( isIncludingEquals )
            return !v22;
          return !v22;
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
    v16 = 0;
    v17 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      v18 = EventRaidEntityArrayFromEventId->m_Items[v15];
      if ( !v18 || !v14 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v14, &entity, eventId, v18->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_46;
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
      v22 = v17 < num;
      if ( isIncludingEquals )
        return !v22;
      return !v22;
    }
    return v17 == num;
  }
  if ( isIncludingEquals )
    return v17 <= num;
  else
    return v17 < num;
}


bool CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v7; // x19
  QuestPhaseMaster_c *v8; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v10; // x19

  if ( (byte_4C36823 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&QuestPhaseMaster_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36823 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0);
  if ( Entity )
  {
    v7 = Entity;
    v8 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v8 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v7, v8->static_fields->MOVIE_QUEST_SCRIPT_STR, 0, 0);
    if ( ScriptStr )
    {
      v10 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.writeMasterDataThreadException;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v10, 0);
      }
LABEL_13:
      sub_1C32E7C(Instance);
    }
  }
  return 0;
}


bool CondType__IsElapsedTimeAfterQuestClear(int32_t questId, int64_t elapsedTime, const MethodInfo *method)
{
  const MethodInfo *v5; // x0
  int64_t v6; // x21
  UserQuestMaster_o *UserQuestMaster; // x0
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v9; // x3
  UserQuestEntity_o *v10; // x21
  bool IsQuestClear_40225464; // w8
  int64_t updatedAt; // x20
  System_DateTime_o v13; // x0
  int64_t Time_41266888; // x20

  if ( (byte_4C36869 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36869 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(0);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v6, questId, 0);
  if ( EntityFromId )
  {
    v10 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_40225464 = CondType__IsQuestClear_40225464(questId, -1, 0, v9);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_40225464 )
    {
      updatedAt = v10->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v13.fields._dateData = NetworkManager__getServerDateTime_41267996(updatedAt, 0).fields._dateData;
      Time_41266888 = NetworkManager__getTime_41266888(v13, 0);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0) - Time_41266888 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool CondType__IsElapsedTimeAfterSvtGet(int32_t svtId, int64_t elapsedTime, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3686A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3686A = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserSvtFirstGetTimeMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         svtId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_UserSvtFirstGetTimeMaster__UserSvtFirstGetTimeEntity__int__TryGetEntity__) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager__getTime(0);
    if ( entity )
      return (char *)Master_object - (char *)entity[1].monitor >= elapsedTime;
LABEL_12:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


bool CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  int64_t Time; // x20
  Il2CppObject *Instance; // x0

  if ( (byte_4C36824 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestDateRangeMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36824 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return QuestDateRangeMaster__IsPeriodFromOpenedToClosed((QuestDateRangeMaster_o *)Instance, questDateRangeId, Time, 0);
}


bool CondType__IsEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEquipEntity_o *userEquipEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36876 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36876 = 1;
  }
  userEquipEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
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
  if ( (byte_4C3683F & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C3683F = 1;
  }
  if ( !v4 )
    sub_1C32E7C(targetIds);
  max_length = v4->max_length;
  v6 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(v6);
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

  if ( (byte_4C36817 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36817 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return UserServantMaster__IsEquipCostume((UserServantMaster_o *)Master_object, svtId, costumeId, 0);
}


bool CondType__IsEvent(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4C367D6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0);
  return (char)Entity;
}


bool CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C36807 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36807 = 1;
  }
  entity = 0;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_14:
    sub_1C32E7C(Instance);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C36806 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36806 = 1;
  }
  entity = 0;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !entity )
LABEL_13:
      sub_1C32E7C(Instance);
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

  if ( (byte_4C36808 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36808 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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

  if ( (byte_4C36809 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36809 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w22
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C36856 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    byte_4C36856 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      EntityList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(v10, v9) )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v8 )
        break;
      if ( !v12.fields._current )
        sub_1C32E7C(v8);
      v10 = *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&dword_14);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0

  if ( (byte_4C367FF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FF = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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

  if ( (byte_4C367FE & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FE = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v10; // x23
  const MethodInfo *v11; // x3
  int32_t v12; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3680E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindIndex_int___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CondType___c__DisplayClass119_0__IsEventRaceGoalScriptPlayed_b__0__);
    sub_1C32C20(&CondType___c__DisplayClass119_0_TypeInfo);
    byte_4C3680E = 1;
  }
  goalTime = 0;
  v7 = sub_1C32E6C(CondType___c__DisplayClass119_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0);
  v10 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass119_0__IsEventRaceGoalScriptPlayed_b__0__,
    0);
  v12 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_31E2FAC *)Method_System_Array_FindIndex_int___)
      + 1;
  if ( v12 < 1 )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEventRaceRankedScriptPlayed(eventId, termId, v12, v11);
  }
}


bool CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3680C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3680C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0 )
  {
LABEL_12:
    sub_1C32E7C(Instance);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, klass_high, 0) == groupId;
}


bool CondType__IsEventRaceRankedScriptPlayed(int32_t eventId, int32_t termId, int32_t rank, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v9; // x2
  int32_t flagId; // w20

  if ( (byte_4C3680F & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3680F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v9);
  }
  return (char)RaceResultEntity;
}


bool CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3680D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3680D = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  return UserEventEntity__getScriptFlag(entity, flagId, 0);
}


bool CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v7; // w21
  _BOOL4 v8; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = flagId;
  if ( (byte_4C3681C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3681C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  v7 = *((_DWORD *)Instance + 8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v7, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    LOBYTE(v8) = 0;
    return v8;
  }
  if ( !entity )
LABEL_18:
    sub_1C32E7C(Instance);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


bool CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  _QWORD *p_image; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3684E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3684E = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(p_image);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0);
}


bool CondType__IsEventTypeStartTimeToEndDate(int32_t eventType, int32_t overWriteTime, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Collections_ObjectModel_Collection_T__o *datalist; // x19
  int64_t v7; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v9; // w24
  int32_t v10; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  char v15; // w23
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x26
  int64_t v22; // x27
  System_DateTime_o v23; // x0
  int32_t Year; // w27
  System_DateTime_o v25; // x0
  int32_t Month; // w28
  System_DateTime_o v27; // x0
  int32_t Day; // w3
  System_DateTime_o v29; // x0
  uint64_t v30; // x26
  System_DateTime_o v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  int hour; // [xsp+Ch] [xbp-74h]
  System_DateTime_o dateTime; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C36844 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36844 = 1;
  }
  dateTime.fields._dateData = 0;
  dateData = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_42;
  datalist = (System_Collections_ObjectModel_Collection_T__o *)Instance->fields.datalist;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getServerTime(0);
  if ( !datalist )
LABEL_42:
    sub_1C32E7C(Instance);
  v7 = (int64_t)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 datalist,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  hour = overWriteTime / 10000;
  v9 = overWriteTime / 100 % 100;
  v10 = overWriteTime % 100;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_21;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_21:
      v19 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( v20 && *(_DWORD *)(v20 + 24) == eventType )
    {
      v22 = *(_QWORD *)(v20 + 96);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_41267668(v22, 0).fields._dateData;
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v23.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v23, 0);
      v25.fields._dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v25, 0);
      v27.fields._dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v27, 0);
      v29.fields._dateData = (uint64_t)&dateTime;
      System_DateTime___ctor_64904888(v29, Year, Month, Day, hour, v9, v10, 0);
      if ( *(_QWORD *)(v21 + 88) <= v7 )
      {
        v30 = dateTime.fields._dateData;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v31.fields._dateData = v30;
        if ( v7 <= NetworkManager__getTime_41266888(v31, 0) )
          goto LABEL_35;
      }
    }
  }
  v15 = 0;
LABEL_35:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_39;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_39:
    v35 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v15 & 1;
}


bool CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Master_object; // x0
  System_Collections_Generic_List_T__o *ExchangeSvtCampaign; // x20
  System_Func_object__bool__o *v6; // x21
  Il2CppObject *v7; // x20

  if ( (byte_4C36862 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_EventCampaignEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Method_CondType___c__DisplayClass211_0__IsExchangeSvtBuff_b__0__);
    sub_1C32C20(&CondType___c__DisplayClass211_0_TypeInfo);
    byte_4C36862 = 1;
  }
  v3 = sub_1C32E6C(CondType___c__DisplayClass211_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_20;
  *(_DWORD *)(v3 + 16) = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  ExchangeSvtCampaign = (System_Collections_Generic_List_T__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                  (EventCampaignMaster_o *)Master_object,
                                                                  0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ExchangeSvtCampaign, 0) )
  {
    v6 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v6,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass211_0__IsExchangeSvtBuff_b__0__,
      0);
    if ( BasicHelper__Any_object_(
           ExchangeSvtCampaign,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_30C6790 *)Method_BasicHelper_Any_EventCampaignEntity___) )
    {
      goto LABEL_23;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_20;
  if ( !v7 )
    goto LABEL_20;
  Master_object = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)v7, 0, *((_QWORD *)Master_object + 14), 0);
  if ( !Master_object )
    goto LABEL_20;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Master_object,
         *(_DWORD *)(v3 + 16),
         (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
LABEL_23:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Master_object )
      return UserExchangeSvtMaster__GetExchangeSvtId((UserExchangeSvtMaster_o *)Master_object, *(_DWORD *)(v3 + 16), 0) != 0;
LABEL_20:
    sub_1C32E7C(Master_object);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4C367AF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367AF = 1;
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
  int32_t Value_41801128; // w0

  if ( (byte_4C3684C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8264/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4C3684C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  Value_41801128 = ConstantMaster__GetValue_41801128(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8264/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0);
  return Value_41801128 != 0 && Value_41801128 == targetId;
}


bool CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E3 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E1 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  condId,
                                  (const MethodInfo_3396838 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
      sub_1C32E7C(Instance);
    }
  }
  return 0;
}


bool CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E2 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4C367E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367E0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_14:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C36828 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36828 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 11, commandCodeId, 0);
  }
}


bool CondType__IsNotEquipGet(int32_t condEquipId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C36877 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36877 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
    if ( !Master_object )
      sub_1C32E7C(0);
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
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3680A & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3680A = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
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
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3680B & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_10948/*"RACE_TARGET_GOAL_RANK"*/);
    byte_4C3680B = 1;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10948/*"RACE_TARGET_GOAL_RANK"*/, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0);
    if ( !MasterData_object )
LABEL_14:
      sub_1C32E7C(Instance);
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
  DataManager_o *v4; // x19
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x8

  if ( (byte_4C367FA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0);
  if ( !Instance )
    goto LABEL_20;
  v4 = Instance;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
        sub_1C32E84(Instance);
      v6 = *(_QWORD *)&v4->fields._DispLog;
      if ( v6 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                        (UserShopMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v6 + 20),
                                        0);
          if ( Instance )
            return SHIDWORD(Instance->fields.m_CancellationTokenSource) > 0;
        }
      }
    }
LABEL_20:
    sub_1C32E7C(Instance);
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
  if ( (byte_4C367EE & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367EE = 1;
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


bool CondType__IsNotQuestGroupClear_40288120(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int32_t v4; // w21
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  const MethodInfo *v7; // x4
  int32_t v8; // w19
  int32_t monitor; // w20
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t questId; // [xsp+1Ch] [xbp-24h] BYREF

  questId = targetId;
  if ( (byte_4C367EF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367EF = 1;
  }
  sameGroupQuestIds = 0;
  entity = 0;
  if ( condValue <= 1 )
    v4 = 1;
  else
    v4 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_339B33C *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1C32E7C(Instance);
  if ( HIDWORD(entity[1].klass) != 26 )
    return 0;
  v8 = questId;
  monitor = (int32_t)entity[1].monitor;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v8, monitor, &sameGroupQuestIds, 1, v7) >= v4;
}


bool CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C367FB & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FB = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
  }
}


bool CondType__IsNotShopGroupLimit(int32_t shopGroupId, int32_t limitNum, const MethodInfo *method)
{
  ShopGroupMaster_o *Master_object; // x0
  System_Collections_ICollection_o *TargetEntityList; // x20
  void *monitor; // x8
  int v9; // w24
  UserShopMaster_o *v10; // x21
  int v11; // w26
  int32_t v12; // w25
  __int64 v13; // x8
  int32_t v14; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3681B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3681B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopGroupMaster___);
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
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserShopMaster___);
  if ( !TargetEntityList )
LABEL_29:
    sub_1C32E7C(Master_object);
  monitor = TargetEntityList[1].monitor;
  v9 = (_DWORD)monitor - 1;
  if ( (int)monitor >= 1 )
  {
    v10 = (UserShopMaster_o *)Master_object;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = *((_QWORD *)&TargetEntityList[2].klass + v11);
      if ( !v13 )
        goto LABEL_29;
      v14 = *(_DWORD *)(v13 + 16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (ShopGroupMaster_o *)NetworkManager_TypeInfo;
      }
      if ( !v10 )
        goto LABEL_29;
      Master_object = (ShopGroupMaster_o *)UserShopMaster__TryGetEntity(
                                             v10,
                                             &entity,
                                             (int64_t)Master_object[2].fields.list[1].monitor,
                                             v14,
                                             0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_29;
        v12 += entity->fields.num;
      }
      if ( v9 == v11 )
        return v12 < limitNum;
      if ( (unsigned int)++v11 >= LODWORD(TargetEntityList[1].monitor) )
        sub_1C32E84(Master_object);
    }
  }
  v12 = 0;
  return v12 < limitNum;
}


bool CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  bool v5; // w23
  UserShopMaster_o *v6; // x20
  unsigned __int64 v7; // x24
  int32_t v8; // w22

  if ( (byte_4C367FC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  max_length = values->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = (UserShopMaster_o *)Instance;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(Instance);
      v8 = values->m_Items[v7];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v6 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v6,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v8,
                                    0);
      if ( !Instance )
        break;
      if ( HIDWORD(Instance->fields.m_CancellationTokenSource) )
      {
        LODWORD(max_length) = values->max_length;
        v5 = (__int64)++v7 < (int)max_length;
        if ( (__int64)v7 < (int)max_length )
          continue;
      }
      return v5;
    }
LABEL_19:
    sub_1C32E7C(Instance);
  }
  return v5;
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
  UserQuestMaster_o *UserQuestMaster; // x21
  DataManager_o *Instance; // x0
  int32_t ChallengeCountsFromId; // w0
  bool v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w1
  int32_t v29; // w0
  bool v30; // w2
  int32_t v31; // w0
  int32_t v32; // w1
  bool IsPurchaseShop; // w0
  CondType_c *v34; // x0
  UserQuestMaster_o *v35; // x21
  int32_t ClearCountsFromId; // w0
  CondType_c *v37; // x0
  UserQuestMaster_o *v38; // x21
  int32_t v39; // w0
  CondType_c *v40; // x0
  UserQuestMaster_o *v41; // x21
  bool v42; // zf
  CondType_c *v43; // x0
  UserQuestMaster_o *v44; // x21
  bool v45; // cc
  NetworkManager_c *v46; // x0
  int64_t v47; // x21
  NetworkManager_c *v48; // x0
  int64_t v49; // x21
  int64_t EventPointNoGroup; // x0
  int32_t v51; // w1
  int32_t v52; // w2
  bool v53; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v55; // x21
  int64_t Point; // x0
  Il2CppObject *v57; // x21
  bool v58; // cc
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x21
  int64_t m_CancellationTokenSource_high; // x8
  Il2CppObject *v62; // x21
  Il2CppObject *v63; // x21
  __int64 lookup_low; // x8
  CondType_c *v65; // x0
  Il2CppObject *v66; // x21
  Il2CppObject *v67; // x21
  bool v68; // w2
  int32_t v69; // w0
  int32_t v70; // w1
  bool v71; // w2
  int32_t v72; // w0
  int32_t v73; // w1
  bool v74; // w3
  bool v75; // w2
  int32_t v76; // w0
  int32_t v77; // w1
  CondType_c *v78; // x0
  int32_t v79; // w2
  bool v80; // w4
  int32_t v81; // w0
  int32_t v82; // w1
  bool v83; // w3
  int32_t v84; // w2
  bool v85; // w4
  int32_t v86; // w0
  int32_t v87; // w1
  bool v88; // w3
  int32_t v89; // w2
  CondType_c *v90; // x0
  BattleVoicePlayCondArgs_o *v91; // x0
  int32_t v92; // w1
  int32_t v93; // w2
  bool v94; // w3
  int32_t v95; // w2
  bool v96; // w2
  int32_t v97; // w0
  int64_t v98; // x1
  int32_t v99; // w2
  Il2CppObject *Master_object; // x21
  UserGameEntity_o *SelfUserGame; // x0
  int32_t lv; // w8
  UserGameEntity_o *v103; // x0
  int32_t v104; // w8
  UserGameEntity_o *v105; // x0
  int32_t v106; // w8
  int32_t v107; // w2
  bool v108; // w2
  BattleVoicePlayCondArgs_o *v109; // x0
  int32_t v110; // w1
  int64_t v112; // [xsp+0h] [xbp-50h] BYREF
  int64_t startedAt; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *sameGroupQuestIds; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C367A6 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367A6 = 1;
  }
  IsQuestClear = 0;
  sameGroupQuestIds = 0;
  v112 = 0;
  startedAt = 0;
  switch ( condType )
  {
    case 0:
      IsQuestClear = 1;
      return IsQuestClear & 1;
    case 1:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
      IsQuestClear = CondType__IsServantLevel_40222668(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 1;
      goto LABEL_384;
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
      v18 = 1;
      v19 = targetId;
      v20 = condValue;
      goto LABEL_77;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v19 = targetId;
      v20 = condValue;
      v18 = 0;
LABEL_77:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v19, v20, v18, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v21 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v21);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !UserQuestMaster )
        goto LABEL_828;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                                UserQuestMaster,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                targetId,
                                0);
      goto LABEL_588;
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v25 = 1;
      v26 = targetId;
      v27 = condValue;
      goto LABEL_205;
    case 35:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v28 = 1;
      v29 = targetId;
      goto LABEL_699;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v30 = 1;
      v31 = targetId;
      v32 = condValue;
      goto LABEL_251;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_808;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_808;
    case 42:
      v34 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v35 = CondType__GetUserQuestMaster((const MethodInfo *)v34);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_828;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(
                            v35,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0);
      goto LABEL_142;
    case 43:
      v37 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v38 = CondType__GetUserQuestMaster((const MethodInfo *)v37);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v38 )
        goto LABEL_828;
      v39 = UserQuestMaster__getChallengeCountsFromId(
              v38,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0);
      goto LABEL_153;
    case 44:
      v40 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v41 = CondType__GetUserQuestMaster((const MethodInfo *)v40);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v41 )
        goto LABEL_828;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(
                            v41,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            0);
LABEL_142:
      v42 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_749;
    case 45:
      v43 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v44 = CondType__GetUserQuestMaster((const MethodInfo *)v43);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v44 )
        goto LABEL_828;
      v39 = UserQuestMaster__getClearCountsFromId(
              v44,
              *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
              targetId,
              0);
LABEL_153:
      v45 = v39 <= (int)condValue;
      goto LABEL_823;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v46 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v46 = NetworkManager_TypeInfo;
      }
      v47 = v46->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v47, targetId, condValue, -1, 0, method);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v48 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v48 = NetworkManager_TypeInfo;
      }
      v49 = v48->static_fields->userIdNumber;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v49, targetId, condValue, -1, 0, method);
      goto LABEL_808;
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
      goto LABEL_808;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
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
      IsQuestClear = CondType__IsQuestClear_40225464(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v26 = targetId;
      v27 = condValue;
      v25 = 0;
LABEL_205:
      IsQuestClear = CondType__IsQuestGroupClear(0, v26, v27, v25, (const MethodInfo *)battleCondArgs);
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
      goto LABEL_808;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_808;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v31 = targetId;
      v32 = condValue;
      v30 = 0;
LABEL_251:
      IsPurchaseShop = CondType__IsQuestClear_40225464(v31, v32, v30, (const MethodInfo *)isCollection);
      goto LABEL_808;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v51 = targetId;
      v52 = condValue;
      v53 = 0;
      goto LABEL_654;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_808;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_808;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_828;
      EventPointNoGroup = UserEventPointMaster__GetPoint(
                            (UserEventPointMaster_o *)MasterData_object,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId / 100,
                            targetId,
                            0);
      goto LABEL_303;
    case 84:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v55 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v55 )
        goto LABEL_828;
      Point = UserEventPointMaster__GetPoint(
                (UserEventPointMaster_o *)v55,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId / 100,
                targetId,
                0);
      goto LABEL_313;
    case 85:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v57 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v57 )
        goto LABEL_828;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v57,
                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                            targetId,
                            -1,
                            0);
LABEL_303:
      v58 = EventPointNoGroup < condValue;
      goto LABEL_589;
    case 86:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v59 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v59 )
        goto LABEL_828;
      Point = UserEventPointMaster__GetEventPointTotal(
                (UserEventPointMaster_o *)v59,
                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                targetId,
                -1,
                0);
LABEL_313:
      v45 = Point <= condValue;
      goto LABEL_823;
    case 87:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v60 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v60 )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v60,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
      m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
      goto LABEL_805;
    case 88:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v62 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v62 )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v62,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
      v45 = SHIDWORD(Instance->fields.m_CancellationTokenSource) <= condValue;
      goto LABEL_823;
    case 89:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v63 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v63 )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v63,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
      lookup_low = *(int *)&Instance->fields._DispLog;
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
      goto LABEL_808;
    case 93:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHavingLimitMax(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 95:
      v65 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSvtEquipFriendShipHaving((const MethodInfo *)v65);
      return IsQuestClear & 1;
    case 96:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsDownloadedMovie(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
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
      goto LABEL_368;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v16 = targetId;
      v17 = condValue;
      v15 = 0;
LABEL_368:
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
      goto LABEL_808;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLimit_40222872(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 2;
LABEL_384:
      IsQuestClear = CondType__IsServantLimit_40222872(targetId, condValue, v12, (const MethodInfo *)isCollection);
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v66 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v66 )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v66,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
      lookup_low = SHIDWORD(Instance->fields.m_CancellationTokenSource);
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
      goto LABEL_808;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 123:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_828;
      v67 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v67 )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)v67,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
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
      v68 = 1;
      v69 = targetId;
      v70 = condValue;
      goto LABEL_447;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v69 = targetId;
      v70 = condValue;
      v68 = 0;
LABEL_447:
      IsQuestClear = CondType__IsBattleLineReusltCount(v69, v70, v68, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v71 = 1;
      v72 = targetId;
      v73 = condValue;
      goto LABEL_454;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v72 = targetId;
      v73 = condValue;
      v71 = 0;
LABEL_454:
      v74 = 0;
      goto LABEL_461;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v71 = 1;
      v74 = 1;
      v72 = targetId;
      v73 = condValue;
      goto LABEL_461;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v74 = 1;
      v72 = targetId;
      v73 = condValue;
      v71 = 0;
LABEL_461:
      IsQuestClear = CondType__IsBattleLineReusltConsecutiveCount(
                       v72,
                       v73,
                       v71,
                       v74,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 134:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v75 = 1;
      v76 = targetId;
      v77 = condValue;
      goto LABEL_468;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = targetId;
      v77 = condValue;
      v75 = 0;
LABEL_468:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v76, v77, v75, (const MethodInfo *)isCollection);
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
      v78 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsResetBirthDay((const MethodInfo *)v78);
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
      goto LABEL_808;
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
      goto LABEL_808;
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
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_828;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0);
      goto LABEL_588;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_828;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0);
LABEL_588:
      v58 = ChallengeCountsFromId < (int)condValue;
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
      goto LABEL_808;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
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
      goto LABEL_808;
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
      goto LABEL_808;
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
      v79 = 1;
      goto LABEL_613;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
LABEL_613:
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      v83 = 0;
      goto LABEL_635;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
      goto LABEL_620;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
LABEL_620:
      v85 = 1;
      v86 = targetId;
      v87 = condValue;
      v88 = 0;
      goto LABEL_650;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 1;
      goto LABEL_627;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
LABEL_627:
      v83 = 1;
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      goto LABEL_635;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
      goto LABEL_634;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 1;
LABEL_634:
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      v80 = 0;
LABEL_635:
      IsQuestClear = CondType__IsDeadRaidDay(v81, v82, v79, v83, v80, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
      goto LABEL_642;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
LABEL_642:
      v88 = 1;
      v85 = 1;
      v86 = targetId;
      v87 = condValue;
      goto LABEL_650;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
      goto LABEL_649;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
LABEL_649:
      v88 = 1;
      v86 = targetId;
      v87 = condValue;
      v85 = 0;
LABEL_650:
      IsQuestClear = CondType__IsDeadRaidGroup(v86, v87, v84, v88, v85, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v53 = 1;
      v51 = targetId;
      v52 = condValue;
LABEL_654:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v51, v52, v53, (const MethodInfo *)battleCondArgs);
      goto LABEL_808;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v89 = 1;
      goto LABEL_661;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v89 = 2;
LABEL_661:
      IsQuestClear = CondType__IsOpenRaidGroupNum(targetId, condValue, v89, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 208:
      v90 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = ((_DWORD)condValue == 0) ^ CondType__IsAuthTDAccelerate((const MethodInfo *)v90);
      return IsQuestClear & 1;
    case 209:
      if ( !battleCondArgs )
        goto LABEL_792;
      v91 = battleCondArgs;
      v92 = targetId;
      v93 = condValue;
      v94 = 0;
      goto LABEL_669;
    case 210:
      if ( !battleCondArgs )
        goto LABEL_792;
      v94 = 1;
      v91 = battleCondArgs;
      v92 = targetId;
      v93 = condValue;
LABEL_669:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v91, v92, v93, v94, 0);
      return IsQuestClear & 1;
    case 211:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventBetweenStartToEnd(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 212:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = 1;
      goto LABEL_679;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = 2;
LABEL_679:
      IsQuestClear = CondType__IsCompleteUserGameCommonValue(targetId, condValue, v95, (const MethodInfo *)isCollection);
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
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v96 = 1;
      v97 = targetId;
      v98 = condValue;
      goto LABEL_695;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v97 = targetId;
      v98 = condValue;
      v96 = 0;
LABEL_695:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v97, v98, v96, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v29 = targetId;
      v28 = condValue;
LABEL_699:
      IsQuestClear = CondType__IsPurchaseShop(v29, v28, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 220:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsAboveEventTradeTotalNum(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 221:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v99 = 2;
      goto LABEL_709;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v99 = 1;
LABEL_709:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v99, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsBeforeArrivalData(condValue, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 229:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_828;
      IsQuestClear = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      return IsQuestClear & 1;
    case 230:
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_828;
      v58 = SHIDWORD(Instance[1].fields.m_CancellationTokenSource) < (int)condValue;
      goto LABEL_589;
    case 231:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(battleCondArgs, targetId, 0);
      return IsQuestClear & 1;
    case 232:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0);
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
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(battleCondArgs, targetId, 0);
      goto LABEL_808;
    case 236:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsPurchaseShop = BattleVoicePlayCondArgs__CheckMainTargetIndividuality(battleCondArgs, targetId, 0);
      goto LABEL_808;
    case 237:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_828;
      Instance = (DataManager_o *)UserEventMaster__GetEntityDefinitely(
                                    (UserEventMaster_o *)Master_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    targetId,
                                    0);
      if ( !Instance )
        goto LABEL_828;
      lookup_low = SLODWORD(Instance->fields.lookup);
LABEL_748:
      v42 = lookup_low == condValue;
LABEL_749:
      IsQuestClear = v42;
      return IsQuestClear & 1;
    case 241:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
LABEL_828:
        sub_1C32E7C(Instance);
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
      v58 = lv < targetId;
      goto LABEL_589;
    case 243:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v103 = UserGameMaster__getSelfUserGame(0);
      if ( v103 )
        v104 = v103->fields.lv;
      else
        v104 = 0;
      v45 = v104 <= targetId;
LABEL_823:
      IsQuestClear = v45;
      return IsQuestClear & 1;
    case 244:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v105 = UserGameMaster__getSelfUserGame(0);
      if ( v105 )
        v106 = v105->fields.lv;
      else
        v106 = 0;
      IsQuestClear = v106 == targetId;
      return IsQuestClear & 1;
    case 245:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v107 = 1;
      goto LABEL_774;
    case 246:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v107 = 2;
LABEL_774:
      IsQuestClear = CondType__IsCompleteHighestWaveValue(targetId, condValue, v107, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 247:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsValidPrivilege(
                       targetId,
                       condValue,
                       &startedAt,
                       &v112,
                       (const MethodInfo *)battleCondArgs);
      return IsQuestClear & 1;
    case 248:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsValidPrivilege(
                         targetId,
                         condValue,
                         &v112,
                         &startedAt,
                         (const MethodInfo *)battleCondArgs);
      goto LABEL_808;
    case 249:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(battleCondArgs, targetId, 0);
      return IsQuestClear & 1;
    case 250:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsPurchaseShop = BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(battleCondArgs, targetId, 0);
      goto LABEL_808;
    case 251:
      if ( !battleCondArgs )
        goto LABEL_792;
      IsQuestClear = BattleVoicePlayCondArgs__IsSelectTreasureDvcCard(battleCondArgs, targetId, 0);
      return IsQuestClear & 1;
    case 252:
      if ( !battleCondArgs )
        goto LABEL_792;
      v108 = 1;
      v109 = battleCondArgs;
      v110 = condValue;
      goto LABEL_791;
    case 253:
      if ( battleCondArgs )
      {
        v109 = battleCondArgs;
        v110 = condValue;
        v108 = 0;
LABEL_791:
        IsQuestClear = BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(v109, v110, v108, 0);
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
      goto LABEL_808;
    case 256:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsElapsedTimeAfterSvtGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_808;
    case 258:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      m_CancellationTokenSource_high = CondType__CountGrandServantSet(
                                         targetId,
                                         condValue,
                                         (const MethodInfo *)condValue);
LABEL_805:
      v58 = m_CancellationTokenSource_high < condValue;
LABEL_589:
      IsQuestClear = !v58;
      return IsQuestClear & 1;
    case 259:
      IsQuestClear = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
      return IsQuestClear & 1;
    case 260:
      IsPurchaseShop = OpeningMovieMaster__IsPlayedOpeningMovie(targetId, 1, 0);
LABEL_808:
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


bool CondType__IsOpenBattlePoint(
        int32_t condType,
        int32_t targetId,
        int32_t condValue,
        BattleServantData_o *battleServantData,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0

  if ( !battleServantData )
    goto LABEL_6;
  BattlePointData = BattleServantData__GetBattlePointData(battleServantData, targetId, 0);
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
bool CondType__IsOpenExcludeBeforeClearQuest(
        int32_t condType,
        int32_t targetId,
        int64_t condValue,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  bool IsQuestClear_40225464; // w0
  NetworkManager_c *v13; // x0
  int64_t v14; // x23
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C367A7 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367A7 = 1;
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
      IsQuestClear_40225464 = CondType__IsQuestClear_40225464(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_40225464;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_40225464(
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
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
      IsQuestClear_40225464 = CondType__IsQuestPhaseClear(
                                userIdNumber,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                method);
      return !IsQuestClear_40225464;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
  Il2CppObject v16; // q1
  const MethodInfo *v17; // x5
  int64_t v18; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]

  if ( (byte_4C367B2 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367B2 = 1;
  }
  if ( condType <= 38 )
  {
    v7 = 1;
    switch ( condType )
    {
      case 0:
        return v7;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
        {
          sub_1C32E7C(Instance);
        }
        v16 = Instance[4];
        *(Il2CppObject *)&v20.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v20.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v19 = v20;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v19, 0);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__IsQuestClear(v18, condValue, -1, 0, 0, v17);
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
        result = CondType__IsServantGet_40267340(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantFriendship_40267496(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGroup_40268032(userSvtId, condValue, (const MethodInfo *)userSvtId);
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
  EventRaidMaster_o *v8; // x22
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x24
  Il2CppObject *v11; // x25
  int max_length; // w8
  int64_t v13; // x26
  unsigned int v14; // w20
  int32_t v15; // w19
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x27
  __int64 v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x27
  CondType___c_c *v20; // x0
  System_Func_object__bool__o *_9__215_0; // x28
  Il2CppObject *v22; // x29
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  EventRaidMaster_o *v27; // [xsp+8h] [xbp-78h]
  int32_t v28; // [xsp+10h] [xbp-70h]
  int32_t v29; // [xsp+14h] [xbp-6Ch]
  TotalEventRaidEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C36865 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
    sub_1C32C20(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CondType___c__IsOpenRaidGroupNum_b__215_0__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36865 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_39;
  v29 = checkType;
  v8 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_39:
    sub_1C32E7C(Instance);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v13 = Instance;
    v14 = 0;
    v15 = 0;
    v28 = num;
    v27 = v8;
    while ( 1 )
    {
      if ( v14 >= max_length )
LABEL_40:
        sub_1C32E84(Instance);
      v16 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v14;
      v17 = v16[4];
      if ( !v17 )
        goto LABEL_39;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v16[4], v13, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_39;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     eventId,
                     HIDWORD(v17->_1.name),
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v8, eventId, HIDWORD(v17->_1.name), 0);
          if ( !Instance )
            goto LABEL_39;
          v18 = *(_QWORD *)(Instance + 24);
          if ( !v18 )
            goto LABEL_30;
          if ( !(_DWORD)v18 )
            goto LABEL_40;
          if ( !v11 )
            goto LABEL_39;
          Instance = (int64_t)QuestReleaseMaster__getListByQuestID(
                                (QuestReleaseMaster_o *)v11,
                                *(_DWORD *)(Instance + 32),
                                0);
          if ( !Instance )
            goto LABEL_39;
          v19 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
          if ( !*(_QWORD *)(Instance + 24) )
            goto LABEL_30;
          v20 = CondType___c_TypeInfo;
          if ( !CondType___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
            v20 = CondType___c_TypeInfo;
          }
          _9__215_0 = (System_Func_object__bool__o *)v20->static_fields->__9__215_0;
          if ( !_9__215_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = CondType___c_TypeInfo;
            }
            v22 = (Il2CppObject *)v20->static_fields->__9;
            _9__215_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestReleaseEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__215_0, v22, Method_CondType___c__IsOpenRaidGroupNum_b__215_0__, 0);
            static_fields = CondType___c_TypeInfo->static_fields;
            static_fields->__9__215_0 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__215_0;
            sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__215_0, (int32_t)_9__215_0, v24, v25);
            num = v28;
            v8 = v27;
          }
          Instance = System_Linq_Enumerable__All_object_(
                       v19,
                       (System_Func_TSource__bool__o *)_9__215_0,
                       (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_QuestReleaseEntity___);
          if ( (Instance & 1) != 0 )
LABEL_30:
            ++v15;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_34;
    }
  }
  v15 = 0;
LABEL_34:
  if ( v29 == 2 )
    return v15 <= num;
  if ( v29 == 1 )
    return v15 >= num;
  return v15 == num;
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

  if ( (byte_4C367B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_CondType_CountExchangeServantMaxLimit__);
    sub_1C32C20(&Method_CondType_CountServantClassTotalFriendShipUp__);
    sub_1C32C20(&Method_CondType_CountServantClassTotalLevelUp__);
    sub_1C32C20(&Method_CondType_CountServantClassTotalLimitUp__);
    sub_1C32C20(&Method_CondType_CountServantClassTotalSkillLevelUp__);
    sub_1C32C20(&Method_CondType_CountServantFriendShipClassNum__);
    sub_1C32C20(&Method_CondType_CountServantLevelClassNum__);
    sub_1C32C20(&Method_CondType_CountServantLevelIdNum__);
    sub_1C32C20(&Method_CondType_CountServantTargetSkillLvClassNum__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&CondType_CountDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int____78099256);
    sub_1C32C20(&System_Func_int__int__TypeInfo);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__);
    sub_1C32C20(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__);
    sub_1C32C20(&Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__);
    sub_1C32C20(&CondType___c__DisplayClass23_0_TypeInfo);
    byte_4C367B0 = 1;
  }
  v7 = sub_1C32E6C(CondType___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
LABEL_144:
    sub_1C32E7C(IsOpen);
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v38 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v18 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v40 = v18;
          System_Func_int__int____ctor(v18, 0, *v19, 0);
          v42 = *(_DWORD *)(v7 + 16);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v40, targetIds, v42, v41);
        case 190:
          v38 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v38 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
          v39 = &Method_CondType___c__DisplayClass23_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v43 = (System_Func_TSource__bool__o *)v38;
          System_Func_int__bool____ctor(v38, (Il2CppObject *)v7, *v39, 0);
          return System_Linq_Enumerable__Any_int__51292940(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v43,
                   (const MethodInfo_30EAB0C *)Method_System_Linq_Enumerable_Any_int____78099256);
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
          v26 = (CondType_CountDelegate_o *)sub_1C32E6C(CondType_CountDelegate_TypeInfo);
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
        v26 = (CondType_CountDelegate_o *)sub_1C32E6C(CondType_CountDelegate_TypeInfo);
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
      sub_1C32E84(IsOpen);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v10);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsOpen_40264304(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4C367B1 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367B1 = 1;
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
bool CondType__IsOpen_40268688(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4C367B3 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367B3 = 1;
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
      result = CondType__IsServantLevel_40269312(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_40269472(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_40267340(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_40269712(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_40268032(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_40270016(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_40270184(userId, condValue, (const MethodInfo *)userId);
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
  if ( (byte_4C36825 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22303/*"notMeets"*/);
    byte_4C36825 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_22303/*"notMeets"*/, v2, 0);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0) == 1;
}


bool CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v5; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36819 & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C36819 = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1C32E7C(SelfUserGame);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C34E09 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34E09 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    p_genderType = &v5->static_fields->_PlayerGenderType_k__BackingField;
  }
  return *p_genderType == genderType;
}


bool CondType__IsPurchaseQpShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C367D8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseQpShop_40270016(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C367D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopEntity__IsCondType_42739028((ShopEntity_o *)Instance, userId, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4C367DD & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367DD = 1;
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

  if ( (byte_4C367DB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0);
}


bool CondType__IsPurchaseStoneShop_40270184(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C367DC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return ShopEntity__IsCondType_42739028((ShopEntity_o *)Instance, userId, 0);
}


bool CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v5; // x19
  il2cpp_array_size_t max_length; // x8
  int v7; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int v9; // w23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21

  if ( (byte_4C36814 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36814 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( TargetEntityList )
  {
    v5 = TargetEntityList;
    if ( TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v5->max_length;
      v7 = max_length - 1;
      if ( (int)max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0;
        while ( 1 )
        {
          v10 = v5->m_Items[v9];
          if ( !v10 || !v8 )
            break;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v8,
                       v10->fields.shopId,
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v11 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0) && !ShopEntity__IsSoldOut(v11, 0) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v11, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v7 == v9 )
            goto LABEL_20;
          if ( (unsigned int)++v9 >= LODWORD(v5->max_length) )
            sub_1C32E84(Instance);
        }
LABEL_22:
        sub_1C32E7C(Instance);
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
  TerminalPramsManager_c *v4; // x0
  BalanceConfig_c *v5; // x8
  int32_t WarId_k__BackingField; // w21
  TerminalPramsManager_c *v7; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0

  if ( (byte_4C36800 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C36800 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 22, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 72, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C31DAD )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C31DAD = 1;
        }
        v4 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v4 = TerminalPramsManager_TypeInfo;
        }
        v5 = BalanceConfig_TypeInfo;
        WarId_k__BackingField = v4->static_fields->_WarId_k__BackingField;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( WarId_k__BackingField != v5->static_fields->OrdealCallWarId )
          goto LABEL_25;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C34564 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C34564 = 1;
        }
        v7 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v7 = TerminalPramsManager_TypeInfo;
        }
        if ( !v7->static_fields->_IsPhaseClear_k__BackingField )
        {
LABEL_25:
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !Instance )
            goto LABEL_30;
          QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
          if ( QuestInfo )
            return QuestInfo->fields.dispType == 1;
        }
      }
    }
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1C32E7C(Instance);
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
  UserQuestEntity_o *EntityFromId; // x22
  const MethodInfo *v14; // x3

  if ( (byte_4C367B8 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C367B8 = 1;
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
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1C32E7C(UserQuestMaster);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0) )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, isCheckResetFlag, v14);
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
  bool IsQuestClear_40225464; // w8
  bool result; // w0
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *Entity; // x0
  int64_t klass; // x20

  if ( (byte_4C3684D & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3684D = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40225464 = CondType__IsQuestClear_40225464(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_40225464 )
  {
    v8 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
    Entity = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Entity )
LABEL_21:
      sub_1C32E7C(Entity);
    return klass < EventMaster__GetEventStartedAt(Entity, eventId, 0);
  }
  return result;
}


bool CondType__IsQuestClearNum(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  NetworkManager_c *v7; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_4C367EC & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367EC = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !UserQuestMaster )
    sub_1C32E7C(v7);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v7->static_fields->userIdNumber, condId, 0);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0) >= condVal;
  return (char)EntityFromId;
}


bool CondType__IsQuestClear_40225464(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C367B9 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  NetworkManager_c *v7; // x0
  int64_t userIdNumber; // x21
  CondType_c *v9; // x0
  CondType_c *v10; // x0
  UserQuestEntity_o *v11; // x0

  if ( (byte_4C367BF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367BF = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  userIdNumber = v7->static_fields->userIdNumber;
  if ( openQuestid >= 1 )
  {
    v9 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v9);
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
  v10 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v10);
  if ( !Instance )
LABEL_27:
    sub_1C32E7C(Instance);
  v11 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, userIdNumber, closeQuestid, 0);
  if ( !v11 || UserQuestEntity__getClearNum(v11, 0) <= 0 )
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

  if ( (byte_4C36801 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36801 = 1;
  }
  if ( questCount <= 1 )
    v5 = 1;
  else
    v5 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0)) == 0 )
  {
    sub_1C32E7C(Instance);
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
        sub_1C32E84(Instance);
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
  if ( (byte_4C367F1 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367F1 = 1;
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
  if ( (byte_4C36811 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    condQuestId = (System_Int32_array *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36811 = 1;
  }
  if ( !v2 )
LABEL_23:
    sub_1C32E7C(condQuestId);
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
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        condQuestId = (System_Int32_array *)NetworkManager_TypeInfo;
      }
      if ( v5 >= LODWORD(v2->max_length) )
        sub_1C32E84(condQuestId);
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

  if ( (byte_4C367BB & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C367BB = 1;
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


bool CondType__IsQuestPhaseClear_40286092(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x23

  if ( (byte_4C367BC & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  CondType_c *v4; // x0
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x8
  signed __int64 v7; // x22
  _DWORD *monitor; // x8
  unsigned __int64 v9; // x9
  bool v10; // w19
  int32_t v11; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36802 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestResetMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36802 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v4 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v4);
    v6 = entity;
    if ( entity )
    {
      v7 = 0;
      do
      {
        monitor = v6[1].monitor;
        if ( !monitor )
          break;
        v9 = (unsigned int)monitor[6];
        v10 = v7 < (int)v9;
        if ( v7 >= (int)v9 )
          return v10;
        if ( v7 >= v9 )
          sub_1C32E84(Instance);
        v11 = monitor[v7 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_40225464(v11, -1, 1, v5);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v10;
        v6 = entity;
        ++v7;
      }
      while ( entity );
    }
LABEL_17:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *v7; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v10; // w20
  unsigned int v11; // w21
  struct System_Int32_array *v12; // x8
  int v13; // w23
  int v14; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36810 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36810 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    v7 = entity;
    if ( !entity )
      goto LABEL_26;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_26;
    max_length = costumeIds->max_length;
    v10 = max_length - 1;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        v12 = v7->fields.costumeIds;
        if ( !v12 )
          break;
        if ( v11 >= LODWORD(v12->max_length) )
          sub_1C32E84(Instance);
        v13 = v12->m_Items[v11];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v13 >= 0 )
          v14 = v13;
        else
          v14 = -v13;
        Instance = (DataManager_o *)(v14 == costumeId);
        if ( v14 == costumeId || v10 == v11 )
          return (char)Instance;
        v7 = entity;
        ++v11;
      }
      while ( entity );
LABEL_26:
      sub_1C32E7C(Instance);
    }
  }
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


bool CondType__IsReleaseRaidUiQuestClear(int32_t type, int32_t targetId, int32_t value, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_CommonReleaseEntity__o *CacheById; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  CondType___c_c *v10; // x0
  System_Func_object__int__o *_9__216_1; // x20
  Il2CppObject *v12; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v16; // x0
  CondType___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *_9__216_2; // x20
  Il2CppObject *v20; // x21
  struct CondType___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Func_object__bool__o *_9__216_3; // x21
  Il2CppObject *v25; // x22
  struct CondType___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  CondType___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_bool__bool__o *_9__216_4; // x20
  Il2CppObject *v33; // x21
  CGThumbnailListItem_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4C36866 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_bool____78099176);
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    sub_1C32C20(&System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
    sub_1C32C20(&System_Func_bool__bool__TypeInfo);
    sub_1C32C20(&System_Func_CommonReleaseEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_1__);
    sub_1C32C20(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_2__);
    sub_1C32C20(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_3__);
    sub_1C32C20(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_4__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36866 = 1;
  }
  if ( type == 113 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_38;
    CacheById = CommonReleaseMaster__GetCacheById((CommonReleaseMaster_o *)Instance, targetId, 0);
    if ( !CacheById )
      return 0;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)CacheById;
    if ( !CacheById->fields._size )
      return 0;
    v10 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v10 = CondType___c_TypeInfo;
    }
    _9__216_1 = (System_Func_object__int__o *)v10->static_fields->__9__216_1;
    if ( !_9__216_1 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = CondType___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__216_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_CommonReleaseEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__216_1, v12, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_1__, 0);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__216_1 = (struct System_Func_CommonReleaseEntity__int__o *)_9__216_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__216_1, (int32_t)_9__216_1, v14, v15);
    }
    v16 = System_Linq_Enumerable__GroupBy_object__int_(
            v9,
            (System_Func_TSource__TKey__o *)_9__216_1,
            (const MethodInfo_31077C8 *)Method_System_Linq_Enumerable_GroupBy_CommonReleaseEntity__int___);
    v17 = CondType___c_TypeInfo;
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v17 = CondType___c_TypeInfo;
    }
    _9__216_2 = (System_Func_object__int__o *)v17->static_fields->__9__216_2;
    if ( !_9__216_2 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CondType___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__216_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_IGrouping_int__CommonReleaseEntity___int__TypeInfo);
      System_Func_object__int____ctor(_9__216_2, v20, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_2__, 0);
      v21 = CondType___c_TypeInfo->static_fields;
      v21->__9__216_2 = (struct System_Func_IGrouping_int__CommonReleaseEntity___int__o *)_9__216_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&v21->__9__216_2, (int32_t)_9__216_2, v22, v23);
      v17 = CondType___c_TypeInfo;
    }
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = CondType___c_TypeInfo;
    }
    _9__216_3 = (System_Func_object__bool__o *)v17->static_fields->__9__216_3;
    if ( !_9__216_3 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CondType___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v17->static_fields->__9;
      _9__216_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IGrouping_int__CommonReleaseEntity___bool__TypeInfo);
      System_Func_object__bool____ctor(_9__216_3, v25, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_3__, 0);
      v26 = CondType___c_TypeInfo->static_fields;
      v26->__9__216_3 = (struct System_Func_IGrouping_int__CommonReleaseEntity___bool__o *)_9__216_3;
      sub_1C32BC4((CGThumbnailListItem_o *)&v26->__9__216_3, (int32_t)_9__216_3, v27, v28);
    }
    Instance = (DataManager_o *)System_Linq_Enumerable__ToDictionary_object__int__bool_(
                                  v18,
                                  (System_Func_TSource__TKey__o *)_9__216_2,
                                  (System_Func_TSource__TElement__o *)_9__216_3,
                                  (const MethodInfo_311D2FC *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_int__CommonReleaseEntity___int__bool___);
    if ( !Instance )
LABEL_38:
      sub_1C32E7C(Instance);
    Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
               (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
               (const MethodInfo_33E12C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    v30 = CondType___c_TypeInfo;
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v30 = CondType___c_TypeInfo;
    }
    _9__216_4 = v30->static_fields->__9__216_4;
    if ( !_9__216_4 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = CondType___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__216_4 = (System_Func_bool__bool__o *)sub_1C32E6C(System_Func_bool__bool__TypeInfo);
      System_Func_bool__bool____ctor(_9__216_4, v33, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_4__, 0);
      v34 = (CGThumbnailListItem_o *)CondType___c_TypeInfo->static_fields;
      v34[1].klass = (CGThumbnailListItem_c *)_9__216_4;
      sub_1C32BC4(v34 + 1, (int32_t)_9__216_4, v35, v36);
    }
    return System_Linq_Enumerable__Any_bool__51291304(
             v31,
             (System_Func_TSource__bool__o *)_9__216_4,
             (const MethodInfo_30EA4A8 *)Method_System_Linq_Enumerable_Any_bool____78099176);
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
  UserGameEntity_o *v2; // x19

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  v2 = SelfUserGame;
  return !UserGameEntity__HasFlag(SelfUserGame, 0x200000, 0) && v2->fields.birthDay > 0;
}


bool CondType__IsRouteSelect(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x0
  System_Collections_Generic_IList_int__o *v6; // x20
  const MethodInfo *v7; // x5
  System_Collections_Generic_IList_int__o *v8; // x21

  if ( (byte_4C36846 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    byte_4C36846 = 1;
  }
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_10;
  v6 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
LABEL_10:
    sub_1C32E7C(v5);
  v8 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_40291224(v6, v8, 1, 0, 0, v7);
}


bool CondType__IsRouteSelect_40291224(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        System_Collections_Generic_HashSet_int__o *addCheckedRoute,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v12; // x0
  System_Collections_Generic_HashSet_int__o *v13; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_IList_int__c *v28; // x8
  int32_t v29; // w27
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x26
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  int32_t v42; // w28
  NetworkManager_c *v43; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // w21
  System_Collections_Generic_IList_int__o *v57; // [xsp+10h] [xbp-70h]
  __int64 v58; // [xsp+18h] [xbp-68h]

  if ( (byte_4C36847 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36847 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  v13 = v12;
  if ( addCheckedRoute )
  {
    System_Collections_Generic_HashSet_int____ctor_56922896(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)addCheckedRoute,
      (const MethodInfo_3649310 *)Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    if ( !questIds )
      goto LABEL_82;
  }
  else
  {
    System_Collections_Generic_HashSet_int____ctor(
      v12,
      (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !questIds )
      goto LABEL_82;
  }
  klass = questIds->klass;
  v57 = routeIds;
  v15 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_12;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v17 = sub_1C83438(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v17)(
          questIds,
          *(_QWORD *)(v17 + 8));
  v58 = v18;
  while ( 1 )
  {
    if ( !v58 )
      sub_1C32E7C(v18);
    v19 = *(_QWORD *)v58;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_20;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_20:
      v22 = sub_1C83438(v58, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v58, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v58;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v25 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_27:
      v26 = sub_1C83438(v58, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v58, *(_QWORD *)(v26 + 8));
    if ( !v57 )
      sub_1C32E7C(v27);
    v28 = v57->klass;
    v29 = v27;
    v30 = *(unsigned __int16 *)&v57->klass->_2.rank;
    if ( *(_WORD *)&v57->klass->_2.rank )
    {
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v31 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_34;
      }
      v32 = (__int64)&v28->vtable[*v31];
    }
    else
    {
LABEL_34:
      v32 = sub_1C83438(v57, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v32)(v57, *(_QWORD *)(v32 + 8));
    if ( !v33 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v34 = *(_QWORD *)v33;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_41;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_41:
        v37 = sub_1C83438(v33, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
        break;
      v38 = *(_QWORD *)v33;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v40 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_48;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_48:
        v41 = sub_1C83438(v33, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v43 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v43 = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object )
        sub_1C32E7C(v43);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      v43->static_fields->userIdNumber,
                      v29,
                      v42,
                      0);
      if ( haveRouteId )
      {
        if ( !v13 )
          sub_1C32E7C(haveRouteId);
        System_Collections_Generic_HashSet_int___Add(
          v13,
          v42,
          (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v45 = *(_QWORD *)v33;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_64;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_64:
      v48 = sub_1C83438(v33, System_IDisposable_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
  }
  v49 = *(_QWORD *)v58;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_74;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_74:
    v52 = sub_1C83438(v58, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v58, *(_QWORD *)(v52 + 8));
  if ( !v13 )
LABEL_82:
    sub_1C32E7C(Instance);
  v54 = v13->fields._count;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetCompareCheckType(checkType, count, v54, v53);
}


bool CondType__IsServantFriendship(int32_t svtId, int32_t condFriendshipRank, bool isAbove, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C367CF & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367CF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsServantFriendship_40269712(userIdNumber, svtId, condFriendshipRank, isAbove, v4);
}


bool CondType__IsServantFriendship_40267496(int64_t userSvtId, int32_t condFriendshipRank, const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject v6; // q1
  int64_t v7; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  const MethodInfo *v10; // x4
  int32_t v11; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h]
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C367D1 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_22;
  v6 = entity[4];
  *(Il2CppObject *)&v15.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v15.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v14, 0);
  if ( !entity )
LABEL_22:
    sub_1C32E7C(Instance);
  v7 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = klass;
  *(_QWORD *)&v17.fields.fakeValue = monitor;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_40269712(v7, v11, condFriendshipRank, 1, v10);
}


bool CondType__IsServantFriendship_40269712(
        int64_t userId,
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x20
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C367D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
      v11 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
      v12 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = v11;
      *(_QWORD *)&v16.fields.fakeValue = v12;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0) >= condFriendshipRank;
    }
  }
  else if ( EntityDefinitely )
  {
    v13 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v14 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v13;
    *(_QWORD *)&v17.fields.fakeValue = v14;
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C367C9 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsServantGet_40267340(userIdNumber, condSvtId, v2);
}


bool CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v8; // [xsp+8h] [xbp-48h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C36804 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36804 = 1;
  }
  entity = 0;
  v8 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_21;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    &v8,
                                    eventId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v8 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v8[6].klass;
LABEL_21:
        sub_1C32E7C(Instance);
      }
    }
  }
  return 0;
}


bool CondType__IsServantGet_40267340(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C367CA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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


bool CondType__IsServantGet_40287376(int64_t userSvtId, const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject v4; // q1
  int64_t v5; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  const MethodInfo *v8; // x2
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]
  Il2CppObject *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C367CB & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367CB = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Instance & 1) == 0 )
      return 0;
  }
  if ( !entity )
    goto LABEL_20;
  v4 = entity[4];
  *(Il2CppObject *)&v13.fields.currentCryptoKey = entity[3];
  *(Il2CppObject *)&v13.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0);
  if ( !entity )
LABEL_20:
    sub_1C32E7C(Instance);
  v5 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v15, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_40267340(v5, v9, v8);
}


bool CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x20

  if ( (byte_4C367D3 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367D3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsServantGroup_40268032(userIdNumber, condGroup, v2);
}


bool CondType__IsServantGroup_40268032(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  int v7; // w8
  void *v8; // x21
  bool v9; // w22
  int v10; // w23
  __int64 v11; // x8

  if ( (byte_4C367D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0);
  if ( !Instance )
    goto LABEL_16;
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  v9 = v7 > 0;
  if ( v7 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1C32E84(Instance);
      v11 = *((_QWORD *)v8 + v10 + 4);
      if ( !v11 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v11 + 20),
                   0);
      if ( !Instance || *((_DWORD *)Instance + 10) != 2 )
      {
        v7 = *((_DWORD *)v8 + 6);
        v9 = ++v10 < v7;
        if ( v10 < v7 )
          continue;
      }
      return v9;
    }
LABEL_16:
    sub_1C32E7C(Instance);
  }
  return v9;
}


bool CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C367CC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0);
}


bool CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3681D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3681D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0);
}


bool CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367C0 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool CondType__IsServantLevel_40222668(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4C367C1 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsServantLevel_40269312(userIdNumber, svtId, condLv, v3);
}


bool CondType__IsServantLevel_40269312(int64_t userId, int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C367C2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v10; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4C367C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367C4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v10 = 0;
    goto LABEL_14;
  }
LABEL_9:
  if ( !entity )
    goto LABEL_22;
  klass = entity[6].klass;
  monitor = entity[6].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = klass;
  *(_QWORD *)&v13.fields.fakeValue = monitor;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v13, 0);
LABEL_14:
  if ( checkType == 2 )
    return v10 <= condLimitCount;
  if ( checkType == 1 )
    return v10 >= condLimitCount;
  if ( checkType )
    return 0;
  return v10 == condLimitCount;
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
  if ( (byte_4C36836 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C36836 = 1;
  }
  if ( !v4 )
    sub_1C32E7C(targetIds);
  max_length = v4->max_length;
  v6 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C32E84(v6);
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
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367C5 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0);
      goto LABEL_12;
    }
LABEL_20:
    sub_1C32E7C(Instance);
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


bool CondType__IsServantLimit_40222872(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x22

  if ( (byte_4C367C6 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C367C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  return CondType__IsServantLimit_40269472(userIdNumber, svtId, condLimitCount, checkType, v4);
}


bool CondType__IsServantLimit_40269472(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4C367C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v7; // x20
  il2cpp_array_size_t max_length; // x8
  int v9; // w24
  UserShopMaster_o *v10; // x21
  int v11; // w25
  int32_t v12; // w26
  ShopGroupEntity_o *v13; // x8
  int32_t shopId; // w23
  UserShopEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3681A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3681A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_26;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0);
  if ( !TargetEntityList )
    return 1;
  v7 = TargetEntityList;
  if ( !TargetEntityList->max_length )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  max_length = v7->max_length;
  v9 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v10 = (UserShopMaster_o *)Instance;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = v7->m_Items[v11];
      if ( !v13 )
        break;
      shopId = v13->fields.shopId;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v10 )
        break;
      Instance = (DataManager_o *)UserShopMaster__TryGetEntity(
                                    v10,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    shopId,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v12 += entity->fields.num;
        if ( v12 >= limitNum )
          return 1;
      }
      if ( v9 == v11 )
        return 0;
      if ( (unsigned int)++v11 >= LODWORD(v7->max_length) )
        sub_1C32E84(Instance);
    }
LABEL_26:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool CondType__IsShopPurchase(System_Int32_array *values, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  int v7; // w23
  UserShopMaster_o *v8; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x25

  if ( (byte_4C367FD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_19;
  max_length = values->max_length;
  v7 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v8 = (UserShopMaster_o *)Instance;
    v9 = 0;
    v7 = 0;
    v10 = (unsigned int)values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v9 >= LODWORD(values->max_length) )
        sub_1C32E84(Instance);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)UserShopMaster__GetEntityDefinitely(
                                    v8,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    values->m_Items[v9],
                                    0);
      if ( !Instance )
        break;
      ++v9;
      v7 += HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( v10 == v9 )
        return num > 0 && v7 == num;
    }
LABEL_19:
    sub_1C32E7C(Instance);
  }
  return num > 0 && v7 == num;
}


bool CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v5; // x19
  il2cpp_array_size_t max_length; // x8
  int v7; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int v9; // w23
  ShopGroupEntity_o *v10; // x8
  ShopEntity_o *v11; // x21

  if ( (byte_4C36813 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36813 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_21;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0);
  if ( !TargetEntityList )
    return (char)TargetEntityList;
  v5 = TargetEntityList;
  if ( !TargetEntityList->max_length )
  {
LABEL_18:
    LOBYTE(TargetEntityList) = 0;
    return (char)TargetEntityList;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1C32E7C(Instance);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  max_length = v5->max_length;
  v7 = max_length - 1;
  if ( (int)max_length < 1 )
    goto LABEL_18;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    v10 = v5->m_Items[v9];
    if ( !v10 || !v8 )
      goto LABEL_21;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 v10->fields.shopId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v11 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v11, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v7 == v9 )
      goto LABEL_18;
    if ( (unsigned int)++v9 >= LODWORD(v5->max_length) )
      sub_1C32E84(Instance);
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4C36848 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36848 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
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
  System_Collections_Generic_List_object__o *player_datalist; // x21
  int *p_size; // x23
  int32_t size; // w24
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v13; // w24
  int32_t v14; // w22
  int v15; // w25
  void *monitor; // x20
  Il2CppClass *klass; // x23
  Il2CppObject *Master_object; // x21
  UserServantEntity_array *UserServantListFromDeckReaveHeroine; // x0
  UserServantEntity_array *v20; // x21
  BalanceConfig_c *v21; // x0
  unsigned __int64 v23; // x25
  UserServantEntity_o **m_Items; // x27
  UserServantEntity_o *v25; // x8
  __int64 v26; // x22
  __int64 v27; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C3686B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C3686B = 1;
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
        v11 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v11 = BalanceConfig_TypeInfo;
        }
        static_fields = v11->static_fields;
        if ( size >= static_fields->DeckMainMemberMax )
        {
          if ( !v11->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v11);
            static_fields = BalanceConfig_TypeInfo->static_fields;
          }
          p_size = &static_fields->DeckMainMemberMax;
        }
        v13 = *p_size;
        if ( *p_size >= 1 )
        {
          v14 = 0;
          v15 = targetLimitCount - (targetLimitCount < 11);
          while ( 1 )
          {
            if ( System_Collections_Generic_List_object___get_Item(
                   player_datalist,
                   v14,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v14,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v28.fields.currentCryptoKey = klass;
              *(_QWORD *)&v28.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v28, 0) == targetSvtId )
              {
                if ( v15 < 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v14,
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_54;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0) == v15 )
                  return 1;
              }
            }
            if ( v13 == ++v14 )
              return 0;
          }
        }
      }
      return 0;
    }
LABEL_54:
    sub_1C32E7C(Item);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Item = (Il2CppObject *)TutorialFlag__Get_40328320(126, 0);
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
  v20 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v21->static_fields->DeckMainMemberMax <= SLODWORD(v20->max_length) )
    {
      v23 = 0;
      m_Items = v20->m_Items;
      while ( 1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v23 >= v21->static_fields->DeckMainMemberMax )
          break;
        if ( v23 >= LODWORD(v20->max_length) )
          goto LABEL_55;
        v25 = m_Items[v23];
        if ( v25 )
        {
          v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = v27;
          *(_QWORD *)&v29.fields.fakeValue = v26;
          v21 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v29, 0);
          if ( (_DWORD)v21 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v23 >= LODWORD(v20->max_length) )
LABEL_55:
              sub_1C32E84(v21);
            Item = (Il2CppObject *)m_Items[v23];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0) == targetLimitCount - 1 )
              return 1;
          }
        }
        v21 = BalanceConfig_TypeInfo;
        ++v23;
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

  if ( (byte_4C36850 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36850 = 1;
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

  if ( (byte_4C36851 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36851 = 1;
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
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3684F & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3684F = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_20;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
        sub_1C32E7C(Instance);
      }
      return 0;
    }
  }
  return result;
}


bool CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C36820 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36820 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C36822 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36822 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0) > 0;
}


bool CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserEventServantFatigueMaster_o *v6; // x21
  int64_t RecoverySvtIdList; // x0
  int64_t v8; // x22
  int32_t v9; // w26
  __int64 v10; // x27
  __int64 v11; // x28
  int64_t v12; // x23
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v15; // w0
  int64_t v16; // x23
  bool isRecover; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C36812 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36812 = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0 )
  {
LABEL_26:
    sub_1C32E7C(Instance);
  }
  v6 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0);
  if ( RecoverySvtIdList )
  {
    v8 = RecoverySvtIdList;
    if ( (int)*(_QWORD *)(RecoverySvtIdList + 24) < 1 )
    {
LABEL_23:
      LOBYTE(RecoverySvtIdList) = 0;
      return RecoverySvtIdList;
    }
    v9 = 0;
    v10 = 0;
    v11 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 32 + 8 * v10);
      if ( v12 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v12,
                   (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = klass;
      *(_QWORD *)&v20.fields.fakeValue = monitor;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v20, 0);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v6, &recoverAt, &isRecover, eventId, v15, 0);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v16 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        RecoverySvtIdList = NetworkManager__getTime(0);
        if ( v16 - RecoverySvtIdList > 0 )
          goto LABEL_20;
        ++v9;
      }
      if ( v9 >= condNum )
      {
        LOBYTE(RecoverySvtIdList) = 1;
        return RecoverySvtIdList;
      }
LABEL_20:
      if ( v11 == v10 )
        goto LABEL_23;
      if ( ++v10 >= (unsigned __int64)*(unsigned int *)(v8 + 24) )
        sub_1C32E84(RecoverySvtIdList);
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
    sub_1C32E7C(countFunc);
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
        sub_1C32E84(countFunc);
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
  int v8; // w8

  if ( (byte_4C3682A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3682A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v8 = limitCount - UserServantMaster__GetServantHavingTdLvCount((UserServantMaster_o *)Instance, svtId, 0);
  switch ( condType )
  {
    case 'p':
      return v8 >= 0;
    case 'o':
      return v8 < 1;
    case 'n':
      return v8 == 0;
  }
  return 0;
}


bool CondType__IsUserEventStatus(int32_t eventId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v8; // x20
  Il2CppType *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3682C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&EventStatus_Type_var);
    sub_1C32C20(&EventStatus_Type_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C3682C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       eventId,
                       0);
  if ( EntityDefinitely )
  {
    v8 = EntityDefinitely;
    v9 = EventStatus_Type_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    v20 = flag;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v20, v12, v13, v14, v15, v16, v17);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v18, 0)
                            && UserEventEntity__getEventFlag(v8, flag, 0);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v8; // x20
  Il2CppType *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3682D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UserQuestEntity_StatusKind_var);
    sub_1C32C20(&UserQuestEntity_StatusKind_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C3682D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C32E7C(Instance);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   questId,
                   0);
  if ( EntityFromId )
  {
    v8 = EntityFromId;
    v9 = UserQuestEntity_StatusKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    v20 = flag;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v20, v12, v13, v14, v15, v16, v17);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v18, 0)
                        && UserQuestEntity__HasStatus_43011700(v8, flag, 0);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v8; // x20
  Il2CppType *v9; // x21
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x22
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C36843 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&UserShopFlag_FlagKind_var);
    sub_1C32C20(&UserShopFlag_FlagKind_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C36843 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_20:
    sub_1C32E7C(Instance);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       shopId,
                       0);
  if ( EntityDefinitely )
  {
    v8 = EntityDefinitely;
    v9 = UserShopFlag_FlagKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    v20 = flagKind;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v20, v12, v13, v14, v15, v16, v17);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v18, 0)
                            && UserShopEntity__CheckFlagKind(v8, flagKind, 0);
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
  Il2CppObject *Master_object; // x23
  _QWORD *p_image; // x0
  UserPrivilegeEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C36874 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserPrivilegeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C36874 = 1;
  }
  entity = 0;
  *startedAt = 0;
  *endedAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserPrivilegeMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(p_image);
  return UserPrivilegeEntity__IsValidPeriod(entity, startedAt, endedAt, 0, 0);
}


bool CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 naturalAligment; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w0
  int32_t v14; // w0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C36816 & 1) == 0 )
  {
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C36816 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0 )
LABEL_16:
    sub_1C32E7C(Instance);
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1C3313C(Instance);
    return CondType__IsEquipWithTargetCostume(v14, v15, v16);
  }
  NowEventVoicePlayEntity = EventRewardRootComponent__get_NowEventVoicePlayEntity(
                              (EventRewardRootComponent_o *)Instance,
                              0);
  if ( !NowEventVoicePlayEntity )
    return 1;
  slot = NowEventVoicePlayEntity->fields.slot;
  idx = NowEventVoicePlayEntity->fields.idx;
  v10 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&NowEventVoicePlayEntity->fields.guideImageId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v10;
  *(_QWORD *)&v17.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v17, 0);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v12, 0);
  if ( !byte_4C31EC8 )
  {
    sub_1C32C20(&EventRewardSaveData_TypeInfo);
    byte_4C31EC8 = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36805 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36805 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0);
}


bool CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  int max_length; // w8
  int i; // w9

  if ( (byte_4C36835 & 1) == 0 )
  {
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    byte_4C36835 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0);
  if ( !ClearWarIdList )
    sub_1C32E7C(0);
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
        sub_1C32E84(ClearWarIdList);
      if ( ClearWarIdList->m_Items[i] == condWarId )
        break;
    }
  }
  return i < max_length;
}


int32_t CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_object__o *v3; // x19
  CondType___c_c *v4; // x0
  System_Comparison_T__o *_9__174_0; // x20
  Il2CppObject *v6; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CondType___c_c *v10; // x0
  System_Predicate_object__o *_9__174_1; // x20
  Il2CppObject *v12; // x21
  struct CondType___c_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x3
  int32_t klass_high; // w19

  if ( (byte_4C36841 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_WarEntity__TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarEntity__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarEntity__get_Count__);
    sub_1C32C20(&System_Predicate_WarEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_CondType___c__LatestMainScenarioWarClear_b__174_0__);
    sub_1C32C20(&Method_CondType___c__LatestMainScenarioWarClear_b__174_1__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36841 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0);
  if ( !EntityList )
    return 0;
  v3 = (System_Collections_Generic_List_object__o *)EntityList;
  if ( !EntityList->fields._size )
    return 0;
  v4 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v4 = CondType___c_TypeInfo;
  }
  _9__174_0 = (System_Comparison_T__o *)v4->static_fields->__9__174_0;
  if ( !_9__174_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CondType___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__174_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__174_0, v6, Method_CondType___c__LatestMainScenarioWarClear_b__174_0__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__174_0 = (struct System_Comparison_WarEntity__o *)_9__174_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__174_0, (int32_t)_9__174_0, v8, v9);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v3,
    _9__174_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v10 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v10 = CondType___c_TypeInfo;
  }
  _9__174_1 = (System_Predicate_object__o *)v10->static_fields->__9__174_1;
  if ( !_9__174_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CondType___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__174_1 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_object____ctor(_9__174_1, v12, Method_CondType___c__LatestMainScenarioWarClear_b__174_1__, 0);
    v13 = CondType___c_TypeInfo->static_fields;
    v13->__9__174_1 = (struct System_Predicate_WarEntity__o *)_9__174_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v13->__9__174_1, (int32_t)_9__174_1, v14, v15);
  }
  v16 = System_Collections_Generic_List_object___Find(
          v3,
          (System_Predicate_T__o *)_9__174_1,
          (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v16 )
    return 0;
  klass_high = HIDWORD(v16[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(klass_high, -1, 0, v17);
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

  if ( (byte_4C367B4 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3725/*"COND_TYPE_NONE"*/);
    byte_4C367B4 = 1;
  }
  switch ( condType )
  {
    case 0:
      v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_3725/*"COND_TYPE_NONE"*/, textType, 0);
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
      if ( !byte_4C32D4C )
      {
        sub_1C32C20(&LocalizationManager_TypeInfo);
        byte_4C32D4C = 1;
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
  Il2CppObject *Entity; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4C367D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3724/*"COND_TYPE_EVENT"*/);
    byte_4C367D7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_3724/*"COND_TYPE_EVENT"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v7, 0);
  if ( !Entity )
LABEL_9:
    sub_1C32E7C(Instance);
  v8 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0);
  return System_String__Format(v8, EventName, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  System_String_o *v7; // x19

  if ( (byte_4C367DA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3726/*"COND_TYPE_PURCHASE_QP_SHOP"*/);
    byte_4C367DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_3726/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v7, 0);
  if ( !Entity )
LABEL_9:
    sub_1C32E7C(Instance);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *Entity; // x20
  System_String_o *v7; // x19

  if ( (byte_4C367DF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3727/*"COND_TYPE_PURCHASE_STONE_SHOP"*/);
    byte_4C367DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_3727/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v7, 0);
  if ( !Entity )
LABEL_9:
    sub_1C32E7C(Instance);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0);
}


System_String_o *CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  System_String_o *v6; // x19
  LocalizationManager_c *v8; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367BA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4C367BA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v6 = System_String__Concat_63518544((System_String_o *)StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get(v6, 0);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0);
LABEL_18:
    sub_1C32E7C(Master_object);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


System_String_o *CondType__OpenConditionTextQuestPhaseClear(
        int32_t condQuestId,
        int32_t condQuestPhase,
        System_String_o *textType,
        bool getWarName,
        const MethodInfo *method)
{
  WarMaster_o *Master_object; // x0
  WarEntity_o *QuestId; // x0
  WarEntity_o *v11; // x22
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v15; // x19
  Il2CppObject *monitor; // x20
  System_String_o *v17; // x19
  Il2CppObject *v18; // x0
  LocalizationManager_c *v19; // x0
  Il2CppObject *v20; // [xsp+0h] [xbp-40h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = condQuestPhase;
  if ( (byte_4C367BE & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3729/*"COND_TYPE_QUEST_PHASE_CLEAR"*/);
    sub_1C32C20(&StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4C367BE = 1;
  }
  v20 = 0;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0);
    if ( QuestId )
    {
      v11 = QuestId;
      v12 = System_String__Concat_63518544((System_String_o *)StringLiteral_3728/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get(v12, 0);
      return System_String__Format(v13, (Il2CppObject *)v11->fields.name, 0);
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
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v20,
           condQuestId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v15 = System_String__Concat_63518544((System_String_o *)StringLiteral_3729/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v15, 0);
      if ( v20 )
      {
        monitor = (Il2CppObject *)v20[1].monitor;
        v17 = (System_String_o *)Master_object;
        v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0);
        return System_String__Format_63559836(v17, monitor, v18, 0);
      }
LABEL_31:
      sub_1C32E7C(Master_object);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C32D4C )
    {
      sub_1C32C20(&LocalizationManager_TypeInfo);
      byte_4C32D4C = 1;
    }
    v19 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager_TypeInfo;
    }
    return v19->static_fields->unknownNameText;
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

  if ( (byte_4C367D2 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3730/*"COND_TYPE_SERVANT_FRIENDSHIP"*/);
    byte_4C367D2 = 1;
  }
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_3730/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0);
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
  Il2CppObject *Entity; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x19
  Il2CppObject *Name; // x1

  if ( (byte_4C367CE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3731/*"COND_TYPE_SERVANT_GET"*/);
    byte_4C367CE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v7 = System_String__Concat_63518544((System_String_o *)StringLiteral_3731/*"COND_TYPE_SERVANT_GET"*/, textType, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v7, 0);
  if ( !Entity )
LABEL_9:
    sub_1C32E7C(Instance);
  v8 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0, 0);
  return System_String__Format(v8, Name, 0);
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

  if ( (byte_4C367D5 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3732/*"COND_TYPE_SERVANT_GROUP"*/);
    byte_4C367D5 = 1;
  }
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_3732/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0);
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

  if ( (byte_4C367C3 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3733/*"COND_TYPE_SERVANT_LEVEL"*/);
    byte_4C367C3 = 1;
  }
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_3733/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0);
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

  if ( (byte_4C367C8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3734/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/);
    byte_4C367C8 = 1;
  }
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_3734/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0);
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
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  SpotPathEntity_o *v8; // x19
  int32_t v9; // w20
  int32_t monitor_high; // w21

  if ( (byte_4C367AA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1C32C20(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&EventSpotMoveManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v8 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v9 = (int32_t)Entity[2].klass;
    if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v9, v8, 0) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v8; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C367A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367A9 = 1;
  }
  entity = 0;
  v8 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                                 (TotalEventRaidMaster_o *)Instance,
                                 &v8,
                                 eventId,
                                 targetId,
                                 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_15;
      defeatedAt = v8->fields.defeatedAt;
      if ( defeatedAt )
      {
        if ( entity )
          return defeatedAt <= entity->fields.timeLimitAt;
LABEL_15:
        sub_1C32E7C(Instance);
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
  il2cpp_array_size_t max_length; // x8
  MapEntity_o *v7; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v9; // x21

  if ( (byte_4C36842 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_long___);
    sub_1C32C20(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36842 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapMaster___);
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
    sub_1C32E84(Instance);
  v7 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v7 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v7->fields.warId,
                                    (const MethodInfo_3396838 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0 )
  {
LABEL_18:
    sub_1C32E7C(Instance);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_42941800(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v9 + 24),
                                    mapId,
                                    0);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_31E4580 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t CondType___CountServantClassTotalFriendShipUp_g__CountFunc_165_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1C32E7C(0);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0);
}


int32_t CondType___CountServantClassTotalLevelUp_g__CountFunc_168_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(collection);
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
        sub_1C32E84(v4);
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

  if ( (byte_4C36879 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36879 = 1;
  }
  switch ( type )
  {
    case 46:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestPhaseClear_40286092(targetId, value, -1, 0, v4);
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestGroupClear(0, targetId, value, 0, v4);
    case 1:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_40225464(targetId, -1, 0, method);
    default:
      return 1;
  }
}


bool CondType__checkCondTypeRaidAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  char v8; // w8
  TotalEventRaidEntity_o *v10; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367AB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367AB = 1;
  }
  v10 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
  {
LABEL_12:
    v8 = 0;
    return v8 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(Instance);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v10,
                               targetId,
                               condValue,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v10 )
    goto LABEL_14;
  v8 = (entity->fields.maxHp <= v10->fields.totalDamage) ^ alive;
  return v8 & 1;
}


bool CondType__checkCondTypeRaidGroupAlive(int32_t targetId, int32_t condValue, bool alive, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventRaidEntity_array *EventRaidEntityArray; // x21
  int max_length; // w8
  TotalEventRaidMaster_o *v10; // x22
  unsigned int v11; // w23
  EventRaidEntity_o *v12; // x24
  char v13; // w8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C367AC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367AC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1C32E7C(Instance);
  }
  max_length = EventRaidEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v13 = 0;
  }
  else
  {
    v10 = (TotalEventRaidMaster_o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C32E84(Instance);
      v12 = EventRaidEntityArray->m_Items[v11];
      if ( !v12 || !v10 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v10, &entity, targetId, v12->fields.day, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      if ( !entity )
        goto LABEL_19;
      if ( v12->fields.maxHp > entity->fields.totalDamage )
        break;
      max_length = EventRaidEntityArray->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
    v13 = 1;
  }
  return (v13 ^ ~alive) & 1;
}


bool CondType__checkRaidTimeLimitOver(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x2
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C367A8 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C367A8 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !entity )
LABEL_16:
    sub_1C32E7C(Instance);
  if ( (__int64)Instance <= entity->fields.timeLimitAt )
  {
    return 0;
  }
  else
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__TimeLimitRaidDead(targetId, condValue, v6);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A76BDC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76B7C;
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
  if ( (byte_4C3687A & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    byte_4C3687A = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&level, callback, object, method, v6, v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


int32_t CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  if ( !sub_1C32BD8(result, 0, method) )
    sub_1C32E7C(0);
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

  if ( (byte_4C3687B & 1) == 0 )
  {
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C3687B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(CondType___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CondType___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return UserQuestEntity__IsResetStatus(x, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_2(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_3(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.clearNum >= 1 && !UserQuestEntity__IsResetStatus(entity, 0);
}


bool CondType___c___CheckGroupMaterialQuest_b__32_4(
        CondType___c_o *this,
        UserQuestEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.clearNum > 0;
}


int32_t CondType___c___CountClassBoardSquareReleased_b__201_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C3687F & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C3687F = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_30FCFE0 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t CondType___c___CountClassBoardSquareReleased_b__201_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C36880 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Count_int___);
    byte_4C36880 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_30FCFE0 *)Method_System_Linq_Enumerable_Count_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t CondType___c___GetProgressNumByTargetIds_b__30_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4C3687C & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3687C = 1;
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

  if ( (byte_4C3687D & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3687D = 1;
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

  if ( (byte_4C3687E & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3687E = 1;
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
    sub_1C32E7C(this);
  return !ClassBoardSquareEntity__get_HasLockId(ent, 0) && !ClassBoardSquareEntity__get_IsBlank(ent, 0);
}


bool CondType___c___IsCompleteHighestWaveValue_b__231_0(
        CondType___c_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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

  if ( (byte_4C36881 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C36881 = 1;
  }
  if ( !questReleaseEntity )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C36882 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C32C20(&System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo);
    byte_4C36882 = 1;
  }
  if ( !g )
    sub_1C32E7C(this);
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
    v7 = sub_1C83438(g, System_Linq_IGrouping_int__CommonReleaseEntity__TypeInfo, 0);
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

  if ( (byte_4C36883 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
    sub_1C32C20(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_5__);
    sub_1C32C20(&CondType___c_TypeInfo);
    byte_4C36883 = 1;
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
    _9__216_5 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__216_5, v6, Method_CondType___c__IsReleaseRaidUiQuestClear_b__216_5__, 0);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__216_5 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__216_5;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__216_5, (int32_t)_9__216_5, v8, v9);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)g,
           (System_Func_TSource__bool__o *)_9__216_5,
           (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_CommonReleaseEntity___);
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

  if ( (byte_4C36884 & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C36884 = 1;
  }
  if ( !e )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return b->fields.id - a->fields.id;
}


bool CondType___c___LatestMainScenarioWarClear_b__174_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
        sub_1C32E84(v6);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return this->fields.targetId == entity->fields.eventId;
}


void CondType___c__DisplayClass233_0___ctor(CondType___c__DisplayClass233_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CondType___c__DisplayClass233_0___CountGrandServantSet_b__0(
        CondType___c__DisplayClass233_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  CondType___c__DisplayClass233_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C36885 & 1) == 0 )
  {
    this = (CondType___c__DisplayClass233_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C36885 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.targetIds,
           v4->fields.targetId,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool CondType___c__DisplayClass233_0___CountGrandServantSet_b__1(
        CondType___c__DisplayClass233_0_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.targetNum == this->fields.targetNum;
}


bool CondType___c__DisplayClass233_0___CountGrandServantSet_b__2(
        CondType___c__DisplayClass233_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.targetId )
    return 1;
  if ( !x )
    sub_1C32E7C(this);
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

  if ( (byte_4C36886 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36886 = 1;
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

  if ( (byte_4C36887 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36887 = 1;
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

  if ( (byte_4C36888 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36888 = 1;
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
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.condQuestId;
}