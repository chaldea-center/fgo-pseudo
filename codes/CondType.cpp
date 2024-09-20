void __fastcall CondType___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct CondType_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  struct CondType_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5A135 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    byte_4A5A135 = 1;
  }
  static_fields = CondType_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_POINT_DEVIDER = 0x6400000064LL;
  static_fields->TARGET_PARAM_NUM = 2;
  static_fields->uQuestMst = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->uQuestMst, 0, v1, v2);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__string__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  v5 = CondType_TypeInfo->static_fields;
  v5->cachedServantEquipIdStrDic = (struct System_Collections_Generic_Dictionary_int__string__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->cachedServantEquipIdStrDic, (int32_t)v4, v6, v7);
  *(_OWORD *)&CondType_TypeInfo->static_fields->lastUserId = xmmword_BB4FD0;
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
  QuestScriptMaterialNextMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  QuestScriptMaterialNextMaster_o *v9; // x20
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_UserQuestEntity__o *SortedGroupUserQuestEntities; // x23
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *v12; // x22
  UserQuestEntity_o *v13; // x21
  UserQuestEntity_o *IncludedGroupQuest; // x0
  CondType___c_c *v15; // x8
  UserQuestEntity_o *v16; // x22
  System_Func_object__bool__o *_9__28_1; // x24
  Il2CppObject *v18; // x25
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t questPhase; // w23
  int32_t questId; // w24
  UserQuestMaster_o *v25; // x25
  QuestScriptMaterialNextMaster_c *updatedAt; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__bool__o *v29; // x20

  if ( (byte_4A5A07E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_UserQuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76128720);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
    sub_1B885B0(&System_Func_UserQuestEntity__bool__TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_CondType___c__CheckGroupMaterialQuest_b__28_1__);
    sub_1B885B0(&Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__);
    sub_1B885B0(&CondType___c__DisplayClass28_0_TypeInfo);
    sub_1B885B0(&CondType___c_TypeInfo);
    byte_4A5A07E = 1;
  }
  v5 = (CondType___c__DisplayClass28_0_o *)sub_1B887FC(CondType___c__DisplayClass28_0_TypeInfo);
  CondType___c__DisplayClass28_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_31;
  v5->fields.condQuestId = condQuestId;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(0LL);
  if ( userQuestEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestScriptMaterialNextMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    if ( Master_object )
    {
      v9 = Master_object;
      IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(Master_object, v5->fields.condQuestId, 0LL);
      SortedGroupUserQuestEntities = QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
                                       v9,
                                       IncludedGroups,
                                       0LL);
      v12 = QuestScriptMaterialNextMaster__GetIncludedGroups(v9, v5->fields.condQuestId, 0LL);
      v13 = (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
                                   (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity___);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      IncludedGroupQuest = MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(v12, 0LL);
      v15 = CondType___c_TypeInfo;
      v16 = IncludedGroupQuest;
      if ( !CondType___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
        v15 = CondType___c_TypeInfo;
      }
      _9__28_1 = (System_Func_object__bool__o *)v15->static_fields->__9__28_1;
      if ( !_9__28_1 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = CondType___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v15->static_fields->__9;
        _9__28_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserQuestEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__28_1, v18, Method_CondType___c__CheckGroupMaterialQuest_b__28_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__28_1 = (struct System_Func_UserQuestEntity__bool__o *)_9__28_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_1, (int32_t)_9__28_1, v20, v21);
      }
      if ( !System_Linq_Enumerable__All_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)SortedGroupUserQuestEntities,
              (System_Func_TSource__bool__o *)_9__28_1,
              (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_UserQuestEntity___)
        || !v13 )
      {
        return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v9, v5->fields.condQuestId, v13, v16, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v22 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
      questId = v13->fields.questId;
      questPhase = v13->fields.questPhase;
      v25 = (UserQuestMaster_o *)v22;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (QuestScriptMaterialNextMaster_o *)NetworkManager__getTime(0LL);
      if ( v25 )
      {
        Master_object = (QuestScriptMaterialNextMaster_o *)UserQuestMaster__CreateQuestClearDummyData(
                                                             v25,
                                                             questId,
                                                             questPhase,
                                                             (int64_t)Master_object,
                                                             0LL);
        if ( Master_object )
        {
          updatedAt = (QuestScriptMaterialNextMaster_c *)v13->fields.updatedAt;
          v13 = (UserQuestEntity_o *)Master_object;
          Master_object[1].klass = updatedAt;
          return QuestScriptMaterialNextMaster__GetCheckTargetEntity(v9, v5->fields.condQuestId, v13, v16, 0LL);
        }
      }
    }
LABEL_31:
    sub_1B8880C(Master_object, v7);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Quests;
  if ( !Quests )
    return 0LL;
  v29 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserQuestEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_CondType___c__DisplayClass28_0__CheckGroupMaterialQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                v28,
                                (System_Func_TSource__bool__o *)v29,
                                (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_UserQuestEntity____76128720);
}


bool __fastcall CondType__CompareQuestClearTime(
        int32_t questId,
        int64_t time,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *UserId; // x0
  int64_t v8; // x22
  UserQuestMaster_o *UserQuestMaster; // x0
  __int64 v10; // x1
  UserQuestEntity_o *EntityFromId; // x0
  const MethodInfo *v12; // x3
  UserQuestEntity_o *v13; // x22
  bool IsQuestClear_37596684; // w8

  if ( (byte_4A5A134 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A134 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v8 = (int64_t)UserId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_1B8880C(0LL, v10);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v8, questId, 0LL);
  if ( EntityFromId )
  {
    v13 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, v12);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_37596684 )
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


int32_t __fastcall CondType__CountAllServantTargetSkillLvNum(
        int32_t skillLv,
        int32_t targetNum,
        const MethodInfo *method)
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

  if ( (byte_4A5A117 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A117 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    sub_1B8880C(Master_object, v6);
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
                                                         0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = (UserServantCollectionMaster_o *)UserServantCollectionEntity__getSkillLevelList(v12, 0LL);
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
      if ( *((_DWORD *)&Master_object->fields.list + v14) >= skillLv )
        ++v9;
      if ( targetNum && v9 >= targetNum )
        return v9;
      if ( v13 == ++v14 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1B88814(Master_object, v6);
  }
  return 0;
}


int32_t __fastcall CondType__CountClassBoardSquareReleased(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass195_0_o *v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  CondType___c_c *v10; // x8
  System_Func_object__int__o *_9__195_1; // x20
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct CondType___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__195_1; // x0
  CondType___c_c *v17; // x0
  Il2CppObject *v18; // x21
  struct CondType___c_StaticFields *v19; // x0

  if ( (byte_4A5A11D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    sub_1B885B0(&System_Func_UserClassBoardSquareEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_1B885B0(&Method_CondType___c__CountClassBoardSquareReleased_b__195_1__);
    sub_1B885B0(&Method_CondType___c__CountClassBoardSquareReleased_b__195_2__);
    sub_1B885B0(&Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__);
    sub_1B885B0(&CondType___c__DisplayClass195_0_TypeInfo);
    sub_1B885B0(&CondType___c_TypeInfo);
    byte_4A5A11D = 1;
  }
  v3 = (CondType___c__DisplayClass195_0_o *)sub_1B887FC(CondType___c__DisplayClass195_0_TypeInfo);
  CondType___c__DisplayClass195_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_22;
  v3->fields.targetId = targetId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
LABEL_22:
    sub_1B8880C(Master_object, v5);
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)Master_object,
                                                                          (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_UserClassBoardSquareEntity___);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                              Entitys_object,
                                                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_UserClassBoardSquareEntity___);
  if ( v3->fields.targetId )
  {
    v8 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_CondType___c__DisplayClass195_0__CountClassBoardSquareReleased_b__0__,
      0LL);
    v9 = System_Linq_Enumerable__Where_object_(
           v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserClassBoardSquareEntity___);
    v10 = CondType___c_TypeInfo;
    v7 = v9;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v10 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v10->static_fields->__9__195_1;
    if ( !_9__195_1 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = CondType___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__195_1,
        v12,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_1__,
        0LL);
      static_fields = CondType___c_TypeInfo->static_fields;
      static_fields->__9__195_1 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__195_1;
LABEL_20:
      sub_1B88554(p__9__195_1, (int32_t)_9__195_1, v13, v14);
    }
  }
  else
  {
    v17 = CondType___c_TypeInfo;
    if ( !CondType___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
      v17 = CondType___c_TypeInfo;
    }
    _9__195_1 = (System_Func_object__int__o *)v17->static_fields->__9__195_2;
    if ( !_9__195_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CondType___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v17->static_fields->__9;
      _9__195_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserClassBoardSquareEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__195_1,
        v18,
        Method_CondType___c__CountClassBoardSquareReleased_b__195_2__,
        0LL);
      v19 = CondType___c_TypeInfo->static_fields;
      v19->__9__195_2 = (struct System_Func_UserClassBoardSquareEntity__int__o *)_9__195_1;
      p__9__195_1 = (ServantStatusBattleListViewItem_o *)&v19->__9__195_2;
      goto LABEL_20;
    }
  }
  return System_Linq_Enumerable__Sum_object_(
           v7,
           (System_Func_TSource__int__o *)_9__195_1,
           (const MethodInfo_2EB7264 *)Method_System_Linq_Enumerable_Sum_UserClassBoardSquareEntity___);
}


int32_t __fastcall CondType__CountCommonClassServantCollection(
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
  __int64 findSum; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A5A11A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5A11A = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  findSum = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !Master_object )
    goto LABEL_31;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         classId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
    v7 = Master_object;
    if ( *(_QWORD *)&Master_object->max_length )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantCollectionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      LODWORD(findSum) = 0;
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)max_length )
            sub_1B88814(Master_object, v6);
          v12 = &v7->obj.klass + v11;
          v13 = v12[4];
          if ( !v13 )
            break;
          Master_object = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(
                                                                 (UserServantCollectionEntity_o *)v12[4],
                                                                 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            namespaze = v13->_1.namespaze;
            data = v13->_1.byval_arg.data;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v20.fields.currentCryptoKey = namespaze;
            *(_QWORD *)&v20.fields.fakeValue = data;
            Master_object = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v20,
                                                                   0LL);
            if ( !v9 )
              break;
            Master_object = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   v9,
                                                                   &v17,
                                                                   (int32_t)Master_object,
                                                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !v17 )
                break;
              if ( LODWORD(v17[5].klass) == classId )
              {
                if ( !countFunc )
                  break;
                Master_object = (UserServantCollectionEntity_array *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppClass *, _QWORD))countFunc->fields.m_target)(
                                                                       countFunc->fields.original_method_info,
                                                                       v13,
                                                                       *(_QWORD *)&countFunc->fields.extra_arg);
                v10 += (int)Master_object;
              }
            }
          }
          v11 = findSum + 1;
          LODWORD(findSum) = v11;
          max_length = v7->max_length;
          if ( v11 >= max_length )
            return v10;
        }
LABEL_31:
        sub_1B8880C(Master_object, v6);
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
  Il2CppObject *cachedServantEquipIdStrDic; // x0
  UserServantCollectionMaster_o *v8; // x20
  System_Collections_Generic_List_object__o *ServantEquipCollectionList; // x23
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v11; // x21
  int v12; // w26
  int v13; // w19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  __int64 v19; // x0
  Il2CppObject *v20; // x23
  void *v21; // x24
  Il2CppClass *v22; // x25
  __int64 v23; // x0
  ServantLimitEntity_o *v24; // x24
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // [xsp+0h] [xbp-B0h]
  int32_t v30; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A5A105 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantCollectionEntity__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A105 = 1;
  }
  v3 = CondType_TypeInfo;
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v3 = CondType_TypeInfo;
  }
  lastUserId = v3->static_fields->lastUserId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( lastUserId != NetworkManager__get_UserId(0LL) )
  {
    v6 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v6 = CondType_TypeInfo;
    }
    cachedServantEquipIdStrDic = (Il2CppObject *)v6->static_fields->cachedServantEquipIdStrDic;
    if ( !cachedServantEquipIdStrDic )
