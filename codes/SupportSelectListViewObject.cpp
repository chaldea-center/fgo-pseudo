void __fastcall SupportSelectListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x19
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w1
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w1
  struct SupportSelectListViewObject_StaticFields *static_fields; // x0
  int32_t v62; // w2
  int32_t v63; // w3

  if ( (byte_4A57B34 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&SupportSelectListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_20112/*"icon_class_off1001"*/);
    sub_1B885B0(&StringLiteral_20122/*"icon_class_on1002"*/);
    sub_1B885B0(&StringLiteral_20113/*"icon_class_off1002"*/);
    sub_1B885B0(&StringLiteral_20107/*"icon_class_off003"*/);
    sub_1B885B0(&StringLiteral_20111/*"icon_class_off007"*/);
    sub_1B885B0(&StringLiteral_20105/*"icon_class_off001"*/);
    sub_1B885B0(&StringLiteral_20119/*"icon_class_on006"*/);
    sub_1B885B0(&StringLiteral_20116/*"icon_class_on003"*/);
    sub_1B885B0(&StringLiteral_20114/*"icon_class_on001"*/);
    sub_1B885B0(&StringLiteral_20110/*"icon_class_off006"*/);
    sub_1B885B0(&StringLiteral_20121/*"icon_class_on1001"*/);
    sub_1B885B0(&StringLiteral_20117/*"icon_class_on004"*/);
    sub_1B885B0(&StringLiteral_20118/*"icon_class_on005"*/);
    sub_1B885B0(&StringLiteral_20115/*"icon_class_on002"*/);
    sub_1B885B0(&StringLiteral_20120/*"icon_class_on007"*/);
    sub_1B885B0(&StringLiteral_20109/*"icon_class_off005"*/);
    sub_1B885B0(&StringLiteral_20106/*"icon_class_off002"*/);
    sub_1B885B0(&StringLiteral_20108/*"icon_class_off004"*/);
    byte_4A57B34 = 1;
  }
  v1 = sub_1B88658(string___TypeInfo, 9LL);
  if ( !v1 )
    goto LABEL_25;
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_24;
  v6 = StringLiteral_20112/*"icon_class_off1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20112/*"icon_class_off1001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_24;
  v9 = StringLiteral_20105/*"icon_class_off001"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_20105/*"icon_class_off001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v9, v7, v8);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_24;
  v12 = StringLiteral_20106/*"icon_class_off002"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_20106/*"icon_class_off002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), v12, v10, v11);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_24;
  v15 = StringLiteral_20107/*"icon_class_off003"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_20107/*"icon_class_off003"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v15, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_24;
  v18 = StringLiteral_20108/*"icon_class_off004"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_20108/*"icon_class_off004"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), v18, v16, v17);
  if ( *(_DWORD *)(v5 + 24) <= 5u )
    goto LABEL_24;
  v21 = StringLiteral_20109/*"icon_class_off005"*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_20109/*"icon_class_off005"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 72), v21, v19, v20);
  if ( *(_DWORD *)(v5 + 24) <= 6u
    || (v24 = StringLiteral_20110/*"icon_class_off006"*/,
        *(_QWORD *)(v5 + 80) = StringLiteral_20110/*"icon_class_off006"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 80), v24, v22, v23),
        *(_DWORD *)(v5 + 24) <= 7u)
    || (v27 = StringLiteral_20111/*"icon_class_off007"*/,
        *(_QWORD *)(v5 + 88) = StringLiteral_20111/*"icon_class_off007"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 88), v27, v25, v26),
        *(_DWORD *)(v5 + 24) <= 8u) )
  {
LABEL_24:
    sub_1B88814(v1, v2);
  }
  v30 = StringLiteral_20113/*"icon_class_off1002"*/;
  *(_QWORD *)(v5 + 96) = StringLiteral_20113/*"icon_class_off1002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 96), v30, v28, v29);
  SupportSelectListViewObject_TypeInfo->static_fields->upperOffClassIconFileList = (struct System_String_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SupportSelectListViewObject_TypeInfo->static_fields, v5, v31, v32);
  v1 = sub_1B88658(string___TypeInfo, 9LL);
  if ( !v1 )
LABEL_25:
    sub_1B8880C(v1, v2);
  v35 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_24;
  v36 = StringLiteral_20121/*"icon_class_on1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20121/*"icon_class_on1001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), v36, v33, v34);
  if ( *(_DWORD *)(v35 + 24) <= 1u )
    goto LABEL_24;
  v39 = StringLiteral_20114/*"icon_class_on001"*/;
  *(_QWORD *)(v35 + 40) = StringLiteral_20114/*"icon_class_on001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 40), v39, v37, v38);
  if ( *(_DWORD *)(v35 + 24) <= 2u )
    goto LABEL_24;
  v42 = StringLiteral_20115/*"icon_class_on002"*/;
  *(_QWORD *)(v35 + 48) = StringLiteral_20115/*"icon_class_on002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 48), v42, v40, v41);
  if ( *(_DWORD *)(v35 + 24) <= 3u )
    goto LABEL_24;
  v45 = StringLiteral_20116/*"icon_class_on003"*/;
  *(_QWORD *)(v35 + 56) = StringLiteral_20116/*"icon_class_on003"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 56), v45, v43, v44);
  if ( *(_DWORD *)(v35 + 24) <= 4u )
    goto LABEL_24;
  v48 = StringLiteral_20117/*"icon_class_on004"*/;
  *(_QWORD *)(v35 + 64) = StringLiteral_20117/*"icon_class_on004"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 64), v48, v46, v47);
  if ( *(_DWORD *)(v35 + 24) <= 5u )
    goto LABEL_24;
  v51 = StringLiteral_20118/*"icon_class_on005"*/;
  *(_QWORD *)(v35 + 72) = StringLiteral_20118/*"icon_class_on005"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 72), v51, v49, v50);
  if ( *(_DWORD *)(v35 + 24) <= 6u )
    goto LABEL_24;
  v54 = StringLiteral_20119/*"icon_class_on006"*/;
  *(_QWORD *)(v35 + 80) = StringLiteral_20119/*"icon_class_on006"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 80), v54, v52, v53);
  if ( *(_DWORD *)(v35 + 24) <= 7u )
    goto LABEL_24;
  v57 = StringLiteral_20120/*"icon_class_on007"*/;
  *(_QWORD *)(v35 + 88) = StringLiteral_20120/*"icon_class_on007"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 88), v57, v55, v56);
  if ( *(_DWORD *)(v35 + 24) <= 8u )
    goto LABEL_24;
  v60 = StringLiteral_20122/*"icon_class_on1002"*/;
  *(_QWORD *)(v35 + 96) = StringLiteral_20122/*"icon_class_on1002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 96), v60, v58, v59);
  static_fields = SupportSelectListViewObject_TypeInfo->static_fields;
  static_fields->upperOnClassIconFileList = (struct System_String_array *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->upperOnClassIconFileList, v35, v62, v63);
}


void __fastcall SupportSelectListViewObject___ctor(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportSelectObject_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57B33 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ListViewObject_TypeInfo);
    sub_1B885B0(&SupportSelectObject___TypeInfo);
    byte_4A57B33 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportSelectObject_array *)sub_1B88658(
                                             SupportSelectObject___TypeInfo,
                                             (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.supportSelectObject = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportSelectObject, (int32_t)v4, v5, v6);
  this->fields.maxAlphaRate = 0.6;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SupportSelectListViewObject__GetClassIconSpriteName(
        int32_t classPos,
        bool isUpperOn,
        const MethodInfo *method)
{
  SupportSelectListViewObject_c *v5; // x0
  struct SupportSelectListViewObject_StaticFields *static_fields; // x8
  struct System_String_array *upperOnClassIconFileList; // x8
  struct System_String_array *upperOffClassIconFileList; // x8
  struct System_String_StaticFields *v9; // x8

  if ( (byte_4A57B29 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&SupportSelectListViewObject_TypeInfo);
    byte_4A57B29 = 1;
  }
  if ( (classPos & 0x80000000) != 0 )
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
    if ( (signed int)upperOffClassIconFileList->max_length > classPos )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = SupportSelectListViewObject_TypeInfo;
      }
      upperOnClassIconFileList = v5->static_fields->upperOffClassIconFileList;
      if ( !upperOnClassIconFileList )
LABEL_21:
        sub_1B8880C(v5, isUpperOn);
      goto LABEL_17;
    }
LABEL_19:
    v9 = string_TypeInfo->static_fields;
    return v9->Empty;
  }
  upperOnClassIconFileList = static_fields->upperOnClassIconFileList;
  if ( !upperOnClassIconFileList )
    goto LABEL_21;
  if ( (signed int)upperOnClassIconFileList->max_length <= classPos )
    goto LABEL_19;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    upperOnClassIconFileList = SupportSelectListViewObject_TypeInfo->static_fields->upperOnClassIconFileList;
    if ( !upperOnClassIconFileList )
      goto LABEL_21;
  }
LABEL_17:
  if ( upperOnClassIconFileList->max_length <= classPos )
    sub_1B88814(v5, isUpperOn);
  v9 = (struct System_String_StaticFields *)&upperOnClassIconFileList->m_Items[classPos];
  return v9->Empty;
}


SupportSelectListViewItem_o *__fastcall SupportSelectListViewObject__GetItem(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A57B2B & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectListViewItem_TypeInfo);
    byte_4A57B2B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SupportSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
    return (SupportSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall SupportSelectListViewObject__Init(
        SupportSelectListViewObject_o *this,
        SupportServantData_o *supportServantData,
        EventCampaignEntity_array *friendPointCampaigns,
        int32_t deckNum,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v10; // x1
  struct SupportServantData_o *v11; // x8
  UILabel_o *explanationLb; // x23
  System_String_o **v13; // x8
  System_String_o *v14; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCampaignMaster_o *v16; // x23
  int32_t questId; // w22
  int32_t questPhase; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  EventCampaignEntity_array *Data_39092640; // x0
  struct EventCampaignEntity_array **p_eventFriendPoints; // x0
  int32_t v23; // w1
  struct EventCampaignEntity_array *v24; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1

  if ( (byte_4A57B2A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&EventCampaignEntity___TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12396/*"SUPPORT_FOLLOWER_HELP"*/);
    sub_1B885B0(&StringLiteral_12450/*"SUPPORT_SELECT_HELP"*/);
    sub_1B885B0(&StringLiteral_12397/*"SUPPORT_INFO_HELP"*/);
    byte_4A57B2A = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    (int32_t)friendPointCampaigns,
    deckNum);
  v11 = this->fields.supportServantData;
  if ( !v11 )
    goto LABEL_28;
  explanationLb = this->fields.explanationLb;
  if ( !v11->fields.isFriendInfo )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SUPPORT_SELECT_HELP"*/, 0LL);
    if ( explanationLb )
    {
      UILabel__set_text(explanationLb, Instance, 0LL);
      goto LABEL_25;
    }
