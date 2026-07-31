void RecommendSupportQuestBoardListViewItem___ctor(
        RecommendSupportQuestBoardListViewItem_o *this,
        int32_t index,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo,
        bool isSetting,
        int32_t selectIndex,
        System_String_o *svtName,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItem_o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x1
  bool v27; // w0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  v13 = this;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v13->fields._QuestFolderInfo_k__BackingField = folderInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields._QuestFolderInfo_k__BackingField,
    (int32_t)folderInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v13->fields._QuestInfo_k__BackingField = questInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields._QuestInfo_k__BackingField,
    (int32_t)questInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = RecommendSupportQuestBoardListViewItem__CheckQuestRestriction(v13, v26);
  v13->fields._SettingSvtName_k__BackingField = svtName;
  v13 = (RecommendSupportQuestBoardListViewItem_o *)((char *)v13 + 144);
  BYTE1(v13[-1].fields._SettingSvtName_k__BackingField) = isSetting;
  LOBYTE(v13[-1].fields._SettingSvtName_k__BackingField) = v27;
  HIDWORD(v13[-1].fields._SettingSvtName_k__BackingField) = selectIndex;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v13, (int32_t)svtName, v28, v29, v30, v31, v32, v33);
}


bool RecommendSupportQuestBoardListViewItem__CheckQuestRestriction(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  const MethodInfo *v7; // x1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v8; // x8
  struct QuestEntity_o *questEntity; // x9
  int32_t id; // w20
  int32_t phase; // w21
  QuestRestrictionInfo_o *v12; // x19
  Il2CppObject *v13; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593437E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&QuestRestrictionInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_593437E = 1;
  }
  QuestInfo_k__BackingField = this->fields._QuestInfo_k__BackingField;
  entity = 0;
  if ( !QuestInfo_k__BackingField )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, v7),
        !Master_object) )
  {
LABEL_16:
    sub_21FFECC(Instance, v7);
  }
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               Instance,
               (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) == 0 )
    return 0;
  v8 = this->fields._QuestInfo_k__BackingField;
  if ( !v8 )
    goto LABEL_16;
  questEntity = v8->fields.questEntity;
  if ( !questEntity )
    goto LABEL_16;
  id = questEntity->fields.id;
  phase = v8->fields.phase;
  v12 = (QuestRestrictionInfo_o *)sub_21FFEBC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50438788(v12, 0, id, phase, 0);
  v13 = entity;
  if ( !entity )
    goto LABEL_16;
  Instance = (int64_t)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
  if ( !Instance )
    goto LABEL_16;
  return UserServantEntity__getQuestRestriction((UserServantEntity_o *)v13, v12, *(_DWORD *)(Instance + 24), 2, 0);
}


bool RecommendSupportQuestBoardListViewItem__IsGrandEnableSupport(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x8
  struct QuestEntity_o *questEntity; // x9

  if ( (byte_593437F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_593437F = 1;
  }
  if ( !this->fields._QuestInfo_k__BackingField )
    return 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  QuestInfo_k__BackingField = this->fields._QuestInfo_k__BackingField;
  if ( !QuestInfo_k__BackingField || (questEntity = QuestInfo_k__BackingField->fields.questEntity) == 0 || !Instance )
    sub_21FFECC(Instance, v4);
  return PartyOrganizationUtility__IsSupportGrandEnableQuest(
           (PartyOrganizationUtility_o *)Instance,
           questEntity->fields.id,
           QuestInfo_k__BackingField->fields.phase,
           0,
           0);
}


bool RecommendSupportQuestBoardListViewItem__get_IsQuestRestriction(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsQuestRestriction_k__BackingField;
}


bool RecommendSupportQuestBoardListViewItem__get_IsSetting(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSetting_k__BackingField;
}


RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *RecommendSupportQuestBoardListViewItem__get_QuestFolderInfo(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestFolderInfo_k__BackingField;
}


RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *RecommendSupportQuestBoardListViewItem__get_QuestInfo(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestInfo_k__BackingField;
}


int32_t RecommendSupportQuestBoardListViewItem__get_SettingSelectIndex(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SettingSelectIndex_k__BackingField;
}


System_String_o *RecommendSupportQuestBoardListViewItem__get_SettingSvtName(
        RecommendSupportQuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SettingSvtName_k__BackingField;
}