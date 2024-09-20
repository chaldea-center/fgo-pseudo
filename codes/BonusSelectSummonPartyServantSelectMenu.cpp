void __fastcall BonusSelectSummonPartyServantSelectMenu___ctor(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57908 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57908 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__CheckAssert(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__Close(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        BonusSelectSummonPartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  BonusSelectSummonPartyServantSelectMenu_o *v4; // x19
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  System_Action_o *v7; // x20

  v4 = this;
  if ( (byte_4A57905 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__);
    this = (BonusSelectSummonPartyServantSelectMenu_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57905 = 1;
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
  this = (BonusSelectSummonPartyServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_14:
    sub_1B8880C(this, item);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, 0LL);
  BaseMenu__Close((BaseMenu_o *)v4, v7, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__Init(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__DestroyList(partyServantListViewManager, 0LL);
  this->fields.state = 0;
  this->fields.organizationItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.organizationItem, 0, v4, v5);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__OnClickCancel(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A57906 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57906 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
      if ( !partyServantListViewManager )
        goto LABEL_12;
      ListViewManager__SetScrollBarValue(partyServantListViewManager, 0LL);
    }
    this->fields.state = 3;
    v4 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    partyServantListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( partyServantListViewManager )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)partyServantListViewManager, 1, 0LL);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v6,
        (Il2CppObject *)this,
        Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__,
        0LL);
      BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(partyServantListViewManager, method);
  }
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__OnClickScaleChange(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  BonusSelectSummonPartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A57907 & 1) == 0 )
  {
    sub_1B885B0(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    byte_4A57907 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (BonusSelectSummonPartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                                                                            partyServantListViewManager,
                                                                                            v5),
          !scaleChangeTabSprite) )
    {
      sub_1B8880C(partyServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)partyServantListViewManager, 0LL);
  }
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__Open(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        System_Int32_array *notPossibleSvtIdList,
        System_Action_o *closeCallbackFunc,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v13; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v15; // x2
  UILabel_o *guideMsgLabel; // x20
  System_Action_o *v17; // x20

  if ( (byte_4A57904 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12328/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/);
    byte_4A57904 = 1;
  }
  this->fields.organizationItem = memberItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.organizationItem,
    (int32_t)memberItem,
    (int32_t)notPossibleSvtIdList,
    (int32_t)closeCallbackFunc);
  this->fields.closeCallbackFunc = closeCallbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)closeCallbackFunc, v9, v10);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 88, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_37184884(titleInfo, 1, 0, 0, 0LL);
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  if ( !memberItem )
    goto LABEL_16;
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  this->fields.isSelectedSvt = memberItem->fields.servantEntity != 0LL;
  if ( !titleInfo )
    goto LABEL_16;
  BonusSelectSummonPartyServantListViewManager__CreateList(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    memberItem->fields.gachaBonusSelectEntity,
    notPossibleSvtIdList,
    v13);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_16;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfo = (TitleInfoControl_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                      (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
                                      v11);
  if ( !scaleChangeTabSprite )
    goto LABEL_16;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfo, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_16;
  BonusSelectSummonPartyServantListViewManager__SetMode(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    2,
    v15);
  guideMsgLabel = this->fields.guideMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12328/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0LL);
  if ( !guideMsgLabel
    || (UILabel__set_text(guideMsgLabel, (System_String_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(titleInfo, v11);
  }
  CommonUI__SetFadeMaskCollider((CommonUI_o *)titleInfo, 1, 0LL);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Close_b__14_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5790A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5790A = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___OnClickCancel_b__15_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5790B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5790B = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Open_b__13_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A57909 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57909 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
  this->fields.state = 2;
}


BonusSelectSummonPartyOrganizationListViewItem_o *__fastcall BonusSelectSummonPartyServantSelectMenu__get_BaseItem(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.organizationItem;
}