LABEL_28:
    sub_1B8880C(Instance, v10);
  }
  if ( v11->fields.isSelectServant )
    v13 = (System_String_o **)&StringLiteral_12396/*"SUPPORT_FOLLOWER_HELP"*/;
  else
    v13 = (System_String_o **)&StringLiteral_12397/*"SUPPORT_INFO_HELP"*/;
  v14 = *v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v14, 0LL);
  if ( !explanationLb )
    goto LABEL_28;
  UILabel__set_text(explanationLb, Instance, 0LL);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !supportServantData )
    goto LABEL_28;
  questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
  v16 = (EventCampaignMaster_o *)Instance;
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
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !Instance )
    goto LABEL_28;
  Instance = (System_String_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                  (EventQuestMaster_o *)Instance,
                                  questId,
                                  questPhase,
                                  0LL,
                                  7,
                                  0LL);
  if ( !v16 )
    goto LABEL_28;
  Data_39092640 = EventCampaignMaster__getData_39092640(v16, 24, (EventEntity_array *)Instance, 0LL);
  if ( !Data_39092640 || !*(_QWORD *)&Data_39092640->max_length )
  {
    v24 = (struct EventCampaignEntity_array *)sub_1B88658(EventCampaignEntity___TypeInfo, 0LL);
    v23 = (int)v24;
    this->fields.eventFriendPoints = v24;
    p_eventFriendPoints = &this->fields.eventFriendPoints;
    goto LABEL_27;
  }
