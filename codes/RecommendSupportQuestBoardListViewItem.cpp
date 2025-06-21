void __fastcall RecommendSupportQuestBoardListViewItem___ctor(
        RecommendSupportQuestBoardListViewItem_o *this,
        int32_t index,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        bool isSetting,
        int32_t selectIndex,
        System_String_o *svtName,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItem_o *v12; // x23
  bool v13; // w24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  bool v19; // w0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v12 = this;
  v13 = isSetting;
  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  v12->fields._QuestFolderInfo_k__BackingField = folderInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v12->fields._QuestFolderInfo_k__BackingField, (int32_t)folderInfo, v14, v15);
  v12->fields._QuestInfo_k__BackingField = questInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v12->fields._QuestInfo_k__BackingField, (int32_t)questInfo, v16, v17);
  v19 = RecommendSupportQuestBoardListViewItem__CheckQuestRestriction(v12, v18);
  v12->fields._SettingSvtName_k__BackingField = svtName;
  v12 = (RecommendSupportQuestBoardListViewItem_o *)((char *)v12 + 136);
  LOBYTE(v12[-1].fields._SettingSvtName_k__BackingField) = v19;
  BYTE1(v12[-1].fields._SettingSvtName_k__BackingField) = v13;
  HIDWORD(v12[-1].fields._SettingSvtName_k__BackingField) = selectIndex;
  sub_1BCAF9C((CGThumbnailListItem_o *)v12, (int32_t)svtName, v20, v21);
}


bool __fastcall RecommendSupportQuestBoardListViewItem__CheckQuestRestriction(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  __int64 v9; // x1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x8
  struct QuestEntity_o *questEntity; // x9
  int32_t phase; // w21
  int32_t id; // w20
  QuestRestrictionInfo_o *v14; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18491 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BCAFF8(&QuestRestrictionInfo_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_4B18491 = 1;
  }
  entity = 0LL;
  if ( !this->fields._QuestInfo_k__BackingField )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, 0LL),
        !Master_object) )
  {
LABEL_16:
    sub_1BCB254(Instance, v9);
  }
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               Instance,
               (const MethodInfo_32CA3A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
    return 0;
  QuestInfo_k__BackingField = this->fields._QuestInfo_k__BackingField;
  if ( !QuestInfo_k__BackingField )
    goto LABEL_16;
  questEntity = QuestInfo_k__BackingField->fields.questEntity;
  if ( !questEntity )
    goto LABEL_16;
  phase = QuestInfo_k__BackingField->fields.phase;
  id = questEntity->fields.id;
  v14 = (QuestRestrictionInfo_o *)sub_1BCB244(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_42534072(v14, 0, id, phase, 0LL);
  v15 = entity;
  if ( !entity )
    goto LABEL_16;
  Instance = (int64_t)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0LL, 0LL);
  if ( !Instance )
    goto LABEL_16;
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)v15, v14, *(_DWORD *)(Instance + 24), 2, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewItem__get_IsQuestRestriction(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsQuestRestriction_k__BackingField;
}


bool __fastcall RecommendSupportQuestBoardListViewItem__get_IsSetting(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSetting_k__BackingField;
}


RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *__fastcall RecommendSupportQuestBoardListViewItem__get_QuestFolderInfo(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestFolderInfo_k__BackingField;
}


RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *__fastcall RecommendSupportQuestBoardListViewItem__get_QuestInfo(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestInfo_k__BackingField;
}


int32_t __fastcall RecommendSupportQuestBoardListViewItem__get_SettingSelectIndex(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SettingSelectIndex_k__BackingField;
}


System_String_o *__fastcall RecommendSupportQuestBoardListViewItem__get_SettingSvtName(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SettingSvtName_k__BackingField;
}