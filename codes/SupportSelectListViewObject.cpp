void SupportSelectListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x19
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  struct SupportSelectListViewObject_StaticFields *static_fields; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3

  if ( (byte_4C3F67F & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&SupportSelectListViewObject_TypeInfo);
    sub_1C37058(&StringLiteral_20156/*"icon_class_off1001"*/);
    sub_1C37058(&StringLiteral_20166/*"icon_class_on1002"*/);
    sub_1C37058(&StringLiteral_20157/*"icon_class_off1002"*/);
    sub_1C37058(&StringLiteral_20151/*"icon_class_off003"*/);
    sub_1C37058(&StringLiteral_20155/*"icon_class_off007"*/);
    sub_1C37058(&StringLiteral_20149/*"icon_class_off001"*/);
    sub_1C37058(&StringLiteral_20163/*"icon_class_on006"*/);
    sub_1C37058(&StringLiteral_20160/*"icon_class_on003"*/);
    sub_1C37058(&StringLiteral_20158/*"icon_class_on001"*/);
    sub_1C37058(&StringLiteral_20154/*"icon_class_off006"*/);
    sub_1C37058(&StringLiteral_20165/*"icon_class_on1001"*/);
    sub_1C37058(&StringLiteral_20161/*"icon_class_on004"*/);
    sub_1C37058(&StringLiteral_20162/*"icon_class_on005"*/);
    sub_1C37058(&StringLiteral_20159/*"icon_class_on002"*/);
    sub_1C37058(&StringLiteral_20164/*"icon_class_on007"*/);
    sub_1C37058(&StringLiteral_20153/*"icon_class_off005"*/);
    sub_1C37058(&StringLiteral_20150/*"icon_class_off002"*/);
    sub_1C37058(&StringLiteral_20152/*"icon_class_off004"*/);
    byte_4C3F67F = 1;
  }
  v1 = sub_1C37100(string___TypeInfo, 9);
  if ( !v1 )
    goto LABEL_25;
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_24;
  v5 = StringLiteral_20156/*"icon_class_off1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20156/*"icon_class_off1001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_24;
  v8 = StringLiteral_20149/*"icon_class_off001"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_20149/*"icon_class_off001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7);
  if ( *(_DWORD *)(v4 + 24) <= 2u )
    goto LABEL_24;
  v11 = StringLiteral_20150/*"icon_class_off002"*/;
  *(_QWORD *)(v4 + 48) = StringLiteral_20150/*"icon_class_off002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 48), v11, v9, v10);
  if ( *(_DWORD *)(v4 + 24) <= 3u )
    goto LABEL_24;
  v14 = StringLiteral_20151/*"icon_class_off003"*/;
  *(_QWORD *)(v4 + 56) = StringLiteral_20151/*"icon_class_off003"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 56), v14, v12, v13);
  if ( *(_DWORD *)(v4 + 24) <= 4u )
    goto LABEL_24;
  v17 = StringLiteral_20152/*"icon_class_off004"*/;
  *(_QWORD *)(v4 + 64) = StringLiteral_20152/*"icon_class_off004"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 64), v17, v15, v16);
  if ( *(_DWORD *)(v4 + 24) <= 5u )
    goto LABEL_24;
  v20 = StringLiteral_20153/*"icon_class_off005"*/;
  *(_QWORD *)(v4 + 72) = StringLiteral_20153/*"icon_class_off005"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 72), v20, v18, v19);
  if ( *(_DWORD *)(v4 + 24) <= 6u
    || (v23 = StringLiteral_20154/*"icon_class_off006"*/,
        *(_QWORD *)(v4 + 80) = StringLiteral_20154/*"icon_class_off006"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 80), v23, v21, v22),
        *(_DWORD *)(v4 + 24) <= 7u)
    || (v26 = StringLiteral_20155/*"icon_class_off007"*/,
        *(_QWORD *)(v4 + 88) = StringLiteral_20155/*"icon_class_off007"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 88), v26, v24, v25),
        *(_DWORD *)(v4 + 24) <= 8u) )
  {
LABEL_24:
    sub_1C372BC(v1);
  }
  v29 = StringLiteral_20157/*"icon_class_off1002"*/;
  *(_QWORD *)(v4 + 96) = StringLiteral_20157/*"icon_class_off1002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 96), v29, v27, v28);
  SupportSelectListViewObject_TypeInfo->static_fields->upperOffClassIconFileList = (struct System_String_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)SupportSelectListViewObject_TypeInfo->static_fields, v4, v30, v31);
  v1 = sub_1C37100(string___TypeInfo, 9);
  if ( !v1 )
LABEL_25:
    sub_1C372B4(v1);
  v34 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_24;
  v35 = StringLiteral_20165/*"icon_class_on1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20165/*"icon_class_on1001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v35, v32, v33);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_24;
  v38 = StringLiteral_20158/*"icon_class_on001"*/;
  *(_QWORD *)(v34 + 40) = StringLiteral_20158/*"icon_class_on001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 40), v38, v36, v37);
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_24;
  v41 = StringLiteral_20159/*"icon_class_on002"*/;
  *(_QWORD *)(v34 + 48) = StringLiteral_20159/*"icon_class_on002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 48), v41, v39, v40);
  if ( *(_DWORD *)(v34 + 24) <= 3u )
    goto LABEL_24;
  v44 = StringLiteral_20160/*"icon_class_on003"*/;
  *(_QWORD *)(v34 + 56) = StringLiteral_20160/*"icon_class_on003"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 56), v44, v42, v43);
  if ( *(_DWORD *)(v34 + 24) <= 4u )
    goto LABEL_24;
  v47 = StringLiteral_20161/*"icon_class_on004"*/;
  *(_QWORD *)(v34 + 64) = StringLiteral_20161/*"icon_class_on004"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 64), v47, v45, v46);
  if ( *(_DWORD *)(v34 + 24) <= 5u )
    goto LABEL_24;
  v50 = StringLiteral_20162/*"icon_class_on005"*/;
  *(_QWORD *)(v34 + 72) = StringLiteral_20162/*"icon_class_on005"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 72), v50, v48, v49);
  if ( *(_DWORD *)(v34 + 24) <= 6u )
    goto LABEL_24;
  v53 = StringLiteral_20163/*"icon_class_on006"*/;
  *(_QWORD *)(v34 + 80) = StringLiteral_20163/*"icon_class_on006"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 80), v53, v51, v52);
  if ( *(_DWORD *)(v34 + 24) <= 7u )
    goto LABEL_24;
  v56 = StringLiteral_20164/*"icon_class_on007"*/;
  *(_QWORD *)(v34 + 88) = StringLiteral_20164/*"icon_class_on007"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 88), v56, v54, v55);
  if ( *(_DWORD *)(v34 + 24) <= 8u )
    goto LABEL_24;
  v59 = StringLiteral_20166/*"icon_class_on1002"*/;
  *(_QWORD *)(v34 + 96) = StringLiteral_20166/*"icon_class_on1002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 96), v59, v57, v58);
  static_fields = SupportSelectListViewObject_TypeInfo->static_fields;
  static_fields->upperOnClassIconFileList = (struct System_String_array *)v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->upperOnClassIconFileList, v34, v61, v62);
}


void SupportSelectListViewObject___ctor(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectObject_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F67E & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ListViewObject_TypeInfo);
    sub_1C37058(&SupportSelectObject___TypeInfo);
    byte_4C3F67E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectObject_array *)sub_1C37100(
                                             SupportSelectObject___TypeInfo,
                                             (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.supportSelectObject = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.supportSelectObject, (int32_t)v4, v5, v6);
  this->fields.maxAlphaRate = 0.6;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


System_String_o *SupportSelectListViewObject__GetClassIconSpriteName(
        int32_t classPos,
        bool isUpperOn,
        const MethodInfo *method)
{
  SupportSelectListViewObject_c *v5; // x0
  struct SupportSelectListViewObject_StaticFields *static_fields; // x8
  struct System_String_array *upperOnClassIconFileList; // x8
  struct System_String_array *upperOffClassIconFileList; // x8
  struct System_String_StaticFields *v9; // x8

  if ( (byte_4C3F674 & 1) == 0 )
  {
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&SupportSelectListViewObject_TypeInfo);
    byte_4C3F674 = 1;
  }
  if ( classPos < 0 )
    goto LABEL_19;
  v5 = SupportSelectListViewObject_TypeInfo;
  if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    v5 = SupportSelectListViewObject_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( !isUpperOn )
  {
    upperOffClassIconFileList = static_fields->upperOffClassIconFileList;
    if ( !upperOffClassIconFileList )
      goto LABEL_21;
    if ( SLODWORD(upperOffClassIconFileList->max_length) > classPos )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = SupportSelectListViewObject_TypeInfo;
      }
      upperOnClassIconFileList = v5->static_fields->upperOffClassIconFileList;
      if ( !upperOnClassIconFileList )
LABEL_21:
        sub_1C372B4(v5);
      goto LABEL_17;
    }
LABEL_19:
    v9 = string_TypeInfo->static_fields;
    return v9->Empty;
  }
  upperOnClassIconFileList = static_fields->upperOnClassIconFileList;
  if ( !upperOnClassIconFileList )
    goto LABEL_21;
  if ( SLODWORD(upperOnClassIconFileList->max_length) <= classPos )
    goto LABEL_19;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOnClassIconFileList;
    if ( !upperOnClassIconFileList )
      goto LABEL_21;
  }
LABEL_17:
  if ( LODWORD(upperOnClassIconFileList->max_length) <= classPos )
    sub_1C372BC(v5);
  v9 = (struct System_String_StaticFields *)&upperOnClassIconFileList->m_Items[classPos];
  return v9->Empty;
}


SupportSelectListViewItem_o *SupportSelectListViewObject__GetItem(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3F676 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectListViewItem_TypeInfo);
    byte_4C3F676 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SupportSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
    return (SupportSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewObject__Init(
        SupportSelectListViewObject_o *this,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        int32_t deckNum,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  struct SupportServantData_o *v10; // x8
  UILabel_o *explanationLb; // x23
  System_String_o **v12; // x8
  System_String_o *v13; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCampaignMaster_o *v15; // x23
  int32_t questId; // w22
  int32_t questPhase; // w24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  EventCampaignEntity_array *Data_41941424; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x0
  int32_t v22; // w1
  struct EventCampaignEntity_array *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1

  if ( (byte_4C3F675 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C37058(&EventCampaignEntity___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_12499/*"SUPPORT_FOLLOWER_HELP"*/);
    sub_1C37058(&StringLiteral_12553/*"SUPPORT_SELECT_HELP"*/);
    sub_1C37058(&StringLiteral_12500/*"SUPPORT_INFO_HELP"*/);
    byte_4C3F675 = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    (int32_t)friendPointCampaigns,
    *(const MethodInfo **)&deckNum);
  v10 = this->fields.supportServantData;
  if ( !v10 )
    goto LABEL_28;
  explanationLb = this->fields.explanationLb;
  if ( !v10->fields.isFriendInfo )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12553/*"SUPPORT_SELECT_HELP"*/, 0);
    if ( explanationLb )
    {
      UILabel__set_text(explanationLb, Instance, 0);
      goto LABEL_25;
    }