LABEL_25:
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  v23 = (int)friendPointCampaigns;
LABEL_27:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_eventFriendPoints, v23, v19, v20);
  SupportSelectListViewObject__clearItemObj(this, v25);
  SupportSelectListViewObject__setItemObj(this, deckNum, v26);
  SupportSelectListViewObject__InitAlphaMask(this, v27);
}


void __fastcall SupportSelectListViewObject__InitAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *maskSprite; // x20
  Il2CppObject *ComponentInParent_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1

  if ( (byte_4A57B31 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B31 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    goto LABEL_16;
  ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                            dispObject,
                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BoxCollider___);
  this->fields.colliders = (struct UnityEngine_BoxCollider_array *)ComponentsInChildren_object__49085148;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.colliders,
    (int32_t)ComponentsInChildren_object__49085148,
    v5,
    v6);
  SupportSelectListViewObject__UpdateCollider(this, 1, v7);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !dispObject )
      goto LABEL_16;
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
    if ( !dispObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(dispObject, 0, 0LL);
  }
  if ( this->fields.useAlphaMask )
  {
    dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( dispObject )
    {
      ComponentInParent_object = UnityEngine_GameObject__GetComponentInParent_object_(
                                   dispObject,
                                   (const MethodInfo_2ECF498 *)Method_UnityEngine_GameObject_GetComponentInParent_UIScrollView___);
      this->fields.scrollView = (struct UIScrollView_o *)ComponentInParent_object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.scrollView,
        (int32_t)ComponentInParent_object,
        v10,
        v11);
      dispObject = (UnityEngine_GameObject_o *)this->fields.manager;
      if ( dispObject )
      {
        dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dispObject, 0LL);
        if ( dispObject )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         dispObject,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_ListViewItemSeed___);
          this->fields.itemSeed = (struct ListViewItemSeed_o *)ComponentInChildren_object;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.itemSeed,
            (int32_t)ComponentInChildren_object,
            v13,
            v14);
          SupportSelectListViewObject__UpdateAlphaMask(this, v15);
          return;
        }
      }
    }
