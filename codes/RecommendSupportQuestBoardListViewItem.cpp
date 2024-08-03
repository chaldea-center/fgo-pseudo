// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewItem___ctor(
        RecommendSupportQuestBoardListViewItem_o *this,
        int32_t index,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *info,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  RecommendSupportData_o *Instance; // x0
  struct QuestEntity_o *questEntity; // x8
  int32_t id; // w1
  int32_t phase; // w2
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *svtName; // [xsp+8h] [xbp-48h] BYREF
  int32_t settingIndex; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49F8712 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, *(_QWORD *)&index);
    byte_49F8712 = 1;
  }
  settingIndex = 0;
  svtName = 0LL;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields._QuestFolderInfo_k__BackingField = folderInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._QuestFolderInfo_k__BackingField,
    (int32_t)folderInfo,
    v9,
    v10);
  this->fields._QuestInfo_k__BackingField = info;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._QuestInfo_k__BackingField, (int32_t)info, v11, v12);
  this->fields._IsQuestRestriction_k__BackingField = RecommendSupportQuestBoardListViewItem__CheckQuestRestriction(
                                                       this,
                                                       v13);
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField;
  if ( !info )
  {
    id = 0;
    phase = 0;
    if ( Instance )
      goto LABEL_7;
LABEL_9:
    sub_1B64324(Instance);
  }
  questEntity = info->fields.questEntity;
  if ( !questEntity )
    goto LABEL_9;
  id = questEntity->fields.id;
  phase = info->fields.phase;
  if ( !Instance )
    goto LABEL_9;
LABEL_7:
  this->fields._IsSetting_k__BackingField = RecommendSupportData__TryGetIsQuestSetting(
                                              Instance,
                                              id,
                                              phase,
                                              &settingIndex,
                                              &svtName,
                                              0LL);
  this->fields._SettingSelectIndex_k__BackingField = settingIndex;
  v18 = (int)svtName;
  this->fields._SettingSvtName_k__BackingField = svtName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._SettingSvtName_k__BackingField, v18, v19, v20);
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
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x8
  struct QuestEntity_o *questEntity; // x9
  int32_t phase; // w21
  int32_t id; // w20
  QuestRestrictionInfo_o *v16; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8713 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&QuestRestrictionInfo_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_49F8713 = 1;
  }
  entity = 0LL;
  if ( !this->fields._QuestInfo_k__BackingField )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, v9),
        !Master_object) )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               Instance,
               (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
    return 0;
  QuestInfo_k__BackingField = this->fields._QuestInfo_k__BackingField;
  if ( !QuestInfo_k__BackingField )
    goto LABEL_15;
  questEntity = QuestInfo_k__BackingField->fields.questEntity;
  if ( !questEntity )
    goto LABEL_15;
  phase = QuestInfo_k__BackingField->fields.phase;
  id = questEntity->fields.id;
  v16 = (QuestRestrictionInfo_o *)sub_1B64314(QuestRestrictionInfo_TypeInfo, v10, v11);
  QuestRestrictionInfo___ctor_40081728(v16, 0, id, phase, 0LL);
  Instance = (int64_t)entity;
  if ( !entity )
    goto LABEL_15;
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)entity, v16, 2, 0LL);
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