LABEL_28:
    sub_1C372B4(Instance);
  }
  if ( v10->fields.isSelectServant )
    v12 = (System_String_o **)&StringLiteral_12499/*"SUPPORT_FOLLOWER_HELP"*/;
  else
    v12 = (System_String_o **)&StringLiteral_12500/*"SUPPORT_INFO_HELP"*/;
  v13 = *v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v13, 0);
  if ( !explanationLb )
    goto LABEL_28;
  UILabel__set_text(explanationLb, Instance, 0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !supportServantData )
    goto LABEL_28;
  questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
  v15 = (EventCampaignMaster_o *)Instance;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
  }
  else
  {
    questPhase = 0;
    questId = 0;
  }
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                  (EventQuestMaster_o *)Instance,
                                  questId,
                                  questPhase,
                                  0,
                                  7,
                                  0);
  if ( !v15 )
    goto LABEL_28;
  Data_41941424 = EventCampaignMaster__getData_41941424(v15, 24, (EventEntity_array *)Instance, 0);
  if ( !Data_41941424 || !Data_41941424->max_length )
  {
    v23 = (struct EventCampaignEntity_array *)sub_1C37100(EventCampaignEntity___TypeInfo, 0);
    v22 = (int)v23;
    this->fields.eventFriendPoints = v23;
    p_eventFriendPoints = &this->fields.eventFriendPoints;
    goto LABEL_27;
  }