LABEL_16:
    sub_1B8880C(dispObject, method);
  }
}


void __fastcall SupportSelectListViewObject__OnClickListView(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectListViewObject__ResetEventCampaign(
        SupportSelectListViewObject_o *this,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SupportServantData_o *supportServantData; // x8
  struct EventCampaignEntity_array **p_eventFriendPoints; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  struct SupportSelectObject_array *supportSelectObject; // x8
  __int64 v11; // x22
  int max_length; // w9
  SupportSelectObject_o *v13; // x21
  const MethodInfo *v14; // x1

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_10;
  if ( supportServantData->fields.isFriendInfo )
    return;
  this->fields.eventFriendPoints = friendPointCampaigns;
  p_eventFriendPoints = &this->fields.eventFriendPoints;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFriendPoints,
    (int32_t)friendPointCampaigns,
    (int32_t)method,
    v3);
  supportSelectObject = (struct SupportSelectObject_array *)*(p_eventFriendPoints - 5);
  if ( !supportSelectObject )
LABEL_10:
    sub_1B8880C(this, friendPointCampaigns);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1B88814(this, friendPointCampaigns);
    v13 = supportSelectObject->m_Items[v11];
    if ( v13 )
    {
      v13->fields.eventFriendPoints = friendPointCampaigns;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v13->fields.eventFriendPoints,
        (int32_t)friendPointCampaigns,
        v8,
        v9);
      SupportSelectObject__ModifyItem(v13, v14);
      supportSelectObject = this->fields.supportSelectObject;
      ++v11;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__SetActiveDragSwapGuide(
        SupportSelectListViewObject_o *this,
        bool flag,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  SupportSelectObject_o *v8; // x8

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_8:
    sub_1B8880C(this, flag);
  v4 = this;
  v5 = 0LL;
  v6 = flag;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, flag);
    v8 = supportSelectObject->m_Items[v5];
    if ( v8 )
    {
      this = (SupportSelectListViewObject_o *)v8->fields.itemDraw;
      if ( this )
      {
        SupportSelectItemDraw__SetActiveDragSwapGuide((SupportSelectItemDraw_o *)this, v6, method);
        supportSelectObject = v4->fields.supportSelectObject;
        ++v5;
        if ( supportSelectObject )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall SupportSelectListViewObject__SetDragPrefab(
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
  int32_t v11; // w3

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
        sub_1B88814(this, dragPrefab);
      v9 = dropObjectList->m_Items[v8];
      if ( !v9 )
        break;
      v9->fields.manager = (struct ListViewManager_o *)manager;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v9->fields.manager,
        (int32_t)manager,
        (int32_t)manager,
        (int32_t)method);
      v9->fields.dragObjectPrefab = dragPrefab;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->fields.dragObjectPrefab, (int32_t)dragPrefab, v10, v11);
      max_length = dropObjectList->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, dragPrefab);
  }
}