LABEL_48:
      sub_1B8880C(cachedServantEquipIdStrDic, v5);
    System_Collections_Generic_Dictionary_int__object___Clear(
      (System_Collections_Generic_Dictionary_int__object__o *)cachedServantEquipIdStrDic,
      (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__string__Clear__);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    CondType_TypeInfo->static_fields->lastUserId = NetworkManager__get_UserId(0LL);
  }
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v8 = (UserServantCollectionMaster_o *)cachedServantEquipIdStrDic;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !v8 )
    goto LABEL_48;
  ServantEquipCollectionList = (System_Collections_Generic_List_object__o *)UserServantCollectionMaster__getServantEquipCollectionList(
                                                                              v8,
                                                                              CondType_TypeInfo->static_fields->cachedServantEquipIdStrDic,
                                                                              0LL);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)cachedServantEquipIdStrDic,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  v11 = DataManager__GetMasterData_object_(
          (DataManager_o *)cachedServantEquipIdStrDic,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  cachedServantEquipIdStrDic = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedServantEquipIdStrDic )
    goto LABEL_48;
  cachedServantEquipIdStrDic = DataManager__GetMasterData_object_(
                                 (DataManager_o *)cachedServantEquipIdStrDic,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaster___);
  if ( !ServantEquipCollectionList )
    goto LABEL_48;
  if ( ServantEquipCollectionList->fields._size < 1 )
    return 0;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)cachedServantEquipIdStrDic;
  v12 = targetId / 100;
  v13 = targetId % 100;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    ServantEquipCollectionList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__GetEnumerator__);
  v30 = 0;
  v33 = v31;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__MoveNext__);
    if ( !v14 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B8880C(v14, v15);
    if ( LODWORD(v33.fields._current[2].monitor) == 2 )
    {
      monitor = v33.fields._current[1].monitor;
      klass = v33.fields._current[2].klass;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v34.fields.fakeValue = klass;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
      if ( !MasterData_object )
        sub_1B8880C(v19, (unsigned int)v19);
      v20 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              v19,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( v20 )
      {
        v22 = v20[1].klass;
        v21 = v20[1].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v22;
        *(_QWORD *)&v35.fields.fakeValue = v21;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
        if ( !v11 )
          sub_1B8880C(v23, (unsigned int)v23);
        v24 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v11, v23, 0, 0LL);
        if ( v24
          && ServantEntity__get_IsServantEquip((ServantEntity_o *)v20, 0LL)
          && v24->fields.rarity == v13
          && SHIDWORD(current[2].monitor) >= v12 )
        {
          if ( !v29 )
            sub_1B8880C(0LL, v25);
          v26 = DataMasterBase_object__object__int___TryGetEntity(
                  v29,
                  &entity,
                  (int32_t)v20[8].monitor,
                  (const MethodInfo_311D988 *)Method_DataMasterBase_CombineMaster__CombineEntity__int__TryGetEntity__);
          if ( !v26 )
            goto LABEL_42;
          if ( !entity )
            sub_1B8880C(v26, v27);
          if ( HIDWORD(entity[1].klass) != 3 )
LABEL_42:
            ++v30;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantCollectionEntity__Dispose__);
  return v30;
}


int32_t __fastcall CondType__CountExchangeServantMaxLimit(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A121 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A121 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantMaxLimitCount((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__CountRandomMissionClearNum(System_Int32_array *missionIds, const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  UserEventRandomMissionMaster_o *v6; // x20
  int32_t v7; // w21
  unsigned __int64 v8; // x22

  if ( (byte_4A5A10F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A10F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !missionIds )
    goto LABEL_16;
  v5 = *(_QWORD *)&missionIds->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = Master_object;
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1B88814(Master_object, v4);
      if ( !v6 )
        break;
      Master_object = (UserEventRandomMissionMaster_o *)UserEventRandomMissionMaster__GetMissionEntity(
                                                          v6,
                                                          missionIds->m_Items[v8 + 1],
                                                          0LL);
      if ( Master_object )
        v7 += HIDWORD(Master_object->fields.list);
      LODWORD(v5) = missionIds->max_length;
      if ( (__int64)++v8 >= (int)v5 )
        return v7;
    }
LABEL_16:
    sub_1B8880C(Master_object, v4);
  }
  return 0;
}


int32_t __fastcall CondType__CountServantClassTotalFriendShipUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5A0FF & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4A5A0FF = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalFriendShipUp_g__CountFunc_159_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5A102 & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4A5A102 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0LL, Method_CondType__CountServantClassTotalLevelUp_g__CountFunc_162_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalLimitUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5A0FD & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4A5A0FD = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(v3, 0LL, Method_CondType__CountServantClassTotalLimitUp_g__CountFunc_157_0__, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantClassTotalSkillLevelUp(int32_t classId, const MethodInfo *method)
{
  System_Func_object__int__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5A119 & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    byte_4A5A119 = 1;
  }
  v3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v3,
    0LL,
    Method_CondType__CountServantClassTotalSkillLevelUp_g__CountFunc_190_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(classId, (System_Func_UserServantCollectionEntity__int__o *)v3, v4);
}


int32_t __fastcall CondType__CountServantFriendShipClassNum(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass158_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w21
  System_Func_object__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4A5A0FE & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1B885B0(&Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__);
    sub_1B885B0(&CondType___c__DisplayClass158_0_TypeInfo);
    byte_4A5A0FE = 1;
  }
  v3 = (CondType___c__DisplayClass158_0_o *)sub_1B887FC(CondType___c__DisplayClass158_0_TypeInfo);
  CondType___c__DisplayClass158_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  v6 = targetId / 100;
  v3->fields.friendShipRank = targetId % 100;
  v7 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass158_0__CountServantFriendShipClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CountCommonClassServantCollection(v6, (System_Func_UserServantCollectionEntity__int__o *)v7, v8);
}


int32_t __fastcall CondType__CountServantLevelClassNum(int32_t classId, int32_t level, const MethodInfo *method)
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

  if ( (byte_4A5A101 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A101 = 1;
  }
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         classId,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v7 = Instance;
    if ( *(_QWORD *)&Instance->max_length )
    {
      Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_27;
      Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      max_length = v7->max_length;
      if ( max_length >= 1 )
      {
        v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v10 = 0LL;
        v11 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_1B88814(Instance, v6);
          v12 = v7->m_Items[v10];
          if ( !v12 )
            break;
          Instance = (UserServantCollectionEntity_array *)UserServantCollectionEntity__IsFinded(v7->m_Items[v10], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && v12->fields.maxLv >= level )
          {
            v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v14;
            *(_QWORD *)&v17.fields.fakeValue = v13;
            Instance = (UserServantCollectionEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v17,
                                                              0LL);
            if ( !v9 )
              break;
            Instance = (UserServantCollectionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                              v9,
                                                              (int32_t)Instance,
                                                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        sub_1B8880C(Instance, v6);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantLevelIdNum(int32_t sarvantId, int32_t level, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  DataManager_o *v8; // x20

  if ( (byte_4A5A103 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A103 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                      (UserServantCollectionMaster_o *)MasterData_object,
                                      (int64_t)Instance,
                                      sarvantId,
                                      0LL)) == 0LL )
  {
LABEL_11:
    sub_1B8880C(Instance, v6);
  }
  v8 = Instance;
  return UserServantCollectionEntity__IsFinded((UserServantCollectionEntity_o *)Instance, 0LL)
      && SHIDWORD(v8->fields.datalist) >= level;
}


int32_t __fastcall CondType__CountServantLimitClassNum(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int v5; // w19
  UserServantCollectionEntity_array *CollectionList; // x21
  __int64 v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  __int64 v9; // x26
  int32_t v10; // w23
  int v11; // w29
  UserServantCollectionEntity_o *v12; // x20
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t findSum[2]; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5A0FC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_27;
  v5 = targetId / 100;
  if ( DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         targetId / 100,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__) )
  {
    *(_QWORD *)findSum = 0LL;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_27;
    CollectionList = UserServantCollectionMaster__getCollectionList(
                       (UserServantCollectionMaster_o *)Instance,
                       &findSum[1],
                       findSum,
                       0,
                       0,
                       0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !CollectionList )
      goto LABEL_27;
    v7 = *(_QWORD *)&CollectionList->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0LL;
        v10 = 0;
        v11 = targetId % 100;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= (unsigned int)v7 )
            sub_1B88814(Instance, v4);
          v12 = CollectionList->m_Items[v9];
          if ( !v12 )
            break;
          Instance = (Il2CppObject *)UserServantCollectionEntity__IsFinded(CollectionList->m_Items[v9], 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
            v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v14;
            *(_QWORD *)&v17.fields.fakeValue = v13;
            Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
            if ( !v8 )
              break;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v8,
                         (int32_t)Instance,
                         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( LODWORD(Instance[5].klass) == v5 && v12->fields.maxLimitCount >= v11 )
              ++v10;
          }
          LODWORD(v7) = CollectionList->max_length;
          if ( (int)++v9 >= (int)v7 )
            return v10;
        }
LABEL_27:
        sub_1B8880C(Instance, v4);
      }
    }
  }
  return 0;
}


int32_t __fastcall CondType__CountServantTargetSkillLvClassNum(int32_t targetId, const MethodInfo *method)
{
  CondType___c__DisplayClass189_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // w21
  System_Func_object__int__o *v7; // x19
  const MethodInfo *v8; // x2

  if ( (byte_4A5A118 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_Func_UserServantCollectionEntity__int__TypeInfo);
    sub_1B885B0(&Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__);
    sub_1B885B0(&CondType___c__DisplayClass189_0_TypeInfo);
    byte_4A5A118 = 1;
  }
  v3 = (CondType___c__DisplayClass189_0_o *)sub_1B887FC(CondType___c__DisplayClass189_0_TypeInfo);
  CondType___c__DisplayClass189_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  v6 = targetId / 100;
  v3->fields.skillLv = targetId % 100;
  v7 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserServantCollectionEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_CondType___c__DisplayClass189_0__CountServantTargetSkillLvClassNum_g__CountFunc_0__,
    0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  int v7; // w24
  int v8; // w22
  int32_t TARGET_PARAM_NUM; // w9

  v4 = targetParam;
  if ( (byte_4A5A100 & 1) == 0 )
  {
    targetParam = (System_Int32_array *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A100 = 1;
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
        sub_1B88814(targetParam, func);
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
    sub_1B8880C(targetParam, func);
  }
  return v6;
}


int32_t __fastcall CondType__GetBoardGameTokenGetNum(int32_t tokenId, const MethodInfo *method)
{
  UserEventBoardGameTokenEntity_array *Instance; // x0
  __int64 v4; // x1
  int max_length; // w9
  int v6; // w10
  int32_t v7; // w8
  UserEventBoardGameTokenEntity_o *v8; // x11

  if ( (byte_4A5A0F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F6 = 1;
  }
  Instance = (UserEventBoardGameTokenEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (UserEventBoardGameTokenEntity_array *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = UserEventBoardGameTokenMaster__GetList_40068712((UserEventBoardGameTokenMaster_o *)Instance, 0LL);
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
          sub_1B88814(Instance, v4);
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
      sub_1B8880C(Instance, v4);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5A0E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v4);
  return UserEventPointMaster__GetEventPointTotal(
           (UserEventPointMaster_o *)MasterData_object,
           (int64_t)Instance,
           eventId,
           -1,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestFriendShipRank(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A125 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A125 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestFriendShipRank(
           (UserExchangeSvtMaster_o *)Instance,
           eventId,
           0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A11F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A11F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetExchangeServantHighestSkillLevel(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A123 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A123 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserExchangeSvtMaster__GetExchangeServantHighestSkillLevel((UserExchangeSvtMaster_o *)Instance, eventId, 0LL);
}


int32_t __fastcall CondType__GetItemGetCount(int32_t targetId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *v7; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A075 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4A5A075 = 1;
  }
  v7 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               targetId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_19;
    if ( LODWORD(entity[3].klass) == 35 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
      if ( Instance )
        return BattleItemData__GetItemCountWithIdCheck((BattleItemData_o *)Instance, targetId, 0LL);
LABEL_19:
      sub_1B8880C(Instance, v4);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_19;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &v7, Instance, targetId, 0LL);
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v7 )
    goto LABEL_19;
  return v7->fields.num;
}


int32_t __fastcall CondType__GetMIssionClearNum(int32_t condId, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  __int64 v7; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4A5A0AD & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0AD = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionClear(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v6, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1B8880C(Instance, v5);
    }
    v7 = *(_QWORD *)&Instance->max_length;
    v8 = Instance;
    if ( (int)v7 < 1 )
      return 0;
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1B88814(Instance, v5);
      v11 = v8->m_Items[v10 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionClear(v11, v5);
      LODWORD(v7) = v8->max_length;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)v7 );
    return v9;
  }
}


int32_t __fastcall CondType__GetMissionAchiveNum(int32_t condId, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  const MethodInfo *v5; // x1
  EventMissionMaster_o *v6; // x19
  __int64 v7; // x8
  System_Int32_array *v8; // x19
  int32_t v9; // w20
  unsigned __int64 v10; // x23
  int32_t v11; // w21

  if ( (byte_4A5A0AE & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0AE = 1;
  }
  if ( condId )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsMissionAchive(condId, method);
  }
  else
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v6 = (EventMissionMaster_o *)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !v6
      || (Instance = EventMissionMaster__getMissionIdListByEvent(v6, CondType_TypeInfo->static_fields->EventId, 0LL)) == 0LL )
    {
LABEL_22:
      sub_1B8880C(Instance, v5);
    }
    v7 = *(_QWORD *)&Instance->max_length;
    v8 = Instance;
    if ( (int)v7 < 1 )
      return 0;
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1B88814(Instance, v5);
      v11 = v8->m_Items[v10 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsMissionAchive(v11, v5);
      LODWORD(v7) = v8->max_length;
      ++v10;
      v9 += (unsigned __int8)Instance & 1;
    }
    while ( (__int64)v10 < (int)v7 );
    return v9;
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
      return dword_BEEA04[v2];
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
  Il2CppObject *MasterData_object; // x24
  UserQuestMaster_o *v12; // x20
  System_Int32_array *QuestIdListByGroupId; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x24
  __int64 v18; // x8
  int32_t v19; // w21
  unsigned __int64 v20; // x25
  bool v21; // w22
  int32_t v22; // w23

  if ( (byte_4A5A0B7 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___),
        !MasterData_object)
    || (v12 = (UserQuestMaster_o *)Instance,
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)MasterData_object,
                                 groupId,
                                 2,
                                 0LL),
        *sameGroupQuestIds = QuestIdListByGroupId,
        sub_1B88554((ServantStatusBattleListViewItem_o *)sameGroupQuestIds, (int32_t)QuestIdListByGroupId, v14, v15),
        (v17 = *sameGroupQuestIds) == 0LL) )
  {
LABEL_26:
    sub_1B8880C(Instance, v10);
  }
  v18 = *(_QWORD *)&v17->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0;
    v20 = 0LL;
    v21 = isCheckResetFlag;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1B88814(Instance, v10);
      v22 = v17->m_Items[v20 + 1];
      if ( v22 != questId )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsQuestClear_37596684(v22, -1, v21, v16);
        if ( (Instance & 1) != 0 )
        {
          ++v19;
        }
        else
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__get_UserId(0LL);
          if ( !v12 )
            goto LABEL_26;
          Instance = (int64_t)UserQuestMaster__getEntityFromId(v12, Instance, v22, 0LL);
          if ( Instance )
          {
            Instance = UserQuestEntity__getQuestPhase((UserQuestEntity_o *)Instance, 0LL);
            if ( (int)Instance > 0 )
              ++v19;
          }
        }
      }
      LODWORD(v18) = v17->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        return v19;
    }
  }
  return 0;
}


int32_t __fastcall CondType__GetNumIsOpenByDate(int64_t condVal, const MethodInfo *method)
{
  if ( (byte_4A5A0BB & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0BB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) >= condVal;
}


int32_t __fastcall CondType__GetNumMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0AB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v6);
  if ( SLODWORD(entity->fields.progressNum) >= condVal )
    return condVal;
  else
    return entity->fields.progressNum;
}


int64_t __fastcall CondType__GetOpenTime(const MethodInfo *method)
{
  if ( (byte_4A5A0BA & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0BA = 1;
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
  CondType_c *v9; // x0
  int64_t v10; // x8
  int32_t PurchaseShopCount; // w0
  bool IsPurchaseShop; // w0
  const MethodInfo *v15; // x4
  CondType_c *v16; // x0
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  v5 = eventId;
  if ( (byte_4A5A07C & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A07C = 1;
  }
  v9 = CondType_TypeInfo;
  sameGroupQuestIds = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v9 = CondType_TypeInfo;
  }
  v9->static_fields->EventId = v5;
  if ( condType > 85 )
  {
    if ( condType > 127 )
    {
      v10 = 0LL;
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
          switch ( condType )
          {
            case 136:
              if ( !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
            case 137:
            case 138:
            case 140:
              return v10;
            case 139:
              if ( !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              IsPurchaseShop = CondType__TimeLimitRaidDead(v5, targetId, (const MethodInfo *)condValue);
              goto LABEL_148;
            case 141:
              if ( !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__CountEquipRarityLevelNum(targetId, *(const MethodInfo **)&targetId);
            case 142:
              if ( !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              return CondType__LatestMainScenarioWarClear((const MethodInfo *)v9);
            default:
              if ( condType != 219 )
                return v10;
              if ( !v9->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v9);
              PurchaseShopCount = CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&targetId);
              break;
          }
          return PurchaseShopCount;
      }
      return v10;
    }
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
    return 0LL;
  }
  if ( condType <= 46 )
  {
    v10 = 1LL;
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
        goto LABEL_148;
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
LABEL_148:
        v10 = IsPurchaseShop;
        break;
      case 40:
        if ( !v9->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v9);
        return CondType__GetServantHavingCount(targetId, *(const MethodInfo **)&targetId);
      case 46:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__get_UserId(0LL);
        v16 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        return CondType__GetQuestClearPhaseCount((int64_t)v16, targetId, -1, 0, v15);
      default:
        return 0LL;
    }
  }
  else
  {
    if ( condType == 67 )
    {
      if ( !v9->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v9);
      return CondType__GetShopReleasedCount(targetId, *(const MethodInfo **)&targetId);
    }
    if ( condType == 71 )
    {
      if ( !v9->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v9);
      return CondType__GetRaidGroupDeadCount(targetId, condValue, (const MethodInfo *)condValue);
    }
    if ( condType != 85 )
      return 0LL;
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    return CondType__GetEventTotalPoint(v5, *(const MethodInfo **)&targetId);
  }
  return v10;
}


int64_t __fastcall CondType__GetProgressNumByTargetIds(
        int32_t condType,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  int64_t result; // x0
  CondType___c_c *v6; // x0
  System_Func_int__int__int__o *_9__26_1; // x20
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct CondType___c_StaticFields *v11; // x0
  ServantStatusBattleListViewItem_o *p__9__26_1; // x0
  CondType_CountDelegate_o *v13; // x0
  __int64 *v14; // x8
  CondType___c_c *v15; // x0
  Il2CppObject *v16; // x21
  struct CondType___c_StaticFields *v17; // x0
  CondType_CountDelegate_o *v18; // x20
  const MethodInfo *v19; // x2
  CondType___c_c *v20; // x0
  Il2CppObject *v21; // x21
  struct CondType___c_StaticFields *static_fields; // x0

  if ( (byte_4A5A07D & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType_CountServantLevelClassNum__);
    sub_1B885B0(&Method_CondType_CountServantLevelIdNum__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&CondType_CountDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_int__int___);
    sub_1B885B0(&System_Func_int__int__int__TypeInfo);
    sub_1B885B0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_0__);
    sub_1B885B0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_1__);
    sub_1B885B0(&Method_CondType___c__GetProgressNumByTargetIds_b__26_2__);
    sub_1B885B0(&CondType___c_TypeInfo);
    byte_4A5A07D = 1;
  }
  if ( condType > 149 )
  {
    result = 0LL;
    if ( condType > 189 )
    {
      if ( condType == 190 )
      {
        v20 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v20 = CondType___c_TypeInfo;
        }
        _9__26_1 = v20->static_fields->__9__26_1;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = CondType___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v20->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1B887FC(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v21, Method_CondType___c__GetProgressNumByTargetIds_b__26_1__, 0LL);
        static_fields = CondType___c_TypeInfo->static_fields;
        static_fields->__9__26_1 = _9__26_1;
        p__9__26_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__26_1;
      }
      else
      {
        if ( condType != 191 )
          return result;
        v15 = CondType___c_TypeInfo;
        if ( !CondType___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
          v15 = CondType___c_TypeInfo;
        }
        _9__26_1 = v15->static_fields->__9__26_2;
        if ( _9__26_1 )
          goto LABEL_39;
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = CondType___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v15->static_fields->__9;
        _9__26_1 = (System_Func_int__int__int__o *)sub_1B887FC(System_Func_int__int__int__TypeInfo);
        System_Func_int__int__int____ctor(_9__26_1, v16, Method_CondType___c__GetProgressNumByTargetIds_b__26_2__, 0LL);
        v17 = CondType___c_TypeInfo->static_fields;
        v17->__9__26_2 = _9__26_1;
        p__9__26_1 = (ServantStatusBattleListViewItem_o *)&v17->__9__26_2;
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
      _9__26_1 = v6->static_fields->__9__26_0;
      if ( _9__26_1 )
        goto LABEL_39;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = CondType___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__26_1 = (System_Func_int__int__int__o *)sub_1B887FC(System_Func_int__int__int__TypeInfo);
      System_Func_int__int__int____ctor(_9__26_1, v8, Method_CondType___c__GetProgressNumByTargetIds_b__26_0__, 0LL);
      v11 = CondType___c_TypeInfo->static_fields;
      v11->__9__26_0 = _9__26_1;
      p__9__26_1 = (ServantStatusBattleListViewItem_o *)&v11->__9__26_0;
    }
    sub_1B88554(p__9__26_1, (int32_t)_9__26_1, v9, v10);
LABEL_39:
    LODWORD(result) = System_Linq_Enumerable__Aggregate_int__int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                        0,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
                        (const MethodInfo_2E8A00C *)Method_System_Linq_Enumerable_Aggregate_int__int___);
    return (int)result;
  }
  if ( condType == 148 )
  {
    v13 = (CondType_CountDelegate_o *)sub_1B887FC(CondType_CountDelegate_TypeInfo);
    v14 = &Method_CondType_CountServantLevelClassNum__;
  }
  else
  {
    if ( condType != 149 )
      return 0LL;
    v13 = (CondType_CountDelegate_o *)sub_1B887FC(CondType_CountDelegate_TypeInfo);
    v14 = &Method_CondType_CountServantLevelIdNum__;
  }
  v18 = v13;
  CondType_CountDelegate___ctor(v13, 0LL, *v14, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LODWORD(result) = CondType__CountTargetParamMatchFunction(targetIds, v18, v19);
  return (int)result;
}


int32_t __fastcall CondType__GetPurchaseShopCount(int32_t targetId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserShopEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A5 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserShopMaster__TryGetEntity((UserShopMaster_o *)MasterData_object, &entity, Instance, targetId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_12:
    sub_1B8880C(Instance, v4);
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
  int32_t challengeNum; // w25
  QuestGroupMaster_o *v11; // x20
  __int64 v12; // x8
  int64_t v13; // x20
  unsigned __int64 v14; // x26
  int32_t v15; // w21
  Il2CppObject *MasterData_object; // x22

  if ( (byte_4A5A0BD & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0BD = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
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
            goto LABEL_27;
          challengeNum = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)v12 )
              sub_1B88814(Instance, v8);
            v15 = *(_DWORD *)(v13 + 32 + 4 * v14);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                  (UserQuestMaster_o *)MasterData_object,
                                  Instance,
                                  v15,
                                  0LL);
            if ( Instance )
              challengeNum += *(_DWORD *)(Instance + 56);
            LODWORD(v12) = *(_DWORD *)(v13 + 24);
            if ( (__int64)++v14 >= (int)v12 )
              goto LABEL_28;
          }
        }
      }
    }