LABEL_25:
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v22 = (int)friendPointCampaigns;
LABEL_27:
  sub_1C36FFC((CGThumbnailListItem_o *)p_eventFriendPoints, v22, v18, v19);
  SupportSelectListViewObject__clearItemObj(this, v24);
  SupportSelectListViewObject__setItemObj(this, deckNum, v25);
  SupportSelectListViewObject__InitAlphaMask(this, v26);
}


void SupportSelectListViewObject__InitAlphaMask(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__51641852; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4C3F67C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F67C = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__51641852 = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                            dispObject,
                                            (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__51641852;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.colliders, (int32_t)ComponentsInChildren_object__51641852, v5, v6);
  SupportSelectListViewObject__UpdateCollider(this, 1, v7);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_16;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0);
    if ( !dispObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( dispObject )
    {
      ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                   dispObject,
                                   (const MethodInfo_313F7B8 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)ComponentInParent_object, v10, v11);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemSeed, (int32_t)ComponentInChildren_object, v13, v14);
          SupportSelectListViewObject__UpdateAlphaMask(this, v15);
          return;
        }
      }
    }
LABEL_16:
    sub_1C372B4(dispObject);
  }
}


void SupportSelectListViewObject__OnClickListView(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void SupportSelectListViewObject__ResetEventCampaign(
        SupportSelectListViewObject_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SupportServantData_o *supportServantData; // x8
  struct EventCampaignEntity_array **p_eventFriendPoints; // x21
  SupportSelectListViewObject_o *v6; // x19
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v9; // x21
  int max_length; // w9

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_10;
  if ( supportServantData->fields.isFriendInfo )
    return;
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v6 = this;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
  supportSelectObject = (struct SupportSelectObject_array *)*(p_eventFriendPoints - 5);
  if ( !supportSelectObject )
LABEL_10:
    sub_1C372B4(this);
  v9 = 0;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1C372BC(this);
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v9];
    if ( this )
    {
      SupportSelectObject__ChangeEvent((SupportSelectObject_o *)this, friendPointCampaigns, 0);
      supportSelectObject = v6->fields.supportSelectObject;
      ++v9;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_10;
  }
}