// attributes: thunk
void __fastcall SupportSelectListViewObject__Update(SupportSelectListViewObject_o *this, const MethodInfo *method)
{
  SupportSelectListViewObject__UpdateAlphaMask(this, method);
}


void __fastcall SupportSelectListViewObject__UpdateAlphaMask(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *itemSeed; // x20
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  float v8; // s8
  float v9; // s0
  struct ListViewItemSeed_o *v10; // x8
  float v11; // s0
  float v12; // s1
  float v13; // s8
  float maxAlphaRate; // s10
  float v15; // s8
  const MethodInfo *v16; // x2
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A57B32 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B32 = 1;
  }
  if ( this->fields.useAlphaMask )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      itemSeed = (UnityEngine_Object_o *)this->fields.itemSeed;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(itemSeed, 0LL, 0LL) )
      {
        maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
        {
          transform = this->fields.scrollView;
          if ( !transform )
            goto LABEL_29;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( !transform )
            goto LABEL_29;
          LODWORD(v9) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
          v10 = this->fields.itemSeed;
          if ( !v10 )
            goto LABEL_29;
          transform = this->fields.maskSprite;
          v11 = fabsf(v8 + v9) / v10->fields.arrangementPich.fields.x;
          v12 = fminf(v11, 1.0);
          v13 = v11 < 0.0 ? 0.0 : v12;
          if ( !transform )
            goto LABEL_29;
          maxAlphaRate = this->fields.maxAlphaRate;
          transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( !transform )
            goto LABEL_29;
          v15 = maxAlphaRate * v13;
          if ( v15 > 0.05 != UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
            SupportSelectListViewObject__UpdateCollider(this, v15 <= 0.05, v16);
          transform = this->fields.maskSprite;
          if ( !transform
            || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
            || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v15 > 0.05, 0LL),
                (transform = this->fields.maskSprite) == 0LL) )
          {
LABEL_29:
            sub_1B8880C(transform, v6);
          }
          v17.fields.r = *((float *)transform + 37);
          v17.fields.g = *((float *)transform + 38);
          v17.fields.b = *((float *)transform + 39);
          v17.fields.a = v15;
          UIWidget__set_color((UIWidget_o *)transform, v17, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__UpdateCollider(
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
    sub_1B8880C(this, enable);
  v4 = this;
  v5 = 0LL;
  v6 = enable;
  while ( 1 )
  {
    max_length = colliders->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, enable);
    this = (SupportSelectListViewObject_o *)colliders->m_Items[v5];
    if ( this )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v6, 0LL);
      colliders = v4->fields.colliders;
      ++v5;
      if ( colliders )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall SupportSelectListViewObject__UpdateExplanationLabel(
        SupportSelectListViewObject_o *this,
        bool displaySwapInfo,
        const MethodInfo *method)
{
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *explanationLb; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4A57B30 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12450/*"SUPPORT_SELECT_HELP"*/);
    sub_1B885B0(&StringLiteral_12461/*"SUPPORT_SELECT_SWAP"*/);
    byte_4A57B30 = 1;
  }
  if ( displaySwapInfo )
    v5 = (System_String_o **)&StringLiteral_12461/*"SUPPORT_SELECT_SWAP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_12450/*"SUPPORT_SELECT_HELP"*/;
  v6 = *v5;
  explanationLb = this->fields.explanationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !explanationLb )
    sub_1B8880C(v8, v9);
  UILabel__set_text(explanationLb, v8, 0LL);
}