LABEL_31:
    sub_1B8880C(Instance, v8);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  const MethodInfo *v2; // x3
  int32_t v4; // w20
  int64_t Instance; // x0
  __int64 v6; // x1
  QuestGroupMaster_o *v7; // x19
  __int64 v8; // x8
  int64_t v9; // x19
  unsigned __int64 v10; // x25
  int32_t v11; // w21
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v13; // x3
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5A0AC & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0AC = 1;
  }
  entity = 0LL;
  if ( !targetId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v7 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
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
              sub_1B88814(Instance, v6);
            v11 = *(_DWORD *)(v9 + 32 + 4 * v10);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = UserQuestMaster__TryGetEntity(
                         (UserQuestMaster_o *)MasterData_object,
                         &entity,
                         Instance,
                         v11,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              Instance = CondType__IsQuestClear_37596684(v11, -1, 0, v13);
              v4 += Instance & 1;
            }
            LODWORD(v8) = *(_DWORD *)(v9 + 24);
            if ( (__int64)++v10 >= (int)v8 )
              return v4;
          }
        }
      }
    }
    sub_1B8880C(Instance, v6);
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(targetId, -1, 0, v2);
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
  unsigned __int64 v14; // x26
  int32_t v15; // w22
  Il2CppObject *MasterData_object; // x23

  if ( (byte_4A5A0B4 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B4 = 1;
  }
  if ( !condId )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      v11 = (QuestGroupMaster_o *)Instance;
      if ( !CondType_TypeInfo->_2.cctor_finished )
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
            goto LABEL_27;
          ClearNum = 0;
          v14 = 0LL;
          while ( 1 )
          {
            if ( v14 >= (unsigned int)v12 )
              sub_1B88814(Instance, v8);
            v15 = *(_DWORD *)(v13 + 32 + 4 * v14);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)UserQuestMaster__getEntityFromId(
                                  (UserQuestMaster_o *)MasterData_object,
                                  Instance,
                                  v15,
                                  0LL);
            if ( Instance )
            {
              Instance = UserQuestEntity__getClearNum((UserQuestEntity_o *)Instance, 0LL);
              ClearNum += Instance;
            }
            LODWORD(v12) = *(_DWORD *)(v13 + 24);
            if ( (__int64)++v14 >= (int)v12 )
              goto LABEL_28;
          }
        }
      }
    }
LABEL_31:
    sub_1B8880C(Instance, v8);
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A084 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A084 = 1;
  }
  v8 = CondType_TypeInfo;
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10 = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    goto LABEL_17;
  if ( !UserQuestMaster__TryGetEntity(UserQuestMaster, &entity, v10, targetId, 0LL) )
    return 0;
  if ( isCheckResetFlag )
  {
    v10 = (int64_t)entity;
    if ( !entity )
      goto LABEL_17;
    if ( UserQuestEntity__IsResetStatus(entity, 0LL) )
      return 0;
  }
  v10 = (int64_t)entity;
  if ( !entity )
LABEL_17:
    sub_1B8880C(v10, v11);
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
  System_Int32_array *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  int32_t v12; // w22
  unsigned __int64 v13; // x24
  bool v14; // w20
  int32_t v15; // w23

  if ( (byte_4A5A0B9 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B9 = 1;
  }
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  v10 = *(_QWORD *)&Instance->max_length;
  v11 = Instance;
  if ( (int)v10 < 1 )
    return 0;
  v12 = 0;
  v13 = 0LL;
  v14 = isCheckResetFlag;
  do
  {
    if ( v13 >= (unsigned int)v10 )
      sub_1B88814(Instance, v8);
    v15 = v11->m_Items[v13 + 1];
    if ( v15 != questId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestClear_37596684(v15, -1, v14, v9);
      v12 += (unsigned __int8)Instance & 1;
    }
    LODWORD(v10) = v11->max_length;
    ++v13;
  }
  while ( (__int64)v13 < (int)v10 );
  return v12;
}