void SupportSelectListViewObject__SetActiveDragSwapGuide(
        SupportSelectListViewObject_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_1C372B4(this);
  v4 = this;
  v5 = 0;
  v6 = flag;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C372BC(this);
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v5];
    if ( this )
    {
      SupportSelectObject__SetActiveDragSwapGuide((SupportSelectObject_o *)this, v6, 0);
      supportSelectObject = v4->fields.supportSelectObject;
      ++v5;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


void SupportSelectListViewObject__SetDragPrefab(
        SupportSelectListViewObject_o *this,
        UnityEngine_GameObject_o *dragPrefab,
        SupportSelectListViewManager_o *manager,
        const MethodInfo *method)
{
  struct SupportSelectListViewDropObject_array *dropObjectList; // x22
  int max_length; // w8
  unsigned int v8; // w23
  SupportSelectListViewDropObject_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_9;
  max_length = dropObjectList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(this);
      v9 = dropObjectList->m_Items[v8];
      if ( !v9 )
        break;
      v9->fields.manager = (struct ListViewManager_o *)manager;
      sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.manager, (int32_t)manager, (int32_t)manager, method);
      v9->fields.dragObjectPrefab = dragPrefab;
      sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields.dragObjectPrefab, (int32_t)dragPrefab, v10, v11);
      max_length = dropObjectList->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_1C372B4(this);
  }
}


// attributes: thunk
void SupportSelectListViewObject__Update(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  SupportSelectListViewObject__UpdateAlphaMask(this, method);
}


void SupportSelectListViewObject__UpdateAlphaMask(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  void *transform; // x0
  float v7; // s8
  float v8; // s0
  struct ListViewItemSeed_o *v9; // x8
  float v10; // s0
  float v11; // s1
  float v12; // s8
  float maxAlphaRate; // s10
  float v14; // s8
  const MethodInfo *v15; // x2
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F67D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F67D = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0, 0) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
        {
          transform = this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
          v9 = this->fields.itemSeed;
          if ( !v9 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v10 = fabsf(v7 + v8) / v9->fields.arrangementPich.fields.x;
          v11 = fminf(v10, 1.0);
          v12 = v10 < 0.0 ? 0.0 : v11;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !transform )
            goto LABEL_29;
          v14 = maxAlphaRate * v12;
          if ( v14 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
            SupportSelectListViewObject__UpdateCollider(this, v14 <= 0.05, v15);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v14 > 0.05, 0),
                (transform = this->fields.maskSprite) == 0) )
          {
LABEL_29:
            sub_1C372B4(transform);
          }
          v16.fields.r = *((float *)transform + 37);
          v16.fields.g = *((float *)transform + 38);
          v16.fields.b = *((float *)transform + 39);
          v16.fields.a = v14;
          UIWidget__set_color((UIWidget_o *)transform, v16, 0);
        }
      }
    }
  }
}