void __fastcall SupportSelectListViewObject__callbackFuncObj(
        SupportSelectListViewObject_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  void *monitor; // x8

  if ( (byte_4A57B2E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectListViewManager_TypeInfo);
    byte_4A57B2E = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(SupportSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewManager_TypeInfo )
      v11 = (UnityEngine_Object_o *)this->fields.manager;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( v12 )
  {
    if ( !v11 )
      sub_1B8880C(v12, v13);
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


void __fastcall SupportSelectListViewObject__clearItemObj(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct SupportSelectObject_array *supportSelectObject; // x8
  SupportSelectListViewObject_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  const MethodInfo *v6; // x2

  supportSelectObject = this->fields.supportSelectObject;
  if ( !supportSelectObject )
LABEL_7:
    sub_1B8880C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = supportSelectObject->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
    this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[v4];
    if ( this )
    {
      SupportSelectObject__ClearItem((SupportSelectObject_o *)this, method);
      SupportSelectListViewObject__setUpperClassIcon(v3, v4, v6);
      supportSelectObject = v3->fields.supportSelectObject;
      ++v4;
      if ( supportSelectObject )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__clearItemObj_33270916(
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
  if ( supportSelectObject->max_length <= classPos )
    sub_1B88814(this, classPos);
  v5 = this;
  this = (SupportSelectListViewObject_o *)supportSelectObject->m_Items[classPos];
  if ( !this )
LABEL_5:
    sub_1B8880C(this, classPos);
  SupportSelectObject__ClearItem((SupportSelectObject_o *)this, *(const MethodInfo **)&classPos);
  SupportSelectListViewObject__setUpperClassIcon(v5, classPos, v6);
}


SupportSelectListViewDropObject_array *__fastcall SupportSelectListViewObject__get_DropObjectList(
        SupportSelectListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObjectList;
}


void __fastcall SupportSelectListViewObject__setDisp(
        SupportSelectListViewObject_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, disp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj(
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
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x6
  const MethodInfo *v14; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4A57B2C & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_1B885B0(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_4A57B2C = 1;
  }
  monitor = v4[7].monitor;
  if ( !monitor )
LABEL_9:
    sub_1B8880C(this, *(_QWORD *)&deckNum);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = monitor[6];
    if ( (int)v6 >= v7 )
      break;
    if ( (unsigned int)v6 >= v7 )
      sub_1B88814(this, *(_QWORD *)&deckNum);
    v9 = (SupportServantData_o *)v4[9].monitor;
    klass = (EventCampaignEntity_array *)v4[10].klass;
    v10 = *(SupportSelectObject_o **)&monitor[2 * v6 + 8];
    v11 = (SupportSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectMenu_CallbackFunc_TypeInfo);
    SupportSelectMenu_CallbackFunc___ctor(v11, v4, Method_SupportSelectListViewObject_callbackFuncObj__, v12);
    if ( v10 )
    {
      SupportSelectObject__SetItem(v10, v9, deckNum, v6, klass, v11, v13);
      SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v4, v6, v14);
      monitor = v4[7].monitor;
      ++v6;
      if ( monitor )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setItemObj_33271156(
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
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x6
  const MethodInfo *v14; // x2

  v6 = (Il2CppObject *)this;
  if ( (byte_4A57B2D & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectMenu_CallbackFunc_TypeInfo);
    this = (SupportSelectListViewObject_o *)sub_1B885B0(&Method_SupportSelectListViewObject_callbackFuncObj__);
    byte_4A57B2D = 1;
  }
  monitor = v6[7].monitor;
  if ( !monitor )
    goto LABEL_7;
  if ( monitor[6] <= (unsigned int)classPos )
    sub_1B88814(this, *(_QWORD *)&deckNum);
  v9 = (SupportServantData_o *)v6[9].monitor;
  klass = (EventCampaignEntity_array *)v6[10].klass;
  v10 = *(SupportSelectObject_o **)&monitor[2 * classPos + 8];
  v11 = (SupportSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(v11, v6, Method_SupportSelectListViewObject_callbackFuncObj__, v12);
  if ( !v10 )
LABEL_7:
    sub_1B8880C(this, *(_QWORD *)&deckNum);
  SupportSelectObject__SetItem(v10, v9, deckNum, classPos, klass, v11, v13);
  SupportSelectListViewObject__setUpperClassIcon((SupportSelectListViewObject_o *)v6, classPos, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewObject__setUpperClassIcon(
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

  if ( (byte_4A57B2F & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectListViewObject_TypeInfo);
    byte_4A57B2F = 1;
  }
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_20;
  supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                 supportServantData,
                                                 classPos,
                                                 0LL);
  if ( !supportServantData || !supportServantData->fields.className )
  {
    classIconSpriteList = this->fields.classIconSpriteList;
    if ( !classIconSpriteList )
      goto LABEL_20;
    if ( classIconSpriteList->max_length <= classPos )
LABEL_21:
      sub_1B88814(supportServantData, *(_QWORD *)&classPos);
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
    sub_1B8880C(supportServantData, *(_QWORD *)&classPos);
  }
  v6 = this->fields.classIconSpriteList;
  if ( !v6 )
    goto LABEL_20;
  if ( v6->max_length <= classPos )
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
  UISprite__set_spriteName(v8, *(System_String_o **)&klass[2 * v7 + 8], 0LL);
}