int64_t __fastcall CondType__GetRaidDamage(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v8; // x22
  UserEventRaidEntity_o *Entity; // x0
  int64_t damage; // x8

  if ( (byte_4A5A0BC & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0BC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v8 = (int64_t)Instance;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !MasterData_object )
LABEL_15:
    sub_1B8880C(Instance, v6);
  Entity = UserEventRaidMaster__GetEntity(
             (UserEventRaidMaster_o *)MasterData_object,
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
  if ( (byte_4A5A074 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A074 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_20;
  EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray((EventRaidMaster_o *)Instance, targetId, v3, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
        sub_1B88814(Instance, v6);
      v12 = EventRaidEntityArray->m_Items[v10];
      if ( !v12 || !v9 )
        break;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v9, &entity, targetId, v12->fields.day, 0LL);
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
    sub_1B8880C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall CondType__GetRandomMissionClearNum(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4A5A10E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A10E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A094 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A094 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserServantMaster__GetServantHavingCount((UserServantMaster_o *)Instance, targetId, 1, 0LL);
}


int32_t __fastcall CondType__GetServantHavingLimitMaxCount(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A0E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserServantMaster__GetServantHavintLimitMaxCount((UserServantMaster_o *)Instance, targetId, 0LL);
}


int32_t __fastcall CondType__GetShopReleasedCount(int32_t targetId, const MethodInfo *method)
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

  if ( (byte_4A5A0DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0DC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
      max_length = v6->max_length;
      if ( max_length >= 1 )
      {
        v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
        v9 = 0LL;
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            sub_1B88814(Instance, v4);
          v11 = v6->m_Items[v9];
          if ( !v11 || !v8 )
            break;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v8,
                                       &entity,
                                       v11->fields.shopId,
                                       (const MethodInfo_311D988 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
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
              v10 += ((unsigned __int8)Instance & 1) == 0;
            }
          }
          max_length = v6->max_length;
          if ( (int)++v9 >= max_length )
            return v10;
        }
LABEL_22:
        sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5A0BE & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0BE = 1;
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v8; // x22
  UserSuperBossEntity_o *Entity; // x0
  int64_t damage; // x8
  int64_t result; // x0

  if ( (byte_4A5A0C0 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( condId )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    v8 = (int64_t)Instance;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( MasterData_object )
    {
      Entity = UserSuperBossMaster__GetEntity(
                 (UserSuperBossMaster_o *)MasterData_object,
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
LABEL_22:
    sub_1B8880C(Instance, v6);
  }
  Instance = (DataManager_o *)CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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


int64_t __fastcall CondType__GetSuperBossDamageValue(int32_t eventId, int32_t bossId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0BF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0BF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_10:
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5A0E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL);
}


int32_t __fastcall CondType__GetSvtFriendShip(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A5A0B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_13:
    sub_1B8880C(Instance, v6);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       condId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.currentCryptoKey;
    v10 = *(_QWORD *)&EntityDefinitely->fields.friendshipRank.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v10;
    LODWORD(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
    if ( (int)EntityDefinitely >= condVal )
      LODWORD(EntityDefinitely) = condVal;
  }
  return (int)EntityDefinitely;
}


int32_t __fastcall CondType__GetSvtGetNum(int32_t condId, const MethodInfo *method)
{
  if ( (byte_4A5A0AF & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0AF = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet(condId, method);
}


int32_t __fastcall CondType__GetSvtLimitCnt(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5A0B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v6);
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


int32_t __fastcall CondType__GetSvtLv(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5A0B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v6);
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
  CondType_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  CondType_c *v7; // x8
  Il2CppObject *v8; // x19
  struct CondType_StaticFields *static_fields; // x0

  if ( (byte_4A5A06C & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A06C = 1;
  }
  v1 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->static_fields->uQuestMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v3);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v7 = CondType_TypeInfo;
    v8 = MasterData_object;
    if ( !CondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v7 = CondType_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->uQuestMst = (struct UserQuestMaster_o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->uQuestMst, (int32_t)v8, v5, v6);
    v1 = CondType_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = CondType_TypeInfo;
  }
  return v1->static_fields->uQuestMst;
}


bool __fastcall CondType__IsAboveEventTradeTotalNum(int32_t eventId, int32_t condNum, const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0

  if ( (byte_4A5A12F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A12F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( Master_object )
  {
    Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__GetEntity(Master_object, eventId, 0LL);
    if ( Master_object )
      LODWORD(Master_object) = UserEventTradeEntity__GetTotalTradeCount((UserEventTradeEntity_o *)Master_object, 0LL);
  }
  return (int)Master_object >= condNum;
}


bool __fastcall CondType__IsAchieveLimitedMission(
        int32_t missionId,
        int32_t condNum,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionEntity__o *LimitedMissionList; // x0
  int32_t size; // w8

  if ( (byte_4A5A130 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A130 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  LimitedMissionList = EventMissionMaster__getLimitedMissionList((EventMissionMaster_o *)Instance, missionId, 0LL);
  if ( LimitedMissionList )
  {
    size = LimitedMissionList->fields._size;
    LOBYTE(LimitedMissionList) = 0;
    if ( size >= 1 && size >= condNum )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      sub_1B8880C(Instance, v8);
    }
  }
  return (char)LimitedMissionList;
}


bool __fastcall CondType__IsAfterQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5A133 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A133 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 1, v3);
}


bool __fastcall CondType__IsAllUserBoxGachaCount(int32_t boxgachaId, int64_t count, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A0EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalBoxGachaMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalBoxGachaMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return TotalBoxGachaMaster__GetTotalCount((TotalBoxGachaMaster_o *)Instance, boxgachaId, 0LL) >= count;
}


bool __fastcall CondType__IsArrivalDate(int64_t time, const MethodInfo *method)
{
  if ( (byte_4A5A0DE & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0DE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) >= time;
}


bool __fastcall CondType__IsAuthTDAccelerate(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1

  if ( (byte_4A5A12A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5A12A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  return BattleSequenceManager__IsTimeAccelerateNow((BattleSequenceManager_o *)v3, 0LL);
}


bool __fastcall CondType__IsBattleGroupReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v11; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v13; // x22
  unsigned __int64 v14; // x25
  int32_t v15; // w24
  int32_t v16; // w21
  int32_t v17; // w23

  if ( (byte_4A5A0F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F9 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B8880C(Instance, v8);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v13 = MasterData_object;
  v14 = 0LL;
  v15 = 0;
  if ( isWin )
    v16 = 128;
  else
    v16 = 256;
  do
  {
    if ( v14 >= (unsigned int)m_CancellationTokenSource )
      sub_1B88814(MasterData_object, v11);
    v17 = *((_DWORD *)&v9->fields._DispLog + v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v13 )
      goto LABEL_24;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v13, (int64_t)Instance, v17, 0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v16,
                                                 0LL);
      v15 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v15 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
    ++v14;
  }
  while ( (__int64)v14 < (int)m_CancellationTokenSource );
  return v15 >= val;
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
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v13; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v15; // x23
  unsigned __int64 v16; // x25
  int32_t v17; // w26
  int32_t v18; // w22
  int32_t v19; // w24

  if ( (byte_4A5A0F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Sort_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Instance,
                                groupId,
                                14,
                                0LL);
  if ( !Instance )
    goto LABEL_30;
  v11 = Instance;
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  System_Array__Sort_int_((System_Int32_array *)Instance, (const MethodInfo_2E4D514 *)Method_System_Array_Sort_int___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_30:
    sub_1B8880C(Instance, v10);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v11->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
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
        sub_1B88814(MasterData_object, v13);
      v19 = *((_DWORD *)&v11->fields._DispLog + v16);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      if ( !v15 )
        goto LABEL_30;
      MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v15, (int64_t)Instance, v19, 0LL);
      if ( MasterData_object )
      {
        MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                   (UserQuestEntity_o *)MasterData_object,
                                                   v18,
                                                   0LL);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
          ++v17;
        else
          v17 = 0;
      }
      else
      {
        v17 = 0;
      }
      if ( isBelow )
      {
        if ( v17 > val )
          return 0;
      }
      else if ( v17 >= val )
      {
        return 1;
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v16;
    }
    while ( (__int64)v16 < (int)m_CancellationTokenSource );
  }
  return isBelow;
}


bool __fastcall CondType__IsBattleLineReusltCount(int32_t groupId, int32_t val, bool isWin, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UserQuestMaster_o *MasterData_object; // x0
  __int64 v11; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UserQuestMaster_o *v13; // x22
  unsigned __int64 v14; // x25
  int32_t v15; // w24
  int32_t v16; // w21
  int32_t v17; // w23

  if ( (byte_4A5A0F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F7 = 1;
  }
  if ( val < 1 )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
  if ( !Instance->fields.m_CancellationTokenSource )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B8880C(Instance, v8);
  MasterData_object = (UserQuestMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  m_CancellationTokenSource = v9->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource < 1 )
    return 0;
  v13 = MasterData_object;
  v14 = 0LL;
  v15 = 0;
  if ( isWin )
    v16 = 128;
  else
    v16 = 256;
  do
  {
    if ( v14 >= (unsigned int)m_CancellationTokenSource )
      sub_1B88814(MasterData_object, v11);
    v17 = *((_DWORD *)&v9->fields._DispLog + v14);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
    if ( !v13 )
      goto LABEL_24;
    MasterData_object = (UserQuestMaster_o *)UserQuestMaster__getEntityFromId(v13, (int64_t)Instance, v17, 0LL);
    if ( MasterData_object )
    {
      MasterData_object = (UserQuestMaster_o *)UserQuestEntity__HasStatus(
                                                 (UserQuestEntity_o *)MasterData_object,
                                                 v16,
                                                 0LL);
      v15 += (unsigned __int8)MasterData_object & 1;
    }
    if ( v15 >= val )
      break;
    LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
    ++v14;
  }
  while ( (__int64)v14 < (int)m_CancellationTokenSource );
  return v15 >= val;
}


bool __fastcall CondType__IsBeforeArrivalData(int64_t time, const MethodInfo *method)
{
  if ( (byte_4A5A131 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A131 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) < time;
}


bool __fastcall CondType__IsBeforeQuestClearTime(int32_t questId, int64_t time, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5A132 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A132 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__CompareQuestClearTime(questId, time, 2, v3);
}


bool __fastcall CondType__IsBoardGameTokenGetNum(int32_t tokenId, int64_t value, const MethodInfo *method)
{
  if ( (byte_4A5A0F5 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0F5 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetBoardGameTokenGetNum(tokenId, (const MethodInfo *)value) >= value;
}


bool __fastcall CondType__IsBoardGameTokenGroupHaving(int32_t gameFlagVal, int32_t kindNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A0F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return UserEventBoardGameTokenMaster__IsHavingGroupToken(
           (UserEventBoardGameTokenMaster_o *)Instance,
           gameFlagVal,
           kindNum,
           0LL);
}


bool __fastcall CondType__IsBoardGameTokenHaving(int32_t tokenId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A0F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventBoardGameTokenMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserEventBoardGameTokenMaster__IsHavingToken((UserEventBoardGameTokenMaster_o *)Instance, tokenId, 0LL);
}


bool __fastcall CondType__IsBoxGachaGiftReplaced(int32_t gachaId, int32_t giftId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_int__o *ReplaceGiftIdList; // x0
  UserBoxGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A10A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A10A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v6);
  ReplaceGiftIdList = UserBoxGachaEntity__GetReplaceGiftIdList(entity, 0LL);
  return ReplaceGiftIdList
      && System_Collections_Generic_List_int___Contains(
           ReplaceGiftIdList,
           giftId,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall CondType__IsClearLatestQuestPhase(
        int32_t questId,
        int64_t phase,
        bool isEqual,
        const MethodInfo *method)
{
  int v5; // w20
  const MethodInfo *v7; // x4
  CondType_c *v8; // x0
  int32_t QuestClearPhaseCount; // w0

  v5 = phase;
  if ( (byte_4A5A12E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A12E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__get_UserId(0LL);
  v8 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  QuestClearPhaseCount = CondType__GetQuestClearPhaseCount((int64_t)v8, questId, -1, 1, v7);
  if ( isEqual )
    return QuestClearPhaseCount == v5;
  else
    return QuestClearPhaseCount != v5;
}


bool __fastcall CondType__IsCommandCodeGet(int32_t commandCodeId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_4A5A0EB & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0EB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommandCodeGet_37654016(UserId, commandCodeId, v3);
}


bool __fastcall CondType__IsCommandCodeGet_37654016(int64_t userId, int32_t commandCodeId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserCommandCodeCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0EC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0EC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A0F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, releaseId, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsCompleteExchangeServantMaxLimit(
        int32_t eventId,
        int32_t targetCount,
        const MethodInfo *method)
{
  if ( (byte_4A5A120 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A120 = 1;
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
  if ( (byte_4A5A124 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A124 = 1;
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
  if ( (byte_4A5A11E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A11E = 1;
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
  if ( (byte_4A5A122 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A122 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetExchangeServantHighestSkillLevel(eventId, *(const MethodInfo **)&targetSkillLevel) >= targetSkillLevel;
}


bool __fastcall CondType__IsCompleteHeelPortrait(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct System_Int32_array *heelPortraitIds; // x21
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A11C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A11C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
        if ( Master_object )
          return HeelPortraitMaster__GetCompleteNum((HeelPortraitMaster_o *)Master_object, eventId, 0LL) <= (signed int)heelPortraitIds->max_length;
      }
    }
LABEL_15:
    sub_1B8880C(Master_object, v4);
  }
  return 0;
}


bool __fastcall CondType__IsCompleteUserGameCommonValue(
        int32_t no,
        int32_t num,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v9; // x1
  int32_t value; // w8
  UserGameCommonEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A12B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserGameCommonMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A12B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGameCommonMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(UserId, v9);
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


bool __fastcall CondType__IsContainWeekdays(int32_t condId, int32_t condNum, const MethodInfo *method)
{
  int64_t Time_38478060; // x0
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8

  if ( (byte_4A5A110 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A110 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v8.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_38478060 = NetworkManager__getTime_38478060(v8, 0LL);
  dateData = NetworkManager__getDateTime_38478840(Time_38478060 - 3600 * condNum, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v9.fields._dateData = (uint64_t)&dateData;
  return ((unsigned int)condId >> (System_DateTime__get_DayOfWeek(v9, 0LL) + 1)) & 1;
}


bool __fastcall CondType__IsCostumeGet(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v6);
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

  if ( (byte_4A5A127 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A127 = 1;
  }
  maxHpSum = 0LL;
  memset(&i, 0, sizeof(i));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL
    || (EntityListFromDay = (System_Collections_Generic_List_object__o *)TotalEventRaidMaster__TryGetEntityListFromDay(
                                                                           (TotalEventRaidMaster_o *)Instance,
                                                                           day,
                                                                           &maxHpSum,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___),
        !EntityListFromDay) )
  {
    sub_1B8880C(Instance, v12);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    EntityListFromDay,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_TotalEventRaidEntity__GetEnumerator__);
  v14 = 0LL;
  for ( i = v24; ; v14 += (__int64)i.fields._current[1].monitor )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__MoveNext__);
    if ( !v15 )
      break;
    if ( !i.fields._current )
      sub_1B8880C(v15, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_TotalEventRaidEntity__Dispose__);
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


bool __fastcall CondType__IsDeadRaidGroup(
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

  if ( (byte_4A5A128 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A128 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                            (EventRaidMaster_o *)Instance,
                                            eventId,
                                            0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArrayFromEventId) )
  {
LABEL_46:
    sub_1B8880C(Instance, v12);
  }
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length < 1 )
  {
    v18 = 0LL;
    v17 = 0LL;
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
    v17 = 0LL;
    v18 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1B88814(Instance, v12);
      v19 = EventRaidEntityArrayFromEventId->m_Items[v16];
      if ( !v19 || !v15 )
        goto LABEL_46;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v15, &entity, eventId, v19->fields.day, 0LL);
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


bool __fastcall CondType__IsDownloadedMovie(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  QuestPhaseMaster_c *v9; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v11; // x19

  if ( (byte_4A5A0E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, phase, 0LL);
  if ( Entity )
  {
    v8 = Entity;
    v9 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v9 = QuestPhaseMaster_TypeInfo;
    }
    ScriptStr = QuestPhaseEntity__getScriptStr(v8, v9->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL);
    if ( ScriptStr )
    {
      v11 = ScriptStr;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)Instance[12].fields.saveDataMapList;
        if ( Instance )
          return MovieFileMerge__ExistCRCCheckedMovieFile((MovieFileMerge_o *)Instance, v11, 0LL);
      }
LABEL_13:
      sub_1B8880C(Instance, v6);
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
  bool IsQuestClear_37596684; // w8
  int64_t updatedAt; // x20
  int64_t Time_38478060; // x20
  System_DateTime_o v16; // 0:x0.8

  if ( (byte_4A5A12C & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A12C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (const MethodInfo *)NetworkManager__get_UserId(0LL);
  v6 = (int64_t)UserId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster(UserId);
  if ( !UserQuestMaster )
    sub_1B8880C(0LL, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, v6, questId, 0LL);
  if ( EntityFromId )
  {
    v11 = EntityFromId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, v10);
    LOBYTE(EntityFromId) = 0;
    if ( IsQuestClear_37596684 )
    {
      updatedAt = v11->fields.updatedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v16.fields._dateData = NetworkManager__getServerDateTime_38479168(updatedAt, 0LL).fields._dateData;
      Time_38478060 = NetworkManager__getTime_38478060(v16, 0LL);
      LOBYTE(EntityFromId) = NetworkManager__getServerTime(0LL) - Time_38478060 >= elapsedTime;
    }
  }
  return (char)EntityFromId;
}


bool __fastcall CondType__IsEnableQuestByMultipleDate(int32_t questDateRangeId, const MethodInfo *method)
{
  int64_t Time; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5A0E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestDateRangeMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestDateRangeMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
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
  if ( (byte_4A5A104 & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A104 = 1;
  }
  if ( !v4 )
    sub_1B8880C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B88814(v6, *(_QWORD *)&targetNum);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A5A09D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A09D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = EventEntity__IsOpen((EventEntity_o *)Entity, 1, 0LL);
  return (char)Entity;
}


bool __fastcall CondType__IsEventBetweenStartToEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5A0CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CE = 1;
  }
  entity = 0LL;
  if ( eventId < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_14:
    sub_1B8880C(Instance, v4);
  return (__int64)entity[5].monitor <= (__int64)Instance && (__int64)Instance <= (__int64)entity[6].klass;
}


bool __fastcall CondType__IsEventEnd(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5A0CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CD = 1;
  }
  entity = 0LL;
  if ( eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_13;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            &entity,
            eventId,
            (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return 0;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !entity )
LABEL_13:
      sub_1B8880C(Instance, v4);
    if ( (__int64)Instance < (__int64)entity[6].klass )
      return 0;
  }
  return 1;
}


bool __fastcall CondType__IsEventGroupPointRatioInTerm(int32_t eventTerm, int32_t rate, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_RACE_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5A0CF & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CF = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_RACE_DEVIDER = v5->static_fields->EVENT_RACE_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A5A0D0 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D0 = 1;
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
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  int32_t i; // w22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  int32_t klass_high; // w20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5A11B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    byte_4A5A11B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionGroupMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  EntityList = (System_Collections_Generic_List_object__o *)EventMissionGroupMaster__GetEntityList(
                                                              (EventMissionGroupMaster_o *)Master_object,
                                                              condId,
                                                              0LL);
  if ( EntityList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      EntityList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionGroupEntity__GetEnumerator__);
    for ( i = 0; ; i += CondType__IsMissionAchive(klass_high, v10) )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__MoveNext__);
      if ( !v9 )
        break;
      if ( !v13.fields._current )
        sub_1B8880C(v9, v10);
      klass_high = HIDWORD(v13.fields._current[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionGroupEntity__Dispose__);
    LOBYTE(EntityList) = i >= condNum;
  }
  return (char)EntityList;
}


bool __fastcall CondType__IsEventNormaPointClear(int32_t evGroupId, int64_t condVal, const MethodInfo *method)
{
  CondType_c *v5; // x0
  int32_t EVENT_POINT_DEVIDER; // w21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5A0C6 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C6 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A5A0C5 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventPointMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C5 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v5 = CondType_TypeInfo;
  }
  EVENT_POINT_DEVIDER = v5->static_fields->EVENT_POINT_DEVIDER;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventPointMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *RankDatas; // x21
  System_Predicate_int__o *v11; // x23
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  System_Int64_array *goalTime; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A0D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindIndex_int___);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__);
    sub_1B885B0(&CondType___c__DisplayClass115_0_TypeInfo);
    byte_4A5A0D5 = 1;
  }
  goalTime = 0LL;
  v7 = (CondType___c__DisplayClass115_0_o *)sub_1B887FC(CondType___c__DisplayClass115_0_TypeInfo);
  CondType___c__DisplayClass115_0___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.groupId = groupId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceResultMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
  }
  RankDatas = EventRaceResultMaster__GetRankDatas((EventRaceResultMaster_o *)Instance, eventId, termId, &goalTime, 0LL);
  v11 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CondType___c__DisplayClass115_0__IsEventRaceGoalScriptPlayed_b__0__,
    0LL);
  v13 = System_Array__FindIndex_int_(
          RankDatas,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_2F78F14 *)Method_System_Array_FindIndex_int___)
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


bool __fastcall CondType__IsEventRaceGroupTotalWin(int32_t eventId, int32_t groupId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventRaceMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D3 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventRaceMaster___)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  return UserEventRaceMaster__GetTotalMostProgressedGroupId((UserEventRaceMaster_o *)Instance, eventId, klass_high, 0LL) == groupId;
}


bool __fastcall CondType__IsEventRaceRankedScriptPlayed(
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  EventScriptEntity_o *RaceResultEntity; // x0
  const MethodInfo *v10; // x2
  int32_t flagId; // w20

  if ( (byte_4A5A0D6 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
    LOBYTE(RaceResultEntity) = CondType__IsEventScriptFlagChecked(eventId, flagId, v10);
  }
  return (char)RaceResultEntity;
}


bool __fastcall CondType__IsEventScriptFlagChecked(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Instance, v6);
  return UserEventEntity__getScriptFlag(entity, flagId, 0LL);
}


bool __fastcall CondType__IsEventStatus(int32_t eventId, int64_t flagId, const MethodInfo *method)
{
  char v3; // w19
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v8; // w21
  _BOOL4 v9; // w0
  EventStatusEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = flagId;
  if ( (byte_4A5A0E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E1 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v8 = *(_DWORD *)(Instance + 32);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = EventStatusMaster__TryGetEntity((EventStatusMaster_o *)Instance, &entity, eventId, v8, 0LL);
  if ( (Instance & 1) == 0 )
  {
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( !entity )
LABEL_14:
    sub_1B8880C(Instance, v6);
  return ((unsigned int)entity->fields.status >> v3) & 1;
}


bool __fastcall CondType__IsEventTutorialFlagOn(int32_t eventId, int32_t bitNum, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A113 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A113 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)Master_object, &entity, UserId, eventId, 0LL) )
    return 0;
  UserId = (int64_t)entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(UserId, v7);
  return UserEventEntity__getTutorialFlag(entity, bitNum, 0LL);
}


bool __fastcall CondType__IsEventTypeStartTimeToEndDate(
        int32_t eventType,
        int32_t overWriteTime,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x19
  int64_t v8; // x21
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v11; // w24
  int v12; // w25
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v17; // w23
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x26
  __int64 methodPtr_low; // x9
  int64_t v25; // x27
  int32_t Year; // w27
  int32_t Month; // w28
  int32_t Day; // w3
  uint64_t v29; // x26
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  int hour; // [xsp+Ch] [xbp-74h]
  System_DateTime_o dateTime; // [xsp+10h] [xbp-70h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-68h] BYREF
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8

  if ( (byte_4A5A109 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&EventEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A109 = 1;
  }
  dateTime.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_45;
  v7 = *(System_Collections_ObjectModel_Collection_T__o **)(Instance + 32);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getServerTime(0LL);
  if ( !v7 )
LABEL_45:
    sub_1B8880C(Instance, v6);
  v8 = Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v7,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  hour = overWriteTime / 10000;
  v11 = overWriteTime / 100 % 100;
  v12 = overWriteTime % 100;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_21:
      v21 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v23 = v22;
    if ( v22 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 304LL) < (unsigned int)methodPtr_low
        || *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * methodPtr_low - 8) != EventEntity_TypeInfo )
      {
        sub_1B88ACC(v22);
        goto LABEL_45;
      }
      if ( *(_DWORD *)(v22 + 24) == eventType )
      {
        v25 = *(_QWORD *)(v22 + 96);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        dateData = NetworkManager__getDateTime_38478840(v25, 0LL).fields._dateData;
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v38.fields._dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v38, 0LL);
        v39.fields._dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v39, 0LL);
        v40.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v40, 0LL);
        v41.fields._dateData = (uint64_t)&dateTime;
        System_DateTime___ctor_62385476(v41, Year, Month, Day, hour, v11, v12, 0LL);
        if ( *(_QWORD *)(v23 + 88) <= v8 )
        {
          v29 = dateTime.fields._dateData;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v42.fields._dateData = v29;
          if ( v8 <= NetworkManager__getTime_38478060(v42, 0LL) )
            goto LABEL_37;
        }
      }
    }
  }
  v17 = 0;
LABEL_37:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_41;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_41:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v17 & 1;
}


bool __fastcall CondType__IsExchangeSvtBuff(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *ExchangeSvtCampaign; // x0
  char i; // w23
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A126 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    byte_4A5A126 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_19;
  ExchangeSvtCampaign = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetExchangeSvtCampaign(
                                                                       (EventCampaignMaster_o *)Master_object,
                                                                       0LL);
  if ( !ExchangeSvtCampaign )
    return (char)ExchangeSvtCampaign;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    ExchangeSvtCampaign,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  for ( i = 0; ; i |= LODWORD(v10.fields._current[1].klass) == targetId )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v10.fields._current )
      sub_1B8880C(v7, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( (i & 1) == 0 )
  {
    LOBYTE(ExchangeSvtCampaign) = 0;
    return (char)ExchangeSvtCampaign;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
  if ( !Master_object )
LABEL_19:
    sub_1B8880C(Master_object, v4);
  LOBYTE(ExchangeSvtCampaign) = UserExchangeSvtMaster__GetExchangeSvtId(
                                  (UserExchangeSvtMaster_o *)Master_object,
                                  targetId,
                                  0LL) != 0;
  return (char)ExchangeSvtCampaign;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsItemGet(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  if ( (byte_4A5A076 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A076 = 1;
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t Value_39051884; // w0

  if ( (byte_4A5A111 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8238/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4A5A111 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  Value_39051884 = ConstantMaster__GetValue_39051884(
                     (ConstantMaster_o *)Master_object,
                     (System_String_o *)StringLiteral_8238/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                     0,
                     0LL);
  return Value_39051884 != 0 && Value_39051884 == targetId;
}


bool __fastcall CondType__IsMissionAchive(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0AA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0AA = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsMissionClear(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A8 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          condId,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
      sub_1B8880C(Instance, v4);
    }
  }
  return 0;
}


bool __fastcall CondType__IsMissionClearOnly(int32_t condId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsMissionCondDetail(int32_t condId, int32_t condVal, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventMissionCondDetailEntity_o *Entity; // x0

  if ( (byte_4A5A0A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_10:
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5A0ED & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0ED = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsCommandCodeGet(commandCodeId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v5);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0D1 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D1 = 1;
  }
  sameGroupQuestIds = 0LL;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v10);
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
  Il2CppObject *MasterData_object; // x21
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0D2 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaceMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/);
    byte_4A5A0D2 = 1;
  }
  sameGroupQuestIds = 0LL;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_10941/*"RACE_TARGET_GOAL_RANK"*/, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaceMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager__getTime(0LL);
    if ( !MasterData_object )
LABEL_14:
      sub_1B8880C(Instance, v11);
    return EventRaceMaster__GetGoaledTeamCount(
             (EventRaceMaster_o *)MasterData_object,
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
  Il2CppObject *MasterData_object; // x20
  __int64 v7; // x8

  if ( (byte_4A5A0C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)ShopMaster__GetEventEntitiyList((ShopMaster_o *)Instance, targetId, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v5 = Instance;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*(_DWORD *)(v5 + 24) )
        sub_1B88814(Instance, v4);
      v7 = *(_QWORD *)(v5 + 32);
      if ( v7 )
      {
        if ( MasterData_object )
        {
          Instance = (int64_t)UserShopMaster__GetEntityDefinitely(
                                (UserShopMaster_o *)MasterData_object,
                                Instance,
                                *(_DWORD *)(v7 + 20),
                                0LL);
          if ( Instance )
            return *(_DWORD *)(Instance + 28) > 0;
        }
      }
    }
LABEL_16:
    sub_1B8880C(Instance, v4);
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
  if ( (byte_4A5A0B5 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0B5 = 1;
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


bool __fastcall CondType__IsNotQuestGroupClear_37652616(int32_t targetId, int32_t condValue, const MethodInfo *method)
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
  if ( (byte_4A5A0B6 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0B6 = 1;
  }
  sameGroupQuestIds = 0LL;
  entity = 0LL;
  if ( condValue <= 1 )
    v4 = 1;
  else
    v4 = condValue;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&questId, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)DataMasterBase_object__object__object___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                &entity,
                                (Il2CppObject *)Instance,
                                (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_16:
    sub_1B8880C(Instance, v6);
  if ( HIDWORD(entity[1].klass) != 26 )
    return 0;
  v9 = questId;
  monitor = (int32_t)entity[1].monitor;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNotQuestGoupClearCount(v9, monitor, &sameGroupQuestIds, 1, v8) >= v4;
}


bool __fastcall CondType__IsNotServantGet(int32_t servantId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5A0C2 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C2 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsServantGet(servantId, method) )
  {
    return 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v5);
    }
    return !UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
  }
}


bool __fastcall CondType__IsNotShopPurchase(System_Int32_array *values, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  bool v6; // w22
  UserShopMaster_o *v7; // x20
  unsigned __int64 v8; // x23
  int32_t v9; // w21

  if ( (byte_4A5A0C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_15;
  v5 = *(_QWORD *)&values->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = (UserShopMaster_o *)Instance;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1B88814(Instance, v4);
      v9 = values->m_Items[v8 + 1];
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v7 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v7, Instance, v9, 0LL);
      if ( !Instance )
        break;
      if ( *(_DWORD *)(Instance + 28) )
      {
        LODWORD(v5) = values->max_length;
        v6 = (__int64)++v8 < (int)v5;
        if ( (__int64)v8 < (int)v5 )
          continue;
      }
      return v6;
    }
LABEL_15:
    sub_1B8880C(Instance, v4);
  }
  return v6;
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
  char IsQuestClear; // w0
  int32_t v12; // w2
  bool v13; // w2
  int32_t v14; // w0
  int32_t v15; // w1
  const MethodInfo *v16; // x5
  int64_t UserId; // x21
  bool v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  CondType_c *v21; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  int64_t Instance; // x0
  __int64 v24; // x1
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
  const MethodInfo *v47; // x5
  int64_t v48; // x21
  const MethodInfo *v49; // x5
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
  Il2CppObject *v62; // x21
  Il2CppObject *v63; // x21
  __int64 v64; // x8
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
  System_Int32_array *sameGroupQuestIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A06D & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A06D = 1;
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
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClear(UserId, targetId, condValue, 1, isCollection, v16);
      return IsQuestClear & 1;
    case 2:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 6:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLevel_37594320(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 7:
    case 104:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 1;
      goto LABEL_321;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 9:
    case 98:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v13 = 1;
      v14 = targetId;
      v15 = condValue;
      goto LABEL_305;
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
      goto LABEL_73;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v19 = targetId;
      v20 = condValue;
      v18 = 0;
LABEL_73:
      IsQuestClear = CondType__checkCondTypeRaidAlive(v19, v20, v18, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 30:
      v21 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v21);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !UserQuestMaster )
        goto LABEL_680;
      ChallengeCountsFromId = UserQuestMaster__getChallengeCountsFromId(UserQuestMaster, Instance, targetId, 0LL);
      goto LABEL_517;
    case 32:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v26 = 1;
      v27 = targetId;
      v28 = condValue;
      goto LABEL_173;
    case 35:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v29 = 1;
      v30 = targetId;
      goto LABEL_628;
    case 36:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v31 = 1;
      v32 = targetId;
      v33 = condValue;
      goto LABEL_216;
    case 37:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsPurchaseShop(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 38:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsNotServantGet(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 39:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsNotEventShopPurchase(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 40:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 41:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsServantHaving(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 42:
      v35 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v36 = CondType__GetUserQuestMaster((const MethodInfo *)v35);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v36 )
        goto LABEL_680;
      ClearCountsFromId = UserQuestMaster__getChallengeCountsFromId(v36, Instance, targetId, 0LL);
      goto LABEL_122;
    case 43:
      v38 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 = CondType__GetUserQuestMaster((const MethodInfo *)v38);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v39 )
        goto LABEL_680;
      v40 = UserQuestMaster__getChallengeCountsFromId(v39, Instance, targetId, 0LL);
      goto LABEL_129;
    case 44:
      v41 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v42 = CondType__GetUserQuestMaster((const MethodInfo *)v41);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v42 )
        goto LABEL_680;
      ClearCountsFromId = UserQuestMaster__getClearCountsFromId(v42, Instance, targetId, 0LL);
LABEL_122:
      v43 = ClearCountsFromId == (_DWORD)condValue;
      goto LABEL_677;
    case 45:
      v44 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v45 = CondType__GetUserQuestMaster((const MethodInfo *)v44);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v45 )
        goto LABEL_680;
      v40 = UserQuestMaster__getClearCountsFromId(v45, Instance, targetId, 0LL);
LABEL_129:
      v46 = v40 <= (int)condValue;
      goto LABEL_263;
    case 46:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v48 = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestPhaseClear(v48, targetId, condValue, -1, 0, v47);
      return IsQuestClear & 1;
    case 47:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v50 = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestPhaseClear(v50, targetId, condValue, -1, 0, v49);
      goto LABEL_667;
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
      goto LABEL_667;
    case 53:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsItemGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
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
      IsQuestClear = CondType__IsQuestClear_37596684(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 58:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v27 = targetId;
      v28 = condValue;
      v26 = 0;
LABEL_173:
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
      EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(targetId, 0LL);
      goto LABEL_256;
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
      IsPurchaseShop = CondType__IsServantGroup(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 73:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestResettable(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 74:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v32 = targetId;
      v33 = condValue;
      v31 = 0;
LABEL_216:
      IsPurchaseShop = CondType__IsQuestClear_37596684(v32, v33, v31, (const MethodInfo *)isCollection);
      goto LABEL_667;
    case 75:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v52 = targetId;
      v53 = condValue;
      v54 = 0;
      goto LABEL_583;
    case 76:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 77:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsMissionAchive(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 78:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCostumeGet(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 79:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsReleaseCostume(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v56 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v56 )
        goto LABEL_680;
      Point = UserEventPointMaster__GetPoint((UserEventPointMaster_o *)v56, Instance, targetId / 100, targetId, 0LL);
      goto LABEL_262;
    case 85:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v58 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v58 )
        goto LABEL_680;
      EventPointNoGroup = UserEventPointMaster__GetEventPointTotal(
                            (UserEventPointMaster_o *)v58,
                            Instance,
                            targetId,
                            -1,
                            0LL);
LABEL_256:
      v59 = EventPointNoGroup < condValue;
      goto LABEL_518;
    case 86:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v60 )
        goto LABEL_680;
      Point = UserEventPointMaster__GetEventPointTotal((UserEventPointMaster_o *)v60, Instance, targetId, -1, 0LL);
LABEL_262:
      v46 = Point <= condValue;
LABEL_263:
      IsQuestClear = v46;
      return IsQuestClear & 1;
    case 87:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v61 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v61 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v61, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v59 = *(int *)(Instance + 28) < condValue;
      goto LABEL_518;
    case 88:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v62 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v62 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v62, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      IsQuestClear = *(int *)(Instance + 28) <= condValue;
      return IsQuestClear & 1;
    case 89:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v63 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v63 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v63, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v64 = *(int *)(Instance + 32);
      goto LABEL_676;
    case 90:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 91:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
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
      goto LABEL_667;
    case 97:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEnableQuestByMultipleDate(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 99:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v14 = targetId;
      v15 = condValue;
      v13 = 0;
LABEL_305:
      IsQuestClear = CondType__IsServantFriendship(v14, v15, v13, (const MethodInfo *)isCollection);
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
      goto LABEL_667;
    case 103:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsServantLimit_37594476(targetId, condValue, 0, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 105:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v12 = 2;
LABEL_321:
      IsQuestClear = CondType__IsServantLimit_37594476(targetId, condValue, v12, (const MethodInfo *)isCollection);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v66 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v66 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v66, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      v64 = *(int *)(Instance + 28);
      goto LABEL_676;
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
      goto LABEL_667;
    case 121:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 122:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsUserQuestStatus(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 123:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_680;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v67 )
        goto LABEL_680;
      Instance = (int64_t)UserEventMaster__GetEntityDefinitely((UserEventMaster_o *)v67, Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_680;
      IsQuestClear = *(int *)(Instance + 28) != condValue;
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
      goto LABEL_376;
    case 129:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v69 = targetId;
      v70 = condValue;
      v68 = 0;
LABEL_376:
      IsQuestClear = CondType__IsBattleLineReusltCount(v69, v70, v68, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 130:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v71 = 1;
      v72 = targetId;
      v73 = condValue;
      goto LABEL_383;
    case 131:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v72 = targetId;
      v73 = condValue;
      v71 = 0;
LABEL_383:
      v74 = 0;
      goto LABEL_390;
    case 132:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v71 = 1;
      v74 = 1;
      v72 = targetId;
      v73 = condValue;
      goto LABEL_390;
    case 133:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v74 = 1;
      v72 = targetId;
      v73 = condValue;
      v71 = 0;
LABEL_390:
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
      goto LABEL_397;
    case 135:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v76 = targetId;
      v77 = condValue;
      v75 = 0;
LABEL_397:
      IsQuestClear = CondType__IsBattleGroupReusltCount(v76, v77, v75, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 136:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantLimitClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
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
      goto LABEL_517;
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
      goto LABEL_667;
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
      goto LABEL_667;
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
      goto LABEL_517;
    case 162:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
      if ( !Instance )
        goto LABEL_680;
      ChallengeCountsFromId = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                (UserEventRandomMissionMaster_o *)Instance,
                                targetId,
                                0LL);
      goto LABEL_517;
    case 166:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsContainWeekdays(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 167:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
      if ( !Instance )
        goto LABEL_680;
      ChallengeCountsFromId = UserEventFortificationMaster__GetFortificationRewardNum(
                                (UserEventFortificationMaster_o *)Instance,
                                targetId,
                                0LL);
LABEL_517:
      v59 = ChallengeCountsFromId < (int)condValue;
      goto LABEL_518;
    case 168:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 169:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsQuestClearBeforeEventStart(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 170:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 171:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventTutorialFlagOn(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 172:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      return IsQuestClear & 1;
    case 173:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsSuperBossValueEqual(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 174:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountAllServantTargetSkillLvNum(
                                targetId,
                                condValue,
                                (const MethodInfo *)condValue);
      goto LABEL_517;
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
      goto LABEL_517;
    case 179:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsWarClear(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 180:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantTargetSkillLvClassNum(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 181:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 182:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalSkillLevelUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 183:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalLimitUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 184:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountServantClassTotalFriendShipUp(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
    case 185:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      return IsQuestClear & 1;
    case 186:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsCompleteHeelPortrait(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_667;
    case 187:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ChallengeCountsFromId = CondType__CountClassBoardSquareReleased(targetId, *(const MethodInfo **)&targetId);
      goto LABEL_517;
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
      goto LABEL_542;
    case 194:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
LABEL_542:
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      v83 = 0;
      goto LABEL_564;
    case 195:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
      goto LABEL_549;
    case 196:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
LABEL_549:
      v85 = 1;
      v86 = targetId;
      v87 = condValue;
      v88 = 0;
      goto LABEL_579;
    case 197:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 1;
      goto LABEL_556;
    case 198:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
LABEL_556:
      v83 = 1;
      v80 = 1;
      v81 = targetId;
      v82 = condValue;
      goto LABEL_564;
    case 199:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 2;
      goto LABEL_563;
    case 200:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v79 = 1;
LABEL_563:
      v83 = 1;
      v81 = targetId;
      v82 = condValue;
      v80 = 0;
LABEL_564:
      IsQuestClear = CondType__IsDeadRaidDay(v81, v82, v79, v83, v80, method);
      return IsQuestClear & 1;
    case 201:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
      goto LABEL_571;
    case 202:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
LABEL_571:
      v88 = 1;
      v85 = 1;
      v86 = targetId;
      v87 = condValue;
      goto LABEL_579;
    case 203:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 2;
      goto LABEL_578;
    case 204:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v84 = 1;
LABEL_578:
      v88 = 1;
      v86 = targetId;
      v87 = condValue;
      v85 = 0;
LABEL_579:
      IsQuestClear = CondType__IsDeadRaidGroup(v86, v87, v84, v88, v85, method);
      return IsQuestClear & 1;
    case 205:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v54 = 1;
      v52 = targetId;
      v53 = condValue;
LABEL_583:
      IsPurchaseShop = CondType__IsQuestGroupClear(0, v52, v53, v54, (const MethodInfo *)battleCondArgs);
      goto LABEL_667;
    case 206:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v89 = 1;
      goto LABEL_590;
    case 207:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v89 = 2;
LABEL_590:
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
        goto LABEL_663;
      v91 = battleCondArgs;
      v92 = targetId;
      v93 = condValue;
      v94 = 0;
      goto LABEL_598;
    case 210:
      if ( !battleCondArgs )
        goto LABEL_663;
      v94 = 1;
      v91 = battleCondArgs;
      v92 = targetId;
      v93 = condValue;
LABEL_598:
      IsQuestClear = BattleVoicePlayCondArgs__IsPlayQuestPhase(v91, v92, v93, v94, 0LL);
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
      goto LABEL_608;
    case 213:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v95 = 2;
LABEL_608:
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
      IsQuestClear = CondType__IsStartingMember(targetId, condValue, 0LL, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 217:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v96 = 1;
      v97 = targetId;
      v98 = condValue;
      goto LABEL_624;
    case 218:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v97 = targetId;
      v98 = condValue;
      v96 = 0;
LABEL_624:
      IsQuestClear = CondType__IsClearLatestQuestPhase(v97, v98, v96, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 219:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v30 = targetId;
      v29 = condValue;
LABEL_628:
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
      v99 = 2;
      goto LABEL_638;
    case 222:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v99 = 1;
LABEL_638:
      IsQuestClear = CondType__IsAchieveLimitedMission(targetId, condValue, v99, (const MethodInfo *)isCollection);
      return IsQuestClear & 1;
    case 223:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsVoicePlayFlag(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 228:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
      v59 = *(_DWORD *)(Instance + 172) < (int)condValue;
LABEL_518:
      IsQuestClear = !v59;
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
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsPurchaseShop = CondType__IsEventScriptFlagChecked(targetId, condValue, (const MethodInfo *)condValue);
      goto LABEL_667;
    case 238:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !Master_object
        || (Instance = (int64_t)UserEventMaster__GetEntityDefinitely(
                                  (UserEventMaster_o *)Master_object,
                                  Instance,
                                  targetId,
                                  0LL)) == 0 )
      {
LABEL_680:
        sub_1B8880C(Instance, v24);
      }
      v64 = *(int *)(Instance + 48);
LABEL_676:
      v43 = v64 == condValue;
LABEL_677:
      IsQuestClear = v43;
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
  bool IsQuestClear_37596684; // w0
  const MethodInfo *v13; // x5
  int64_t v14; // x23
  const MethodInfo *v15; // x5
  int64_t UserId; // x23

  if ( (byte_4A5A06E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A06E = 1;
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
      IsQuestClear_37596684 = CondType__IsQuestClear_37596684(
                                targetId,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                *(const MethodInfo **)&beforeClearQuestId);
      return !IsQuestClear_37596684;
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestClear_37596684(
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
      UserId = NetworkManager__get_UserId(0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestClear_37596684 = CondType__IsQuestPhaseClear(
                                UserId,
                                targetId,
                                condValue,
                                beforeClearQuestId,
                                isCheckResetFlag,
                                v15);
      return !IsQuestClear_37596684;
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v14 = NetworkManager__get_UserId(0LL);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsQuestPhaseClear(v14, targetId, condValue, beforeClearQuestId, isCheckResetFlag, v13);
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

  if ( (byte_4A5A079 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A079 = 1;
  }
  if ( condType <= 38 )
  {
    v7 = 1;
    switch ( condType )
    {
      case 0:
        return v7;
      case 1:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
          || (Instance = DataMasterBase_object__object__long___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           userSvtId,
                           (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
        {
          sub_1B8880C(Instance, v16);
        }
        v17 = Instance[4];
        *(Il2CppObject *)&v21.fields.currentCryptoKey = Instance[3];
        *(Il2CppObject *)&v21.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL);
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
        result = CondType__IsServantGet_37633804(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 9:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantFriendship_37633960(userSvtId, condValue, (const MethodInfo *)userSvtId);
        break;
      case 10:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        result = CondType__IsServantGroup_37634496(userSvtId, condValue, (const MethodInfo *)userSvtId);
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


bool __fastcall CondType__IsOpenRaidGroupNum(int32_t eventId, int32_t num, int32_t checkType, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  EventRaidMaster_o *v8; // x25
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x23
  Il2CppObject *Master_object; // x22
  Il2CppObject *v11; // x19
  int max_length; // w8
  CondType_c **v13; // x29
  int32_t v14; // w19
  int64_t v15; // x26
  unsigned int v16; // w20
  int32_t v17; // w21
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x27
  EventRaidMaster_o *v20; // x22
  __int64 v21; // x8
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  int64_t v24; // x27
  __int64 v25; // x25
  int v26; // w8
  int32_t v27; // w28
  int32_t v28; // w28
  int32_t ValueInt; // w0
  const MethodInfo *v30; // x4
  CondType_c *v31; // x8
  CondType_c **v32; // x24
  int32_t v33; // w29
  int32_t v35; // [xsp+8h] [xbp-88h]
  int32_t v36; // [xsp+Ch] [xbp-84h]
  QuestReleaseMaster_o *v37; // [xsp+10h] [xbp-80h]
  Il2CppObject *v38; // [xsp+18h] [xbp-78h]
  TotalEventRaidEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5A129 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A129 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_48;
  v35 = num;
  v36 = checkType;
  v8 = (EventRaidMaster_o *)Instance;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      (EventRaidMaster_o *)Instance,
                                      eventId,
                                      0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_48:
    sub_1B8880C(Instance, v7);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  if ( max_length >= 1 )
  {
    v37 = (QuestReleaseMaster_o *)v11;
    v13 = &CondType_TypeInfo;
    v14 = eventId;
    v15 = Instance;
    v16 = 0;
    v17 = 0;
    v38 = Master_object;
    while ( 1 )
    {
      if ( v16 >= max_length )
        goto LABEL_49;
      v18 = &EventRaidEntityArrayFromEventId->obj.klass + (int)v16;
      v19 = v18[4];
      if ( !v19 )
        goto LABEL_48;
      Instance = EventRaidEntity__IsOpenTime((EventRaidEntity_o *)v18[4], v15, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !Master_object )
          goto LABEL_48;
        Instance = TotalEventRaidMaster__TryGetEntity(
                     (TotalEventRaidMaster_o *)Master_object,
                     &entity,
                     v14,
                     HIDWORD(v19->_1.name),
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v20 = v8;
          Instance = (int64_t)EventRaidMaster__GetRaidAliveQuestIds(v8, v14, HIDWORD(v19->_1.name), 0LL);
          if ( !Instance )
            goto LABEL_48;
          v21 = *(_QWORD *)(Instance + 24);
          if ( v21 )
          {
            if ( !(_DWORD)v21 )
              goto LABEL_49;
            if ( !v37 )
              goto LABEL_48;
            Instance = (int64_t)QuestReleaseMaster__getListByQuestID(v37, *(_DWORD *)(Instance + 32), 0LL);
            if ( !Instance )
              goto LABEL_48;
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
                    goto LABEL_48;
                  v26 = *(_DWORD *)(Instance + 20);
                  if ( v26 == 32 )
                  {
                    v28 = *(_DWORD *)(Instance + 24);
                    ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
                    v31 = *v13;
                    v32 = v13;
                    v33 = ValueInt;
                    if ( !v31->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(v31);
                    Instance = CondType__IsQuestGroupClear(0, v28, v33, 0, v30);
                    v13 = v32;
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  else if ( v26 == 1 )
                  {
                    v27 = *(_DWORD *)(Instance + 24);
                    if ( !(*v13)->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(*v13);
                    Instance = CondType__IsQuestClear_37596684(v27, -1, 0, v22);
                    if ( (Instance & 1) == 0 )
                      goto LABEL_38;
                  }
                  LODWORD(v23) = *(_DWORD *)(v24 + 24);
                  if ( (int)++v25 >= (int)v23 )
                    goto LABEL_37;
                }
LABEL_49:
                sub_1B88814(Instance, v7);
              }
            }
          }
LABEL_37:
          ++v17;
LABEL_38:
          v8 = v20;
          v14 = eventId;
          Master_object = v38;
        }
      }
      max_length = EventRaidEntityArrayFromEventId->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_42;
    }
  }
  v17 = 0;
LABEL_42:
  if ( v36 == 2 )
    return v17 <= v35;
  if ( v36 == 1 )
    return v17 >= v35;
  return v17 == v35;
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
  const MethodInfo *v11; // x5
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
  __int64 v22; // x24
  int32_t NegativeSideCond; // w0
  const MethodInfo *v24; // x5
  bool v25; // w0
  CondType_CountDelegate_o *v26; // x0
  __int64 *v27; // x8
  CondType_CountDelegate_o *v28; // x21
  const MethodInfo *v29; // x2
  int32_t ClearCountsFromIds; // w0
  bool v31; // cc
  int32_t v32; // w23
  __int64 v33; // x24
  __int64 v34; // x25
  int32_t v35; // w22
  int32_t v36; // w19
  System_Func_int__bool__o *v37; // x0
  __int64 *v38; // x8
  System_Func_int__int__o *v39; // x21
  const MethodInfo *v40; // x3
  int32_t v41; // w20
  System_Func_TSource__bool__o *v42; // x21
  CondType_c *v43; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  CondType_c *v45; // x0
  UserQuestMaster_o *v46; // x21
  CondType_c *v47; // x0
  UserQuestMaster_o *v48; // x21
  int32_t ChallengeCountsFromIds; // w0
  CondType_c *v50; // x0
  UserQuestMaster_o *v51; // x21
  int32_t v52; // w0
  CondType_c *v53; // x0
  UserQuestMaster_o *v54; // x21
  CondType_c *v55; // x0
  UserQuestMaster_o *v56; // x21

  if ( (byte_4A5A077 & 1) == 0 )
  {
    sub_1B885B0(&Method_CondType_CountExchangeServantMaxLimit__);
    sub_1B885B0(&Method_CondType_CountServantClassTotalFriendShipUp__);
    sub_1B885B0(&Method_CondType_CountServantClassTotalLevelUp__);
    sub_1B885B0(&Method_CondType_CountServantClassTotalLimitUp__);
    sub_1B885B0(&Method_CondType_CountServantClassTotalSkillLevelUp__);
    sub_1B885B0(&Method_CondType_CountServantFriendShipClassNum__);
    sub_1B885B0(&Method_CondType_CountServantLevelClassNum__);
    sub_1B885B0(&Method_CondType_CountServantLevelIdNum__);
    sub_1B885B0(&Method_CondType_CountServantTargetSkillLvClassNum__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&CondType_CountDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int____76126832);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__);
    sub_1B885B0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__);
    sub_1B885B0(&Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__);
    sub_1B885B0(&CondType___c__DisplayClass19_0_TypeInfo);
    byte_4A5A077 = 1;
  }
  v7 = (CondType___c__DisplayClass19_0_o *)sub_1B887FC(CondType___c__DisplayClass19_0_TypeInfo);
  CondType___c__DisplayClass19_0___ctor(v7, 0LL);
  if ( !v7 )
LABEL_120:
    sub_1B8880C(IsOpen, v9);
  v7->fields.targetNum = targetNum;
  if ( !targetIds )
    return 0;
  v12 = *(_QWORD *)&targetIds->max_length;
  if ( !v12 )
    return 0;
  if ( (_DWORD)v12 == 1 )
  {
    v13 = targetIds->m_Items[1];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v14 = targetNum;
    v15 = condType;
    v16 = v13;
    return CondType__IsOpen(v15, v16, v14, 0, 0LL, v11);
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
        if ( (int)v12 < 1 )
        {
          v32 = 0;
        }
        else
        {
          if ( !(unsigned int)*(_QWORD *)&targetIds->max_length )
            goto LABEL_40;
          v32 = 0;
          v33 = 0LL;
          v34 = (unsigned int)*(_QWORD *)&targetIds->max_length - 1LL;
          while ( 1 )
          {
            v35 = targetIds->m_Items[v33 + 1];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            IsOpen = CondType__IsOpen(condType, v35, 0LL, 0, 0LL, v11);
            v32 += IsOpen & 1;
            if ( v34 == v33 )
              break;
            if ( ++v33 >= (unsigned __int64)targetIds->max_length )
              goto LABEL_40;
          }
          targetNum = v7->fields.targetNum;
        }
        v31 = v32 < targetNum;
        return !v31;
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
        v43 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v43);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
        if ( (int)v12 < 1 )
        {
          v21 = 0;
        }
        else
        {
          v20 = 0LL;
          v21 = 0;
          v22 = (unsigned int)*(_QWORD *)&targetIds->max_length;
          do
          {
            IsOpen = (int64_t)CondType_TypeInfo;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( v20 >= targetIds->max_length )
              goto LABEL_40;
            NegativeSideCond = CondType__GetNegativeSideCond(condType, v9);
            v25 = CondType__IsOpen(NegativeSideCond, targetIds->m_Items[++v20], 0LL, 0, 0LL, v24);
            v21 += v25;
          }
          while ( v22 != v20 );
          targetNum = v7->fields.targetNum;
        }
        result = v21 < targetNum;
        break;
      case 30:
        v45 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v46 = CondType__GetUserQuestMaster((const MethodInfo *)v45);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v46 )
          goto LABEL_120;
        ClearCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v46, IsOpen, targetIds, 0LL);
        goto LABEL_30;
      case 42:
        v47 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v48 = CondType__GetUserQuestMaster((const MethodInfo *)v47);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v48 )
          goto LABEL_120;
        ChallengeCountsFromIds = UserQuestMaster__getChallengeCountsFromIds(v48, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v7->fields.targetNum;
      case 43:
        v50 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v51 = CondType__GetUserQuestMaster((const MethodInfo *)v50);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v51 )
          goto LABEL_120;
        v52 = UserQuestMaster__getChallengeCountsFromIds(v51, IsOpen, targetIds, 0LL);
        return v52 <= v7->fields.targetNum;
      case 44:
        v53 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v54 = CondType__GetUserQuestMaster((const MethodInfo *)v53);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v54 )
          goto LABEL_120;
        ChallengeCountsFromIds = UserQuestMaster__getClearCountsFromIds(v54, IsOpen, targetIds, 0LL);
        return ChallengeCountsFromIds == v7->fields.targetNum;
      case 45:
        v55 = CondType_TypeInfo;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v56 = CondType__GetUserQuestMaster((const MethodInfo *)v55);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        IsOpen = NetworkManager__get_UserId(0LL);
        if ( !v56 )
          goto LABEL_120;
        v52 = UserQuestMaster__getClearCountsFromIds(v56, IsOpen, targetIds, 0LL);
        return v52 <= v7->fields.targetNum;
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
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantFriendShipClassNum__;
          goto LABEL_73;
        case 179:
        case 185:
        case 186:
        case 187:
          goto LABEL_62;
        case 180:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantTargetSkillLvClassNum__;
          goto LABEL_73;
        case 181:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalSkillLevelUp__;
          goto LABEL_73;
        case 182:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLimitUp__;
          goto LABEL_73;
        case 183:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalLevelUp__;
          goto LABEL_73;
        case 184:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountServantClassTotalFriendShipUp__;
          goto LABEL_73;
        case 188:
          v37 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          v38 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__0__;
          goto LABEL_78;
        case 189:
          v18 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          v19 = &Method_CondType_CountExchangeServantMaxLimit__;
LABEL_73:
          v39 = v18;
          System_Func_int__int____ctor(v18, 0LL, *v19, 0LL);
          v41 = v7->fields.targetNum;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          return CondType__IsTargetIdsCommonCount(v39, targetIds, v41, v40);
        case 190:
          v37 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          v38 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__1__;
          goto LABEL_78;
        case 191:
          v37 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          v38 = &Method_CondType___c__DisplayClass19_0__IsOpenWithSumOfProgressCount_b__2__;
LABEL_78:
          v42 = (System_Func_TSource__bool__o *)v37;
          System_Func_int__bool____ctor(v37, (Il2CppObject *)v7, *v38, 0LL);
          return System_Linq_Enumerable__Any_int__48819840(
                   (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                   v42,
                   (const MethodInfo_2E8EE80 *)Method_System_Linq_Enumerable_Any_int____76126832);
        default:
          if ( condType != 149 )
          {
            if ( condType == 158 )
            {
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              ClearCountsFromIds = CondType__CountRandomMissionClearNum(targetIds, v9);
LABEL_30:
              v31 = ClearCountsFromIds < v7->fields.targetNum;
              return !v31;
            }
            goto LABEL_62;
          }
          v26 = (CondType_CountDelegate_o *)sub_1B887FC(CondType_CountDelegate_TypeInfo);
          v27 = &Method_CondType_CountServantLevelIdNum__;
          break;
      }
LABEL_27:
      v28 = v26;
      CondType_CountDelegate___ctor(v26, 0LL, *v27, 0LL);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ClearCountsFromIds = CondType__CountTargetParamMatchFunction(targetIds, v28, v29);
      goto LABEL_30;
    }
    if ( condType != 141 )
    {
      if ( condType == 148 )
      {
        v26 = (CondType_CountDelegate_o *)sub_1B887FC(CondType_CountDelegate_TypeInfo);
        v27 = &Method_CondType_CountServantLevelClassNum__;
        goto LABEL_27;
      }
LABEL_62:
      if ( (_DWORD)v12 )
      {
        v36 = targetIds->m_Items[1];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v15 = condType;
        v16 = v36;
        v14 = 0LL;
        return CondType__IsOpen(v15, v16, v14, 0, 0LL, v11);
      }
LABEL_40:
      sub_1B88814(IsOpen, v9);
    }
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsEquipRarityLevelNum(targetIds, targetNum, v10);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsOpen_37630928(
        int32_t condType,
        System_Int32_array *condValues,
        int32_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4A5A078 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A078 = 1;
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
bool __fastcall CondType__IsOpen_37635152(
        int32_t condType,
        int32_t condValue,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  bool result; // w0

  if ( (byte_4A5A07A & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A07A = 1;
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
      result = CondType__IsServantLevel_37635776(userId, svtId, condValue, *(const MethodInfo **)&svtId);
      break;
    case 7:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantLimit_37635936(userId, svtId, condValue, 1, method);
      break;
    case 8:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGet_37633804(userId, condValue, (const MethodInfo *)userId);
      break;
    case 9:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantFriendship_37636176(userId, svtId, condValue, 1, method);
      break;
    case 10:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsServantGroup_37634496(userId, condValue, (const MethodInfo *)userId);
      break;
    case 11:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsEvent(condValue, *(const MethodInfo **)&condValue);
      break;
    case 14:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseQpShop_37636480(userId, condValue, (const MethodInfo *)userId);
      break;
    case 15:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      result = CondType__IsPurchaseStoneShop_37636648(userId, condValue, (const MethodInfo *)userId);
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
  if ( (byte_4A5A0EA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22146/*"notMeets"*/);
    byte_4A5A0EA = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_22146/*"notMeets"*/, v2, 0LL);
  return UnityEngine_PlayerPrefs__GetInt(v3, 0, 0LL) == 1;
}


bool __fastcall CondType__IsPlayerGenderType(int32_t genderType, const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_genderType; // x8
  TerminalPramsManager_c *v6; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0DF & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A0DF = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    if ( !entity )
      sub_1B8880C(SelfUserGame, v4);
    p_genderType = &entity->fields.genderType;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588E0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588E0 = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A09F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A09F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseQpShop_37636480(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A0A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return ShopEntity__IsCondType_39811968((ShopEntity_o *)Instance, userId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsPurchaseShop(int32_t targetId, int32_t condValue, const MethodInfo *method)
{
  int v3; // w20

  v3 = condValue;
  if ( (byte_4A5A0A4 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0A4 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( v3 <= 1 )
    v3 = 1;
  return CondType__GetPurchaseShopCount(targetId, *(const MethodInfo **)&condValue) >= v3;
}


bool __fastcall CondType__IsPurchaseStoneShop(int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A0A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return ShopEntity__IsCondType((ShopEntity_o *)Instance, 0LL);
}


bool __fastcall CondType__IsPurchaseStoneShop_37636648(int64_t userId, int32_t condId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A0A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     condId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return ShopEntity__IsCondType_39811968((ShopEntity_o *)Instance, userId, 0LL);
}


bool __fastcall CondType__IsPurchaseValidShop(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  __int64 v7; // x8
  int v8; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  int v10; // w23
  ShopGroupEntity_o *v11; // x8
  ShopEntity_o *v12; // x21

  if ( (byte_4A5A0DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, targetId, 0LL);
  if ( TargetEntityList )
  {
    v6 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
      v7 = *(_QWORD *)&v6->max_length;
      v8 = v7 - 1;
      if ( (int)v7 >= 1 )
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
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v12 = (ShopEntity_o *)Instance;
            if ( ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL) && !ShopEntity__IsSoldOut(v12, 0LL) )
              goto LABEL_19;
            Instance = (Il2CppObject *)ShopEntity__IsClosed(v12, 0LL, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_19;
          }
          if ( v8 == v10 )
            goto LABEL_20;
          if ( ++v10 >= v6->max_length )
            sub_1B88814(Instance, v4);
        }
LABEL_22:
        sub_1B8880C(Instance, v4);
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
  bool v6; // w21
  bool v7; // w22
  TerminalPramsManager_c *v8; // x0
  bool v9; // w21
  BalanceConfig_c *v10; // x8
  bool v11; // w21
  int32_t WarId_k__BackingField; // w24
  TerminalPramsManager_c *v13; // x0
  char v14; // w8
  char v15; // w20

  if ( (byte_4A5A0C7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A0C7 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v5 = AvalonSceneManager__checkNowScene(Instance, 10, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v6 = AvalonSceneManager__checkNowScene(Instance, 22, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v7 = AvalonSceneManager__checkNowScene(Instance, 72, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  v9 = v5 || v6;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = BalanceConfig_TypeInfo;
  v11 = v9 || v7;
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( WarId_k__BackingField == v10->static_fields->OrdealCallWarId )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5807C )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5807C = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = !v13->static_fields->_IsPhaseClear_k__BackingField;
  }
  else
  {
    v14 = 1;
  }
  v15 = !v11 & v14;
  if ( (v15 & 1) != 0 )
  {
    Instance = (AvalonSceneManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    Instance = (AvalonSceneManager_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0LL);
    if ( (v15 & 1 & (Instance != 0LL)) != 0 )
    {
      if ( Instance )
        return LODWORD(Instance->fields.targetRoot) == 1;
LABEL_30:
      sub_1B8880C(Instance, v4);
    }
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
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

  if ( (byte_4A5A07F & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A07F = 1;
  }
  v11 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v11);
  if ( !UserQuestMaster )
    goto LABEL_19;
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, userId, condQuestId, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserQuestMaster = (UserQuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !UserQuestMaster )
LABEL_19:
    sub_1B8880C(UserQuestMaster, v13);
  if ( QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
         (QuestScriptMaterialNextMaster_o *)UserQuestMaster,
         condQuestId,
         0LL)
    && isCollection )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EntityFromId = CondType__CheckGroupMaterialQuest(EntityFromId, condQuestId, v15);
  }
  if ( !EntityFromId || isCheckResetFlag && UserQuestEntity__IsResetStatus(EntityFromId, 0LL) )
    return 0;
  else
    return (beforeClearQuestId < 1 || beforeClearQuestId != condQuestId) & (UserQuestEntity__getClearNum(
                                                                              EntityFromId,
                                                                              0LL) > 0);
}


bool __fastcall CondType__IsQuestClearBeforeEventStart(int32_t questId, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool IsQuestClear_37596684; // w8
  bool result; // w0
  CondType_c *v8; // x0
  UserQuestMaster_o *UserQuestMaster; // x21
  EventMaster_o *UserId; // x0
  __int64 v11; // x1
  int64_t klass; // x20

  if ( (byte_4A5A112 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A112 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, v3);
  result = 0;
  if ( IsQuestClear_37596684 )
  {
    v8 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v8);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = (EventMaster_o *)NetworkManager__get_UserId(0LL);
    if ( !UserQuestMaster )
      goto LABEL_17;
    UserId = (EventMaster_o *)UserQuestMaster__GetEntity(UserQuestMaster, (int64_t)UserId, questId, 0LL);
    if ( !UserId )
      goto LABEL_17;
    klass = (int64_t)UserId[1].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UserId = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !UserId )
LABEL_17:
      sub_1B8880C(UserId, v11);
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

  if ( (byte_4A5A0B3 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0B3 = 1;
  }
  v5 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !UserQuestMaster )
    sub_1B8880C(UserId, v8);
  EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, UserId, condId, 0LL);
  if ( EntityFromId )
    LOBYTE(EntityFromId) = UserQuestEntity__getClearNum(EntityFromId, 0LL) >= condVal;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestClear_37596684(
        int32_t condQuestId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x5
  int64_t UserId; // x22

  if ( (byte_4A5A080 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A080 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A5A086 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A086 = 1;
  }
  if ( openQuestid <= 0 && closeQuestid < 1 )
    goto LABEL_5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( openQuestid >= 1 )
  {
    v9 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v9);
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
  v10 = CondType_TypeInfo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v10);
  if ( !Instance )
LABEL_23:
    sub_1B8880C(Instance, v7);
  v11 = UserQuestMaster__getEntityFromId((UserQuestMaster_o *)Instance, UserId, closeQuestid, 0LL);
  if ( !v11 || UserQuestEntity__getClearNum(v11, 0LL) <= 0 )
    goto LABEL_5;
LABEL_22:
  LOBYTE(EntityFromId) = 0;
  return (char)EntityFromId;
}


bool __fastcall CondType__IsQuestGroupAvailable(int32_t groupId, int32_t questCount, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Int32_array *Instance; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x8
  System_Int32_array *v9; // x19
  bool v10; // w25
  int v11; // w22
  unsigned __int64 v12; // x23
  int32_t v13; // w20

  if ( (byte_4A5A0C8 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C8 = 1;
  }
  if ( questCount <= 1 )
    v5 = 1;
  else
    v5 = questCount;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL
    || (Instance = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, groupId, 2, 0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
  }
  v8 = *(_QWORD *)&Instance->max_length;
  v9 = Instance;
  v10 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v8 )
        sub_1B88814(Instance, v7);
      v13 = v9->m_Items[v12 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (System_Int32_array *)CondType__IsQuestAvailable(v13, v7);
      if ( ((unsigned __int8)Instance & 1) != 0 && ++v11 >= v5 )
        break;
      LODWORD(v8) = v9->max_length;
      v10 = (__int64)++v12 < (int)v8;
    }
    while ( (__int64)v12 < (int)v8 );
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CondType__IsQuestGroupClear(
        int32_t questId,
        int32_t groupId,
        int32_t condVal,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  if ( (byte_4A5A0B8 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0B8 = 1;
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
  __int64 v3; // x8
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  CondType_c *v6; // x0
  UserQuestMaster_o *UserQuestMaster; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v2 = condQuestId;
  if ( (byte_4A5A0D8 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    condQuestId = (System_Int32_array *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A0D8 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  v3 = *(_QWORD *)&v2->max_length;
  if ( !v3 )
    return 0;
  if ( (int)v3 >= 1 )
  {
    v4 = 0LL;
    v5 = (unsigned int)*(_QWORD *)&v2->max_length;
    while ( 1 )
    {
      v6 = CondType_TypeInfo;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      UserQuestMaster = CondType__GetUserQuestMaster((const MethodInfo *)v6);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      condQuestId = (System_Int32_array *)NetworkManager__get_UserId(0LL);
      if ( v4 >= v2->max_length )
        sub_1B88814(condQuestId, method);
      if ( !UserQuestMaster )
        break;
      EntityFromId = UserQuestMaster__getEntityFromId(UserQuestMaster, (int64_t)condQuestId, v2->m_Items[v4 + 1], 0LL);
      if ( EntityFromId && UserQuestEntity__getClearNum(EntityFromId, 0LL) > 0 )
        return 0;
      if ( v5 == ++v4 )
        return 1;
    }
LABEL_18:
    sub_1B8880C(condQuestId, method);
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

  if ( (byte_4A5A082 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A082 = 1;
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


bool __fastcall CondType__IsQuestPhaseClear_37650740(
        int32_t condQuestId,
        int32_t condQuestPhase,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x5
  int64_t UserId; // x23

  if ( (byte_4A5A083 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A083 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestPhaseClear(UserId, condQuestId, condQuestPhase, beforeClearQuestId, isCheckResetFlag, v9);
}


bool __fastcall CondType__IsQuestResettable(int32_t targetId, const MethodInfo *method)
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

  if ( (byte_4A5A0C9 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestResetMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestResetMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         targetId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__TryGetEntity__) )
  {
    v5 = CondType_TypeInfo;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (DataManager_o *)CondType__GetUserQuestMaster((const MethodInfo *)v5);
    v7 = entity;
    if ( entity )
    {
      v8 = 0LL;
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
          sub_1B88814(Instance, v4);
        v12 = monitor[v8 + 8];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (DataManager_o *)CondType__IsQuestClear_37596684(v12, -1, 1, v6);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return v11;
        v7 = entity;
        ++v8;
      }
      while ( entity );
    }
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


bool __fastcall CondType__IsReleaseCostume(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *v8; // x8
  struct System_Int32_array *costumeIds; // x9
  int max_length; // w9
  int v11; // w20
  il2cpp_array_size_t v12; // w21
  struct System_Int32_array *v13; // x8
  int v14; // w23
  int v15; // w8
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A0D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D7 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v8 = entity;
    if ( !entity )
      goto LABEL_22;
    costumeIds = entity->fields.costumeIds;
    if ( !costumeIds )
      goto LABEL_22;
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
        if ( v12 >= v13->max_length )
          sub_1B88814(Instance, v6);
        v14 = v13->m_Items[v12 + 1];
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( v14 >= 0 )
          v15 = v14;
        else
          v15 = -v14;
        Instance = v15 == costumeId;
        if ( v15 == costumeId || v11 == v12 )
          return Instance;
        v8 = entity;
        ++v12;
      }
      while ( entity );
LABEL_22:
      sub_1B8880C(Instance, v6);
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
    sub_1B8880C(0LL, v2);
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

  if ( (byte_4A5A10B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5A10B = 1;
  }
  v5 = sub_1B88658(int___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_10;
  v7 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v5 + 32) = questId;
  v5 = sub_1B88658(int___TypeInfo, 1LL);
  if ( !v5 )
LABEL_10:
    sub_1B8880C(v5, v6);
  v9 = (System_Collections_Generic_IList_int__o *)v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_11:
    sub_1B88814(v5, v6);
  *(_DWORD *)(v5 + 32) = routeId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsRouteSelect_37655600(v7, v9, 1, 0, v8);
}


bool __fastcall CondType__IsRouteSelect_37655600(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IList_int__c *v28; // x8
  int32_t v29; // w26
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x25
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t v43; // w27
  int64_t UserId; // x0
  _BOOL8 haveRouteId; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Collections_Generic_IList_int__o *v57; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5A10C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestRouteMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A10C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestRouteMaster___);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_73;
  klass = questIds->klass;
  v57 = routeIds;
  v12 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BDA590(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v17 = v15;
  while ( 1 )
  {
    if ( !v17 )
      sub_1B8880C(v15, v16);
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_17:
      v21 = sub_1BDA590(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v24 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_1BDA590(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    if ( !v57 )
      sub_1B8880C(v26, v27);
    v28 = v57->klass;
    v29 = v26;
    v30 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
    {
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v31 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_31;
      }
      v32 = (__int64)&v28->vtable[*v31].method;
    }
    else
    {
LABEL_31:
      v32 = sub_1BDA590(v57, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v32)(v57, *(_QWORD *)(v32 + 8));
    if ( !v34 )
      sub_1B8880C(0LL, v33);
    while ( 1 )
    {
      v35 = *(_QWORD *)v34;
      v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_38;
        }
        v38 = v35 + 16LL * *v37 + 312;
      }
      else
      {
LABEL_38:
        v38 = sub_1BDA590(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
        break;
      v39 = *(_QWORD *)v34;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v41 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_45;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_45:
        v42 = sub_1BDA590(v34, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        sub_1B8880C(UserId, UserId);
      haveRouteId = UserQuestRouteMaster__haveRouteId(
                      (UserQuestRouteMaster_o *)MasterData_object,
                      UserId,
                      v29,
                      v43,
                      0LL);
      if ( haveRouteId )
      {
        if ( !v10 )
          sub_1B8880C(haveRouteId, v46);
        System_Collections_Generic_HashSet_int___Add(
          v10,
          v43,
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v47 = *(_QWORD *)v34;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_57;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_57:
      v50 = sub_1BDA590(v34, System_IDisposable_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v34, *(_QWORD *)(v50 + 8));
  }
  v51 = *(_QWORD *)v17;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_67;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_67:
    v54 = sub_1BDA590(v17, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v17, *(_QWORD *)(v54 + 8));
  if ( !v10 )
LABEL_73:
    sub_1B8880C(Instance, v8);
  return v10->fields._count == count;
}


bool __fastcall CondType__IsServantFriendship(
        int32_t svtId,
        int32_t condFriendshipRank,
        bool isAbove,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  int64_t UserId; // x22

  if ( (byte_4A5A096 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A096 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_37636176(UserId, svtId, condFriendshipRank, isAbove, v7);
}


bool __fastcall CondType__IsServantFriendship_37633960(
        int64_t userSvtId,
        int32_t condFriendshipRank,
        const MethodInfo *method)
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

  if ( (byte_4A5A098 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A098 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v15, 0LL);
  if ( !entity )
LABEL_22:
    sub_1B8880C(Instance, v6);
  v8 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = klass;
  *(_QWORD *)&v18.fields.fakeValue = monitor;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantFriendship_37636176(v8, v12, condFriendshipRank, 1, v11);
}


bool __fastcall CondType__IsServantFriendship_37636176(
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

  if ( (byte_4A5A097 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A097 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v17.fields.currentCryptoKey = v12;
      *(_QWORD *)&v17.fields.fakeValue = v13;
      LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL) >= condFriendshipRank;
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
    LOBYTE(EntityDefinitely) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL) <= condFriendshipRank;
  }
  return (char)EntityDefinitely;
}


bool __fastcall CondType__IsServantGet(int32_t condSvtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_4A5A090 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A090 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_37633804(UserId, condSvtId, v3);
}


bool __fastcall CondType__IsServantGetBeforeEventEnd(int32_t svtId, int32_t eventId, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v9; // [xsp+8h] [xbp-38h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5A0CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CB = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Instance )
        goto LABEL_17;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   &v9,
                   eventId,
                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( v9 )
      {
        if ( entity )
          return entity->fields.createdAt < (__int64)v9[6].klass;
LABEL_17:
        sub_1B8880C(Instance, v6);
      }
    }
  }
  return 0;
}


bool __fastcall CondType__IsServantGet_37633804(int64_t userId, int32_t condSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5A091 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A091 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
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


bool __fastcall CondType__IsServantGet_37651920(int64_t userSvtId, const MethodInfo *method)
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

  if ( (byte_4A5A092 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A092 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               userSvtId,
               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 userSvtId,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
  if ( !entity )
LABEL_20:
    sub_1B8880C(Instance, v4);
  v6 = Instance;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = klass;
  *(_QWORD *)&v16.fields.fakeValue = monitor;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGet_37633804(v6, v10, v9);
}


bool __fastcall CondType__IsServantGroup(int32_t condGroup, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int64_t UserId; // x20

  if ( (byte_4A5A09A & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A09A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantGroup_37634496(UserId, condGroup, v3);
}


bool __fastcall CondType__IsServantGroup_37634496(int64_t userId, int32_t condGroup, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  int v8; // w8
  void *v9; // x21
  bool v10; // w22
  int v11; // w23
  __int64 v12; // x8

  if ( (byte_4A5A09B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A09B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condGroup, 0LL);
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
        sub_1B88814(Instance, v6);
      v12 = *((_QWORD *)v9 + v11 + 4);
      if ( !v12 || !MasterData_object )
        break;
      Instance = UserServantCollectionMaster__GetEntityDefinitely(
                   (UserServantCollectionMaster_o *)MasterData_object,
                   userId,
                   *(_DWORD *)(v12 + 20),
                   0LL);
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
    sub_1B8880C(Instance, v6);
  }
  return v10;
}


bool __fastcall CondType__IsServantHaving(int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A093 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A093 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return UserServantMaster__IsServantHaving((UserServantMaster_o *)Instance, svtId, 1, 0LL);
}


bool __fastcall CondType__IsServantHavingLimitMax(int32_t svtId, int32_t condNum, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A0E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return UserServantMaster__IsServantHavingLimitMax((UserServantMaster_o *)Instance, svtId, condNum, 0LL);
}


bool __fastcall CondType__IsServantLevel(int64_t userSvtId, int32_t condLv, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A087 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A087 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    if ( entity )
      return SLODWORD(entity[16].klass) >= condLv;
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  return 0;
}


bool __fastcall CondType__IsServantLevel_37594320(int32_t svtId, int32_t condLv, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  int64_t UserId; // x21

  if ( (byte_4A5A088 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A088 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLevel_37635776(UserId, svtId, condLv, v5);
}


bool __fastcall CondType__IsServantLevel_37635776(
        int64_t userId,
        int32_t svtId,
        int32_t condLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5A089 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A089 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v11; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5A08B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A08B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_9;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(Instance, v8);
  }
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userSvtId,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
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
  if ( (byte_4A5A0FB & 1) == 0 )
  {
    targetIds = (System_Int32_array *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A0FB = 1;
  }
  if ( !v4 )
    sub_1B8880C(targetIds, *(_QWORD *)&targetNum);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = 0LL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B88814(v6, *(_QWORD *)&targetNum);
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


bool __fastcall CondType__IsServantLimitImage(
        int64_t userSvtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t CombineVoiceLimitCount; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A08C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A08C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    goto LABEL_9;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !Instance )
    goto LABEL_20;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         userSvtId,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_9:
    Instance = entity;
    if ( entity )
    {
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount((UserServantEntity_o *)entity, 0, 0LL);
      goto LABEL_12;
    }
LABEL_20:
    sub_1B8880C(Instance, v8);
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


bool __fastcall CondType__IsServantLimit_37594476(
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  int64_t UserId; // x22

  if ( (byte_4A5A08D & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A08D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsServantLimit_37635936(UserId, svtId, condLimitCount, checkType, v7);
}


bool __fastcall CondType__IsServantLimit_37635936(
        int64_t userId,
        int32_t svtId,
        int32_t condLimitCount,
        int32_t checkType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0

  if ( (byte_4A5A08E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A08E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
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
  __int64 v9; // x8
  int v10; // w23
  UserShopMaster_o *v11; // x21
  int v12; // w24
  int32_t v13; // w25
  ShopGroupEntity_o *v14; // x8
  int32_t shopId; // w22
  UserShopEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A0E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E0 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
  if ( !Instance )
    goto LABEL_22;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Instance, condValue, 0LL);
  if ( !TargetEntityList )
    return 1;
  v8 = TargetEntityList;
  if ( !*(_QWORD *)&TargetEntityList->max_length )
    return 1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  v9 = *(_QWORD *)&v8->max_length;
  v10 = v9 - 1;
  if ( (int)v9 >= 1 )
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
      Instance = NetworkManager__get_UserId(0LL);
      if ( !v11 )
        break;
      Instance = UserShopMaster__TryGetEntity(v11, &entity, Instance, shopId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        v13 += entity->fields.num;
        if ( v13 >= limitNum )
          return 1;
      }
      if ( v10 == v12 )
        return 0;
      if ( ++v12 >= v8->max_length )
        sub_1B88814(Instance, v6);
    }
LABEL_22:
    sub_1B8880C(Instance, v6);
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
  __int64 v11; // x24

  if ( (byte_4A5A0C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0C4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !values )
    goto LABEL_15;
  v7 = *(_QWORD *)&values->max_length;
  v8 = 0;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = (UserShopMaster_o *)Instance;
    v10 = 0LL;
    v8 = 0;
    v11 = (unsigned int)*(_QWORD *)&values->max_length;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( v10 >= values->max_length )
        sub_1B88814(Instance, v6);
      if ( !v9 )
        break;
      Instance = (int64_t)UserShopMaster__GetEntityDefinitely(v9, Instance, values->m_Items[v10 + 1], 0LL);
      if ( !Instance )
        break;
      ++v10;
      v8 += *(_DWORD *)(Instance + 28);
      if ( v11 == v10 )
        return num > 0 && v8 == num;
    }
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
  return num > 0 && v8 == num;
}


bool __fastcall CondType__IsShopReleased(int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v6; // x19
  __int64 v7; // x8
  int v8; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  int v10; // w23
  ShopGroupEntity_o *v11; // x8
  ShopEntity_o *v12; // x21

  if ( (byte_4A5A0DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopGroupMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_21:
    sub_1B8880C(Instance, v4);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  v7 = *(_QWORD *)&v6->max_length;
  v8 = v7 - 1;
  if ( (int)v7 < 1 )
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
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( Instance )
    {
      v12 = (ShopEntity_o *)Instance;
      Instance = (Il2CppObject *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)ShopEntity__IsSoldOut(v12, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
    }
    if ( v8 == v10 )
      goto LABEL_18;
    if ( ++v10 >= v6->max_length )
      sub_1B88814(Instance, v4);
  }
  LOBYTE(TargetEntityList) = 1;
  return (char)TargetEntityList;
}


bool __fastcall CondType__IsStartRandomMission(int32_t missionId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  UserEventRandomMissionEntity_o *MissionEntity; // x0

  if ( (byte_4A5A10D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5A10D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  MissionEntity = UserEventRandomMissionMaster__GetMissionEntity(
                    (UserEventRandomMissionMaster_o *)Master_object,
                    missionId,
                    0LL);
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

  if ( (byte_4A5A12D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A12D = 1;
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
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__) )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       player_datalist,
                       v15,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
              if ( !Item )
                goto LABEL_54;
              klass = Item[4].klass;
              monitor = Item[4].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v29.fields.currentCryptoKey = klass;
              *(_QWORD *)&v29.fields.fakeValue = monitor;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL) == targetSvtId )
              {
                if ( (v16 & 0x80000000) != 0 )
                  return 1;
                Item = System_Collections_Generic_List_object___get_Item(
                         player_datalist,
                         v15,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
                if ( !Item )
                  goto LABEL_54;
                if ( BattleServantData__getDispLimitCount((BattleServantData_o *)Item, 0, 0LL) == v16 )
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
    sub_1B8880C(Item, v8);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Item = (Il2CppObject *)TutorialFlag__Get_37688364(126, 0LL);
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
  v21 = UserServantListFromDeckReaveHeroine;
  if ( UserServantListFromDeckReaveHeroine )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( v22->static_fields->DeckMainMemberMax <= (signed int)v21->max_length )
    {
      v24 = 0LL;
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
        if ( v24 >= v21->max_length )
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
          v22 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
          if ( (_DWORD)v22 == targetSvtId )
          {
            if ( !targetLimitCount )
              return 1;
            if ( v24 >= v21->max_length )
LABEL_55:
              sub_1B88814(v22, v8);
            Item = (Il2CppObject *)m_Items[v24];
            if ( !Item )
              goto LABEL_54;
            if ( UserServantEntity__getDispLimitCount((UserServantEntity_o *)Item, 0, 0LL) == targetLimitCount - 1 )
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


bool __fastcall CondType__IsSuperBossDamageAbove(int32_t condId, int64_t condVal, const MethodInfo *method)
{
  bool result; // w0
  int v6; // w21
  int v7; // w20

  if ( (byte_4A5A115 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A115 = 1;
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

  if ( (byte_4A5A116 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A116 = 1;
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
  bool result; // w0
  int v6; // w21
  int v7; // w20
  int64_t Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x22
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A114 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserSuperBossMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A114 = 1;
  }
  entity = 0LL;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = 0;
  if ( (unsigned int)(condId + 99) >= 0xC7 )
  {
    v6 = condId / 100;
    v7 = condId % 100;
    if ( v7 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserSuperBossMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_16;
      Instance = UserSuperBossMaster__TryGetEntity(
                   (UserSuperBossMaster_o *)MasterData_object,
                   &entity,
                   Instance,
                   v6,
                   v7,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( entity )
          return entity->fields.value == condVal;
LABEL_16:
        sub_1B8880C(Instance, v9);
      }
      return 0;
    }
  }
  return result;
}


bool __fastcall CondType__IsSvtEquipFriendShipHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5A0E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v2);
  }
  return UserServantMaster__GetSvtEquipFriendShip((UserServantMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtEquipFriendShipStorageHaving(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5A0E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v2);
  }
  return UserServantStorageMaster__GetSvtEquipFriendShip((UserServantStorageMaster_o *)Instance, 0LL) > 0;
}


bool __fastcall CondType__IsSvtRecoverd(int32_t eventId, int32_t condNum, const MethodInfo *method)
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

  if ( (byte_4A5A0D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0D9 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B8880C(Instance, v6);
  }
  v7 = (UserEventServantFatigueMaster_o *)Instance;
  RecoverySvtIdList = (int64_t)UserEventServantFatigueMaster__GetRecoverySvtIdList(
                                 (UserEventServantFatigueMaster_o *)Instance,
                                 eventId,
                                 0LL);
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
    v12 = 0LL;
    v13 = (unsigned int)*(_QWORD *)(RecoverySvtIdList + 24) - 1LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v10 + 32 + 8 * v12);
      if ( v14 < 1 )
        goto LABEL_20;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_26;
      Instance = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v14,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Instance )
        goto LABEL_26;
      klass = Instance[5].klass;
      monitor = Instance[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
      RecoverySvtIdList = UserEventServantFatigueMaster__GetFatigueInfo(v7, &recoverAt, &isRecover, eventId, v17, 0LL);
      if ( (RecoverySvtIdList & 1) != 0 )
      {
        v18 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        RecoverySvtIdList = NetworkManager__getTime(0LL);
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
        sub_1B88814(RecoverySvtIdList, v9);
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
    sub_1B8880C(countFunc, targetIds);
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
        sub_1B88814(countFunc, targetIds);
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


bool __fastcall CondType__IsTotalTdLvCond(
        int32_t condType,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int v9; // w8

  if ( (byte_4A5A0EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x0
  UserEventEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x22
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4A5A0F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&EventStatus_Type_var);
    sub_1B885B0(&EventStatus_Type_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5A0F1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1B8880C(Instance, v6);
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       eventId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = (int)EventStatus_Type_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v18.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
    v17 = flag;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(EventStatus_Type_TypeInfo, &v17, v12, v13, v14);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v15, 0LL)
                            && UserEventEntity__getEventFlag(v9, flag, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsUserQuestStatus(int32_t questId, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x22
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4A5A0F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserQuestEntity_StatusKind_var);
    sub_1B885B0(&UserQuestEntity_StatusKind_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5A0F2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1B8880C(Instance, v6);
  EntityFromId = UserQuestMaster__getEntityFromId(
                   (UserQuestMaster_o *)MasterData_object,
                   (int64_t)Instance,
                   questId,
                   0LL);
  if ( EntityFromId )
  {
    v9 = EntityFromId;
    v10 = (int)UserQuestEntity_StatusKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v18.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
    v17 = flag;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(UserQuestEntity_StatusKind_TypeInfo, &v17, v12, v13, v14);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityFromId) = System_Enum__IsDefined(TypeFromHandle, v15, 0LL)
                        && UserQuestEntity__HasStatus_40149208(v9, flag, 0LL);
  }
  return (unsigned __int8)EntityFromId & 1;
}


bool __fastcall CondType__IsUserShopStatus(int32_t shopId, int32_t flagKind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserShopEntity_o *EntityDefinitely; // x0
  UserShopEntity_o *v9; // x20
  intptr_t v10; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x22
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4A5A108 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&UserShopFlag_FlagKind_var);
    sub_1B885B0(&UserShopFlag_FlagKind_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5A108 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_16:
    sub_1B8880C(Instance, v6);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
                       shopId,
                       0LL);
  if ( EntityDefinitely )
  {
    v9 = EntityDefinitely;
    v10 = (int)UserShopFlag_FlagKind_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v18.fields.value = v10;
    TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
    v17 = flagKind;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(UserShopFlag_FlagKind_TypeInfo, &v17, v12, v13, v14);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    LOBYTE(EntityDefinitely) = System_Enum__IsDefined(TypeFromHandle, v15, 0LL)
                            && UserShopEntity__CheckFlagKind(v9, flagKind, 0LL);
  }
  return (unsigned __int8)EntityDefinitely & 1;
}


bool __fastcall CondType__IsVoicePlayCount(int32_t eventId, int32_t playCount, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 methodPtr_low; // x9
  EventVoicePlayEntity_o *NowEventVoicePlayEntity; // x0
  int32_t idx; // w21
  int32_t slot; // w22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w0
  int64_t v15; // x0
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5A0DD & 1) == 0 )
  {
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A0DD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
    return 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (AvalonSceneManager_o *)Instance->fields.targetRoot) == 0LL )
LABEL_16:
    sub_1B8880C(Instance, v6);
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventRewardRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
  {
    sub_1B88ACC(Instance);
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  EventRewardSaveData__LoadEventVoicePlayCount(eventId, slot, idx, v13, 0LL);
  if ( !byte_4A58A0A )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A58A0A = 1;
  }
  return EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField >= playCount;
}


bool __fastcall CondType__IsVoicePlayFlag(int32_t svtId, int32_t num, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A0CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A0CC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B8880C(Instance, v6);
  return UserServantCollectionEntity__IsPlayed(entity, num, 0LL);
}


bool __fastcall CondType__IsWarClear(int32_t condWarId, const MethodInfo *method)
{
  System_Int32_array *ClearWarIdList; // x0
  __int64 v4; // x1
  int max_length; // w8
  int i; // w9

  if ( (byte_4A5A0FA & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5A0FA = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ClearWarIdList = ServantCommentManager__GetClearWarIdList(0LL);
  if ( !ClearWarIdList )
    sub_1B8880C(0LL, v4);
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
        sub_1B88814(ClearWarIdList, v4);
      if ( ClearWarIdList->m_Items[i + 1] == condWarId )
        break;
    }
  }
  return i < max_length;
}


int32_t __fastcall CondType__LatestMainScenarioWarClear(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_List_WarEntity__o *EntityList; // x0
  System_Collections_Generic_List_object__o *v4; // x19
  CondType___c_c *v5; // x0
  System_Comparison_T__o *_9__168_0; // x20
  Il2CppObject *v7; // x21
  struct CondType___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  CondType___c_c *v11; // x0
  System_Predicate_object__o *_9__168_1; // x20
  Il2CppObject *v13; // x21
  struct CondType___c_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x3
  int32_t klass_high; // w19

  if ( (byte_4A5A106 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_WarEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__get_Count__);
    sub_1B885B0(&System_Predicate_WarEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CondType___c__LatestMainScenarioWarClear_b__168_0__);
    sub_1B885B0(&Method_CondType___c__LatestMainScenarioWarClear_b__168_1__);
    sub_1B885B0(&CondType___c_TypeInfo);
    byte_4A5A106 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v2);
  }
  EntityList = WarMaster__GetEntityList((WarMaster_o *)Instance, 0LL);
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
  _9__168_0 = (System_Comparison_T__o *)v5->static_fields->__9__168_0;
  if ( !_9__168_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CondType___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__168_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__168_0, v7, Method_CondType___c__LatestMainScenarioWarClear_b__168_0__, 0LL);
    static_fields = CondType___c_TypeInfo->static_fields;
    static_fields->__9__168_0 = (struct System_Comparison_WarEntity__o *)_9__168_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__168_0, (int32_t)_9__168_0, v9, v10);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v4,
    _9__168_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  v11 = CondType___c_TypeInfo;
  if ( !CondType___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CondType___c_TypeInfo);
    v11 = CondType___c_TypeInfo;
  }
  _9__168_1 = (System_Predicate_object__o *)v11->static_fields->__9__168_1;
  if ( !_9__168_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = CondType___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__168_1 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_WarEntity__TypeInfo);
    System_Predicate_object____ctor(_9__168_1, v13, Method_CondType___c__LatestMainScenarioWarClear_b__168_1__, 0LL);
    v14 = CondType___c_TypeInfo->static_fields;
    v14->__9__168_1 = (struct System_Predicate_WarEntity__o *)_9__168_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->__9__168_1, (int32_t)_9__168_1, v15, v16);
  }
  v17 = System_Collections_Generic_List_object___Find(
          v4,
          (System_Predicate_T__o *)_9__168_1,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_WarEntity__Find__);
  if ( !v17 )
    return 0;
  klass_high = HIDWORD(v17[6].klass);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(klass_high, -1, 0, v18);
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

  if ( (byte_4A5A07B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3791/*"COND_TYPE_NONE"*/);
    byte_4A5A07B = 1;
  }
  switch ( condType )
  {
    case 0:
      v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_3791/*"COND_TYPE_NONE"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      result = LocalizationManager__Get(v7, 0LL);
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
      if ( !byte_4A56A2D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A56A2D = 1;
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


System_String_o *__fastcall CondType__OpenConditionTextEvent(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19
  System_String_o *v9; // x19
  Il2CppObject *EventName; // x1

  if ( (byte_4A5A09E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3790/*"COND_TYPE_EVENT"*/);
    byte_4A5A09E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_3790/*"COND_TYPE_EVENT"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1B8880C(Instance, v6);
  v9 = (System_String_o *)Instance;
  EventName = (Il2CppObject *)EventEntity__getEventName((EventEntity_o *)Entity, 0LL);
  return System_String__Format(v9, EventName, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseQpShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_4A5A0A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3792/*"COND_TYPE_PURCHASE_QP_SHOP"*/);
    byte_4A5A0A1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_3792/*"COND_TYPE_PURCHASE_QP_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1B8880C(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextPurchaseStoneShop(
        int32_t condId,
        System_String_o *textType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x20
  System_String_o *v8; // x19

  if ( (byte_4A5A0A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3793/*"COND_TYPE_PURCHASE_STONE_SHOP"*/);
    byte_4A5A0A6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_3793/*"COND_TYPE_PURCHASE_STONE_SHOP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1B8880C(Instance, v6);
  return System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[6].monitor, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextQuestClear(
        int32_t condQuestId,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  LocalizationManager_c *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A081 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3794/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4A5A081 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         condQuestId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
  {
    v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_3794/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get(v7, 0LL);
    if ( entity )
      return System_String__Format(Master_object, (Il2CppObject *)entity[1].monitor, 0LL);
LABEL_18:
    sub_1B8880C(Master_object, v6);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  if ( (byte_4A5A085 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3795/*"COND_TYPE_QUEST_PHASE_CLEAR"*/);
    sub_1B885B0(&StringLiteral_3794/*"COND_TYPE_QUEST_CLEAR"*/);
    byte_4A5A085 = 1;
  }
  v21 = 0LL;
  if ( getWarName )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_object )
      goto LABEL_31;
    QuestId = WarMaster__getByLastQuestId(Master_object, condQuestId, 0LL);
    if ( QuestId )
    {
      v12 = QuestId;
      v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_3794/*"COND_TYPE_QUEST_CLEAR"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get(v13, 0LL);
      return System_String__Format(v14, (Il2CppObject *)v12->fields.name, 0LL);
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
    Master_object = (WarMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !Master_object )
      goto LABEL_31;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &v21,
           condQuestId,
           (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      v16 = System_String__Concat_61707032((System_String_o *)StringLiteral_3795/*"COND_TYPE_QUEST_PHASE_CLEAR"*/, textType, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (WarMaster_o *)LocalizationManager__Get(v16, 0LL);
      if ( v21 )
      {
        monitor = (Il2CppObject *)v21[1].monitor;
        v18 = (System_String_o *)Master_object;
        v19 = (Il2CppObject *)System_Int32__ToString((int32_t)&v22, 0LL);
        return System_String__Format_61721404(v18, monitor, v19, 0LL);
      }
LABEL_31:
      sub_1B8880C(Master_object, v10);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
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


System_String_o *__fastcall CondType__OpenConditionTextServantFriendship(
        int32_t condFriendshipRank,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A099 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3796/*"COND_TYPE_SERVANT_FRIENDSHIP"*/);
    byte_4A5A099 = 1;
  }
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_3796/*"COND_TYPE_SERVANT_FRIENDSHIP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  v12 = condFriendshipRank;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantGet(
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

  if ( (byte_4A5A095 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3797/*"COND_TYPE_SERVANT_GET"*/);
    byte_4A5A095 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             condSvtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v8 = System_String__Concat_61707032((System_String_o *)StringLiteral_3797/*"COND_TYPE_SERVANT_GET"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get(v8, 0LL);
  if ( !Entity )
LABEL_9:
    sub_1B8880C(Instance, v6);
  v9 = (System_String_o *)Instance;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)Entity, -1, -1, 0LL);
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
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A09C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3798/*"COND_TYPE_SERVANT_GROUP"*/);
    byte_4A5A09C = 1;
  }
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_3798/*"COND_TYPE_SERVANT_GROUP"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  v12 = condGroup;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLevel(
        int32_t condLv,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A08A & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3799/*"COND_TYPE_SERVANT_LEVEL"*/);
    byte_4A5A08A = 1;
  }
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_3799/*"COND_TYPE_SERVANT_LEVEL"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  v12 = condLv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


System_String_o *__fastcall CondType__OpenConditionTextServantLimit(
        int32_t condLimitCount,
        System_String_o *textType,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A08F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3800/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/);
    byte_4A5A08F = 1;
  }
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_3800/*"COND_TYPE_SERVANT_LIMIT_COUNT"*/, textType, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  v12 = condLimitCount;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


bool __fastcall CondType__RaidBattleProgressAbove(int32_t questId, float rate, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t klass; // w19
  SpotPathEntity_o *v9; // x19
  int32_t v10; // w20
  int32_t monitor_high; // w21

  if ( (byte_4A5A071 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotPathMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&EventSpotMoveManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A071 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  klass = (int32_t)Entity[3].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotPathMaster___)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             klass,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SpotPathMaster__SpotPathEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = (SpotPathEntity_o *)Entity;
    monitor_high = HIDWORD(Entity[1].monitor);
    v10 = (int32_t)Entity[2].klass;
    if ( !EventSpotMoveManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSpotMoveManager_TypeInfo);
    LOBYTE(Entity) = EventSpotMoveManager__CalcSpotPathRate(monitor_high, v10, v9, 0LL) >= (float)(rate / 100.0);
  }
  return (char)Entity;
}


bool __fastcall CondType__TimeLimitRaidDead(int32_t eventId, int32_t targetId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t defeatedAt; // x8
  TotalEventRaidEntity_o *v9; // [xsp+8h] [xbp-38h] BYREF
  EventRaidEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5A070 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A070 = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, eventId, targetId, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
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
        sub_1B8880C(Instance, v6);
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
  MapEntity_array *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  MapEntity_o *v8; // x21
  System_Int64_array **Entity; // x0
  System_Int64_array **v10; // x21

  if ( (byte_4A5A107 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_long___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A107 = 1;
  }
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = MapMaster__GetEntityListByMapId((MapMaster_o *)Instance, mapId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  v7 = *(_QWORD *)&Instance->max_length;
  if ( !v7 )
  {
    LOBYTE(Entity) = 0;
    return (char)Entity;
  }
  if ( !(_DWORD)v7 )
    sub_1B88814(Instance, v6);
  v8 = Instance->m_Items[0];
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !v8 || !Instance )
    goto LABEL_18;
  Entity = (System_Int64_array **)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v8->fields.warId,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = (MapEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (MapEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMapMaster___)) == 0LL )
  {
LABEL_18:
    sub_1B8880C(Instance, v6);
  }
  Entity = (System_Int64_array **)UserEventMapMaster__GetEntity_40084972(
                                    (UserEventMapMaster_o *)Instance,
                                    *((_DWORD *)v10 + 24),
                                    mapId,
                                    0LL);
  if ( Entity )
    LOBYTE(Entity) = System_Array__IndexOf_long_(
                       Entity[4],
                       target,
                       (const MethodInfo_2F7A4E8 *)Method_System_Array_IndexOf_long___) >= 0;
  return (char)Entity;
}


int32_t __fastcall CondType___CountServantClassTotalFriendShipUp_g__CountFunc_159_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  if ( !collection )
    sub_1B8880C(0LL, method);
  return UserServantCollectionEntity__getFriendShipRank(collection, 0LL);
}


int32_t __fastcall CondType___CountServantClassTotalLevelUp_g__CountFunc_162_0(
        UserServantCollectionEntity_o *collection,
        const MethodInfo *method)
{
  int32_t maxLv; // w8

  if ( !collection )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(collection, method);
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
        sub_1B88814(v4, method);
      v7 = *p_fakeValue++;
      --v5;
      --currentCryptoKey;
      v4 = (unsigned int)(v4 + v7 - 1);
    }
    while ( v5 );
  }
  return v4;
}


bool __fastcall CondType__checkCondTypeRaidAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  char v9; // w8
  TotalEventRaidEntity_o *v11; // [xsp+0h] [xbp-40h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5A072 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A072 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_14;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
  {
LABEL_12:
    v9 = 0;
    return v9 & 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(Instance, v8);
  }
  Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(
                               (TotalEventRaidMaster_o *)Instance,
                               &v11,
                               targetId,
                               condValue,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_12;
  if ( !entity || !v11 )
    goto LABEL_14;
  v9 = (entity->fields.maxHp <= v11->fields.totalDamage) ^ alive;
  return v9 & 1;
}


bool __fastcall CondType__checkCondTypeRaidGroupAlive(
        int32_t targetId,
        int32_t condValue,
        bool alive,
        const MethodInfo *method)
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

  if ( (byte_4A5A073 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A073 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___)) == 0LL
    || (EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                                 (EventRaidMaster_o *)Instance,
                                 targetId,
                                 condValue,
                                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___),
        !EventRaidEntityArray) )
  {
LABEL_19:
    sub_1B8880C(Instance, v8);
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
        sub_1B88814(Instance, v8);
      v13 = EventRaidEntityArray->m_Items[v12];
      if ( !v13 || !v11 )
        goto LABEL_19;
      Instance = (Il2CppObject *)TotalEventRaidMaster__TryGetEntity(v11, &entity, targetId, v13->fields.day, 0LL);
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
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A06F & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A06F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( !EventRaidMaster__TryGetEntity((EventRaidMaster_o *)Instance, &entity, targetId, condValue, 0LL) )
    return 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !entity )
LABEL_16:
    sub_1B8880C(Instance, v6);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CDF10;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDEB0;
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
  if ( (byte_4A5A137 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5A137 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&level, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


int32_t __fastcall CondType_CountDelegate__EndInvoke(
        CondType_CountDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1B88568(result, 0LL, method) )
    sub_1B8880C(0LL, v3);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A138 & 1) == 0 )
  {
    sub_1B885B0(&CondType___c_TypeInfo);
    byte_4A5A138 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CondType___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CondType___c_TypeInfo->static_fields->__9 = (struct CondType___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)CondType___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return UserQuestEntity__IsResetStatus(x, 0LL);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_1(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A5A13C & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    byte_4A5A13C = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___CountClassBoardSquareReleased_b__195_2(
        CondType___c_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A5A13D & 1) == 0 )
  {
    this = (CondType___c_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    byte_4A5A13D = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return System_Linq_Enumerable__Count_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)x->fields.classBoardSquareIds,
           (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_0(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4A5A139 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A139 = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestLevel(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_1(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4A5A13A & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A13A = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  result = CondType__GetExchangeServantHighestSkillLevel(targetId, 0LL);
  if ( result < current )
    return current;
  return result;
}


int32_t __fastcall CondType___c___GetProgressNumByTargetIds_b__26_2(
        CondType___c_o *this,
        int32_t current,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4A5A13B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A13B = 1;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
    sub_1B8880C(this, a);
  return b->fields.id - a->fields.id;
}


bool __fastcall CondType___c___LatestMainScenarioWarClear_b__168_1(
        CondType___c_o *this,
        WarEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, collection);
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
        sub_1B88814(v6, collection);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5A13E & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A13E = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetLevel(targetId, targetNum, 0LL);
}


bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__1(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4A5A13F & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A13F = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCompleteExchangeServantTargetSkillLevel(targetId, targetNum, 0LL);
}


bool __fastcall CondType___c__DisplayClass19_0___IsOpenWithSumOfProgressCount_b__2(
        CondType___c__DisplayClass19_0_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t targetNum; // w20

  if ( (byte_4A5A140 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5A140 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
    sub_1B8880C(this, 0LL);
  return x->fields.questId == this->fields.condQuestId;
}