void SupportSelectListViewObject__UpdateCollider(
        SupportSelectListViewObject_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_array *colliders; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  colliders = this->fields.colliders;
  if ( !colliders )
LABEL_7:
    sub_1C372B4(this);
  v4 = this;
  v5 = 0;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C372BC(this);
    this = (SupportSelectListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0);
      colliders = v4->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


void SupportSelectListViewObject__UpdateExplanationLabel(
        SupportSelectListViewObject_o *this,
        bool displaySwapInfo,
        const MethodInfo *method)
{
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *explanationLb; // x19
  System_String_o *v8; // x0

  if ( (byte_4C3F67B & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12553/*"SUPPORT_SELECT_HELP"*/);
    sub_1C37058(&StringLiteral_12564/*"SUPPORT_SELECT_SWAP"*/);
    byte_4C3F67B = 1;
  }
  if ( displaySwapInfo )
    v5 = (System_String_o **)&StringLiteral_12564/*"SUPPORT_SELECT_SWAP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_12553/*"SUPPORT_SELECT_HELP"*/;
  v6 = *v5;
  explanationLb = this->fields.explanationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0);
  if ( !explanationLb )
    sub_1C372B4(v8);
  UILabel__set_text(explanationLb, v8, 0);
}


void SupportSelectListViewObject__callbackFuncObj(
        SupportSelectListViewObject_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v11; // x22
  _BOOL8 v12; // x0
  void *monitor; // x8

  if ( (byte_4C3F679 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SupportSelectListViewManager_TypeInfo);
    byte_4C3F679 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (naturalAligment = SupportSelectListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewManager_TypeInfo )
      v11 = (UnityEngine_Object_o *)this->fields.manager;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( v12 )
  {
    if ( !v11 )
      sub_1C372B4(v12);
    monitor = v11[14].monitor;
    if ( monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))monitor + 3))(
        *((_QWORD *)monitor + 8),
        (unsigned int)result,
        (unsigned int)d,
        (unsigned int)n,
        *((_QWORD *)monitor + 5));
  }
}


void SupportSelectListViewObject__clearItemObj(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  const MethodInfo *v6; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_1C372B4(this);
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C372BC(this);
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v4];
    if ( this )
    {
      SupportSelectObject__ClearItem((SupportSelectObject_o *)this, 0);
      SupportSelectListViewObject__setUpperClassIcon(v3, v4, v6);
      supportSelectObject = v3->fields.supportSelectObject;
      ++v4;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


void SupportSelectListViewObject__clearItemObj_35735992(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v5; // x19
  const MethodInfo *v6; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
    goto LABEL_5;
  if ( LODWORD(supportSelectObject->max_length) <= classPos )
    sub_1C372BC(this);
  v5 = this;
  this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[classPos];
  if ( !this )
LABEL_5:
    sub_1C372B4(this);
  SupportSelectObject__ClearItem((SupportSelectObject_o *)this, 0);
  SupportSelectListViewObject__setUpperClassIcon(v5, classPos, v6);
}


SupportSelectListViewDropObject_array *SupportSelectListViewObject__get_DropObjectList(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObjectList;
}


void SupportSelectListViewObject__setDisp(SupportSelectListViewObject_o *this, bool disp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, disp, 0);
}


