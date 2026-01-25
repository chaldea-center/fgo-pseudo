void BonusSelectSummonPartyServantSelectMenu___ctor(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEA9C2 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseMenu_TypeInfo);
    byte_4CEA9C2 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void BonusSelectSummonPartyServantSelectMenu__CheckAssert(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void BonusSelectSummonPartyServantSelectMenu__Close(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantSelectMenu_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  System_Action_o *v7; // x20

  v4 = this;
  if ( (byte_4CEA9BF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__);
    this = (BonusSelectSummonPartyServantSelectMenu_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9BF = 1;
  }
  if ( !item )
    goto LABEL_14;
  servantEntity = item->fields.servantEntity;
  if ( servantEntity )
  {
    baseItem = item->fields.baseItem;
    if ( baseItem )
      LODWORD(servantEntity) = servantEntity == baseItem->fields.servantEntity;
    else
      LODWORD(servantEntity) = 0;
  }
  this = (BonusSelectSummonPartyServantSelectMenu_o *)v4->fields.organizationItem;
  if ( !this )
    goto LABEL_14;
  if ( (_DWORD)servantEntity )
    BonusSelectSummonPartyOrganizationListViewItem__Empty(
      (BonusSelectSummonPartyOrganizationListViewItem_o *)this,
      (const MethodInfo *)item);
  else
    BonusSelectSummonPartyOrganizationListViewItem__Modify(
      (BonusSelectSummonPartyOrganizationListViewItem_o *)this,
      item,
      method);
  this = (BonusSelectSummonPartyServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_14:
    sub_1C7BD40(this, item);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0);
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, 0);
  BaseMenu__Close((BaseMenu_o *)v4, v7, 0);
}


void BonusSelectSummonPartyServantSelectMenu__Init(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1C7BD40(0, method);
  ListViewManager__DestroyList(partyServantListViewManager, 0);
  this->fields.state = 0;
  this->fields.organizationItem = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.organizationItem, 0, v4, v5, v6, v7, v8, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void BonusSelectSummonPartyServantSelectMenu__OnClickCancel(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4CEA9C0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        goto LABEL_12;
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    partyServantListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( partyServantListViewManager )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)partyServantListViewManager, 1, 0);
      v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v6,
        (Il2CppObject *)this,
        Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__,
        0);
      BaseMenu__Close((BaseMenu_o *)this, v6, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(partyServantListViewManager, method);
  }
}


void BonusSelectSummonPartyServantSelectMenu__OnClickScaleChange(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  BonusSelectSummonPartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4CEA9C1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    byte_4CEA9C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (BonusSelectSummonPartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                                                                            partyServantListViewManager,
                                                                                            v5),
          !scaleChangeTabSprite) )
    {
      sub_1C7BD40(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0);
  }
}


void BonusSelectSummonPartyServantSelectMenu__Open(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        System_Int32_array *notPossibleSvtIdList,
        System_Action_o *closeCallbackFunc,
        GachaDetailEntity_o *gachaDetailEntity,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v21; // x3
  UISprite_o *scaleChangeTabSprite; // x21
  const MethodInfo *v23; // x2
  UILabel_o *guideMsgLabel; // x21
  System_Action_o *v25; // x20

  if ( (byte_4CEA9BE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9BE = 1;
  }
  this->fields.organizationItem = memberItem;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.organizationItem,
    (int32_t)memberItem,
    (int32_t)notPossibleSvtIdList,
    (int32_t)closeCallbackFunc,
    (System_String_o *)gachaDetailEntity,
    (int32_t)method,
    v6,
    v7);
  this->fields.closeCallbackFunc = closeCallbackFunc;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)closeCallbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 92, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_40473788(titleInfo, 1, 0, 0, 0);
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleInfo )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  if ( !memberItem )
    goto LABEL_15;
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  this->fields.isSelectedSvt = memberItem->fields.servantEntity != 0;
  if ( !titleInfo )
    goto LABEL_15;
  BonusSelectSummonPartyServantListViewManager__CreateList(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    memberItem->fields.gachaBonusSelectEntity,
    notPossibleSvtIdList,
    v21);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_15;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfo = (TitleInfoControl_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                      (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
                                      v19);
  if ( !scaleChangeTabSprite
    || (UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfo, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager) == 0)
    || (BonusSelectSummonPartyServantListViewManager__SetMode(
          (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
          2,
          v23),
        !gachaDetailEntity)
    || (guideMsgLabel = this->fields.guideMsgLabel,
        titleInfo = (TitleInfoControl_o *)GachaDetailEntity__GetSummonBonusSelectMenuGuideMessage(gachaDetailEntity, 0),
        !guideMsgLabel)
    || (UILabel__set_text(guideMsgLabel, (System_String_o *)titleInfo, 0),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_15:
    sub_1C7BD40(titleInfo, v19);
  }
  CommonUI__SetFadeMaskCollider((CommonUI_o *)titleInfo, 1, 0);
  v25 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v25, 0);
}


void BonusSelectSummonPartyServantSelectMenu___Close_b__14_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA9C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9C4 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void BonusSelectSummonPartyServantSelectMenu___OnClickCancel_b__15_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA9C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9C5 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void BonusSelectSummonPartyServantSelectMenu___Open_b__13_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEA9C3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEA9C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
  this->fields.state = 2;
}


BonusSelectSummonPartyOrganizationListViewItem_o *BonusSelectSummonPartyServantSelectMenu__get_BaseItem(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.organizationItem;
}