void SupportSelectListViewObject__setItemObj(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  _DWORD *monitor; // x8
  __int64 v6; // x21
  int v7; // w9
  EventCampaignEntity_array *klass; // x22
  SupportServantData_o *v9; // x23
  SupportSelectObject_o *v10; // x24
  SupportSelectMenu_CallbackFunc_o *v11; // x25
  const MethodInfo *v12; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3F677 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_1C37058(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_4C3F677 = 1;
  }
  monitor = v4[7].monitor;
  if ( !monitor )
LABEL_9:
    sub_1C372B4(this);
  v6 = 0;
  while ( 1 )
  {
    v7 = monitor[6];
    if ( (int)v6 >= v7 )
      break;
    if ( (unsigned int)v6 >= v7 )
      sub_1C372BC(this);
    v9 = (SupportServantData_o *)v4[9].monitor;
    klass = (EventCampaignEntity_array *)v4[10].klass;
    v10 = *(SupportSelectObject_o **)&monitor[2 * v6 + 8];
    v11 = (SupportSelectMenu_CallbackFunc_o *)sub_1C372A4(SupportSelectMenu_CallbackFunc_TypeInfo);
    SupportSelectMenu_CallbackFunc___ctor(v11, v4, Method_SupportSelectListViewObject_callbackFuncObj__, 0);
    if ( v10 )
    {
      SupportSelectObject__SetItem(v10, v9, deckNum, v6, klass, v11, 0);
      SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v4, v6, v12);
      monitor = v4[7].monitor;
      ++v6;
      if ( monitor )
        continue;
    }
    goto LABEL_9;
  }
}


void SupportSelectListViewObject__setItemObj_35736076(
        SupportSelectListViewObject_o *this,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  _DWORD *monitor; // x8
  EventCampaignEntity_array *klass; // x22
  SupportServantData_o *v9; // x23
  SupportSelectObject_o *v10; // x24
  SupportSelectMenu_CallbackFunc_o *v11; // x25
  const MethodInfo *v12; // x2

  v6 = (Il2CppObject *)this;
  if ( (byte_4C3F678 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_1C37058(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_4C3F678 = 1;
  }
  monitor = v6[7].monitor;
  if ( !monitor )
    goto LABEL_7;
  if ( monitor[6] <= (unsigned int)classPos )
    sub_1C372BC(this);
  v9 = (SupportServantData_o *)v6[9].monitor;
  klass = (EventCampaignEntity_array *)v6[10].klass;
  v10 = *(SupportSelectObject_o **)&monitor[2 * classPos + 8];
  v11 = (SupportSelectMenu_CallbackFunc_o *)sub_1C372A4(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(v11, v6, Method_SupportSelectListViewObject_callbackFuncObj__, 0);
  if ( !v10 )
LABEL_7:
    sub_1C372B4(this);
  SupportSelectObject__SetItem(v10, v9, deckNum, classPos, klass, v11, 0);
  SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v6, classPos, v12);
}


void SupportSelectListViewObject__setUpperClassIcon(
        SupportSelectListViewObject_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportServantData_o *supportServantData; // x0
  struct UISprite_array *v6; // x8
  __int64 v7; // x22
  UISprite_o *v8; // x20
  _DWORD *klass; // x8
  struct UISprite_array *classIconSpriteList; // x8

  if ( (byte_4C3F67A & 1) == 0 )
  {
    sub_1C37058(&SupportSelectListViewObject_TypeInfo);
    byte_4C3F67A = 1;
  }
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_20;
  supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                 supportServantData,
                                                 classPos,
                                                 0);
  if ( !supportServantData || !supportServantData->fields.className )
  {
    classIconSpriteList = this->fields.classIconSpriteList;
    if ( !classIconSpriteList )
      goto LABEL_20;
    if ( LODWORD(classIconSpriteList->max_length) <= classPos )
LABEL_21:
      sub_1C372BC(supportServantData);
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    v7 = classPos;
    v8 = classIconSpriteList->m_Items[classPos];
    if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
      supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
    }
    klass = supportServantData[1].fields.oldEquipIdList->obj.klass;
    if ( klass )
      goto LABEL_17;
LABEL_20:
    sub_1C372B4(supportServantData);
  }
  v6 = this->fields.classIconSpriteList;
  if ( !v6 )
    goto LABEL_20;
  if ( LODWORD(v6->max_length) <= classPos )
    goto LABEL_21;
  supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  v7 = classPos;
  v8 = v6->m_Items[classPos];
  if ( !SupportSelectListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectListViewObject_TypeInfo);
    supportServantData = (SupportServantData_o *)SupportSelectListViewObject_TypeInfo;
  }
  klass = supportServantData[1].fields.oldEquipIdList->obj.monitor;
  if ( !klass )
    goto LABEL_20;
LABEL_17:
  if ( klass[6] <= (unsigned int)classPos )
    goto LABEL_21;
  if ( !v8 )
    goto LABEL_20;
  UISprite__set_spriteName(v8, *(System_String_o **)&klass[2 * v7 + 8], 0);
}